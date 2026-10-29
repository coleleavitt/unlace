__int64 __fastcall sub_6BEEC0(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // r15
  unsigned int v8; // ebp
  __int64 *v9; // rbx

  v5 = (__int64 *)(a4 + 64);
  v8 = sub_60EE60((__int64)a1, nullptr, a2, a3, (_QWORD *)(a4 + 64), nullptr);
  if ( (_BYTE)v8 )
  {
    if ( *(_QWORD *)(a4 + 72)
      && ((*(_QWORD *)(a4 + 72) & 0xFLL) != 0xC || sub_3E8BE0((__int64)a1, *(__int16 *)(a4 + 80))) )
    {
      v9 = (__int64 *)(a4 + 72);
      if ( a2 )
      {
        *a2 = sub_6BEC10(v9, (__int64)v5);
        if ( a3 )
        {
          sub_6BEA30((__int64)v9, a3, v5);
          if ( (*a2 & 0xF00000) == 0x500000 )
LABEL_12:
            sub_4E2190(*a1, a5, a3);
        }
      }
      else if ( a3 )
      {
        sub_6BEA30((__int64)v9, a3, v5);
      }
    }
    else if ( a2 && (*a2 & 0xF00000) == 0x500000 && a3 )
    {
      goto LABEL_12;
    }
  }
  return v8;
}
