__int64 __fastcall sub_5F8190(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        const char *a5,
        __int64 *a6,
        double a7,
        double a8)
{
  __int64 result; // rax
  unsigned int *opinfo; // rax
  _QWORD v14[25]; // [rsp+0h] [rbp-C8h] BYREF

  v14[17] = __readfsqword(0x28u);
  result = 0;
  if ( !a6 )
    return 0;
  if ( (a3 & 0x600) == 0x400 )
  {
    if ( (unsigned int)sub_5EEAE0(*a1, a2, a5, a6, 0) && (get_tinfo_property(*a6, 2) & 0xF) != 0xC )
    {
      return 2;
    }
    else
    {
      opinfo = (unsigned int *)get_opinfo(v14, a2, 0, a3);
      return sub_5F72D0(a1, a2, a3, opinfo, a4, a7, a8, (__int64)a5, a6);
    }
  }
  return result;
}

