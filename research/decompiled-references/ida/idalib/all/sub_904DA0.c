__int64 __fastcall sub_904DA0(
        void *a1,
        _DWORD *a2,
        unsigned __int8 *a3,
        unsigned __int64 a4,
        _QWORD *a5,
        unsigned __int64 a6)
{
  if ( a4 <= 0x5DB )
    return (unsigned int)sub_904CF0(a1, a2, a3, a4);
  if ( ((unsigned __int8)a5 & 3) != 0 )
    return -1;
  if ( a6 <= 0xFFF )
    return -66;
  return sub_904AC0(a1, a2, (unsigned int *)a3, a4, 0, a5);
}
