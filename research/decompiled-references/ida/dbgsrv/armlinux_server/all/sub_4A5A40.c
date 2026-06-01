/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A5A40
// Address: 0x00000000004A5A40

//----- (00000000004A5A40) ----------------------------------------------------
__int64 __fastcall sub_4A5A40(unsigned __int8 *a1)
{
  int v1; // w1
  bool v3; // zf
  unsigned int v4; // w2
  int v6; // w0
  unsigned int v7; // w1
  unsigned int v8; // w0

  v1 = *a1;
  v3 = v1 == 114 || v1 == 86 || v1 == 75;
  v4 = 1;
  if ( v3 )
    return v4;
  v4 = 0;
  if ( v1 != 68 )
    return v4;
  v6 = a1[1];
  v7 = v6 & 0xFFFFFFDF;
  v8 = (unsigned __int8)(v6 - 119);
  return v7 == 79 || v8 <= 1;
}
