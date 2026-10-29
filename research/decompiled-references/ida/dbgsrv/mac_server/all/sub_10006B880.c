/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006B880
// Address: 0x000000010006B880

//----- (000000010006B880) ----------------------------------------------------
char *__fastcall sub_10006B880(__int64 a1, char a2, __int64 a3)
{
  signed int v4; // r12d
  __darwin_time_t v5; // rax
  unsigned __int64 v6; // r12
  char *result; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx

  v4 = *(_DWORD *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 8) != 0 && v4 >= 0 )
  {
    v5 = qtime64();
    v6 = sub_10006AA00(v5, v4);
  }
  else
  {
    v6 = 0;
  }
  result = *(char **)(a1 + 32);
  v8 = *(_QWORD *)(a1 + 40);
  if ( *(_QWORD *)(a1 + 48) < (unsigned __int64)(v8 + 1) )
  {
    result = (char *)qvector_reserve(a1 + 32, result, v8 + 1, 0x20u);
    *(_QWORD *)(a1 + 32) = result;
    v8 = *(_QWORD *)(a1 + 40);
  }
  v9 = 32 * v8;
  *(_QWORD *)&result[v9] = a3;
  *(_QWORD *)&result[v9 + 8] = 0;
  *(_QWORD *)&result[v9 + 16] = v6;
  result[v9 + 24] = a2;
  ++*(_QWORD *)(a1 + 40);
  return result;
}
