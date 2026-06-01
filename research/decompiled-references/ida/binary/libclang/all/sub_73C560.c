_WORD *__fastcall sub_73C560(__int64 a1, __int64 a2)
{
  void *v2; // rdx
  _WORD *result; // rax
  unsigned __int64 v4; // rdx

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
    sub_C4A760(a1);
  v2 = *(void **)(a2 + 32);
  if ( *(_QWORD *)(a2 + 24) - (_QWORD)v2 <= 0xDu )
  {
    sub_26240F0(a2, "[[hlsl::is_rov", 14);
    result = *(_WORD **)(a2 + 32);
    if ( *(_QWORD *)(a2 + 24) - (_QWORD)result > 1u )
      goto LABEL_5;
  }
  else
  {
    qmemcpy(v2, "[[hlsl::is_rov", 14);
    result = (_WORD *)(*(_QWORD *)(a2 + 32) + 14LL);
    v4 = *(_QWORD *)(a2 + 24) - (_QWORD)result;
    *(_QWORD *)(a2 + 32) = result;
    if ( v4 > 1 )
    {
LABEL_5:
      *result = 23901;
      *(_QWORD *)(a2 + 32) += 2LL;
      return result;
    }
  }
  return (_WORD *)sub_26240F0(a2, "]]", 2);
}

