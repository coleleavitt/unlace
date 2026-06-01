__int64 __fastcall sub_B6EFE0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v8; // rax
  __int64 v10; // rsi
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // rdx

  v8 = sub_B8C330(a1);
  v10 = v8;
  result = sub_B68280(a4, v8, a1, a2, a3, a5);
  if ( (_BYTE)result )
  {
    v14 = *(unsigned __int8 *)(a4 + 361);
    if ( (_BYTE)v14 )
    {
      result = *(unsigned __int8 *)(a4 + 361);
      if ( *(_BYTE *)(a4 + 360) )
        return sub_B6ED10(a4, v10, v14, v12, v13);
    }
  }
  return result;
}
