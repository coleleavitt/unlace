bool __fastcall sub_124DB40(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 v2; // r12

  v2 = *a2;
  if ( (_BYTE)qword_2CD8990 || !__cxa_guard_acquire(&qword_2CD8990) )
    return unk_2CD8998 != v2;
  unk_2CD8998 = 0;
  __cxa_guard_release(&qword_2CD8990);
  return unk_2CD8998 != v2;
}
