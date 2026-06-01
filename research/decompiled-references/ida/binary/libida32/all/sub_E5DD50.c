_BYTE *__fastcall sub_E5DD50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdi
  _BYTE *result; // rax

  sub_E5C460(
    *(_QWORD **)a1,
    *(_QWORD *)(a1 + 8),
    0,
    *(__int64 **)((*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF8LL) + 40),
    a5,
    a6);
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  result = *(_BYTE **)(v6 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(v6 + 24) )
    return (_BYTE *)sub_2257CD0(v6, 64);
  *(_QWORD *)(v6 + 32) = result + 1;
  *result = 64;
  return result;
}

