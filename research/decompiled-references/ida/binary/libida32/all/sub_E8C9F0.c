_BYTE *__fastcall sub_E8C9F0(_QWORD *a1, __int64 a2)
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
    *(_DWORD *)v4 = 1802661751;
    *(_WORD *)(v4 + 4) = 29285;
    *(_QWORD *)(v3 + 32) += 6LL;
  }
  else
  {
    result = (_BYTE *)sub_22581D0(v3, "worker", 6);
  }
  if ( *(_QWORD *)(a2 + 32) )
  {
    v6 = *a1;
    v7 = *(_QWORD *)(*a1 + 32LL);
    if ( (unsigned __int64)(*(_QWORD *)(*a1 + 24LL) - v7) > 5 )
    {
      *(_DWORD *)v7 = 1836412456;
      *(_WORD *)(v7 + 4) = 8250;
      *(_QWORD *)(v6 + 32) += 6LL;
    }
    else
    {
      sub_22581D0(v6, "(num: ", 6);
    }
    LODWORD(v8) = 0;
    if ( *(_QWORD *)(a2 + 32) )
      v8 = **(_QWORD **)(a2 + 24);
    sub_EE3EC0(v8, *a1, 0, a1[1], 0, 0, (__int64)"\n", 1);
    v9 = *a1;
    result = *(_BYTE **)(*a1 + 32LL);
    if ( result == *(_BYTE **)(*a1 + 24LL) )
    {
      return (_BYTE *)sub_22581D0(v9, ")", 1);
    }
    else
    {
      *result = 41;
      ++*(_QWORD *)(v9 + 32);
    }
  }
  return result;
}

