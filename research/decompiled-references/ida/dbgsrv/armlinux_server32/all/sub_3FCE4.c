/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3FCE4
// Address: 0x0003FCE4

//----- (0003FCE4) --------------------------------------------------------
void __fastcall sub_3FCE4(int a1, unsigned __int8 *a2)
{
  unsigned __int8 *v3; // r4
  unsigned __int8 *v4; // r5
  void *v5; // r0
  unsigned __int8 *v6; // r0

  if ( a2 )
  {
    v3 = a2;
    do
    {
      sub_3FCE4(a1, *((_DWORD **)v3 + 3));
      v4 = *((unsigned __int8 **)v3 + 2);
      sub_45758(v3 + 32);
      v5 = *((void **)v3 + 4);
      if ( v5 )
      {
        *((_DWORD *)v3 + 5) = 0;
        sub_77F70(v5);
      }
      v6 = v3;
      v3 = v4;
      sub_809EC(v6);
    }
    while ( v4 );
  }
}
