bool __fastcall sub_7B4E30(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rbp
  int v7; // ebx
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v10; // [rsp+8h] [rbp-30h]
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  if ( a2 == -1 )
    return 0;
  *(_WORD *)(a1 + 53) = 10;
  v4 = swap64(a2);
  *(_BYTE *)(a1 + 64) = a3;
  v6 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 56) = v4;
  if ( *(_BYTE *)(v6 + 6020) && (unsigned __int8)must_journal(a2, a2, v5) )
  {
    *(_QWORD *)(v6 + 56) = get_undo_param(1u);
    ptr = nullptr;
    v10 = 0;
    v7 = sub_73ED50(v6, (unsigned __int16 *)(a1 + 53), (__int64)&ptr);
    if ( v7 )
    {
      if ( (_QWORD)v10 && *(_BYTE *)ptr == 5 )
        reset_undo(v6, ptr);
      else
        add_undo_record(1, ptr, v10);
    }
    if ( ptr )
    {
      *(_QWORD *)&v10 = 0;
      qfree(ptr);
    }
  }
  else
  {
    v7 = sub_73ED50(v6, (unsigned __int16 *)(a1 + 53), 0);
  }
  return v7 != 0;
}
