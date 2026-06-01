__int64 __fastcall sub_791CA0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  __int64 v3; // rsi
  unsigned int v5; // ebx
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v7; // [rsp+8h] [rbp-30h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  if ( a2 == -1 )
  {
    return 0;
  }
  else
  {
    v2 = *(_QWORD *)a1;
    *(_BYTE *)(a1 + 52) = 86;
    v3 = _byteswap_ulong(a2);
    *(_WORD *)(a1 + 45) = 6;
    *(_DWORD *)(a1 + 48) = v3;
    if ( !*(_BYTE *)(v2 + 5988) || !(unsigned __int8)must_journal(a1, v3, 6) )
      return sub_71A170(v2, (_WORD *)(a1 + 45), 0);
    ptr = nullptr;
    v7 = 0;
    v5 = sub_71A170(v2, (_WORD *)(a1 + 45), (__int64)&ptr);
    if ( (_BYTE)v5 )
      add_undo_record(1, ptr, v7);
    if ( ptr )
    {
      *(_QWORD *)&v7 = 0;
      qfree(ptr);
    }
  }
  return v5;
}

