/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_412D00
// Address: 0x0000000000412D00

//----- (0000000000412D00) ----------------------------------------------------
__int64 __fastcall sub_412D00(__m128 a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  double v11; // xmm4_8
  double v12; // xmm5_8
  __int64 result; // rax
  td_err_e v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  char v21; // [rsp+0h] [rbp-8h]

  if ( !(unsigned __int8)sub_4837D0("IDA_USE_LIBTHREAD_DB", 0) )
  {
    if ( dword_4C56C8 == -1 )
    {
      *(double *)a1.m128_u64 = sub_410F70(
                                 a1,
                                 a2,
                                 a3,
                                 a4,
                                 v11,
                                 v12,
                                 a7,
                                 a8,
                                 (__int64)"IDA_USE_LIBTHREAD_DB",
                                 0,
                                 0xFFFFFFFFLL,
                                 v8,
                                 v9,
                                 v10,
                                 v21);
      result = 2;
      if ( dword_4C56C8 == 1 )
        goto LABEL_6;
    }
    else
    {
      result = 2;
      if ( dword_4C56C8 == 1 )
      {
LABEL_6:
        dword_4C8070 = result;
        return result;
      }
    }
  }
  if ( byte_4C8020 )
  {
LABEL_5:
    result = 3;
    goto LABEL_6;
  }
  v14 = td_init();
  if ( v14 == TD_OK )
  {
    byte_4C8020 = 1;
    goto LABEL_5;
  }
  sub_410EA0(
    (int)"DBG: td_init error code %d\n",
    (unsigned int)v14,
    v15,
    v16,
    v17,
    v18,
    a1,
    a2,
    a3,
    a4,
    v19,
    v20,
    a7,
    a8,
    v21);
  if ( byte_4C8020 )
    goto LABEL_5;
  dword_4C8070 = 1;
  return 1;
}
// 412D69: variable 'v15' is possibly undefined
// 412D69: variable 'v16' is possibly undefined
// 412D69: variable 'v17' is possibly undefined
// 412D69: variable 'v18' is possibly undefined
// 412D69: variable 'v19' is possibly undefined
// 412D69: variable 'v20' is possibly undefined
// 412D69: variable 'v21' is possibly undefined
// 412D90: variable 'v11' is possibly undefined
// 412D90: variable 'v12' is possibly undefined
// 412D90: variable 'v8' is possibly undefined
// 412D90: variable 'v9' is possibly undefined
// 412D90: variable 'v10' is possibly undefined
// 4C56C8: using guessed type int dword_4C56C8;
// 4C8020: using guessed type char byte_4C8020;
// 4C8070: using guessed type int dword_4C8070;
