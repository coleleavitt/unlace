/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6C150
// Address: 0x0006C150

//----- (0006C150) --------------------------------------------------------
int __fastcall sub_6C150(int a1, unsigned int a2)
{
  bool v2; // cf
  __int64 v3; // r2
  int result; // r0
  int v5; // r1
  int v6; // r1
  int v7; // r1
  int v8; // r1

  v2 = a2 != 0;
  if ( a2 == 1 )
    v2 = 1;
  HIDWORD(v3) = a2;
  if ( v2 )
  {
    v3 = a2;
    result = 32;
  }
  else
  {
    LODWORD(v3) = a1;
    result = 0;
  }
  if ( (unsigned __int64)v3 >= 0x10000 )
  {
    v5 = v3 >> 16;
    result |= 0x10u;
    HIDWORD(v3) >>= 16;
    LODWORD(v3) = v5;
  }
  if ( (unsigned __int64)v3 >= 0x100 )
  {
    v6 = v3 >> 8;
    result |= 8u;
    HIDWORD(v3) >>= 8;
    LODWORD(v3) = v6;
  }
  if ( (unsigned __int64)v3 >= 0x10 )
  {
    v7 = v3 >> 4;
    result |= 4u;
    HIDWORD(v3) >>= 4;
    LODWORD(v3) = v7;
  }
  if ( (unsigned __int64)v3 >= 4 )
  {
    v8 = v3 >> 2;
    result |= 2u;
    HIDWORD(v3) >>= 2;
    LODWORD(v3) = v8;
  }
  if ( (unsigned __int64)v3 >= 2 )
    return result | 1;
  return result;
}
