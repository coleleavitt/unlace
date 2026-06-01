__int64 __fastcall sub_C11090(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  __int64 v3; // rdx
  unsigned int v4; // r13d
  __int64 result; // rax
  unsigned int v6; // edx
  __int64 v7; // rbx
  unsigned __int64 v8; // r12
  __int64 v9; // rax

  v1 = *(_QWORD *)(a1 + 936);
  v2 = *(unsigned int *)(a1 + 944);
  v3 = v1 + 24 * v2;
  if ( v1 )
  {
    v4 = *(_DWORD *)(v1 - 4);
    result = sub_1383B90(a1 + 952, v4 - (unsigned int)v2, v3);
    v6 = *(_DWORD *)(a1 + 944);
    if ( v6 < v4 )
    {
      v7 = 24LL * v6;
      v8 = 24 * (v6 + (unsigned __int64)(v4 - v6 - 1) + 1);
      do
      {
        v9 = v7 + *(_QWORD *)(a1 + 936);
        v7 += 24;
        result = sub_C10940((__int64 *)a1, *(_QWORD *)(v9 + 8), *(_QWORD *)(v9 + 16));
      }
      while ( v8 != v7 );
    }
  }
  else
  {
    v4 = 0;
    result = sub_1383B90(a1 + 952, (unsigned int)-(int)v2, v3);
  }
  *(_DWORD *)(a1 + 944) = v4;
  return result;
}

