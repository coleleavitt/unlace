__int64 __fastcall sub_10AE1D0(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 *v6; // r13
  __int64 v9; // rdi

  if ( *(_DWORD *)(a1 + 8) != 2 )
  {
    v3 = *(__int64 **)(a1 + 16);
    result = *(unsigned int *)(a1 + 24);
    *(_QWORD *)(a1 + 72) = a3;
    v5 = *(_DWORD *)(a1 + 60) | a2;
    v6 = &v3[result];
    *(_DWORD *)(a1 + 60) = v5;
    if ( v3 != v6 )
    {
      while ( 1 )
      {
        v9 = *v3++;
        result = sub_10AE1D0(v9, v5, a3);
        if ( v6 == v3 )
          break;
        v5 = *(unsigned int *)(a1 + 60);
      }
    }
  }
  return result;
}

