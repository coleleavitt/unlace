void __fastcall sub_1F991A0(__int64 *a1, unsigned int *a2, __int64 a3)
{
  unsigned int *v4; // rbx
  unsigned int *v5; // rbp
  unsigned int *v6; // rsi

  v4 = a2;
  sub_9B9C90(a1[2], (unsigned int)a3);
  v5 = &a2[14 * a3];
  if ( a2 != v5 )
  {
    do
    {
      v6 = v4;
      v4 += 14;
      sub_1F986C0(a1, v6);
    }
    while ( v5 != v4 );
  }
}
