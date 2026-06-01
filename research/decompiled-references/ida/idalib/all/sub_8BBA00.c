__int64 __fastcall sub_8BBA00(
        _QWORD **a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8)
{
  unsigned int v11; // eax
  int v12; // eax
  unsigned int v13; // edx
  FILE *v15; // rax
  FILE *v16; // r15
  FILE *v17; // rdi
  __int64 v18; // rdx
  _QWORD *v19; // rax
  size_t *v20; // rdx
  unsigned __int64 v21; // rbx
  _QWORD *v22; // rax
  unsigned __int64 v23; // rsi
  _QWORD *v24; // rdi
  _QWORD *v25; // rsi
  _QWORD *v26; // rdx
  __int64 v27; // rdx
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rsi
  _QWORD *v31; // rcx
  _QWORD *v32; // rax
  unsigned int qerrno; // [rsp+Ch] [rbp-5Ch]
  char s1[4]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int16 v35; // [rsp+14h] [rbp-54h]
  unsigned __int64 v36; // [rsp+28h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  if ( a3 <= 0x7F || (a3 & (a3 - 1)) != 0 )
  {
    if ( !under_debugger )
      interr(795);
    BUG();
  }
  *((_DWORD *)a1 + 10) = 1;
  if ( !(unsigned __int8)qfileexist(a2, a2) )
  {
    v11 = qcreate(a2, 438);
    qclose(v11);
    v12 = sub_8B8920((__int64)a1, a2, a3, a3, a4);
    v13 = -1;
    if ( v12 )
      return set_qerrno(v13);
    sub_8B8A00(a1);
    v22 = a1[3];
    goto LABEL_24;
  }
  v15 = (FILE *)openR(a2);
  v16 = v15;
  if ( v15 )
  {
    v17 = v15;
    if ( qfread(v15, s1) == 20 )
    {
      qfclose(v16);
    }
    else
    {
      qerrno = get_qerrno(v17);
      qfclose(v16);
      v13 = qerrno;
      if ( qerrno )
        return set_qerrno(v13);
    }
    if ( !strcasecmp(s1, "VA*") )
    {
      if ( v35 > 3u )
      {
        v13 = set_qerrno(15);
      }
      else
      {
        if ( v35 == 2 )
          sub_378C70((__int64)"This intermediate version of VA is not supported anymore\n", "VA*", v18, a3);
        v13 = sub_8BA180(a1, a2, (__int64)s1, a3, a4, a5, a6, a7, a8);
      }
    }
    else
    {
      v13 = sub_8BB7E0(a1, a2, s1, a3, a4, a5, a6, a7);
    }
    if ( v13 )
      return set_qerrno(v13);
    v19 = a1[3];
    v20 = *a1;
    if ( v19 )
    {
      v30 = a1[2];
      v31 = &v30[3 * (_QWORD)v19];
      v32 = v31 - 3;
      if ( v30 == v31 )
        v32 = a1[11];
      v21 = v32[2] + 4LL * (v32[1] - *v32);
    }
    else
    {
      v21 = *v20;
    }
    if ( qfilelength(*((unsigned int *)v20 + 4)) < v21 )
      sub_378C70((__int64)"!!!VARRAY CORRUPTED: logical VA size is greater than file size\n");
    v22 = a1[3];
    v23 = **a1;
    if ( v22 )
    {
      v24 = a1[2];
      v25 = &v24[3 * (_QWORD)v22];
      v26 = v25 - 3;
      if ( v24 == v25 )
        v26 = a1[11];
      v23 = v26[2] + 4LL * (v26[1] - *v26);
    }
    if ( **a1 * (unsigned __int64)*((unsigned int *)a1 + 10) < v23 )
      sub_378C70((__int64)"!!!VARRAY CORRUPTED: bad chunk offest or EOF page\n");
LABEL_24:
    a1[6] = (_QWORD *)-1LL;
    v27 = 3LL * (_QWORD)v22;
    v28 = a1[2];
    a1[8] = nullptr;
    *((_DWORD *)a1 + 18) = -1;
    v29 = &v28[v27];
    a1[11] = v29;
    a1[7] = v29;
    a1[10] = nullptr;
    return 0;
  }
  return set_qerrno(13);
}
