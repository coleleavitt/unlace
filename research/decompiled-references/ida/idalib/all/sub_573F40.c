__int64 __fastcall sub_573F40(__int64 *a1, __int64 a2, void *a3)
{
  int v4; // ebx

  v4 = sub_573C40(a1, a2, a3);
  if ( v4 >= 0 )
    return (unsigned int)v4;
  if ( (unsigned int)sub_3A1820((__int64)a1) != 25 )
    sub_4F2EF0(a1, -(char)v4, (__int64)a3, 0);
  return 0;
}
