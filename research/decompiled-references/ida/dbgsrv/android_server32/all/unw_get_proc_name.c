/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: unw_get_proc_name
// Address: 0x00099A0C

//----- (00099A0C) --------------------------------------------------------
int __fastcall unw_get_proc_name(int a1)
{
  int v1; // r0
  int v2; // r1

  v1 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 48))(a1);
  v2 = -6540;
  if ( v1 )
    return 0;
  return v2;
}
