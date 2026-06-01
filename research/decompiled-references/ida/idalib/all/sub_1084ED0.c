_BOOL8 __fastcall sub_1084ED0(__int64 a1, __int64 a2, __int64 a3)
{
  if ( a3 != 11 )
    return a3 == 5
        && (*(_DWORD *)a2 == 909402476 && *(_BYTE *)(a2 + 4) == 52
         || *(_DWORD *)a2 == 909533548 && *(_BYTE *)(a2 + 4) == 52);
  return *(_QWORD *)a2 == 0x637261676E6F6F6CLL && *(_WORD *)(a2 + 8) == 13928 && *(_BYTE *)(a2 + 10) == 52;
}
