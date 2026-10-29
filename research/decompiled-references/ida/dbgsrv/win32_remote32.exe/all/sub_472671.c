/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_472671
// Address: 0x00472671

//----- (00472671) --------------------------------------------------------
int __usercall sub_472671@<eax>(
        int a1@<ebx>,
        int a2@<edi>,
        LPCWSTR lpFileName,
        DWORD dwShareMode,
        int a5,
        int a6,
        int *a7,
        int a8)
{
  int v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // [esp+10h] [ebp-20h] BYREF
  int v13; // [esp+14h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+18h] [ebp-18h]

  if ( !a7 || (*a7 = -1, !lpFileName) || a8 && (a6 & 0xFFFFFE7F) != 0 )
  {
    *sub_46B984() = 22;
    sub_467EF4(a1, a2);
    return 22;
  }
  else
  {
    v12 = 0;
    v13 = 0;
    ms_exc.registration.TryLevel = 0;
    v9 = sub_472C3E(&v12, a7, lpFileName, dwShareMode, a5, a6);
    v10 = v9;
    v13 = v9;
    ms_exc.registration.TryLevel = -2;
    if ( v12 )
    {
      if ( v9 )
      {
        v11 = (int)*(&dword_4B7B38 + (*a7 >> 6));
        *(_BYTE *)(v11 + 56 * (*a7 & 0x3F) + 40) &= ~1u;
      }
      sub_4734FD(*a7);
    }
    if ( v10 )
      *a7 = -1;
    return v10;
  }
}
