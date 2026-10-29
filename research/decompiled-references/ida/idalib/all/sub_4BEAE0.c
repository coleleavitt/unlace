unsigned __int64 *__fastcall sub_4BEAE0(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 (*v5)(void); // rax
  unsigned __int64 *result; // rax
  unsigned __int64 *v7; // rsi

  v5 = *(__int64 (**)(void))(*(_QWORD *)a1 + 32LL);
  if ( (char *)v5 == (char *)sub_3DB7B0 )
    result = (unsigned __int64 *)(a1 + 16);
  else
    result = (unsigned __int64 *)v5();
  if ( a3 >= *result && a3 < result[1] )
  {
    result = (unsigned __int64 *)(*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)a1 + 40LL))(
                                   a1,
                                   a3,
                                   0);
    if ( (unsigned __int64 *)a3 == result )
    {
      switch_dbctx(*(int *)(a1 + 8));
      result = **(unsigned __int64 ***)(a1 + 40);
      v7 = &result[11 * a3];
      if ( v7[9] != -1 )
        return (unsigned __int64 *)sub_4BEA20(a2, (__int64)(v7 + 6));
    }
  }
  return result;
}
