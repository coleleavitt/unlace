_QWORD *__fastcall sub_4C4B50(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *result; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdi

  result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 8) + 120LL))(*(_QWORD *)(a2 + 8));
  if ( !result )
  {
    v7 = *(_QWORD *)(a2 + 8);
    v8 = *(_QWORD *)(a3 + 8);
    if ( v7 == v8 )
    {
      if ( !a4 )
        goto LABEL_11;
    }
    else
    {
      result = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v8 + 120LL))(
                           v8,
                           a2,
                           a3,
                           a4);
      if ( result )
        return result;
      if ( !a4 )
      {
LABEL_10:
        if ( result )
          return result;
LABEL_11:
        result = (_QWORD *)sub_186B270(0x10u);
        result[1] = 0;
        *result = &off_1C4F000;
        return result;
      }
      v7 = *(_QWORD *)(a2 + 8);
    }
    v9 = *(_QWORD *)(a4 + 8);
    if ( v9 == v7 || *(_QWORD *)(a3 + 8) == v9 )
      goto LABEL_11;
    result = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v9 + 120LL))(
                         v9,
                         a2,
                         a3,
                         a4);
    goto LABEL_10;
  }
  return result;
}

