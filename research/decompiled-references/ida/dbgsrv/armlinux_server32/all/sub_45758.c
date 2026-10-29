/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45758
// Address: 0x00045758

//----- (00045758) --------------------------------------------------------
void __fastcall sub_45758(unsigned __int8 *a1)
{
  int v1; // r3
  void *v3; // r0

  if ( !a1 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78C64(2656);
  }
  v1 = *a1;
  if ( v1 == 5 )
  {
    sub_456B0(*((_DWORD *)a1 + 2), a1);
  }
  else if ( v1 == 7 )
  {
    v3 = *((void **)a1 + 2);
    if ( v3 )
    {
      *((_DWORD *)a1 + 3) = 0;
      sub_77F70(v3);
      *a1 = 2;
      *((_DWORD *)a1 + 2) = 0;
      return;
    }
  }
  *a1 = 2;
  *((_DWORD *)a1 + 2) = 0;
}
// D6C20: using guessed type char under_debugger;
