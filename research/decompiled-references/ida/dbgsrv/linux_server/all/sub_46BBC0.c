/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46BBC0
// Address: 0x000000000046BBC0

//----- (000000000046BBC0) ----------------------------------------------------
unsigned __int64 __fastcall sub_46BBC0(char **a1, __int64 a2)
{
  const char *v3; // rsi
  size_t v4; // rax
  size_t v5; // rax
  size_t v6; // rax
  _BYTE v8[10]; // [rsp+Eh] [rbp-3Ah] BYREF
  _QWORD v9[6]; // [rsp+18h] [rbp-30h] BYREF

  v9[0] = __readfsqword(0x28u);
  v3 = s1;
  if ( *(_QWORD *)(a2 + 8) )
    v3 = *(const char **)a2;
  sub_45BFB0(a1, v3);
  v4 = sub_47FC90(v8, (unsigned __int64)v9, *(_QWORD *)(a2 + 24) + 1LL) - v8;
  if ( v4 )
    sub_46B720(a1, v8, v4);
  v5 = sub_47FC90(v8, (unsigned __int64)v9, *(_QWORD *)(a2 + 32) + 1LL) - v8;
  if ( v5 )
    sub_46B720(a1, v8, v5);
  v6 = sub_47FC90(v8, (unsigned __int64)v9, *(_QWORD *)(a2 + 40) + 1LL) - v8;
  if ( v6 )
    sub_46B720(a1, v8, v6);
  return v9[0] - __readfsqword(0x28u);
}
