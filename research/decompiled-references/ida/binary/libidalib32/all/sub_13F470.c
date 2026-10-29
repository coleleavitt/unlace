_QWORD *__fastcall sub_13F470(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *result; // rax

  if ( (get_merge_state() & 3) != 0 && (*(_BYTE *)(*(_QWORD *)(a2 + 2520) + 15LL) & 0x10) != 0 )
  {
    result = (_QWORD *)operator new(8u);
    *result = off_2319E8;
  }
  else
  {
    v2 = operator new(0x20u);
    sub_14C640(v2, a2);
    return (_QWORD *)v2;
  }
  return result;
}

