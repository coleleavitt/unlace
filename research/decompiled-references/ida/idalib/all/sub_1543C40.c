__int64 __fastcall sub_1543C40(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 *v3; // rbx
  __int64 v4; // rbp
  unsigned __int64 v5; // rdx
  __int64 *v6; // rbp
  __int64 result; // rax
  __int64 v8; // rcx

  v2 = *(unsigned int *)(a1 + 8);
  v3 = *(__int64 **)a2;
  v4 = 32LL * *(unsigned int *)(a2 + 8);
  v5 = v2 + (v4 >> 5);
  if ( v5 > *(unsigned int *)(a1 + 12) )
  {
    sub_2237220(a1, a1 + 16, v5, 16);
    v2 = *(unsigned int *)(a1 + 8);
    LODWORD(v5) = v2 + (v4 >> 5);
  }
  v6 = &v3[(unsigned __int64)v4 / 8];
  for ( result = *(_QWORD *)a1 + 16 * v2; v6 != v3; *(_QWORD *)(result - 8) = *(v3 - 3) )
  {
    v8 = *v3;
    v3 += 4;
    result += 16;
    *(_QWORD *)(result - 16) = v8;
  }
  *(_DWORD *)(a1 + 8) = v5;
  return result;
}
