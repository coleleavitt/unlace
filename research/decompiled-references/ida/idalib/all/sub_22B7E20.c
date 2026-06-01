__int64 __fastcall sub_22B7E20(__int64 a1)
{
  unsigned __int64 v1; // rax
  bool v2; // zf
  unsigned __int64 v3; // rsi
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 44) != 28 )
    return 2;
  v1 = sub_22B7B00(a1);
  v2 = (_DWORD)v1 == 0;
  v3 = v1;
  result = 2;
  if ( !v2 )
    return v3;
  return result;
}
