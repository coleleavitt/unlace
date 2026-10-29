__int64 (__fastcall **__fastcall sub_1356B20(__int64 a1, __int64 a2))()
{
  __int64 v2; // r12
  __int64 (__fastcall *v3)(); // rbp
  __int64 (__fastcall **result)(); // rax
  __int64 (__fastcall *v5)(); // r12
  __int64 v6; // rdi

  v2 = *(_QWORD *)(a2 + 88);
  v3 = (__int64 (__fastcall *)())operator new(0x18u);
  result = &off_2BB2050;
  *((_QWORD *)v3 + 2) = v2;
  v5 = *(__int64 (__fastcall **)())(a2 + 56);
  *(_QWORD *)v3 = &off_2BB2050;
  *((_QWORD *)v3 + 1) = a1;
  if ( v5 )
  {
    *(_QWORD *)(a2 + 56) = 0;
    result = (__int64 (__fastcall **)())operator new(0x18u);
    v6 = *(_QWORD *)(a2 + 56);
    result[1] = v3;
    result[2] = v5;
    *result = (__int64 (__fastcall *)())&off_2BE44F8;
    *(_QWORD *)(a2 + 56) = result;
    if ( v6 )
      return (__int64 (__fastcall **)())(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
  else
  {
    *(_QWORD *)(a2 + 56) = v3;
  }
  return result;
}
