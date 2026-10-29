__int64 __fastcall sub_7AB4C0(__int64 a1)
{
  __int64 v1; // rax
  void *v2; // rsi

  v1 = *(_QWORD *)(a1 + 120);
  v2 = *(void **)(*(_QWORD *)(a1 + 112) + 8 * v1 - 8);
  if ( v1 )
    *(_QWORD *)(a1 + 120) = v1 - 1;
  sub_7AB330(a1, v2, 1);
  return 0;
}
