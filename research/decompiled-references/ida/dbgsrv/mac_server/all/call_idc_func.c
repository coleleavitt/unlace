/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: call_idc_func
// Address: 0x000000010003E310

//----- (000000010003E310) ----------------------------------------------------
__int64 __fastcall call_idc_func(
        unsigned __int8 *a1,
        const char *a2,
        unsigned __int8 *a3,
        int a4,
        void **a5,
        __int64 a6)
{
  _BYTE v10[152]; // [rsp+8h] [rbp-C8h] BYREF

  sub_10003E3D0((__int64)v10, a6, 0);
  LODWORD(a3) = sub_10003C370((__int64)v10, a2, 0, a4, a3, a1, a5);
  sub_10003E5C0((__int64)v10);
  return (unsigned int)a3;
}
