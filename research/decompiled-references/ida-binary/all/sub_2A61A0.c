__int64 __fastcall sub_2A61A0(
        int a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  const char *v10; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  __m128 v14; // xmm4
  __m128 v15; // xmm5
  __int64 v16; // rsi
  __int64 result; // rax
  char v18; // [rsp+0h] [rbp-1048h]
  _BYTE v19[10]; // [rsp+6h] [rbp-1042h] BYREF
  _BYTE v20[4104]; // [rsp+10h] [rbp-1038h] BYREF
  unsigned __int64 v21; // [rsp+1018h] [rbp-30h]

  v10 = "dot";
  v21 = __readfsqword(0x28u);
  if ( a1 != 0x2000 )
    v10 = "gdl";
  get_root_filename(v20, 4096);
  *(double *)a3.m128_u64 = qsnprintf(v19, 10, "*.%s", v10);
  v16 = sub_17CD60(
          1u,
          (int)v19,
          (int)"Please specify the graph output file for %s",
          (__int64)v20,
          v12,
          v13,
          a3,
          a4,
          a5,
          a6,
          v14,
          v15,
          a9,
          a10,
          v18);
  result = 0;
  if ( v16 )
  {
    qstrncpy(a2, v16, 4096);
    return 1;
  }
  return result;
}
