/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_459E4
// Address: 0x000459E4

//----- (000459E4) --------------------------------------------------------
void __fastcall sub_459E4(int a1, unsigned __int8 *a2)
{
  unsigned __int8 *v3; // r4
  unsigned __int8 *v4; // r5

  if ( a2 )
  {
    v3 = a2;
    do
    {
      sub_459E4(a1, *((_DWORD **)v3 + 3));
      v4 = *((unsigned __int8 **)v3 + 2);
      sub_45758(v3 + 24);
      sub_809EC(v3);
      v3 = v4;
    }
    while ( v4 );
  }
}
