/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_76FF4
// Address: 0x00076FF4

//----- (00076FF4) --------------------------------------------------------
unsigned __int8 *__fastcall sub_76FF4(unsigned __int8 *a1, int a2, unsigned __int8 *a3)
{
  unsigned __int8 *v6; // r8
  unsigned __int8 v8[4084]; // [sp+Ch] [bp-1008h] BYREF

  v6 = (unsigned __int8 *)_realpath_chk(a3, v8, 4096);
  if ( !v6 )
  {
    if ( sub_76DBC(a3) )
    {
      v6 = a3;
    }
    else
    {
      sub_76FD0((char *)v8, 0x1000u);
      v6 = v8;
      sub_76B98((char *)v8, 4096, v8, a3, 0);
    }
  }
  sub_70558(a1, v6, a2);
  return a1;
}
// 1471C: using guessed type int __fastcall _realpath_chk(_DWORD, _DWORD, _DWORD);
