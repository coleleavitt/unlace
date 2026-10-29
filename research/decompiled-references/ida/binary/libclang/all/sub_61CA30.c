__int64 __fastcall sub_61CA30(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  unsigned __int64 v8; // rsi
  __int64 *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax

  result = sub_61BF20(a1, a2, a3, a4, a5, a6);
  if ( !(_BYTE)result && *(_QWORD *)(a2 + 72) > 7u && (*(_QWORD *)(a2 + 72) & 6LL) != 2 )
  {
    if ( !(_BYTE)qword_4AD2140 && __cxa_guard_acquire(&qword_4AD2140) )
    {
      LODWORD(qword_4AD2160[0]) = 0;
      qword_4AD2160[1] = 0;
      qword_4AD2160[3] = 0;
      __cxa_guard_release(&qword_4AD2140);
    }
    v8 = *(_QWORD *)(a2 + 72);
    if ( v8 > 7 )
    {
      v9 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
      v10 = *(_QWORD *)(a2 + 72) & 6LL;
      if ( v10 == 2 )
      {
        v11 = v9[9];
        v9 = nullptr;
        if ( !v11 )
          return sub_61C470(a1, (__int64)v9);
        v9 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v11 & 6) != 4 || !v9 )
          return sub_61C470(a1, (__int64)v9);
      }
      else if ( v10 != 4 )
      {
        return sub_61C470(a1, (__int64)v9);
      }
      v9 = (__int64 *)v9[1];
      return sub_61C470(a1, (__int64)v9);
    }
    v9 = qword_4AD2160;
    return sub_61C470(a1, (__int64)v9);
  }
  return result;
}

