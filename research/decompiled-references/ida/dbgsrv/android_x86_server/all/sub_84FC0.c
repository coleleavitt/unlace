/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_84FC0
// Address: 0x00084FC0

//----- (00084FC0) --------------------------------------------------------
int __cdecl sub_84FC0(int a1, int a2, unsigned int a3)
{
  _BYTE *v3; // eax
  int v4; // esi
  int v6[4]; // [esp+0h] [ebp-2Ch] BYREF
  _BYTE src[5]; // [esp+13h] [ebp-19h] BYREF
  unsigned int v8[5]; // [esp+18h] [ebp-14h] BYREF

  v8[0] = __readgsdword(0x14u);
  sub_96B40((int)v6, 55);
  sub_90C20(v6, a2);
  v3 = pack_dd(src, (unsigned int)v8, a3);
  sub_3A950(v6, src, v3 - src);
  v4 = sub_8FC90(a1 + 100, (int)v6, -1, 0);
  if ( v6[0] )
  {
    v6[1] = 0;
    qfree((void *)v6[0]);
    v6[0] = 0;
    v6[2] = 0;
  }
  return v4;
}
