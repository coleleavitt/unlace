/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140028700
// Address: 0x0000000140028700

//----- (0000000140028700) ----------------------------------------------------
void __fastcall sub_140028700(unsigned __int64 *a1, unsigned __int64 a2, char *a3)
{
  unsigned __int64 v5; // rcx
  char v6[8]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+38h] [rbp-10h]

  if ( a2 >= a1[1] )
  {
    if ( a2 > a1[1] )
    {
      v5 = *a1;
      if ( (unsigned __int64)a3 < v5 || (unsigned __int64)a3 >= v5 + 32 * a1[2] )
      {
        sub_140028810((__int64)a1, a2, a3);
      }
      else
      {
        v6[0] = 2;
        v7 = 0;
        v8 = 0;
        sub_140028E70(v6, a3);
        sub_140028810((__int64)a1, a2, v6);
        sub_140029390((__int64)v6);
      }
    }
  }
  else
  {
    sub_1400287A0(a1, a2);
  }
}
