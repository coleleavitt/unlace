__int64 __fastcall sub_444A20(
        __int64 a1,
        __int64 a2,
        const char *a3,
        int a4,
        unsigned int a5,
        char *a6,
        __int64 a7,
        int a8,
        char *a9,
        int *a10,
        char *a11)
{
  __int64 v11; // rbx
  __int64 v12; // rdx
  char *v14; // r12
  int *v15; // r13
  char *v16; // rbp
  unsigned int v17; // edx
  char v21; // [rsp+34h] [rbp-44h] BYREF
  char v22; // [rsp+38h] [rbp-40h] BYREF
  char v23; // [rsp+3Ch] [rbp-3Ch] BYREF
  char v24; // [rsp+40h] [rbp-38h] BYREF

  v11 = a2;
  if ( !a2 )
    v11 = qword_65A5A8;
  v12 = (unsigned int)a4;
  v14 = a9;
  v15 = a10;
  v16 = a11;
  if ( a3 )
  {
    if ( a4 < 0 )
      v12 = (unsigned int)strlen(a3);
  }
  else
  {
    v12 = 0;
  }
  if ( !a6 )
  {
    a5 |= 3u;
    a6 = &v24;
  }
  if ( !a9 )
    v14 = &v23;
  if ( !a10 )
    v15 = (int *)&v22;
  if ( !a11 )
    v16 = &v21;
  v17 = (*(__int64 (__fastcall **)(_QWORD, const char *, __int64, _QWORD, char *, __int64, int, char *, int *, char *))(v11 + 16))(
          *(_QWORD *)(v11 + 40),
          a3,
          v12,
          a5,
          a6,
          a7,
          a8 - *(_DWORD *)(v11 + 32),
          v14,
          v15,
          v16);
  if ( *(_DWORD *)(v11 + 32) == 2 )
    *(_BYTE *)(*v15 + a7 + 1) = 0;
  *(_BYTE *)(*v15 + a7) = 0;
  return v17;
}

