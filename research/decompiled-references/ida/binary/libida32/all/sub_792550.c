bool __fastcall sub_792550(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 v4; // rsi
  int v5; // ebx
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v8; // [rsp+8h] [rbp-30h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  if ( a2 == -1 )
    return 0;
  v3 = *(_QWORD *)a1;
  *(_BYTE *)(a1 + 52) = a3;
  v4 = _byteswap_ulong(a2);
  *(_WORD *)(a1 + 45) = 6;
  *(_DWORD *)(a1 + 48) = v4;
  if ( *(_BYTE *)(v3 + 5988) && (unsigned __int8)must_journal(a1, v4, a3) )
  {
    *(_QWORD *)(v3 + 56) = get_undo_param(1);
    ptr = nullptr;
    v8 = 0;
    v5 = sub_71E810(v3, (unsigned __int16 *)(a1 + 45), (__int64)&ptr);
    if ( v5 )
    {
      if ( (_QWORD)v8 && *(_BYTE *)ptr == 5 )
        reset_undo(v3, ptr);
      else
        add_undo_record(1, ptr, v8);
    }
    if ( ptr )
    {
      *(_QWORD *)&v8 = 0;
      qfree(ptr);
    }
  }
  else
  {
    v5 = sub_71E810(v3, (unsigned __int16 *)(a1 + 45), 0);
  }
  return v5 != 0;
}

