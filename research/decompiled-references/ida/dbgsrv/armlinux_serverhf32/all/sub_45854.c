/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45854
// Address: 0x00045854

//----- (00045854) --------------------------------------------------------
void __fastcall sub_45854(int a1, unsigned __int8 *a2)
{
  unsigned __int8 *v3; // r4
  unsigned __int8 *v4; // r5

  if ( a2 )
  {
    v3 = a2;
    do
    {
      sub_45854(a1, *((_DWORD **)v3 + 3));
      v4 = *((unsigned __int8 **)v3 + 2);
      sub_455C8(v3 + 24);
      sub_80648(v3);
      v3 = v4;
    }
    while ( v4 );
  }
}
