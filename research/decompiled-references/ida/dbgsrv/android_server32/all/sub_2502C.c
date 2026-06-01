/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2502C
// Address: 0x0002502C

//----- (0002502C) --------------------------------------------------------
void __fastcall sub_2502C(_DWORD *a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r5
  void *v4; // r0
  void *v5; // r0

  *a1 = &off_D633C;
  v2 = (_DWORD *)a1[7];
  if ( v2 )
  {
    do
    {
      v3 = (_DWORD *)*v2;
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  v4 = (void *)a1[5];
  a1[5] = 0;
  if ( v4 )
    operator delete(v4);
  v5 = (void *)a1[2];
  if ( v5 )
  {
    a1[3] = 0;
    qfree(v5);
  }
  operator delete(a1);
}
// D633C: using guessed type _UNKNOWN *off_D633C;
