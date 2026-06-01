_BYTE *__fastcall sub_EAE7B0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  _BYTE *result; // rax
  __int64 v6; // rdi
  _BYTE *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdi

  v3 = *a1;
  v4 = *(_QWORD *)(v3 + 32);
  result = (_BYTE *)(*(_QWORD *)(v3 + 24) - v4);
  if ( (unsigned __int64)result > 4 )
  {
    *(_DWORD *)v4 = 1853453153;
    *(_BYTE *)(v4 + 4) = 99;
    *(_QWORD *)(v3 + 32) += 5LL;
  }
  else
  {
    result = (_BYTE *)sub_227BF10(v3, "async", 5);
  }
  if ( *(_QWORD *)(a2 + 32) )
  {
    v6 = *a1;
    v7 = *(_BYTE **)(*a1 + 32LL);
    if ( *(_BYTE **)(*a1 + 24LL) == v7 )
    {
      sub_227BF10(v6, "(", 1);
    }
    else
    {
      *v7 = 40;
      ++*(_QWORD *)(v6 + 32);
    }
    LODWORD(v8) = 0;
    if ( *(_QWORD *)(a2 + 32) )
      v8 = **(_QWORD **)(a2 + 24);
    sub_F07C00(v8, *a1, 0, a1[1], 0, 0, (__int64)"\n", 1);
    v9 = *a1;
    result = *(_BYTE **)(*a1 + 32LL);
    if ( result == *(_BYTE **)(*a1 + 24LL) )
    {
      return (_BYTE *)sub_227BF10(v9, ")", 1);
    }
    else
    {
      *result = 41;
      ++*(_QWORD *)(v9 + 32);
    }
  }
  return result;
}
