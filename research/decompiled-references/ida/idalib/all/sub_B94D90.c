__int64 __fastcall sub_B94D90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdi
  __int64 i; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 j; // rax
  __int64 v11; // rdx
  unsigned int v12; // r12d
  unsigned int v14; // eax
  _BYTE *v15; // r13
  _BYTE *v16; // rbp
  char *v17; // r15
  char *v18; // rbx
  char *v19; // rdi
  _QWORD v20[2]; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v21; // [rsp+10h] [rbp-58h]
  _BYTE *v22; // [rsp+18h] [rbp-50h]
  __int64 v23; // [rsp+20h] [rbp-48h]
  _BYTE v24[64]; // [rsp+28h] [rbp-40h] BYREF

  if ( a2 )
  {
    v6 = *(_QWORD *)(a2 + 24);
    for ( i = v6 + 48LL * *(unsigned int *)(a2 + 32); i != v6; v6 += 48 )
    {
      v8 = *(_QWORD *)(v6 + 32);
      v9 = v8 + 120LL * *(unsigned int *)(v6 + 40);
      if ( v9 != v8 )
      {
        if ( (*(_BYTE *)(**(_QWORD **)(v8 + 8) + 82LL) & 8) != 0 )
          return 1;
        for ( j = v8 + 120; v9 != j; j += 120 )
        {
          v11 = *(_QWORD *)(j + 8);
          if ( (*(_BYTE *)(*(_QWORD *)v11 + 82LL) & 8) != 0 )
            return 1;
        }
      }
    }
    return 0;
  }
  else
  {
    v20[0] = 0;
    v20[1] = 0;
    v22 = v24;
    v21 = 0;
    v23 = 0;
    sub_B6F050(a1, (__int64)v20, a3, a4, a5, a6);
    v14 = sub_B94D90(a1, v20);
    v15 = v22;
    v12 = v14;
    v16 = &v22[48 * (unsigned int)v23];
    if ( v22 != v16 )
    {
      do
      {
        v16 -= 48;
        v17 = *((char **)v16 + 4);
        v18 = &v17[120 * *((unsigned int *)v16 + 10)];
        if ( v17 != v18 )
        {
          do
          {
            while ( 1 )
            {
              v18 -= 120;
              v19 = *((char **)v18 + 1);
              if ( v19 == v18 + 24 )
                break;
              free(v19);
              if ( v17 == v18 )
                goto LABEL_16;
            }
          }
          while ( v17 != v18 );
LABEL_16:
          v17 = *((char **)v16 + 4);
        }
        if ( v17 != v16 + 48 )
          free(v17);
        operator delete(*((_QWORD *)v16 + 1), 8LL * *((unsigned int *)v16 + 6), 4);
      }
      while ( v15 != v16 );
      v16 = v22;
    }
    if ( v16 != v24 )
      free(v16);
    operator delete(v20[0], 16LL * v21, 8);
  }
  return v12;
}
