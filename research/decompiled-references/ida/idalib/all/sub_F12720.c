__int64 __fastcall sub_F12720(__int64 a1, int a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // rsi

  v3 = *(__int64 **)(a1 + 8);
  result = *((unsigned int *)v3 + 2);
  v5 = *((unsigned int *)v3 + 3);
  v6 = result + 1;
  if ( a2 == 24 )
  {
    if ( v6 > v5 )
    {
      sub_2237220(*(_QWORD *)(a1 + 8), v3 + 2, v6, 4);
      result = *((unsigned int *)v3 + 2);
    }
    *(_DWORD *)(*v3 + 4 * result) = 71;
    ++*((_DWORD *)v3 + 2);
  }
  else
  {
    v7 = *((unsigned int *)v3 + 2);
    if ( v6 > v5 )
    {
      sub_2237220(*(_QWORD *)(a1 + 8), v3 + 2, v6, 4);
      v7 = *((unsigned int *)v3 + 2);
    }
    result = *v3;
    *(_DWORD *)(*v3 + 4 * v7) = a2;
    ++*((_DWORD *)v3 + 2);
  }
  return result;
}
