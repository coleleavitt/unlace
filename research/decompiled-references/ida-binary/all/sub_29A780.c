__int64 __fastcall sub_29A780(__int64 a1, int a2)
{
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 result; // rax
  int v5; // ecx
  int v6; // edx
  int v7; // edx

  v2 = a2;
  v3 = *(_QWORD *)(a1 + 80);
  result = v2;
  v5 = *(_DWORD *)(v3 + 4 * v2) & 0x7FFFFFFF;
  if ( (_DWORD)v2 != v5 )
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(v3 + 4LL * v5);
      if ( v6 < 0 )
        result = (unsigned int)v5;
      v7 = v6 & 0x7FFFFFFF;
      if ( v5 == v7 )
        break;
      v5 = v7;
    }
  }
  return result;
}
