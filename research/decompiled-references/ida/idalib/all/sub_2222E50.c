__int64 __fastcall sub_2222E50(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  const void *v3; // r13
  signed __int64 v4; // rbp
  __int64 v5; // r12

  result = *(unsigned int *)(a1 + 8);
  v3 = *(const void **)a2;
  v4 = 4LL * *(unsigned int *)(a2 + 8);
  v5 = v4 >> 2;
  if ( (v4 >> 2) + result > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    sub_2237220(a1, a1 + 16, v5 + result, 4);
    result = *(unsigned int *)(a1 + 8);
  }
  if ( v4 )
  {
    memcpy((void *)(*(_QWORD *)a1 + 4 * result), v3, v4);
    result = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(a1 + 8) = result + v5;
  return result;
}
