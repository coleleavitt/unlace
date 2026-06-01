__int64 __fastcall sub_3A4D70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v4; // r13d
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v7; // [rsp+8h] [rbp-40h]
  unsigned __int64 v8; // [rsp+18h] [rbp-30h]

  v3 = a1;
  v8 = __readfsqword(0x28u);
  v4 = a3;
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    return 1;
  ptr = nullptr;
  v7 = 0;
  if ( a1 != a2 )
  {
    do
    {
      sub_3A0A80((__int64 *)&ptr, *(_QWORD *)(v3 + 32));
      sub_3A0A80((__int64 *)&ptr, *(_QWORD *)(v3 + 40));
      v3 = std::_Rb_tree_increment(v3);
    }
    while ( v3 != a2 );
    if ( (_QWORD)v7 )
    {
      add_undo_record(v4, ptr, v7);
      if ( ptr )
      {
        *(_QWORD *)&v7 = 0;
        qfree(ptr);
      }
      return 1;
    }
    if ( ptr )
      qfree(ptr);
  }
  return 0;
}
