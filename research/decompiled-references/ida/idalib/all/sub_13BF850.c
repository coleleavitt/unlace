__int64 __fastcall sub_13BF850(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rsi
  __int64 result; // rax
  __int64 v6; // [rsp+8h] [rbp-10h]

  v4 = *(_QWORD *)(a1 + 8);
  if ( (v4 & 1) != 0 )
  {
    if ( a2 )
    {
      result = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a2 + 32LL))(a2, v4 >> 1);
      *(_QWORD *)(a1 + 8) = result;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    result = 0;
    if ( v4 )
    {
      result = *(_QWORD *)(a1 + 8);
      if ( (*(_BYTE *)(v4 + 4) & 0x10) != 0 )
      {
        v6 = *(_QWORD *)(a1 + 8);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
        return v6;
      }
    }
  }
  return result;
}
