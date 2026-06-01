__int64 __fastcall sub_1F80F20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // [rsp+8h] [rbp-10h]

  result = sub_1F80CA0(a1, a2, a3, a4, a5, a6);
  v8 = *(unsigned int *)(a3 + 8);
  if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    v9 = result;
    sub_2237220(a3, a3 + 16, v8 + 1, 8);
    v8 = *(unsigned int *)(a3 + 8);
    result = v9;
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v8) = result;
  ++*(_DWORD *)(a3 + 8);
  return result;
}
