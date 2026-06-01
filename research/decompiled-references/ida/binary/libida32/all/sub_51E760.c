__int64 __fastcall sub_51E760(__int64 a1, const char *a2, char a3)
{
  __int64 result; // rax
  int v5; // edx
  int v6; // ecx

  result = sub_51ABF0(a1 + 40, a2);
  if ( (_BYTE)result )
  {
    v5 = *(_DWORD *)(a1 + 116);
    v6 = v5;
    BYTE1(v5) |= 8u;
    BYTE1(v6) &= ~8u;
    if ( a3 )
      v5 = v6;
    *(_DWORD *)(a1 + 116) = v5;
  }
  return result;
}

