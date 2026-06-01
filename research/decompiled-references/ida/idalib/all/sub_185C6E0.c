void __fastcall sub_185C6E0(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 544);
  if ( (*(_BYTE *)(v1 + 8) & 0x7Fu) - 59 <= 2 && v1 != 64 )
  {
    if ( *(char *)(v1 - 36) < 0 )
    {
      *(_DWORD *)(a1 + 4328) = 0;
      *(_DWORD *)(a1 + 4376) = 0;
    }
    else
    {
      sub_185C490(a1, v1 - 64);
    }
  }
}
