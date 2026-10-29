__int64 __fastcall sub_2054C30(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // rbp
  __int64 v9; // rbx
  unsigned int v10; // eax
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // r13
  __int64 v14; // r14
  __int64 i; // rcx
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  void *v21; // rdi
  __int64 v22; // rdx
  __int64 j; // rdx
  __int64 v24; // [rsp+8h] [rbp-50h]
  __int64 v25; // [rsp+8h] [rbp-50h]
  __int64 v26; // [rsp+8h] [rbp-50h]
  __int64 v27; // [rsp+10h] [rbp-48h] BYREF
  int v28; // [rsp+18h] [rbp-40h]

  v6 = (unsigned int)(a2 - 1);
  v8 = *(unsigned int *)(a1 + 16);
  v9 = *(_QWORD *)a1;
  v10 = (((((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
         | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
         | ((v6 | (v6 >> 1)) >> 2)
         | v6
         | (v6 >> 1)) >> 16)
       | ((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
       | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
       | ((v6 | (v6 >> 1)) >> 2)
       | v6
       | (v6 >> 1))
      + 1;
  if ( v10 < 0x40 )
    v10 = 64;
  *(_DWORD *)(a1 + 16) = v10;
  result = sub_22300B0(24LL * v10, 8, 64, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    v12 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v13 = 24 * v8;
    v28 = 0;
    v14 = v9 + 24 * v8;
    v27 = -1;
    for ( i = result + 24 * v12; i != result; *(_QWORD *)(result - 24) = -1 )
    {
      *(_DWORD *)(result + 8) = 0;
      result += 24;
    }
    if ( v14 != v9 )
    {
      v16 = v9;
      do
      {
        if ( *(_DWORD *)(v16 + 8) || *(_QWORD *)v16 < 0xFFFFFFFFFFFFFFFELL )
        {
          sub_2052700((__int64 *)a1, v16, &v27);
          v17 = v27;
          if ( *(_DWORD *)(v27 + 8) > 0x40u && *(_QWORD *)v27 )
          {
            v24 = v27;
            operator delete[](*(void **)v27);
            v17 = v24;
          }
          *(_QWORD *)v17 = *(_QWORD *)v16;
          *(_DWORD *)(v17 + 8) = *(_DWORD *)(v16 + 8);
          v18 = v27;
          v19 = *(_QWORD *)(v16 + 16);
          *(_DWORD *)(v16 + 8) = 0;
          *(_QWORD *)(v16 + 16) = 0;
          *(_QWORD *)(v18 + 16) = v19;
          v20 = *(_QWORD *)(v16 + 16);
          ++*(_DWORD *)(a1 + 8);
          if ( v20 )
          {
            if ( *(_DWORD *)(v20 + 32) > 0x40u )
            {
              v21 = *(void **)(v20 + 24);
              if ( v21 )
              {
                v26 = v20;
                operator delete[](v21);
                v20 = v26;
              }
            }
            v25 = v20;
            sub_20CC0C0(v20);
            sub_20C9BF0(v25);
          }
          if ( *(_DWORD *)(v16 + 8) > 0x40u )
          {
            if ( *(_QWORD *)v16 )
              operator delete[](*(void **)v16);
          }
        }
        v16 += 24;
      }
      while ( v14 != v16 );
    }
    return operator delete(v9, v13, 8);
  }
  else
  {
    v22 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( j = result + 24 * v22; j != result; *(_QWORD *)(result - 24) = -1 )
    {
      *(_DWORD *)(result + 8) = 0;
      result += 24;
    }
  }
  return result;
}
