__int64 __fastcall sub_35B9C0(__int64 *a1, unsigned int a2, __int64 a3)
{
  if ( !sub_358F10(a1[1], a2) )
    return (unsigned __int8)sub_35B920(a1, a2);
  sub_35AF50(a1);
  if ( a2 <= 0x7F && (*(_DWORD *)a1[1] & 0x40000000) != 0 )
  {
    sub_35B470(a1, a2);
  }
  else
  {
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)*a1 + 56LL))(*a1, a3, 0);
    ++a1[3];
  }
  return 1;
}

