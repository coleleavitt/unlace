__int64 __fastcall sub_B06530(__int64 *a1)
{
  unsigned int v1; // ebp
  __int64 result; // rax
  __int64 v3; // rbx
  int v4; // edx
  __int64 v5; // rsi

  v1 = 0;
  result = *a1;
  if ( *a1 )
  {
    while ( v1 < *(_DWORD *)(result - 4) )
    {
      v3 = 40LL * v1;
      v4 = *(_DWORD *)(result + v3);
      if ( (v4 & 1) != 0 )
      {
        v5 = result + v3 + 8;
        ++v1;
        *(_DWORD *)(v5 - 8) = v4 ^ 1;
        sub_1831620(qword_1C7F2C0, v5);
        sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)(a1 + 1), *a1 + v3 + 8, (__int64)(a1 + 1));
        result = *a1;
        if ( !*a1 )
          return result;
      }
      else
      {
        ++v1;
        if ( !result )
          return result;
      }
    }
  }
  return result;
}

