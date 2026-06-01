/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140044370
// Address: 0x0000000140044370

//----- (0000000140044370) ----------------------------------------------------
void __fastcall sub_140044370(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rax
  int v5; // [rsp+20h] [rbp-48h] BYREF
  void *v6[2]; // [rsp+28h] [rbp-40h]
  __int64 v7; // [rsp+38h] [rbp-30h]
  int v8; // [rsp+40h] [rbp-28h] BYREF
  void *Block[2]; // [rsp+48h] [rbp-20h]
  __int64 v10; // [rsp+58h] [rbp-10h]

  v4 = a1[1];
  if ( a2 != v4 )
  {
    v5 = -2;
    v6[1] = nullptr;
    v7 = 0;
    v6[0] = (void *)-1LL;
    if ( a2 >= v4 )
    {
      if ( a2 > v4 )
      {
        if ( (unsigned __int64)&v5 < *a1 || (unsigned __int64)&v5 >= *a1 + 32 * a1[2] )
        {
          sub_140044480((__int64)a1, a2, (__int64)&v5);
        }
        else
        {
          v8 = -2;
          *(_OWORD *)Block = 0;
          v10 = 0;
          sub_140040CA0((__int64)&v8, (__int64)&v5);
          sub_140044480((__int64)a1, a2, (__int64)&v8);
          if ( v8 >= -1 && Block[0] )
          {
            Block[1] = nullptr;
            j_free(Block[0]);
          }
        }
      }
    }
    else
    {
      sub_14001A5B0(a1, a2);
    }
    if ( v5 >= -1 )
    {
      if ( v6[0] )
      {
        v6[1] = nullptr;
        j_free(v6[0]);
      }
    }
  }
}
