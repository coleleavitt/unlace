_BYTE *__fastcall sub_EADEE0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rdi
  _BYTE *result; // rax

  v3 = *a1;
  v4 = *(_QWORD *)(v3 + 32);
  if ( (unsigned __int64)(*(_QWORD *)(v3 + 24) - v4) > 2 )
  {
    *(_BYTE *)(v4 + 2) = 40;
    *(_WORD *)v4 = 26217;
    *(_QWORD *)(v3 + 32) += 3LL;
  }
  else
  {
    sub_227BF10(v3, "if(", 3);
  }
  sub_F07C00(*(_QWORD *)(a2 + 24), *a1, 0, a1[1], 0, 0, (__int64)"\n", 1);
  v5 = *a1;
  result = *(_BYTE **)(*a1 + 32LL);
  if ( *(_BYTE **)(*a1 + 24LL) == result )
    return (_BYTE *)sub_227BF10(v5, ")", 1);
  *result = 41;
  ++*(_QWORD *)(v5 + 32);
  return result;
}
