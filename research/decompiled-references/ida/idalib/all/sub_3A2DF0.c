unsigned __int64 __fastcall sub_3A2DF0(unsigned int *a1, unsigned int *a2, unsigned int a3)
{
  unsigned int v6; // esi
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v8; // [rsp+8h] [rbp-40h]
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  if ( (unsigned __int8)must_journal() )
  {
    v6 = *a1;
    ptr = nullptr;
    v8 = 0;
    sub_3A0970((__int64 *)&ptr, v6);
    sub_3A0970((__int64 *)&ptr, *a2);
    add_undo_record(a3, ptr, v8);
    if ( ptr )
    {
      *(_QWORD *)&v8 = 0;
      qfree(ptr);
    }
  }
  *a1 = *a2;
  return v9 - __readfsqword(0x28u);
}
