__int64 __fastcall sub_E6A10(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rbp

  if ( *(_DWORD *)a2 == 56
    && *(_BYTE *)(a2 + 32) == 6
    && (v4 = *(_QWORD *)(a2 + 40), (unsigned __int8)is_mapped())
    && ((get_flags_ex() & 0x600) != 0x200 || v4 == prev_not_tail())
    && !get_func()
    && !(unsigned __int8)sub_37CA60(*(_QWORD *)(a1 + 480), v4, 0, 3)
    && (unsigned __int8)sub_E3670(v4) )
  {
    v2 = sub_11A310(a2, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 0);
  }
  else
  {
    v2 = 0;
  }
  if ( *(_QWORD *)(a1 + 56) == a2
    && *(_DWORD *)(a1 + 376)
    && (unsigned __int8)sub_11A310(a2, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 0) )
  {
    v2 |= sub_E66D0(a1, a2, a2);
  }
  return v2;
}
