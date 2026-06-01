__int64 __fastcall sub_897D20(_QWORD **a1, char *a2, unsigned int a3, int a4)
{
  __int64 v6; // rbp
  unsigned int v8; // eax
  int v9; // eax
  unsigned int v10; // edx
  __int64 v11; // rdi
  FILE *v13; // rax
  FILE *v14; // r15
  FILE *v15; // rdi
  __int64 v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  _QWORD *v20; // rax
  unsigned __int64 v21; // rsi
  _QWORD *v22; // rdi
  _QWORD *v23; // rdx
  _QWORD *v24; // rsi
  __int64 v25; // rax
  _QWORD *v26; // rsi
  _QWORD *v27; // rax
  _QWORD *v28; // rcx
  unsigned int qerrno; // [rsp+Ch] [rbp-5Ch]
  char s1[4]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int16 v31; // [rsp+14h] [rbp-54h]
  unsigned __int64 v32; // [rsp+28h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  if ( a3 <= 0x7F || (a3 & (a3 - 1)) != 0 )
  {
    if ( !under_debugger )
      interr(795);
    BUG();
  }
  *((_DWORD *)a1 + 10) = 1;
  v6 = (__int64)a2;
  if ( (unsigned __int8)qfileexist(a2, a2) )
  {
    v13 = (FILE *)openR(a2);
    v14 = v13;
    if ( !v13 )
    {
      v11 = 13;
      return set_qerrno(v11, a2);
    }
    v15 = v13;
    a2 = s1;
    if ( qfread(v13, s1) == 20 )
    {
      qfclose(v14);
    }
    else
    {
      qerrno = get_qerrno(v15);
      qfclose(v14);
      v10 = qerrno;
      if ( qerrno )
        goto LABEL_7;
    }
    a2 = "VA*";
    if ( !strcasecmp(s1, "VA*") )
    {
      if ( v31 > 3u )
      {
        v10 = set_qerrno(15, "VA*");
      }
      else
      {
        if ( v31 == 2 )
          sub_375320((__int64)"This intermediate version of VA is not supported anymore\n", "VA*", v16, a3);
        a2 = (char *)v6;
        v10 = sub_8966A0((__int64)a1, v6, (__int64)s1, a3, a4);
      }
    }
    else
    {
      a2 = (char *)v6;
      v10 = sub_897B10(a1, v6, s1, a3, a4);
    }
    if ( v10 )
      goto LABEL_7;
    v17 = a1[3];
    v18 = (__int64)*a1;
    if ( v17 )
    {
      v26 = a1[2];
      v27 = &v26[2 * (_QWORD)v17];
      v28 = v27 - 2;
      if ( v26 == v27 )
        v28 = a1[10];
      v19 = v28[1] + 4LL * (unsigned int)(*((_DWORD *)v28 + 1) - *(_DWORD *)v28);
    }
    else
    {
      v19 = *(_QWORD *)v18;
    }
    if ( qfilelength(*(unsigned int *)(v18 + 16)) < v19 )
      sub_375320((__int64)"!!!VARRAY CORRUPTED: logical VA size is greater than file size\n");
    v20 = a1[3];
    v21 = **a1;
    if ( v20 )
    {
      v22 = a1[2];
      v23 = &v22[2 * (_QWORD)v20];
      v24 = v23 - 2;
      if ( v22 == v23 )
        v24 = a1[10];
      v21 = v24[1] + 4LL * (unsigned int)(*((_DWORD *)v24 + 1) - *(_DWORD *)v24);
    }
    if ( **a1 * (unsigned __int64)*((unsigned int *)a1 + 10) < v21 )
      sub_375320((__int64)"!!!VARRAY CORRUPTED: bad chunk offest or EOF page\n");
  }
  else
  {
    v8 = qcreate(a2, 438);
    qclose(v8);
    v9 = sub_894F70((__int64)a1, (__int64)a2, a3, a3, a4);
    v10 = -1;
    if ( v9 )
    {
LABEL_7:
      v11 = v10;
      return set_qerrno(v11, a2);
    }
    sub_895050(a1);
    v20 = a1[3];
  }
  *((_DWORD *)a1 + 11) = -1;
  v25 = (__int64)&a1[2][2 * (_QWORD)v20];
  a1[10] = (_QWORD *)v25;
  a1[6] = (_QWORD *)v25;
  a1[7] = nullptr;
  *((_DWORD *)a1 + 16) = -1;
  a1[9] = nullptr;
  return 0;
}

