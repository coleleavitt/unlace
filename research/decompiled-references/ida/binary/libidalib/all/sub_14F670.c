unsigned __int64 __fastcall sub_14F670(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 vars8; // [rsp+8h] [rbp+8h]

  vars8 = __readfsqword(0x28u);
  copy_tinfo_t();
  if ( a1[21] )
  {
    a1[22] = 0;
    qfree();
    a1[21] = 0;
    a1[23] = 0;
  }
  if ( !a1[28] && !(unsigned int)verify_tinfo() )
  {
    copy_tinfo_t();
    (*(void (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)a3 + 8LL))(a3, 10, a1 + 16);
  }
  clear_tinfo_t();
  return vars8 - __readfsqword(0x28u);
}

