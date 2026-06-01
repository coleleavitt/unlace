/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14004DEA0
// Address: 0x000000014004DEA0

//----- (000000014004DEA0) ----------------------------------------------------
void __fastcall sub_14004DEA0(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v5; // rbx
  unsigned __int64 v6; // rdi

  v2 = a1[1];
  if ( a2 >= v2 )
  {
    a1[1] = a2;
  }
  else
  {
    v5 = 80 * a2;
    v6 = v2 - a2;
    do
    {
      sub_14003FF70(v5 + *a1);
      v5 += 80;
      --v6;
    }
    while ( v6 );
    a1[1] = a2;
  }
}
