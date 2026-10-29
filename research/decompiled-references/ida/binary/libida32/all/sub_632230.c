__int64 __fastcall sub_632230(
        __int64 a1,
        __int64 a2,
        const char *a3,
        int a4,
        const char **a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned __int64 a9,
        unsigned int *a10)
{
  int v12; // r12d
  __int64 v14; // rbx
  __int64 v15; // rdi
  int v16; // eax
  __int64 v17; // r11
  unsigned __int64 v18; // r15
  unsigned int v20; // eax
  unsigned int v21; // r15d
  const char *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v26; // [rsp+8h] [rbp-40h]

  v12 = a1;
  if ( a2 )
  {
    if ( !a3 )
      return 0;
    v14 = a2;
    if ( !*a3 )
      return 0;
  }
  else
  {
    if ( !a3 )
      return 0;
    v14 = *(_QWORD *)(a1 + 8);
    if ( !*a3 || !v14 )
      return 0;
  }
  if ( (a4 & 1) != 0 )
  {
    v20 = sub_693310(a1, v14, a3);
    v21 = v20;
    if ( v20 )
    {
      v24 = sub_630800(v14, v20);
      if ( v24 )
      {
        sub_629EE0(v24, a5, a6, a7, a8, a9);
        if ( a10 )
          *a10 = v21;
        return 1;
      }
      return 0;
    }
    v15 = *(_QWORD *)(v14 + 64);
  }
  else
  {
    v15 = *(_QWORD *)(v14 + 56);
  }
  if ( !v15 )
    return 0;
  if ( (a4 & 0x20) == 0 )
  {
    v22 = sub_631E40(v15, a3, a4);
    if ( v22 )
    {
      v23 = sub_629EE0((__int64)v22, a5, a6, a7, a8, a9);
      if ( a10 )
      {
        if ( (a4 & 0x40) != 0 )
          *(_QWORD *)a10 = v23;
        else
          *a10 = v23;
      }
      return 1;
    }
  }
  if ( (a4 & 2) != 0 )
    return 0;
  v16 = *(_DWORD *)(v14 + 16) - 1;
  if ( v16 < 0 )
    return 0;
  v17 = 8LL * v16;
  v18 = 8 * (v16 - (unsigned __int64)(unsigned int)v16);
  while ( 1 )
  {
    v26 = v17;
    if ( (unsigned int)sub_632230(
                         v12,
                         *(_QWORD *)(*(_QWORD *)(v14 + 24) + v17),
                         (_DWORD)a3,
                         a4,
                         (_DWORD)a5,
                         a6,
                         a7,
                         a8,
                         a9,
                         (__int64)a10) )
      break;
    if ( v26 == v18 )
      return 0;
    v17 = v26 - 8;
  }
  return 2;
}

