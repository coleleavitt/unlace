/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46B910
// Address: 0x000000000046B910

//----- (000000000046B910) ----------------------------------------------------
void *__fastcall sub_46B910(char **a1, __int64 *a2)
{
  __int64 v2; // rax
  size_t v4; // rax
  size_t v5; // rax
  const char *v6; // rsi
  _BYTE v8[10]; // [rsp+Eh] [rbp-3Ah] BYREF
  _QWORD v9[6]; // [rsp+18h] [rbp-30h] BYREF

  v2 = *a2;
  v9[0] = __readfsqword(0x28u);
  v4 = sub_47FC90(v8, (unsigned __int64)v9, v2 + 1) - v8;
  if ( v4 )
    sub_46B720(a1, v8, v4);
  v5 = sub_47FC90(v8, (unsigned __int64)v9, a2[1] + 1) - v8;
  if ( v5 )
    sub_46B720(a1, v8, v5);
  v6 = s1;
  if ( a2[3] )
    v6 = (const char *)a2[2];
  return sub_45BFB0(a1, v6);
}
