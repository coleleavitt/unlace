_DWORD *__fastcall sub_30D5C0(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int128 v8; // rdi
  int *v9; // rcx

  if ( *a4 != 5 )
    return sub_30D1C0((__int64)a4);
  *((_QWORD *)&v8 + 1) = a4 + 8;
  *(_QWORD *)&v8 = a2;
  v9 = (int *)sub_129440(v8, (__int64)a3, 0);
  if ( v9 )
    return sub_30D340(a1, a2, a3, v9);
  else
    return nullptr;
}
