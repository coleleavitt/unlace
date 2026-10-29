__int64 __fastcall sub_15063B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  const void *v3; // r13
  signed __int64 v4; // rbp
  __int64 v5; // r12
  __int64 result; // rax

  v2 = *(unsigned int *)(a1 + 8);
  v3 = *(const void **)a2;
  v4 = 8LL * *(unsigned int *)(a2 + 8);
  v5 = v4 >> 3;
  if ( v2 + (v4 >> 3) > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    sub_2237220(a1, a1 + 16, v2 + v5, 8);
    v2 = *(unsigned int *)(a1 + 8);
  }
  if ( v4 )
  {
    memcpy((void *)(*(_QWORD *)a1 + 8 * v2), v3, v4);
    v2 = *(unsigned int *)(a1 + 8);
  }
  result = v5 + v2;
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
