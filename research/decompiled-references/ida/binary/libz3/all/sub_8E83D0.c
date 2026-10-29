__int64 __fastcall sub_8E83D0(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // ebp
  unsigned int *v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rdi

  result = *(_QWORD *)(a1 + 8768);
  if ( result )
  {
    v2 = 0;
    while ( v2 < *(_DWORD *)(result - 4) && *(_QWORD *)(a1 + 8984) == qword_1C7EC50 && !*(_BYTE *)(a1 + 2416) )
    {
      v4 = (unsigned int *)(result + 12LL * v2);
      v5 = *v4;
      v6 = v4[1];
      v7 = v4[2];
      if ( (_DWORD)v5 == -1 )
        BUG();
      v8 = *(_QWORD *)(a1 + 8672);
      if ( v8 )
      {
        if ( (unsigned int)v5 >= *(_DWORD *)(v8 - 4) )
          v8 = 0;
        else
          v8 = *(_QWORD *)(v8 + 8 * v5);
      }
      ++v2;
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v8 + 64LL))(v8, v6, v7);
      result = *(_QWORD *)(a1 + 8768);
      if ( !result )
        return result;
    }
    *(_DWORD *)(result - 4) = 0;
  }
  return result;
}

