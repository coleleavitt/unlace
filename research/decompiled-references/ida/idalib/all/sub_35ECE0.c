__int64 __fastcall sub_35ECE0(__int64 *a1, unsigned int a2, __int64 a3)
{
  if ( !sub_35C340(a1[1], a2) )
    return (unsigned __int8)sub_35EC40(a1, a2);
  sub_35E260(a1);
  if ( a2 <= 0x7F && (*(_DWORD *)a1[1] & 0x40000000) != 0 )
  {
    sub_35E790(a1, a2);
  }
  else
  {
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)*a1 + 56LL))(*a1, a3, 0);
    ++a1[3];
  }
  return 1;
}
