/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46CF80
// Address: 0x000000000046CF80

//----- (000000000046CF80) ----------------------------------------------------
void *__fastcall sub_46CF80(char **a1, __int64 a2)
{
  __int64 v2; // rdx
  size_t v4; // rax
  const char *v5; // rsi
  _BYTE v7[5]; // [rsp+3h] [rbp-25h] BYREF
  unsigned __int64 v8[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = *(unsigned int *)(a2 + 4);
  v8[0] = __readfsqword(0x28u);
  v4 = sub_47FB50(v7, (unsigned __int64)v8, v2) - v7;
  if ( v4 )
    sub_46B720(a1, v7, v4);
  v5 = s1;
  if ( *(_QWORD *)(a2 + 16) )
    v5 = *(const char **)(a2 + 8);
  return sub_45BFB0(a1, v5);
}
