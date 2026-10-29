__int64 __fastcall sub_8E8A60(__int64 a1, int a2)
{
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rax
  int v5; // ecx
  __int64 result; // rax
  int v7; // edx

  v2 = *(_QWORD *)(a1 + 8856);
  v3 = (unsigned int)(2 * a2);
  v4 = *(_QWORD *)(v2 + 8 * v3);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 - 4);
    *(_DWORD *)(v4 - 12) = 0;
    *(_DWORD *)(v4 - 8) = v5;
  }
  result = *(_QWORD *)(v2 + 8LL * ((unsigned int)v3 | 1));
  if ( result )
  {
    v7 = *(_DWORD *)(result - 4);
    *(_DWORD *)(result - 12) = 0;
    *(_DWORD *)(result - 8) = v7;
  }
  return result;
}

