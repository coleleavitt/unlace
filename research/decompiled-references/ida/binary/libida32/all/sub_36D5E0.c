__int64 __fastcall sub_36D5E0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  int not_tail; // ebp

  v2 = *(_DWORD *)(a1 + 8);
  if ( (get_flags_ex(v2, 4) & 0x600) == 0x200 )
  {
    not_tail = prev_not_tail(v2);
    *(_DWORD *)(a2 + 8) = not_tail;
    return 0;
  }
  else
  {
    *(_DWORD *)(a2 + 8) = v2;
    return 0;
  }
}

