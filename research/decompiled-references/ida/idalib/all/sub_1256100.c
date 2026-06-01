unsigned __int64 __fastcall sub_1256100(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 result; // rax
  char *v5; // rsi
  char *v6; // rsi
  _DWORD v7[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  result = sub_1252DD0(*(_QWORD *)(a1 + 112), *(char **)a2, (char *)(*(_QWORD *)a2 + *(_QWORD *)(a2 + 8)), 0);
  v7[0] = result;
  if ( !(_WORD)result && (result & 0x10000) == 0 )
    abort();
  if ( a3 )
  {
    v5 = *(char **)(a1 + 80);
    if ( v5 == *(char **)(a1 + 88) )
    {
      return sub_1255EE0(a1 + 72, v5, (__int64)v7);
    }
    else
    {
      *(_WORD *)v5 = result;
      v6 = v5 + 4;
      *(v6 - 2) = BYTE2(result);
      *(_QWORD *)(a1 + 80) = v6;
    }
  }
  else
  {
    *(_WORD *)(a1 + 96) |= result;
    *(_BYTE *)(a1 + 98) |= BYTE2(result);
  }
  return result;
}
