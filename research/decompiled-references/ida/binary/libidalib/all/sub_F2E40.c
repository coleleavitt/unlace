__int64 __fastcall sub_F2E40(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d

  if ( (_BYTE)byte_2527A8 )
    return qword_2527B0;
  if ( __cxa_guard_acquire(&byte_2527A8) )
  {
    v3 = operator new(0x160u);
    sub_F2D10(v3, a2, v4, v5, v6, v7);
    qword_2527B0 = v3;
    __cxa_guard_release(&byte_2527A8);
  }
  return qword_2527B0;
}

