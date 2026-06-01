__int64 __fastcall sub_152ED0(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 result; // rax
  unsigned int v5; // [rsp+Ch] [rbp-1Ch]

  v3 = sub_19B130(*(unsigned __int16 *)(a2 + 8));
  result = 0;
  if ( v3 )
  {
    if ( (*(_BYTE *)(v3 + 114) & 0x20) == 0 )
    {
      v5 = sub_152A20(a1, v3);
      TView::clearEvent(a1, a2);
      return v5;
    }
  }
  return result;
}

