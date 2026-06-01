void __fastcall sub_77DAD0(__int64 a1, __int64 a2)
{
  *(_BYTE *)(a1 + 83) &= ~8u;
  *(_QWORD *)(a1 + 128) = a2;
  if ( a2 )
    *(_DWORD *)(a1 + 140) = sub_AC7460(a2);
}

