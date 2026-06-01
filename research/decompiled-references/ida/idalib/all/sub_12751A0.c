void __fastcall sub_12751A0(__int64 a1, __int64 a2)
{
  if ( !*(_BYTE *)(a1 + 2640) )
  {
    sub_11DDAD0((_QWORD *)(a1 + 2456), *(_QWORD **)(a1 + 2384), a1 + 2392, *(_QWORD *)(a1 + 2448));
    *(_BYTE *)(a1 + 2640) = 1;
  }
  sub_11D9460(a1 + 2456, a2);
  if ( !*(_BYTE *)(a1 + 3792) )
  {
    sub_1173DC0(a1 + 2720, *(__int64 **)(a1 + 2648), a1 + 2656, *(_QWORD *)(a1 + 2712), 1, 0);
    *(_BYTE *)(a1 + 3792) = 1;
  }
  sub_116C7F0(a1 + 2720, a2);
}
