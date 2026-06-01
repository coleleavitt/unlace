__int64 __fastcall sub_7B3FF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rbp
  unsigned int v6; // ebx
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v8; // [rsp+8h] [rbp-30h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  if ( a2 == -1 )
  {
    return 0;
  }
  else
  {
    *(_WORD *)(a1 + 53) = 10;
    v2 = swap64(a2);
    v4 = *(_QWORD *)a1;
    *(_BYTE *)(a1 + 64) = 86;
    *(_QWORD *)(a1 + 56) = v2;
    if ( !*(_BYTE *)(v4 + 6020) || !(unsigned __int8)must_journal(a2, a2, v3) )
      return sub_73A6B0(v4, (_WORD *)(a1 + 53), 0);
    ptr = nullptr;
    v8 = 0;
    v6 = sub_73A6B0(v4, (_WORD *)(a1 + 53), (__int64)&ptr);
    if ( (_BYTE)v6 )
      add_undo_record(1, ptr, v8);
    if ( ptr )
    {
      *(_QWORD *)&v8 = 0;
      qfree(ptr);
    }
  }
  return v6;
}
