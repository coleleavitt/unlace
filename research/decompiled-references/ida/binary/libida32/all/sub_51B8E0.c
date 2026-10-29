__int64 __fastcall sub_51B8E0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi
  __int64 result; // rax

  if ( a2 <= 0xFF )
    return 0;
  v2 = a2 >> 9;
  if ( v2 < *(_QWORD *)(a1 + 152) && (result = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v2)) != 0 )
  {
    if ( !*(_DWORD *)(result + 64) && !*(_DWORD *)(a1 + 128) )
    {
      if ( !under_debugger )
        interr(878);
      goto LABEL_19;
    }
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 134) && !*(_DWORD *)(a1 + 128) )
    {
      if ( !under_debugger )
        interr(918);
LABEL_19:
      BUG();
    }
    result = 0;
  }
  if ( (~(unsigned __int8)*(_WORD *)(result + 68) & 0x70) == 0 )
  {
    if ( *(_QWORD *)result <= 0xFFu )
      return 0;
    else
      return sub_51B750(a1, *(_QWORD *)result);
  }
  return result;
}

