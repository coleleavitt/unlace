__int64 __fastcall sub_21E7BF0(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  size_t v3; // r14
  unsigned __int64 v5; // rbx
  __int64 result; // rax

  v3 = a3 - a2;
  v5 = 0xCCCCCCCCCCCCCCCDLL * ((a3 - a2) >> 3);
  result = *(unsigned int *)(a1 + 8);
  if ( v5 + result > *(unsigned int *)(a1 + 12) )
  {
    sub_2237220(a1, a1 + 16, v5 + result, 40);
    result = *(unsigned int *)(a1 + 8);
  }
  if ( a2 != a3 )
  {
    memcpy((void *)(*(_QWORD *)a1 + 40 * result), a2, v3);
    result = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(a1 + 8) = result + v5;
  return result;
}
