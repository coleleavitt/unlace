_BYTE *__fastcall sub_EB0320(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r10
  __int64 v6; // rdi
  __int64 v7; // rdi
  _BYTE *result; // rax
  __int64 v9; // rdx

  v3 = *a1;
  v4 = *(_QWORD *)(v3 + 32);
  if ( (unsigned __int64)(*(_QWORD *)(v3 + 24) - v4) > 8 )
  {
    *(_BYTE *)(v4 + 8) = 40;
    *(_QWORD *)v4 = 0x657370616C6C6F63LL;
    *(_QWORD *)(v3 + 32) += 9LL;
  }
  else
  {
    sub_227BF10(v3, "collapse(", 9);
  }
  v5 = *a1;
  if ( *(_BYTE *)(a2 + 48) )
  {
    v9 = *(_QWORD *)(v5 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v5 + 24) - v9) > 5 )
    {
      *(_DWORD *)v9 = 1668444006;
      *(_WORD *)(v9 + 4) = 14949;
      *(_QWORD *)(v5 + 32) += 6LL;
    }
    else
    {
      sub_227BF10(*a1, "force:", 6);
    }
    v5 = *a1;
  }
  LODWORD(v6) = 0;
  if ( *(_QWORD *)(a2 + 32) )
    v6 = **(_QWORD **)(a2 + 24);
  sub_F07C00(v6, v5, 0, a1[1], 0, 0, (__int64)"\n", 1);
  v7 = *a1;
  result = *(_BYTE **)(*a1 + 32LL);
  if ( *(_BYTE **)(*a1 + 24LL) == result )
    return (_BYTE *)sub_227BF10(v7, ")", 1);
  *result = 41;
  ++*(_QWORD *)(v7 + 32);
  return result;
}
