__int64 __fastcall indexer_match(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rdi
  __int64 result; // rax
  _QWORD *v9; // rax
  __int64 v10; // rdx
  const char *v11; // rax

  v5 = *(_QWORD **)(**(_QWORD **)(qword_2CCB598 + 1672) + 1880LL);
  result = *(_QWORD *)(*v5 + 1672LL);
  if ( *(_BYTE *)(result + 609) )
  {
    v9 = sub_433430(v5 + 5, a2);
    if ( v9 )
      sub_440EA0(v9[2], a1, a3, a4);
    v10 = *(_QWORD *)(a3 + 8);
    v11 = haystack;
    if ( v10 )
    {
      v11 = *(const char **)a3;
      --v10;
    }
    return sub_43BE20(a1, v10, v11, *(int *)(a4 + 8));
  }
  return result;
}
