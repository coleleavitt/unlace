unsigned __int64 __fastcall sub_6060A0(__int64 a1, const char *a2, __int64 a3)
{
  const char *v3; // rbx
  size_t v5; // r12
  void *dest; // [rsp+0h] [rbp-38h] BYREF
  __int128 v7; // [rsp+8h] [rbp-30h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v3 = a2;
  if ( (unsigned __int8)must_journal(a1, a2, a3) )
  {
    dest = nullptr;
    v7 = 0;
    if ( a2 )
    {
      v5 = strlen(a2) + 1;
    }
    else
    {
      v5 = 1;
      v3 = &byte_22F0C30;
    }
    dest = (void *)qvector_reserve(&dest, 0, v5, 1);
    memset((char *)dest + v7, 0, v5 - v7);
    *(_QWORD *)&v7 = v5;
    memcpy(dest, v3, v5);
    add_undo_record((unsigned int)a1, dest, v7);
    if ( dest )
    {
      *(_QWORD *)&v7 = 0;
      qfree(dest);
    }
  }
  return v8 - __readfsqword(0x28u);
}
