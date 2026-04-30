__int64 __fastcall sub_539A10(__int64 a1, __int64 *a2, double a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // rbx
  __int64 result; // rax
  __int64 v9; // rbp
  const char *v10; // rdx
  unsigned int v11; // ecx
  unsigned __int64 v12; // rsi

  v7 = *a2;
  result = 3 * a2[1];
  v9 = *a2 + 24 * a2[1];
  if ( v9 != *a2 )
  {
    do
    {
      v10 = *(const char **)(v7 + 8);
      v11 = *(_DWORD *)(v7 + 16);
      v12 = *(_QWORD *)v7;
      if ( !v10 )
        v10 = *(const char **)(a1 + 96);
      v7 += 24;
      result = sub_5397E0(a1, v12, v10, *(_DWORD *)(a1 + 120) | v11, nullptr, a7, a3);
    }
    while ( v9 != v7 );
  }
  return result;
}
