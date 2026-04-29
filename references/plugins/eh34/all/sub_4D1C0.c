__int64 __fastcall sub_4D1C0(__int64 a1, void *a2)
{
  void *v3; // rbp
  __int64 v4; // rdi
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  void *vars8; // [rsp+8h] [rbp+8h]
  unsigned __int64 vars38; // [rsp+38h] [rbp+38h]

  vars38 = __readfsqword(0x28u);
  vars8 = a2;
  LODWORD(vars0) = 5;
  sub_4CCA0((__int64 *)(a1 + 8), (unsigned __int64)&vars0);
  if ( (_DWORD)vars0 == 6 )
  {
    v3 = vars8;
    if ( vars8 )
    {
      v4 = *(_QWORD *)vars8;
      if ( *(_QWORD *)vars8 )
      {
        *((_QWORD *)vars8 + 1) = 0;
        qfree(v4);
      }
      operator delete(v3, 0x18u);
    }
  }
  return a1;
}
