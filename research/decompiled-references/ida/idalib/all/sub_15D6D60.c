__int64 __fastcall sub_15D6D60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v4; // rbx

  result = *(unsigned int *)(a2 + 8);
  v4 = ((unsigned __int64)((*(_BYTE *)(a3 + 1) & 8) != 0) << 32) | 5;
  if ( result + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
  {
    sub_2237220(a2, a2 + 16, result + 1, 8);
    result = *(unsigned int *)(a2 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a2 + 8 * result) = v4;
  ++*(_DWORD *)(a2 + 8);
  return result;
}
