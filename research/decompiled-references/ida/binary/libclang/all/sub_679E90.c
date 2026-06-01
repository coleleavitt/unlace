__int64 __fastcall sub_679E90(__int64 *a1, __int64 a2, double a3, __m128i a4, double a5, __m128 a6)
{
  __int64 *v6; // rax
  __int64 *v7; // rbx
  __int64 *v8; // r13
  __int64 v10; // rax
  bool (__fastcall *v11)(__int64); // rdx
  __int64 v12; // rax
  __int64 *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r13

  v6 = *(__int64 **)(a2 + 88);
  if ( v6 && !(unsigned __int8)sub_673BB0(a1, *v6, (unsigned __int64)(v6 + 1), a3, a4, a5, a6) )
    return 0;
  v7 = *(__int64 **)(a2 + 96);
  v8 = &v7[*(unsigned int *)(a2 + 104)];
  if ( v7 != v8 )
  {
    while ( (unsigned __int8)sub_66D270(a1, *v7, a3, a4, a5, a6) )
    {
      if ( v8 == ++v7 )
        goto LABEL_8;
    }
    return 0;
  }
LABEL_8:
  v10 = *(_QWORD *)a2;
  v11 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL);
  if ( v11 == sub_5F7BA0 )
  {
    if ( (*(_BYTE *)(a2 + 112) & 1) == 0 && !*(_QWORD *)(a2 + 112) )
      goto LABEL_11;
  }
  else
  {
    if ( !v11(a2) )
      goto LABEL_11;
    v10 = *(_QWORD *)a2;
  }
  v12 = (*(__int64 (__fastcall **)(__int64))(v10 + 64))(a2);
  if ( !(unsigned __int8)sub_672CC0(a1, v12, a3, a4, a5, a6) )
    return 0;
LABEL_11:
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v13 = nullptr;
    v14 = sub_79A2B0(a2);
    v15 = *(_QWORD *)v14 + 8LL * *(unsigned int *)(v14 + 8);
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v13 = *(__int64 **)sub_79A2B0(a2);
    if ( (__int64 *)v15 != v13 )
    {
      while ( (unsigned __int8)sub_6777E0(a1, *v13, a3, a4, a5, a6) )
      {
        if ( (__int64 *)v15 == ++v13 )
          return 1;
      }
      return 0;
    }
  }
  return 1;
}

