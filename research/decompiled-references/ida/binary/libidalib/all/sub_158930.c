__int64 __fastcall sub_158930(TView *a1, unsigned __int16 *a2)
{
  __int64 result; // rax
  unsigned __int16 v3; // ax

  sub_153750(a1, (__int64)a2);
  result = *a2;
  if ( (_WORD)result == 16 )
  {
    result = *((unsigned __int8 *)a2 + 8);
    if ( (_BYTE)result == 60 )
    {
      *a2 = 256;
      v3 = unk_24EF64;
    }
    else
    {
      if ( (_BYTE)result != 62 )
        return result;
      *a2 = 256;
      v3 = unk_24EF48;
    }
    a2[4] = v3;
    return sub_1536D0((__int64)a1, (__int64)a2);
  }
  if ( (_WORD)result == 512 && a2[4] == 5000 )
    return sub_F50B0((__int64)a1);
  return result;
}

