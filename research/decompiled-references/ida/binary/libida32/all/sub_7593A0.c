__int64 __fastcall sub_7593A0(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rdx

  result = *a2;
  if ( (_DWORD)result != -1 )
  {
    if ( (_DWORD)result )
    {
      if ( (unsigned __int64)(unsigned int)result >= *(_QWORD *)(a1 + 56) )
        return 0xFFFFFFFFLL;
      v3 = *(_QWORD *)(a1 + 48);
      v4 = v3 + 176LL * (unsigned int)result;
      if ( (*(_BYTE *)(v4 + 164) & 2) != 0 )
      {
        return 0xFFFFFFFFLL;
      }
      else
      {
        v5 = *(unsigned int *)(v4 + 160);
        v6 = v3 + 176 * v5;
        v7 = *(_QWORD *)(v6 + 24);
        v8 = v7 + 5LL * *(_QWORD *)(v6 + 32);
        if ( v8 == v7 )
        {
LABEL_11:
          if ( !under_debugger )
            interr(1790);
          BUG();
        }
        v9 = 0;
        while ( !*(_BYTE *)(v7 + 4) || (_DWORD)result != *(_DWORD *)v7 )
        {
          v7 += 5;
          ++v9;
          if ( v7 == v8 )
            goto LABEL_11;
        }
        return (unsigned int)v5;
      }
    }
    else
    {
      return 0xFFFFFFFFLL;
    }
  }
  return result;
}

