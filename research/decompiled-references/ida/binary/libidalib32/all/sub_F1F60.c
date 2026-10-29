__int64 __fastcall sub_F1F60(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d

  if ( (_BYTE)byte_251608 )
    return qword_251610;
  if ( __cxa_guard_acquire(&byte_251608) )
  {
    v3 = operator new(0x160u);
    sub_F1E30(v3, a2, v4, v5, v6, v7);
    qword_251610 = v3;
    __cxa_guard_release(&byte_251608);
  }
  return qword_251610;
}

