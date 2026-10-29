unsigned __int64 __fastcall sub_78DC70(__int64 a1, __int64 a2, __int64 a3)
{
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v5; // [rsp+8h] [rbp-30h]
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  if ( (unsigned __int8)must_journal(a1, a2, a3) )
  {
    ptr = nullptr;
    v5 = 0;
    ptr = (void *)qvector_reserve(&ptr, 0, 1, 1);
    *((_BYTE *)ptr + v5) = a2 + 1;
    *(_QWORD *)&v5 = v5 + 1;
    add_undo_record((unsigned int)a1, ptr, v5);
    if ( ptr )
    {
      *(_QWORD *)&v5 = 0;
      qfree(ptr);
    }
  }
  return v6 - __readfsqword(0x28u);
}

