__int64 __fastcall sub_4BEB70(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 (*v5)(void); // rax
  __int64 result; // rax
  __int64 v7; // rsi

  v5 = *(__int64 (**)(void))(*(_QWORD *)a1 + 32LL);
  if ( (char *)v5 == (char *)sub_3DB7B0 )
    result = a1 + 16;
  else
    result = v5();
  if ( a3 >= *(_QWORD *)result && a3 < *(_QWORD *)(result + 8) )
  {
    result = (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, a3, 0);
    if ( a3 == result )
    {
      switch_dbctx(*(int *)(a1 + 8));
      v7 = **(_QWORD **)(a1 + 40) + 96 * a3;
      result = *(unsigned int *)(v7 + 80);
      if ( (_DWORD)result )
        return sub_4BEA20(a2, v7 + 48);
    }
  }
  return result;
}
