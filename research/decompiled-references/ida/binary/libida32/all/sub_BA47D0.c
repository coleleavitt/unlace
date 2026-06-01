__int64 __fastcall sub_BA47D0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // rsi

  if ( !a2 )
    return 1;
  if ( (*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL) == 0
    || (result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1), (_BYTE)result) )
  {
    if ( (unsigned int)sub_E6C2C0(a2) == 3 )
    {
      v4 = 0;
      if ( ((*(__int64 *)(a2 + 8) >> 1) & 3) == 2 )
        v4 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF0LL;
      return (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 128LL))(a1, v4);
    }
    else
    {
      return 1;
    }
  }
  return result;
}

