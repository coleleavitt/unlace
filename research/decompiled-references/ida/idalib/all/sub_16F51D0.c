void __fastcall sub_16F51D0(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        __int64 a6,
        __m128i a7,
        double a8)
{
  unsigned __int64 v8; // r15
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 *v15; // rcx
  unsigned __int64 v16; // [rsp+8h] [rbp-40h]

  v8 = a4;
  v13 = sub_BFBAE0(a2);
  v14 = *(unsigned int *)(a6 + 8);
  if ( v14 + 1 > (unsigned __int64)*(unsigned int *)(a6 + 12) )
  {
    v16 = v13;
    sub_2237220(a6, a6 + 16, v14 + 1, 16);
    v14 = *(unsigned int *)(a6 + 8);
    v13 = v16;
  }
  v15 = (unsigned __int64 *)(*(_QWORD *)a6 + 16 * v14);
  *v15 = v13;
  v15[1] = v8;
  ++*(_DWORD *)(a6 + 8);
  if ( a5 )
  {
    if ( a3 != *(_QWORD *)(v13 + 8) )
      sub_16F1980(a1, v13, a3, a4, nullptr, 0, a7, a8);
  }
}
