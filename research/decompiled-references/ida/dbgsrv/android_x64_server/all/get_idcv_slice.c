/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_idcv_slice
// Address: 0x0000000000073620

//----- (0000000000073620) ----------------------------------------------------
__int64 __fastcall get_idcv_slice(__int128 *a1, char *a2, char *a3, char *a4, char a5, double a6, __m128 a7)
{
  char *v7; // rbp
  int v12; // eax
  int qerrno; // eax
  __int64 v15; // rcx
  char *v16; // rax
  char *v17; // rdx
  void *v18; // xmm0_8
  void *v19; // rbx
  __int64 v20; // rbx
  __int64 v21; // r12
  char *v22; // rax
  char *v23; // rbx
  const char *v24; // rdi
  int v25; // eax
  char *v26; // r12
  void *v27; // rdi
  char v28; // al
  char *v29; // rcx
  char *v30; // rcx
  char *v31; // rax
  __int64 v32; // rbx
  bool v33; // zf
  __int128 v34; // xmm0
  __int128 v35; // xmm0
  int v36; // ebx
  void *v37; // [rsp+8h] [rbp-B0h]
  char *v38; // [rsp+10h] [rbp-A8h]
  void *v39[2]; // [rsp+20h] [rbp-98h] BYREF
  __int128 v40; // [rsp+30h] [rbp-88h]
  char v41[32]; // [rsp+40h] [rbp-78h] BYREF
  void *ptr[2]; // [rsp+60h] [rbp-58h] BYREF
  __int128 v43; // [rsp+70h] [rbp-48h]
  unsigned __int64 v44; // [rsp+80h] [rbp-38h]

  v44 = __readfsqword(0x28u);
  if ( !a1 )
    return set_qerrno(0x620u);
  v7 = a2;
  if ( !a2 )
    return set_qerrno(0x620u);
  while ( 1 )
  {
    v12 = *v7;
    if ( v12 != 10 )
      break;
    v7 = deref_idcv(v7, 0, a6, a7);
    if ( !v7 )
    {
      qerrno = get_qerrno();
LABEL_40:
      LODWORD(v7) = qerrno;
      return (unsigned int)v7;
    }
  }
  if ( v12 != 5 )
  {
    if ( v12 != 7 )
    {
      qerrno = set_qerrno(0x620u);
      goto LABEL_40;
    }
    v15 = *((_QWORD *)v7 + 2);
    v16 = (char *)(v15 - 1);
    if ( !v15 )
      v16 = nullptr;
    if ( (__int64)a3 < 0 )
    {
      a3 = &a3[(_QWORD)v16];
      if ( (__int64)a3 < 0 )
        a3 = nullptr;
    }
    if ( a3 > v16 )
      a3 = v16;
    v17 = a3 + 1;
    if ( (a5 & 1) == 0 )
      v17 = a4;
    if ( (__int64)v17 < 0 )
    {
      v17 = &v17[(_QWORD)v16];
      if ( (__int64)v17 < 0 )
        v17 = nullptr;
    }
    if ( v17 > v16 )
      v17 = v16;
    if ( a3 > v17 )
      v17 = a3;
    sub_4ABC0((__int64)ptr, &a3[*((_QWORD *)v7 + 1)], v17 - a3);
    free_idcv((char *)a1, a6, a7);
    *(_BYTE *)a1 = 7;
    *(__int128 *)((char *)a1 + 8) = *(_OWORD *)ptr;
    *((_QWORD *)a1 + 3) = v43;
    LODWORD(v7) = 0;
    return (unsigned int)v7;
  }
  if ( (a5 & 1) != 0 )
  {
    qsnprintf(v41, 32, "%llu", a3);
    qerrno = get_idcv_attr((char *)a1, (__int64)v7, v41, 0, a6, a7);
    goto LABEL_40;
  }
  v18 = nullptr;
  v40 = 0;
  LOBYTE(v39[0]) = 5;
  v19 = operator new(0x20u);
  sub_6B170((__int64)v19, 0);
  v39[1] = v19;
  v20 = *((_QWORD *)v7 + 1);
  sub_37F60((__int64)ptr, byte_F8A4B);
  v21 = *(_QWORD *)(v20 + 8);
  v22 = (char *)(v20 + 8);
  if ( !v21 )
  {
    v27 = ptr[0];
    v23 = (char *)(v20 + 8);
    v26 = v22;
    if ( !ptr[0] )
      goto LABEL_44;
    goto LABEL_43;
  }
  v7 = (char *)ptr[0];
  v37 = ptr[0];
  if ( !ptr[1] )
    v7 = (char *)s1;
  v38 = (char *)(v20 + 8);
  v23 = (char *)(v20 + 8);
  do
  {
    v24 = s1;
    if ( *(_QWORD *)(v21 + 40) )
      v24 = *(const char **)(v21 + 32);
    v25 = strcmp(v24, v7);
    if ( v25 >= 0 )
      v23 = (char *)v21;
    v21 = *(_QWORD *)(v21 + 8LL * (v25 < 0));
  }
  while ( v21 );
  v26 = v38;
  v27 = v37;
  if ( v37 )
  {
LABEL_43:
    ptr[1] = nullptr;
    qfree(v27);
    ptr[0] = nullptr;
    *(_QWORD *)&v43 = 0;
  }
LABEL_44:
  if ( v23 != v26 )
  {
    do
    {
      v7 = (char *)s1;
      if ( *((_QWORD *)v23 + 5) )
        v7 = *((char **)v23 + 4);
      if ( strcmp(v7, ":") >= 0 )
        break;
      v28 = *v7;
      if ( *v7 )
      {
        if ( v28 == 48 )
        {
          if ( !v7[1] )
          {
LABEL_56:
            qsscanf(v7, "%llu", ptr);
            if ( ptr[0] >= a3 && (ptr[0] < a4 || a4 == (char *)0x7FFFFFFF) )
            {
              qsnprintf(v41, 32, "%llu", (char *)ptr[0] - (char *)a3);
              LODWORD(v7) = set_idcv_attr((__int64)v39, v41, v23 + 56, 0, 0.0, a7);
              if ( (_DWORD)v7 )
              {
                v36 = 1;
                goto LABEL_67;
              }
            }
          }
        }
        else
        {
          v29 = v7 + 1;
          while ( v28 >= 0 && (unsigned int)(unsigned __int8)v28 - 48 <= 9 )
          {
            v28 = *v29++;
            if ( !v28 )
              goto LABEL_56;
          }
        }
      }
      v30 = *((char **)v23 + 1);
      if ( v30 )
      {
        do
        {
          v31 = v30;
          v30 = *(char **)v30;
        }
        while ( v30 );
      }
      else
      {
        v31 = *((char **)v23 + 2);
        if ( *(char **)v31 != v23 )
        {
          v32 = (__int64)(v23 + 16);
          do
          {
            v31 = *(char **)(*(_QWORD *)v32 + 16LL);
            v33 = *(_QWORD *)v31 == *(_QWORD *)v32;
            v32 = *(_QWORD *)v32 + 16LL;
          }
          while ( !v33 );
        }
      }
      v23 = v31;
    }
    while ( v31 != v26 );
  }
  v34 = *a1;
  v43 = a1[1];
  *(_OWORD *)ptr = v34;
  v35 = *(_OWORD *)v39;
  a1[1] = v40;
  *a1 = v35;
  v18 = ptr[0];
  a7 = (__m128)v43;
  v40 = v43;
  *(_OWORD *)v39 = *(_OWORD *)ptr;
  v36 = 0;
LABEL_67:
  if ( SLOBYTE(v39[0]) == 5 )
  {
    sub_72DD0((char **)v39[1], (char *)v39, *(double *)&v18, a7);
  }
  else if ( SLOBYTE(v39[0]) == 7 && v39[1] )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v39[1]);
    v39[1] = nullptr;
    *((_QWORD *)&v40 + 1) = 0;
    if ( !v36 )
      goto LABEL_74;
    return (unsigned int)v7;
  }
  if ( !v36 )
LABEL_74:
    LODWORD(v7) = 0;
  return (unsigned int)v7;
}
