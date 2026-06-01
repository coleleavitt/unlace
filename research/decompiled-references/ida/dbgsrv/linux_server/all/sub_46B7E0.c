/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46B7E0
// Address: 0x000000000046B7E0

//----- (000000000046B7E0) ----------------------------------------------------
void *__fastcall sub_46B7E0(char **a1, __int64 a2)
{
  __int64 v2; // rax
  size_t v4; // rax
  size_t v5; // rax
  size_t v6; // rax
  size_t v7; // rax
  const char *v8; // rsi
  const char *v9; // rsi
  _BYTE v11[5]; // [rsp+Eh] [rbp-3Ah] BYREF
  _BYTE v12[5]; // [rsp+13h] [rbp-35h] BYREF
  _QWORD v13[6]; // [rsp+18h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a2 + 64);
  v13[0] = __readfsqword(0x28u);
  v4 = sub_47FC90(v11, (unsigned __int64)v13, v2 + 1) - v11;
  if ( v4 )
    sub_46B720(a1, v11, v4);
  v5 = sub_47FC90(v11, (unsigned __int64)v13, *(_QWORD *)a2 + 1LL - 16LL * *(_QWORD *)(a2 + 64)) - v11;
  if ( v5 )
    sub_46B720(a1, v11, v5);
  v6 = sub_47FC90(v11, (unsigned __int64)v13, *(_QWORD *)(a2 + 8) + 1LL - *(_QWORD *)a2) - v11;
  if ( v6 )
    sub_46B720(a1, v11, v6);
  v7 = sub_47FB50(
         v11,
         (unsigned __int64)v12,
         *(unsigned __int8 *)(a2 + 73) | (16 * (unsigned int)*(unsigned __int8 *)(a2 + 72)))
     - v11;
  if ( v7 )
    sub_46B720(a1, v11, v7);
  v8 = s1;
  if ( *(_QWORD *)(a2 + 24) )
    v8 = *(const char **)(a2 + 16);
  sub_45BFB0(a1, v8);
  v9 = s1;
  if ( *(_QWORD *)(a2 + 48) )
    v9 = *(const char **)(a2 + 40);
  return sub_45BFB0(a1, v9);
}
