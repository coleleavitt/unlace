const char *__fastcall sub_118A730(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  const char *result; // rax
  __int64 v7; // rcx
  const char *v8; // [rsp+8h] [rbp-20h]

  v4 = *(unsigned int *)(a3 + 8);
  if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    sub_2237220(a3, a3 + 16, v4 + 1, 8);
    v4 = *(unsigned int *)(a3 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v4) = "-target-abi";
  v5 = *(_QWORD *)(a1 + 24);
  ++*(_DWORD *)(a3 + 8);
  result = sub_114B080(*(__int64 **)(v5 + 8), a2, (_DWORD *)(v5 + 16));
  v7 = *(unsigned int *)(a3 + 8);
  if ( v7 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    v8 = result;
    sub_2237220(a3, a3 + 16, v7 + 1, 8);
    v7 = *(unsigned int *)(a3 + 8);
    result = v8;
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v7) = result;
  ++*(_DWORD *)(a3 + 8);
  return result;
}
