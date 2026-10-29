__int64 __fastcall dwarfstring_reset(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    *(_QWORD *)(a1 + 16) = v1;
    **(_BYTE **)a1 = 0;
  }
  return 1;
}

