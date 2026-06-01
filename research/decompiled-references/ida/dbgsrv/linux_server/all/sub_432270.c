/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_432270
// Address: 0x0000000000432270

//----- (0000000000432270) ----------------------------------------------------
void *__fastcall sub_432270(__int64 a1, const char *a2, size_t a3)
{
  void **v5; // r12
  _BYTE *v6; // rax
  void *v7; // rsi
  void *result; // rax
  void *v9; // rax

  v5 = *(void ***)(a1 + 200);
  *(_BYTE *)(a1 + 212) = -88;
  v6 = v5[1];
  v7 = *v5;
  if ( v5[2] < v6 + 1 )
  {
    v9 = sub_481540((__int64)v5, v7, (unsigned __int64)(v6 + 1), 1u);
    *v5 = v9;
    v7 = v9;
    v6 = v5[1];
  }
  v6[(_QWORD)v7] = -88;
  v5[1] = (char *)v5[1] + 1;
  ++*(_DWORD *)(a1 + 208);
  if ( !a3 )
    a3 = strlen(a2);
  sub_4313E0(a1, a3);
  sub_4313E0(a1, WORD1(a3));
  result = sub_438B30(*(char ***)(a1 + 200), a2, a3);
  *(_DWORD *)(a1 + 208) += a3;
  return result;
}
