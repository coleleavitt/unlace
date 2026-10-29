_BYTE *__fastcall sub_BB2E50(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rdi
  _BYTE *result; // rax

  v3 = *a1;
  v4 = *(_QWORD *)(v3 + 32);
  if ( (unsigned __int64)(*(_QWORD *)(v3 + 24) - v4) > 6 )
  {
    *(_DWORD *)v4 = 1935761247;
    *(_WORD *)(v4 + 4) = 8301;
    *(_BYTE *)(v4 + 6) = 40;
    *(_QWORD *)(v3 + 32) += 7LL;
  }
  else
  {
    sub_227BF10(v3, "__asm (", 7);
  }
  sub_F07C00(*(_QWORD *)(a2 + 40), *a1, 0, (_DWORD)a1 + 8, *((_DWORD *)a1 + 8), a1[3], (__int64)"\n", 1);
  v5 = *a1;
  result = *(_BYTE **)(*a1 + 32);
  if ( *(_BYTE **)(*a1 + 24) == result )
    return (_BYTE *)sub_227BF10(v5, ")", 1);
  *result = 41;
  ++*(_QWORD *)(v5 + 32);
  return result;
}
