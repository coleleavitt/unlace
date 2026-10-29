/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001D2E0
// Address: 0x000000014001D2E0

//----- (000000014001D2E0) ----------------------------------------------------
__int64 __fastcall sub_14001D2E0(__int64 a1)
{
  *(_DWORD *)a1 = 148;
  *(_BYTE *)(a1 + 148) = GetVersionExA((LPOSVERSIONINFOA)a1);
  return a1;
}
