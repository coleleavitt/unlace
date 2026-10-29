__int64 __fastcall clang_VirtualFileOverlay_setCaseSensitivity(__int64 a1, int a2)
{
  if ( !a1 )
    return 3;
  *(_BYTE *)(a1 + 25) = 1;
  *(_BYTE *)(a1 + 24) = a2 != 0;
  return 0;
}

