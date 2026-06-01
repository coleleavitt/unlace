__int64 __fastcall sub_1CAF7B0(__int64 a1)
{
  int v1; // eax

  if ( !a1 )
    return 0;
  v1 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( (unsigned int)(v1 - 59) <= 2 )
    return sub_B97260(a1);
  if ( (unsigned int)(v1 - 34) <= 5 )
    return sub_B77D20(a1);
  if ( (unsigned int)(v1 - 40) <= 6 )
    return sub_B740B0(a1);
  else
    return 0;
}
