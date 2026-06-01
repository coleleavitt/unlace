/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49758
// Address: 0x00049758

//----- (00049758) --------------------------------------------------------
int sub_49758(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        ...)
{
  unsigned __int8 *v16; // r5
  unsigned int v17; // r0
  va_list va; // [sp+30h] [bp+30h] BYREF

  va_start(va, a16);
  v17 = sub_4AAC8(v16, (unsigned __int8 *)va) - 2;
  if ( v17 > 7 )
    v17 = sub_4A3B0(v17);
  return ((int (*)(void))((char *)dword_49778 + 2 * *((unsigned __int16 *)dword_49778 + v17) + 2))();
}
// 4975C: variable 'v16' is possibly undefined
// 49778: using guessed type int dword_49778[8];
// 4A3B0: using guessed type int __fastcall sub_4A3B0(_DWORD);
