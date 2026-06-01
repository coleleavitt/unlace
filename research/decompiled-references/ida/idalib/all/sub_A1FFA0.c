__int64 __fastcall sub_A1FFA0(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // r15
  char v7; // [rsp+Ch] [rbp-3Ch]

  if ( a2 == (unsigned int)a2 )
    return sub_A1FF30(a1, a2, a3);
  v4 = a2;
  v7 = a3 - 1;
  v5 = (unsigned int)(1 << (a3 - 1));
  if ( a2 >= v5 )
  {
    do
    {
      sub_A1FEC0(a1, (1 << (a3 - 1)) | v4 & ~(-1 << (a3 - 1)), a3);
      v4 >>= v7;
    }
    while ( v4 >= v5 );
    LODWORD(a2) = v4;
  }
  return sub_A1FEC0(a1, a2, a3);
}
