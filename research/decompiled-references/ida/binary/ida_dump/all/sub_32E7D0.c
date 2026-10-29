__int64 __fastcall sub_32E7D0(__int64 a1, int *a2, int a3)
{
  int v4; // ebp
  char v5; // al
  int v6; // ebp

  v4 = *a2;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 216LL))(a1, (unsigned int)*a2);
  if ( v4 <= 7 )
    return 0;
  if ( v5 != 1 )
    return 0;
  v6 = a3 + v4;
  if ( a3 < 0
    && (v6 <= 7 || !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 216LL))(a1, (unsigned int)v6)) )
  {
    return 0;
  }
  *a2 = v6;
  return 1;
}
