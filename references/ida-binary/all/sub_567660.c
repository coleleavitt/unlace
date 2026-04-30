char *__fastcall sub_567660(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        unsigned __int64 *a9,
        __int64 a10)
{
  char v10; // r12
  __int64 v11; // r13
  unsigned __int64 v12; // r14
  size_t v13; // rbp
  char *v14; // rbx
  char v16[57]; // [rsp+Fh] [rbp-39h] BYREF

  v10 = 1;
  v11 = *(_QWORD *)(a10 + 8);
  if ( WORD2(a8) != 0xFFFF )
  {
    v10 = 0;
    if ( WORD2(a8) != 0xFFFE )
      v10 = *(_BYTE *)(*(_QWORD *)(v11 + 104) + 3LL * WORD2(a8));
  }
  v12 = *a9;
  v13 = sub_5630C0(*a9, v16, 1u, *(_QWORD *)(a10 + 8), 0, WORD2(a8), v10, "__ROOT__") + 1;
  v14 = (char *)off_8C52B8(v13);
  sub_5630C0(v12, v14, v13, v11, 0, WORD2(a8), v10, "__ROOT__");
  return v14;
}
