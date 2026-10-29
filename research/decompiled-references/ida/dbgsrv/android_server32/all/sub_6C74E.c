/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6C74E
// Address: 0x0006C74E

//----- (0006C74E) --------------------------------------------------------
int __fastcall sub_6C74E(_DWORD *a1)
{
  int v2; // r5

  v2 = *a1;
  if ( *a1 )
  {
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v2 + 36))(*a1);
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  }
  *a1 = 0;
  return 0;
}
