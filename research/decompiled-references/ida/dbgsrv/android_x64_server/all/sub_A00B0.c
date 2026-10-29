/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A00B0
// Address: 0x00000000000A00B0

//----- (00000000000A00B0) ----------------------------------------------------
void __fastcall sub_A00B0(__int64 a1, __int64 *a2, int a3)
{
  char **v5; // r14
  __int64 *v6; // rsi

  v5 = (char **)(a1 + 48);
  sub_38B70((__int64 *)(a1 + 48), 0);
  if ( *(_QWORD *)(a1 + 64) < (unsigned __int64)a3 )
    *v5 = (char *)qvector_reserve((__int64)v5, *v5, a3, 0x38u);
  if ( a3 > 0 )
  {
    do
    {
      v6 = a2;
      a2 += 7;
      sub_A0110((__int64)v5, v6);
      --a3;
    }
    while ( a3 );
  }
}
