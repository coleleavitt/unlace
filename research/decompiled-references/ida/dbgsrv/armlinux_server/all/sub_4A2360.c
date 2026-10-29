/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A2360
// Address: 0x00000000004A2360

//----- (00000000004A2360) ----------------------------------------------------
unsigned int **__fastcall sub_4A2360(
        unsigned int **a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int8 a5)
{
  return sub_4A2198(a1, a2 - (_QWORD)*a1, a3 - a2, a4, a5);
}
