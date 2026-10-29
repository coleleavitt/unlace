/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_442380
// Address: 0x00442380

//----- (00442380) --------------------------------------------------------
bool __usercall sub_442380@<al>(char a1@<bl>, int a2@<edi>, __m128i a3@<xmm0>, _BYTE *a4, const CHAR *a5, int a6)
{
  int *v6; // ecx
  bool v7; // bl
  bool v8; // al
  int *v10; // [esp+Ch] [ebp-10h]

  v6 = sub_45C5A0(a1, a2, a3, a5, 0);
  v7 = 0;
  v10 = v6;
  if ( v6 )
  {
    if ( a6 == 10 )
    {
      v7 = 0;
    }
    else if ( a6 == 11 )
    {
      v8 = sub_445B60(a3, a4, (int)v6);
      v6 = v10;
      v7 = v8;
    }
    sub_45C550(v7, a2, v6);
  }
  return v7;
}
