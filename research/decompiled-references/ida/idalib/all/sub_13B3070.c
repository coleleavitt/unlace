__int64 (__fastcall **__fastcall sub_13B3070(__int64 *a1, __int64 a2, __int64 a3))()
{
  __int64 v5; // rbp
  __int64 (__fastcall **result)(); // rax
  __int64 v7; // rdi

  v5 = operator new(0x38u);
  result = sub_13AC640(v5, a1[2], a2, a1[3], a3);
  v7 = a1[4];
  a1[4] = v5;
  if ( v7 )
    return (__int64 (__fastcall **)())(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  return result;
}
