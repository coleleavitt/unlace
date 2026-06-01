/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140035000
// Address: 0x0000000140035000

//----- (0000000140035000) ----------------------------------------------------
void __fastcall sub_140035000(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  void *v3[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+30h] [rbp-28h]
  void *Block[2]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v6; // [rsp+48h] [rbp-10h]

  v2 = a1[1];
  if ( a2 != v2 )
  {
    *(_OWORD *)v3 = 0;
    v4 = 0;
    if ( a2 >= v2 )
    {
      if ( a2 > v2 )
      {
        if ( (unsigned __int64)v3 < *a1 || (unsigned __int64)v3 >= *a1 + 24LL * a1[2] )
        {
          sub_1400350B0((__int64)a1, a2, (__int64)v3);
        }
        else
        {
          *(_OWORD *)Block = 0;
          v6 = 0;
          sub_1400350B0((__int64)a1, a2, (__int64)Block);
          if ( Block[0] )
            j_free(Block[0]);
        }
      }
    }
    else
    {
      sub_14001A6C0(a1, a2);
    }
    if ( v3[0] )
      j_free(v3[0]);
  }
}
