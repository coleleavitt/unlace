_BYTE *__fastcall sub_EB0850(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  _BYTE *result; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rdi

  v3 = *a1;
  v4 = *(_QWORD *)(v3 + 32);
  result = (_BYTE *)(*(_QWORD *)(v3 + 24) - v4);
  if ( (unsigned __int64)result > 5 )
  {
    *(_DWORD *)v4 = 1952671094;
    *(_WORD *)(v4 + 4) = 29295;
    *(_QWORD *)(v3 + 32) += 6LL;
  }
  else
  {
    result = (_BYTE *)sub_227BF10(v3, "vector", 6);
  }
  if ( *(_QWORD *)(a2 + 32) )
  {
    v6 = *a1;
    v7 = *(_QWORD *)(*a1 + 32LL);
    if ( (unsigned __int64)(*(_QWORD *)(*a1 + 24LL) - v7) > 8 )
    {
      *(_BYTE *)(v7 + 8) = 32;
      *(_QWORD *)v7 = 0x3A6874676E656C28LL;
      *(_QWORD *)(v6 + 32) += 9LL;
    }
    else
    {
      sub_227BF10(v6, "(length: ", 9);
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
