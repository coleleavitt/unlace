__int64 __fastcall sub_A1FF30(__int64 a1, unsigned int a2, int a3)
{
  char v3; // r14
  unsigned int v5; // ebp
  unsigned int v6; // ebx
  int v7; // r12d

  v3 = a3 - 1;
  v5 = 1 << (a3 - 1);
  v6 = a2;
  if ( v5 <= a2 )
  {
    v7 = ~(-1 << (a3 - 1));
    do
    {
      sub_A1FEC0(a1, v5 | v6 & v7, a3);
      v6 >>= v3;
    }
    while ( v5 <= v6 );
  }
  return sub_A1FEC0(a1, v6, a3);
}
