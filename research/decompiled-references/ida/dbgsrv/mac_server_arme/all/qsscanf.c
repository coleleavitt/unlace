/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsscanf
// Address: 0x00000001000794F8

//----- (00000001000794F8) ----------------------------------------------------
__int64 __fastcall qsscanf(
        const char *a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  return qvsscanf(a1, a2, &a9);
}
