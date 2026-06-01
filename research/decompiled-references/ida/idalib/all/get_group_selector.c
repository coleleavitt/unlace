__int64 __fastcall get_group_selector(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdi
  __int64 v3; // rsi
  _QWORD *v4; // rdx
  int v5; // ecx
  __int64 v6; // rsi

  result = a1;
  v2 = *(_QWORD *)(**(_QWORD **)(qword_2CCB598 + 1672) + 1640LL);
  v3 = *(unsigned int *)(v2 + 136);
  if ( (_DWORD)v3 )
  {
    v4 = (_QWORD *)(v2 + 8);
    v5 = 0;
    v6 = v2 + 8 + 16 * v3;
    while ( result != *v4 )
    {
      v4 += 2;
      v5 += 2;
      if ( v4 == (_QWORD *)v6 )
        return result;
    }
    return *(_QWORD *)(v2 + 8LL * (v5 + 1) + 8);
  }
  return result;
}
