/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14004DBD0
// Address: 0x000000014004DBD0

//----- (000000014004DBD0) ----------------------------------------------------
void __fastcall sub_14004DBD0(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  void *v6[2]; // [rsp+20h] [rbp-49h] BYREF
  void *v7[2]; // [rsp+30h] [rbp-39h]
  __int128 v8; // [rsp+40h] [rbp-29h]
  void *v9[2]; // [rsp+50h] [rbp-19h]
  __int64 v10; // [rsp+60h] [rbp-9h]
  int v11; // [rsp+68h] [rbp-1h]
  void *v12[3]; // [rsp+70h] [rbp+7h] BYREF
  void *v13; // [rsp+88h] [rbp+1Fh]
  __int64 v14; // [rsp+90h] [rbp+27h]
  __int64 v15; // [rsp+98h] [rbp+2Fh]
  void *Block; // [rsp+A0h] [rbp+37h]
  __int64 v17; // [rsp+A8h] [rbp+3Fh]
  __int64 v18; // [rsp+B0h] [rbp+47h]

  v4 = a1[1];
  if ( a2 != v4 )
  {
    *(_OWORD *)v6 = 0;
    *(_OWORD *)v7 = 0;
    v8 = 0;
    *(_OWORD *)v9 = 0;
    v10 = 0;
    v11 = -1;
    if ( a2 >= v4 )
    {
      if ( a2 > v4 )
      {
        if ( (unsigned __int64)v6 < *a1 || (unsigned __int64)v6 >= *a1 + 80LL * a1[2] )
        {
          sub_14004E050((__int64)a1, a2, (__int64)v6);
        }
        else
        {
          v5 = sub_140046CF0((__int64)v12, (__int64)v6);
          sub_14004E050((__int64)a1, a2, v5);
          if ( Block )
          {
            v17 = 0;
            j_free(Block);
            Block = nullptr;
            v18 = 0;
          }
          if ( v13 )
          {
            v14 = 0;
            j_free(v13);
            v13 = nullptr;
            v15 = 0;
          }
          if ( v12[0] )
          {
            v12[1] = nullptr;
            j_free(v12[0]);
          }
        }
      }
    }
    else
    {
      sub_14004DEA0(a1, a2);
    }
    if ( v9[0] )
      j_free(v9[0]);
    if ( v7[1] )
      j_free(v7[1]);
    if ( v6[0] )
      j_free(v6[0]);
  }
}
