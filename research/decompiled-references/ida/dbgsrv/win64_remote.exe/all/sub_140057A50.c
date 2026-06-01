/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140057A50
// Address: 0x0000000140057A50

//----- (0000000140057A50) ----------------------------------------------------
__int64 __fastcall sub_140057A50(__int64 a1, void *a2, size_t a3)
{
  size_t v6; // rbx
  size_t v7; // rbp
  char *v8; // r14
  size_t v9; // rax

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 144LL))(*(_QWORD *)(a1 + 32))
    || !*(_QWORD *)(a1 + 176) && (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, 0) <= 0 )
  {
    return -1;
  }
  v6 = *(_QWORD *)(a1 + 176);
  v7 = v6;
  v8 = *(char **)(a1 + 168);
  if ( a3 < v6 )
    v7 = a3;
  memcpy(a2, *(const void **)(a1 + 168), v7);
  if ( v7 >= v6 )
  {
    v9 = 0;
  }
  else
  {
    memcpy(v8, &v8[v7], *(_QWORD *)(a1 + 168) + *(_QWORD *)(a1 + 176) - (_QWORD)&v8[v7]);
    v9 = *(_QWORD *)(a1 + 176) - v7;
  }
  *(_QWORD *)(a1 + 176) = v9;
  return v7;
}
