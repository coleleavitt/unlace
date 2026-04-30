unsigned __int64 __fastcall sub_3A7380(_QWORD *a1, __int64 a2, __int64 a3)
{
  const char *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rdx
  int tinfo_pdata; // eax
  unsigned __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  unsigned __int64 vars8; // [rsp+8h] [rbp+8h]

  vars8 = __readfsqword(0x28u);
  vars0 = 0;
  copy_tinfo_t(&vars0, a2, a3);
  v4 = (const char *)vars0;
  if ( vars0 > 0xFF )
  {
    tinfo_pdata = get_tinfo_pdata(a1 + 21, vars0, 5);
    v5 = a1[21];
    if ( tinfo_pdata )
    {
      set_tinfo_property4(&vars0, 5, v5, 0, 0, 0);
      goto LABEL_5;
    }
  }
  else
  {
    v5 = a1[21];
  }
  if ( v5 )
  {
    a1[22] = 0;
    qfree(v5, v4);
    a1[21] = 0;
    a1[23] = 0;
  }
LABEL_5:
  if ( !a1[28] && !(unsigned int)verify_tinfo(vars0) )
  {
    copy_tinfo_t(a1 + 17, &vars0, v6);
    (*(void (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)a3 + 8LL))(a3, 10, a1 + 16);
  }
  clear_tinfo_t(&vars0);
  return vars8 - __readfsqword(0x28u);
}
