__int64 __fastcall sub_422460(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rsi
  __int64 v4; // rdi
  _QWORD *v5; // rdx
  int v6; // ecx
  __int64 v7; // rdi

  result = a2;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 1640LL);
  v4 = *(unsigned int *)(v3 + 136);
  if ( (_DWORD)v4 )
  {
    v5 = (_QWORD *)(v3 + 8);
    v6 = 0;
    v7 = v3 + 8 + 16 * v4;
    while ( *v5 != result )
    {
      v5 += 2;
      v6 += 2;
      if ( v5 == (_QWORD *)v7 )
        return result;
    }
    return *(_QWORD *)(v3 + 8LL * (v6 + 1) + 8);
  }
  return result;
}
