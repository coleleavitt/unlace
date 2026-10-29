unsigned __int64 *__fastcall sub_4A8060(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 (*v5)(void); // rax
  unsigned __int64 *result; // rax
  __int64 v7; // rsi

  v5 = *(__int64 (**)(void))(*(_QWORD *)a1 + 32LL);
  if ( (char *)v5 == (char *)sub_3D58E0 )
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
      result = *(unsigned __int64 **)(a1 + 40);
      v7 = *result + 80 * a3;
      if ( *(_DWORD *)(v7 + 72) != -1 )
        return (unsigned __int64 *)sub_4A7FA0(a2, v7 + 48);
    }
  }
  return result;
}

