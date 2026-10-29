__int64 __fastcall sub_61CB20(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // rsi
  __int64 *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rax

  if ( (*(_BYTE *)(a2 + 60) & 4) == 0 || (result = sub_61C6C0(a1, a2 + 80), !(_BYTE)result) )
  {
    if ( *(_QWORD *)(a2 + 72) <= 7u )
      return 0;
    result = 0;
    if ( (*(_QWORD *)(a2 + 72) & 6LL) != 2 )
    {
      if ( !(_BYTE)qword_4AD2180 && __cxa_guard_acquire(&qword_4AD2180) )
      {
        LODWORD(qword_4AD21A0[0]) = 0;
        qword_4AD21A0[1] = 0;
        qword_4AD21A0[3] = 0;
        __cxa_guard_release(&qword_4AD2180);
      }
      v4 = *(_QWORD *)(a2 + 72);
      if ( v4 > 7 )
      {
        v5 = (__int64 *)(v4 & 0xFFFFFFFFFFFFFFF8LL);
        v6 = *(_QWORD *)(a2 + 72) & 6LL;
        if ( v6 == 2 )
        {
          v7 = v5[9];
          v5 = nullptr;
          if ( !v7 )
            return sub_61C470(a1, (__int64)v5);
          v5 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
          if ( (v7 & 6) != 4 || !v5 )
            return sub_61C470(a1, (__int64)v5);
        }
        else if ( v6 != 4 )
        {
          return sub_61C470(a1, (__int64)v5);
        }
        v5 = (__int64 *)v5[1];
        return sub_61C470(a1, (__int64)v5);
      }
      v5 = qword_4AD21A0;
      return sub_61C470(a1, (__int64)v5);
    }
  }
  return result;
}

