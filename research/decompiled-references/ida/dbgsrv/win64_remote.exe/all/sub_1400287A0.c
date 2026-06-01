/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400287A0
// Address: 0x00000001400287A0

//----- (00000001400287A0) ----------------------------------------------------
void __fastcall sub_1400287A0(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  __int64 v6; // rdi

  v4 = a1[1];
  if ( a2 >= v4 )
  {
    a1[1] = a2;
  }
  else
  {
    v5 = 32 * a2;
    v6 = v4 - a2;
    do
    {
      sub_140029390(v5 + *a1);
      v5 += 32LL;
      --v6;
    }
    while ( v6 );
    a1[1] = a2;
  }
}
