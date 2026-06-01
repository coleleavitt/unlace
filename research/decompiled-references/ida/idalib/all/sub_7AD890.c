__int64 __fastcall sub_7AD890(__int64 a1, __int64 a2, const char *a3, char a4)
{
  __int64 v4; // rdx
  __int64 v5; // rbp
  unsigned int v7; // ebx
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v9; // [rsp+8h] [rbp-30h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( a2 == -1 || !a3 )
  {
    return 0;
  }
  else
  {
    sub_7AD400(a1, a2, a4, a3, 0);
    v5 = *(_QWORD *)a1;
    if ( !*(_BYTE *)(*(_QWORD *)a1 + 6020LL) || !(unsigned __int8)must_journal(a1, a2, v4) )
      return sub_73A6B0(v5, (_WORD *)(a1 + 53), 0);
    ptr = nullptr;
    v9 = 0;
    v7 = sub_73A6B0(v5, (_WORD *)(a1 + 53), (__int64)&ptr);
    if ( (_BYTE)v7 )
      add_undo_record(1, ptr, v9);
    if ( ptr )
    {
      *(_QWORD *)&v9 = 0;
      qfree(ptr);
    }
  }
  return v7;
}
