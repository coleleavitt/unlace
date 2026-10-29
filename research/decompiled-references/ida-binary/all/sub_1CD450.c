__int64 __fastcall sub_1CD450(void (__fastcall ***a1)(_QWORD, __int64), unsigned int *a2, double a3)
{
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // r12
  __int64 v10; // rsi
  __int64 *v11; // rax
  __int64 v12; // rbx
  __int64 i; // r12
  __int64 v14; // rsi

  result = *a2;
  if ( (_DWORD)result == 3 )
  {
    v11 = *((__int64 **)a2 + 1);
    v12 = *v11;
    result = 5 * v11[1];
    for ( i = v12 + 8 * result; i != v12; result = sub_1CD450(a1, v14) )
    {
      v14 = v12 + 24;
      v12 += 40;
    }
  }
  else if ( (_DWORD)result == 4 )
  {
    v5 = *((_QWORD *)a2 + 1);
    (**a1)(a1, v5);
    if ( *a2 == 4 )
    {
      result = *((_QWORD *)a2 + 1);
      v8 = *(_QWORD *)result;
      v9 = *(_QWORD *)result + 16LL * *(_QWORD *)(result + 8);
      if ( *(_QWORD *)result != v9 )
      {
        do
        {
          v10 = v8;
          v8 += 16;
          result = sub_1CD450(a1, v10);
        }
        while ( v9 != v8 );
      }
    }
    else
    {
      sub_1CAD60(a3, (__int64)a1, v5, v6, v7);
      return sub_1CD4E0();
    }
  }
  return result;
}
