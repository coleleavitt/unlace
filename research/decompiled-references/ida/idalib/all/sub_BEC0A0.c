__int64 __fastcall sub_BEC0A0(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rsi
  unsigned __int64 v4; // rsi
  __int64 result; // rax
  __int64 *v6[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = a2;
  v3 = *(_QWORD *)(a2 + 48);
  v6[0] = a1;
  if ( (v3 & 4) != 0 )
  {
    v4 = v3 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v4 )
      return sub_BEBFA0(v6, v2);
  }
  else
  {
    v4 = v2;
  }
  result = sub_BEBFA0(v6, v4);
  if ( (_BYTE)result && *((_BYTE *)v6[0] + 10) )
  {
    if ( (*(_QWORD *)(v2 + 48) & 4) == 0 )
      v2 = *(_QWORD *)(v2 + 48) & 0xFFFFFFFFFFFFFFF8LL;
    return sub_BEBFA0(v6, v2);
  }
  return result;
}
