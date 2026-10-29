__int64 __fastcall sub_21AAC0(signed int a1, const char *a2, __int64 *a3)
{
  __int64 result; // rax
  int vars0; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars8; // [rsp+8h] [rbp+8h]
  __int128 vars10; // [rsp+10h] [rbp+10h]
  unsigned __int64 vars28; // [rsp+28h] [rbp+28h]

  vars28 = __readfsqword(0x28u);
  vars0 = -2;
  vars8 = -1;
  vars10 = 0;
  result = sub_21A930(a1, (__int64)a2, (__int64)&vars0);
  if ( (_BYTE)result && vars0 == -2 )
  {
    if ( a3 )
      *a3 = vars8;
  }
  else
  {
    if ( vars0 >= -1 )
    {
      if ( vars8 )
      {
        *(_QWORD *)&vars10 = 0;
        qfree(vars8, a2);
      }
    }
    return 0;
  }
  return result;
}
