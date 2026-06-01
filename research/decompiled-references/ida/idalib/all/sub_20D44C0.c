_QWORD *__fastcall sub_20D44C0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, __int64); // rax
  _QWORD *result; // rax

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 16LL);
  if ( v4 == sub_20CEB40 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 64LL))(v3);
  else
    v4((__int64)a2, v3);
  result = (_QWORD *)*(unsigned int *)(a1 + 12);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    sub_20D1ED0(a2, 6u, " const");
    result = (_QWORD *)*(unsigned int *)(a1 + 12);
    if ( ((unsigned __int8)result & 2) == 0 )
    {
LABEL_5:
      if ( ((unsigned __int8)result & 4) == 0 )
        return result;
      return sub_20D1ED0(a2, 9u, " restrict");
    }
  }
  else if ( ((unsigned __int8)result & 2) == 0 )
  {
    goto LABEL_5;
  }
  sub_20D1ED0(a2, 9u, " volatile");
  result = (_QWORD *)*(unsigned int *)(a1 + 12);
  if ( ((unsigned __int8)result & 4) != 0 )
    return sub_20D1ED0(a2, 9u, " restrict");
  return result;
}
