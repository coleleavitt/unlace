/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46BD80
// Address: 0x000000000046BD80

//----- (000000000046BD80) ----------------------------------------------------
void *__fastcall sub_46BD80(char **a1, unsigned int *a2)
{
  __int64 v2; // rdx
  size_t v4; // rax
  size_t v5; // rax
  size_t v6; // rax
  const char *v7; // rsi
  _BYTE v9[5]; // [rsp+Eh] [rbp-3Ah] BYREF
  _BYTE v10[5]; // [rsp+13h] [rbp-35h] BYREF
  unsigned __int64 v11[6]; // [rsp+18h] [rbp-30h] BYREF

  v2 = *a2;
  v11[0] = __readfsqword(0x28u);
  v4 = sub_47FB50(v9, (unsigned __int64)v10, v2) - v9;
  if ( v4 )
    sub_46B720(a1, v9, v4);
  v5 = sub_47FB50(v9, (unsigned __int64)v10, *((unsigned __int8 *)a2 + 4)) - v9;
  if ( v5 )
    sub_46B720(a1, v9, v5);
  v6 = sub_47FC90(v9, (unsigned __int64)v11, *((_QWORD *)a2 + 1) + 1LL) - v9;
  if ( v6 )
    sub_46B720(a1, v9, v6);
  v7 = s1;
  if ( *((_QWORD *)a2 + 3) )
    v7 = *((const char **)a2 + 2);
  return sub_45BFB0(a1, v7);
}
