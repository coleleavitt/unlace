__int64 __fastcall sub_2223210(__int64 a1, __int64 *a2, __int64 *a3, __int64 a4)
{
  unsigned int v5; // eax
  unsigned int v6; // esi
  __int64 result; // rax
  __int64 v9; // r15
  int v10; // r12d

  v5 = *(_DWORD *)(a1 + 12) + 1;
  v6 = 2 * *(_DWORD *)(a1 + 8);
  if ( v5 > v6 )
  {
    sub_2222FC0(a1, v6, a4);
    v9 = *(_QWORD *)a1;
    v10 = *(_DWORD *)(a1 + 8);
    a3 = (__int64 *)(v9 + 8LL * ((*(unsigned int (__fastcall **)(__int64, __int64 *))(a4 + 16))(a1, a2) & (v10 - 1)));
    v5 = *(_DWORD *)(a1 + 12) + 1;
  }
  *(_DWORD *)(a1 + 12) = v5;
  result = *a3;
  if ( !*a3 )
    result = (unsigned __int64)a3 | 1;
  *a2 = result;
  *a3 = (__int64)a2;
  return result;
}
