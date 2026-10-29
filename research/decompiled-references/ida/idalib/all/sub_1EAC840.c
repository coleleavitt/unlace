__int64 __fastcall sub_1EAC840(__int64 *a1, _DWORD *a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rcx
  __int64 result; // rax

  v3 = (unsigned int)*a2;
  *a2 = v3 + 1;
  v4 = *a1;
  v5 = 0;
  v6 = *(unsigned int *)(v4 + 8 * v3);
  v7 = a3[1];
  result = *a3;
  if ( v6 <= v7 )
  {
    v7 = v6;
    v5 = a3[1] - v6;
  }
  a3[1] = v5;
  *a3 = result + v7;
  return result;
}
