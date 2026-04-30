void __fastcall metadata_dumper_t__::vfunc_7(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  __int64 v3; // r12
  __int64 v5; // rdi
  __int64 *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rax

  v2 = *a2;
  v3 = *a2 + 16 * a2[1];
  if ( v3 != *a2 )
  {
    do
    {
      v6 = *(__int64 **)(a1 + 56);
      v7 = v6[1];
      v8 = *v6;
      if ( v6[2] < (unsigned __int64)(v7 + 1) )
      {
        v9 = qvector_reserve(*(_QWORD *)(a1 + 56), v8, v7 + 1, 24);
        v7 = v6[1];
        *v6 = v9;
        v8 = v9;
      }
      v2 += 16;
      v5 = v8 + 24 * v7;
      *(_QWORD *)v5 = 0;
      *(_OWORD *)(v5 + 8) = 0;
      ++v6[1];
      sub_169A50(
        (__int64 *)v5,
        (__int64)"User stack pointer @ %u+0x%x: %lld",
        *(_DWORD *)(v2 - 16),
        *(_DWORD *)(v2 - 12),
        *(_QWORD *)(v2 - 8));
    }
    while ( v3 != v2 );
  }
}
