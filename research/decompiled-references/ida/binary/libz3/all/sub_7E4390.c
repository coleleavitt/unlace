__int64 __fastcall sub_7E4390(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdx

  v3 = a1 - 8;
  result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 64LL))(a2, a3 ^ 1u);
  v5 = *(_QWORD *)result;
  if ( !*(_QWORD *)result )
    return result;
  v6 = *(unsigned int *)(v5 - 4);
  v7 = v5 + 16 * v6;
  v8 = (16 * v6) >> 4;
  if ( (16 * v6) >> 6 )
  {
    result = *(_QWORD *)result;
    while ( v3 != *(_QWORD *)result || *(_DWORD *)(result + 8) != 2 )
    {
      if ( v3 == *(_QWORD *)(result + 16) && *(_DWORD *)(result + 24) == 2 )
      {
        result += 16;
        goto LABEL_17;
      }
      if ( v3 == *(_QWORD *)(result + 32) && *(_DWORD *)(result + 40) == 2 )
      {
        result += 32;
        goto LABEL_17;
      }
      if ( v3 == *(_QWORD *)(result + 48) && *(_DWORD *)(result + 56) == 2 )
      {
        result += 48;
        goto LABEL_17;
      }
      result += 64;
      if ( v5 + ((16 * v6) >> 6 << 6) == result )
      {
        v8 = (v7 - result) >> 4;
        goto LABEL_10;
      }
    }
    goto LABEL_17;
  }
  result = *(_QWORD *)result;
LABEL_10:
  if ( v8 == 2 )
  {
LABEL_30:
    if ( v3 != *(_QWORD *)result || *(_DWORD *)(result + 8) != 2 )
    {
      result += 16;
      goto LABEL_13;
    }
    goto LABEL_17;
  }
  if ( v8 != 3 )
  {
    if ( v8 != 1 )
      return result;
LABEL_13:
    if ( v3 != *(_QWORD *)result || *(_DWORD *)(result + 8) != 2 )
      return result;
    goto LABEL_17;
  }
  if ( v3 != *(_QWORD *)result || *(_DWORD *)(result + 8) != 2 )
  {
    result += 16;
    goto LABEL_30;
  }
LABEL_17:
  if ( v7 != result )
  {
    result += 16;
    if ( v7 != result )
    {
      do
      {
        v9 = *(_QWORD *)result;
        result += 16;
        *(_QWORD *)(result - 32) = v9;
        *(_DWORD *)(result - 24) = *(_DWORD *)(result - 8);
      }
      while ( v7 != result );
      LODWORD(v6) = *(_DWORD *)(v5 - 4);
    }
    *(_DWORD *)(v5 - 4) = v6 - 1;
  }
  return result;
}

