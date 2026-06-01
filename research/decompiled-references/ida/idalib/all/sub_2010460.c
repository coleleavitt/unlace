__int64 __fastcall sub_2010460(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  size_t v3; // r14
  __int64 result; // rax
  __int64 v6; // rbp

  v3 = a3 - a2;
  result = *(unsigned int *)(a1 + 8);
  v6 = (a3 - a2) >> 2;
  if ( v6 + result > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    sub_2237220(a1, a1 + 16, v6 + result, 4);
    result = *(unsigned int *)(a1 + 8);
  }
  if ( a2 != a3 )
  {
    memcpy((void *)(*(_QWORD *)a1 + 4 * result), a2, v3);
    result = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(a1 + 8) = result + v6;
  return result;
}
