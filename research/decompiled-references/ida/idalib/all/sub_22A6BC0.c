_BOOL8 __fastcall sub_22A6BC0(__int64 a1, __int64 a2)
{
  if ( a2 != 11 )
    return a2 == 5
        && (*(_DWORD *)a1 == 909402476 && *(_BYTE *)(a1 + 4) == 52
         || *(_DWORD *)a1 == 909533548 && *(_BYTE *)(a1 + 4) == 52);
  return *(_QWORD *)a1 == 0x637261676E6F6F6CLL && *(_WORD *)(a1 + 8) == 13928 && *(_BYTE *)(a1 + 10) == 52;
}
