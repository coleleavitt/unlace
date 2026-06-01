/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14004DD20
// Address: 0x000000014004DD20

//----- (000000014004DD20) ----------------------------------------------------
void __fastcall sub_14004DD20(__int64 *a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  void *v5[54]; // [rsp+20h] [rbp-378h] BYREF
  _BYTE v6[8]; // [rsp+1D0h] [rbp-1C8h] BYREF
  void *v7; // [rsp+1D8h] [rbp-1C0h]
  __int64 v8; // [rsp+1E0h] [rbp-1B8h]
  void *Block; // [rsp+1F8h] [rbp-1A0h]
  __int64 v10; // [rsp+200h] [rbp-198h]
  __int64 v11; // [rsp+208h] [rbp-190h]

  if ( a2 != a1[1] )
  {
    memset(v5, 0, sizeof(v5));
    memset(&v5[1], 0, 24);
    memset(&v5[5], 0, 24);
    sub_140009FA0((__int64)&v5[8]);
    if ( a2 >= a1[1] )
    {
      if ( a2 > a1[1] )
      {
        if ( (unsigned __int64)v5 < *a1 || (unsigned __int64)v5 >= *a1 + 432 * a1[2] )
        {
          sub_14004E180(a1, a2, (__int64)v5);
        }
        else
        {
          v4 = sub_1400473E0((__int64)v6, (__int64)v5);
          sub_14004E180(a1, a2, v4);
          if ( Block )
          {
            v10 = 0;
            j_free(Block);
            Block = nullptr;
            v11 = 0;
          }
          if ( v7 )
          {
            v8 = 0;
            j_free(v7);
          }
        }
      }
    }
    else
    {
      sub_14004DF20(a1, a2);
    }
    if ( v5[5] )
    {
      v5[6] = nullptr;
      j_free(v5[5]);
      v5[5] = nullptr;
      v5[7] = nullptr;
    }
    if ( v5[1] )
    {
      v5[2] = nullptr;
      j_free(v5[1]);
    }
  }
}
