/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AFA78
// Address: 0x00000000004AFA78

//----- (00000000004AFA78) ----------------------------------------------------
void *__fastcall sub_4AFA78(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // x0
  unsigned __int64 v4; // x2

  v3 = *a2;
  if ( (*a2 & 0x8000000000000000LL) != 0 )
    sub_4A04D0("basic_string::_M_create");
  if ( v3 <= a3 )
    return sub_49E050(v3 + 1);
  v4 = 2 * a3;
  if ( v3 >= v4 )
    return sub_49E050(v3 + 1);
  if ( (v4 & 0x8000000000000000LL) != 0 )
  {
    *a2 = 0x7FFFFFFFFFFFFFFFLL;
    return sub_49E050(0x8000000000000000LL);
  }
  else
  {
    *a2 = v4;
    return sub_49E050(v4 + 1);
  }
}
