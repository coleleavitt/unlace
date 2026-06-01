/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000078A0
// Address: 0x00000001000078A0

//----- (00000001000078A0) ----------------------------------------------------
__int64 __fastcall sub_1000078A0(
        _QWORD *a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5,
        int a6,
        double a7,
        double a8,
        char *__s,
        int a10)
{
  __int64 result; // rax
  unsigned int v11; // r14d
  char v12; // cl
  __int64 v13; // [rsp+0h] [rbp-20h] BYREF

  result = sub_100060270(a1, a2, a3, a4, a5, a6 | 0x50u, __s, a10, &v13);
  if ( (int)result >= 0 && v13 )
  {
    v11 = result;
    qsleep(250);
    v12 = sub_100007020((__int64)a1, v13, a7, a8);
    result = v11;
    if ( !v12 )
      return 4294967294LL;
  }
  return result;
}
