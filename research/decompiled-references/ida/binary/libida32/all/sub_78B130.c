__int64 __fastcall sub_78B130(__int64 a1)
{
  __int64 v1; // rax
  void *v2; // rsi

  v1 = *(_QWORD *)(a1 + 112);
  v2 = *(void **)(*(_QWORD *)(a1 + 104) + 8 * v1 - 8);
  if ( v1 )
    *(_QWORD *)(a1 + 112) = v1 - 1;
  sub_78AFA0(a1, v2, 1);
  return 0;
}

