void __fastcall sub_A57430(__int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // r14
  __int64 *v3; // rbp
  __int64 v4; // r15
  const void *v5; // rsi
  unsigned int v6; // eax
  __int64 *v7; // r12
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  size_t v11; // rdx
  __int64 v12; // [rsp+8h] [rbp-70h]
  __int64 *v13; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-60h]
  _BYTE v15[88]; // [rsp+20h] [rbp-58h] BYREF

  v2 = *((unsigned int *)a1 + 14);
  v3 = (__int64 *)a1[6];
  v4 = *(_QWORD *)(a2 + 18360);
  v5 = a1 + 8;
  v14 = 0x400000000LL;
  v13 = (__int64 *)v15;
  if ( v3 == a1 + 8 )
  {
    if ( !v2 )
    {
      *((_DWORD *)a1 + 14) = 0;
      return;
    }
    v11 = 8 * v2;
    v3 = (__int64 *)v15;
    if ( v2 <= 4
      || (sub_2237220(&v13, v15, v2, 8),
          v3 = v13,
          v5 = (const void *)a1[6],
          (v11 = 8LL * *((unsigned int *)a1 + 14)) != 0) )
    {
      memcpy(v3, v5, v11);
      v3 = v13;
    }
    LODWORD(v14) = v2;
    v7 = &v3[v2];
  }
  else
  {
    v6 = *((_DWORD *)a1 + 15);
    v13 = v3;
    v7 = &v3[v2];
    v14 = __PAIR64__(v6, v2);
    a1[6] = (__int64)v5;
    *((_DWORD *)a1 + 15) = 0;
  }
  *((_DWORD *)a1 + 14) = 0;
  if ( v3 != v7 )
  {
    do
    {
      v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 16LL))(v4, *v3);
      v9 = *((unsigned int *)a1 + 2);
      if ( v9 + 1 > (unsigned __int64)*((unsigned int *)a1 + 3) )
      {
        v12 = v8;
        sub_2237220(a1, a1 + 2, v9 + 1, 8);
        v9 = *((unsigned int *)a1 + 2);
        v10 = *a1;
        v8 = v12;
      }
      else
      {
        v10 = *a1;
      }
      ++v3;
      *(_QWORD *)(v10 + 8 * v9) = v8;
      ++*((_DWORD *)a1 + 2);
    }
    while ( v7 != v3 );
    v7 = v13;
  }
  if ( v7 != (__int64 *)v15 )
    free(v7);
}
