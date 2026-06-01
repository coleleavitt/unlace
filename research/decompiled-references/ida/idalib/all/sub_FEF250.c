__int64 __fastcall sub_FEF250(__int64 a1)
{
  char v1; // al

  v1 = *(_BYTE *)(a1 + 96);
  if ( v1 == -1 )
    return 0;
  if ( v1 == 1 )
    return *(_QWORD *)(*(_QWORD *)(a1 + 88) + 16LL);
  if ( v1 != 2 )
    return 0;
  else
    return *(_QWORD *)(a1 + 88);
}
