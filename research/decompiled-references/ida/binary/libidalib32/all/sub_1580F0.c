__int64 __fastcall sub_1580F0(TView *a1, unsigned __int16 *a2)
{
  __int64 result; // rax
  unsigned __int16 v3; // ax

  sub_152F50(a1, (__int64)a2);
  result = *a2;
  if ( (_WORD)result == 16 )
  {
    result = *((unsigned __int8 *)a2 + 8);
    if ( (_BYTE)result == 60 )
    {
      *a2 = 256;
      v3 = unk_24DF04;
    }
    else
    {
      if ( (_BYTE)result != 62 )
        return result;
      *a2 = 256;
      v3 = unk_24DEE8;
    }
    a2[4] = v3;
    return sub_152ED0((__int64)a1, (__int64)a2);
  }
  if ( (_WORD)result == 512 && a2[4] == 5000 )
    return sub_F42C0((__int64)a1);
  return result;
}

