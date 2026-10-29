unsigned __int64 __fastcall sub_6C9B00(__int64 a1, __int64 a2)
{
  char v2; // al

  v2 = (*(_BYTE *)(a2 + 1) >> 1) & 3;
  if ( v2 == 1 )
    return sub_6C4DA0(a1, *(_QWORD *)(a2 + 8), 1u);
  if ( v2 == 2 )
    return sub_6C5080(a1, *(_QWORD *)(a2 + 8));
  return *(_QWORD *)(a2 + 8);
}

