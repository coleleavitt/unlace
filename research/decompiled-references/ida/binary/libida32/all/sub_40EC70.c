__int64 __fastcall sub_40EC70(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rdx

  result = a2;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 1448LL);
  v4 = *(unsigned int *)(v3 + 72);
  if ( (_DWORD)v4 )
  {
    v5 = 0;
    while ( *(_DWORD *)(v3 + 8 * v5 + 8) != (_DWORD)result )
    {
      if ( v4 == ++v5 )
        return result;
    }
    return *(unsigned int *)(v3 + 4LL * (2 * (int)v5 + 1) + 8);
  }
  return result;
}

