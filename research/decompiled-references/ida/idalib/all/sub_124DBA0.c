bool __fastcall sub_124DBA0(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 v2; // r12

  v2 = *a2;
  if ( (_BYTE)qword_2CD89A0 || !__cxa_guard_acquire(&qword_2CD89A0) )
    return unk_2CD89A8 != v2;
  unk_2CD89A8 = 0;
  __cxa_guard_release(&qword_2CD89A0);
  return unk_2CD89A8 != v2;
}
