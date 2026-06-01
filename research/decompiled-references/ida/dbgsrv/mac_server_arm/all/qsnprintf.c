/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsnprintf
// Address: 0x00000001000742D0

//----- (00000001000742D0) ----------------------------------------------------
size_t __fastcall qsnprintf(
        char *a1,
        size_t a2,
        char *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  return qvsnprintf(a1, a2, a3, &a9);
}
