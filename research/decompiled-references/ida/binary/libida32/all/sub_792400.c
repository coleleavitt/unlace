__int64 __fastcall sub_792400(__int64 a1, __int64 a2, __int64 a3, __int16 a4)
{
  __int64 v4; // rbx
  __int16 v6; // ax
  __int64 v7; // rbp
  unsigned int v9; // ebx
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v11; // [rsp+8h] [rbp-30h]
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  if ( (_DWORD)a2 == -1 )
  {
    return 0;
  }
  else
  {
    v4 = a1;
    if ( (a4 & 0x100) != 0 && unk_2CAA7A8 )
    {
      a1 = (unsigned int)a3;
      a3 = (unsigned int)unk_2CAA7A8((unsigned int)a3);
    }
    *(_BYTE *)(v4 + 52) = a4;
    *(_DWORD *)(v4 + 48) = _byteswap_ulong(a2);
    if ( (a4 & 0x800) != 0 )
    {
      *(_BYTE *)(v4 + 53) = a3;
      v6 = 7;
    }
    else
    {
      v6 = 10;
      a1 = _byteswap_ulong(a3);
      *(_DWORD *)(v4 + 53) = a1;
    }
    v7 = *(_QWORD *)v4;
    *(_WORD *)(v4 + 45) = v6;
    if ( !*(_BYTE *)(v7 + 5988) || !(unsigned __int8)must_journal(a1, a2, a3) )
      return sub_71A170(v7, (_WORD *)(v4 + 45), 0);
    ptr = nullptr;
    v11 = 0;
    v9 = sub_71A170(v7, (_WORD *)(v4 + 45), (__int64)&ptr);
    if ( (_BYTE)v9 )
      add_undo_record(1, ptr, v11);
    if ( ptr )
    {
      *(_QWORD *)&v11 = 0;
      qfree(ptr);
    }
  }
  return v9;
}

