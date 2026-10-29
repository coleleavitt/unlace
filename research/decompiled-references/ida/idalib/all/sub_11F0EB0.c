void __fastcall sub_11F0EB0(__int64 a1, __int64 a2)
{
  if ( !*(_BYTE *)(a1 + 2688) )
  {
    sub_11DDAD0((_QWORD *)(a1 + 2504), *(_QWORD **)(a1 + 2432), a1 + 2440, *(_QWORD *)(a1 + 2496));
    *(_BYTE *)(a1 + 2688) = 1;
  }
  sub_11D9460(a1 + 2504, a2);
  if ( !*(_BYTE *)(a1 + 3840) )
  {
    sub_1173DC0(a1 + 2768, *(__int64 **)(a1 + 2696), a1 + 2704, *(_QWORD *)(a1 + 2760), 1, 0);
    *(_BYTE *)(a1 + 3840) = 1;
  }
  sub_116C7F0(a1 + 2768, a2);
}
