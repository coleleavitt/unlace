void __fastcall sub_AF020(__int64 a1)
{
  void *v2; // rsi
  void (__fastcall *v3)(__int64); // rdx
  __int64 v4; // rdi

  sub_AEFA0(a1);
  sub_1062F0(*(void **)(a1 + 3728));
  v2 = *(void **)(a1 + 680);
  *(_QWORD *)(a1 + 3728) = 0;
  v3 = *(void (__fastcall **)(__int64))(a1 + 880);
  v4 = *(_QWORD *)(a1 + 888);
  *(_OWORD *)(a1 + 680) = 0;
  *(_OWORD *)(a1 + 696) = 0;
  *(_OWORD *)(a1 + 712) = 0;
  *(_OWORD *)(a1 + 728) = 0;
  *(_QWORD *)(a1 + 744) = 0;
  if ( v2 )
  {
    if ( v3 )
      v3(v4);
    else
      free(v2);
  }
}

