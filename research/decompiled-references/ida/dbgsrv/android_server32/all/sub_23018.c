/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_23018
// Address: 0x00023018

//----- (00023018) --------------------------------------------------------
int __fastcall sub_23018(int a1, const char *a2, int a3, int a4, _BYTE *a5, unsigned int a6, char *a7, int a8)
{
  int v9; // r5
  int v11; // [sp+1Ch] [bp-8h] BYREF

  v9 = sub_64078(a1, a2, a3, a4, a5, a6, a7, a8, &v11);
  if ( v9 >= 1 && v11 && !sub_22938(a1, v11, 0) )
  {
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 80))(a1, 0);
    return -2;
  }
  return v9;
}
