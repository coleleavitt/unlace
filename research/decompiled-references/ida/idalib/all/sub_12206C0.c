void __fastcall sub_12206C0(__int64 a1, __int64 a2)
{
  sub_12142A0((_QWORD *)(a1 + 2384), a2);
  if ( !*(_BYTE *)(a1 + 3728) )
  {
    sub_11DDAD0((_QWORD *)(a1 + 3544), *(_QWORD **)(a1 + 3472), a1 + 3480, *(_QWORD *)(a1 + 3536));
    *(_BYTE *)(a1 + 3728) = 1;
  }
  sub_11D9460(a1 + 3544, a2);
  if ( !*(_BYTE *)(a1 + 4880) )
  {
    sub_1173DC0(a1 + 3808, *(__int64 **)(a1 + 3736), a1 + 3744, *(_QWORD *)(a1 + 3800), 1, 0);
    *(_BYTE *)(a1 + 4880) = 1;
  }
  sub_116C7F0(a1 + 3808, a2);
}
