__int64 __fastcall sub_2D20C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  char v5; // dl
  __int16 flags; // ax
  __int64 v7; // rbp

  *(_QWORD *)(a1 + 32) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 1;
  *(_QWORD *)a1 = lineslist_idaplace_t___vtable;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 40) = a3;
  *(_QWORD *)(a1 + 48) = a4;
  if ( a4 != -1 )
  {
    result = get_flags_ex(a4, 4) & 0x600;
    if ( result == 512 )
    {
      v7 = *(_QWORD *)(a1 + 48);
      result = get_flags_ex(v7, 4) & 0x600;
      if ( result == 512 )
      {
        result = prev_not_tail(v7);
        v7 = result;
      }
      *(_QWORD *)(a1 + 48) = v7;
    }
    v5 = 3;
    goto LABEL_4;
  }
  flags = get_flags_ex(a3, 4);
  v5 = 0;
  result = flags & 0x600;
  if ( result == 1024 )
  {
LABEL_4:
    *(_BYTE *)(a1 + 56) = v5;
    return result;
  }
  result = get_func(*(_QWORD *)(a1 + 40));
  *(_QWORD *)(a1 + 64) = result;
  *(_BYTE *)(a1 + 56) = (result == 0) + 1;
  return result;
}
