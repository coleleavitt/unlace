_QWORD *__fastcall sub_4C4C00(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(); // rax
  __int64 v9; // rax
  __int64 (__fastcall *v10)(); // r8
  __int64 v11; // rax
  __int64 (__fastcall *v12)(); // r8
  _QWORD *result; // rax

  v7 = *(_QWORD *)(a2 + 8);
  v8 = *(__int64 (__fastcall **)())(*(_QWORD *)v7 + 128LL);
  if ( v8 == sub_4C9AD0 )
  {
LABEL_2:
    v9 = *(_QWORD *)(a3 + 8);
    if ( v9 == v7 || (v10 = *(__int64 (__fastcall **)())(*(_QWORD *)v9 + 128LL), v10 == sub_4C9AD0) )
    {
      if ( !a4 )
        return sub_4C4B50(a1, a2, a3, a4);
    }
    else
    {
      result = (_QWORD *)((__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64))v10)(
                           *(_QWORD *)(a3 + 8),
                           a2,
                           a3,
                           a4);
      if ( result )
        return result;
      if ( !a4 )
      {
LABEL_13:
        if ( result )
          return result;
        return sub_4C4B50(a1, a2, a3, a4);
      }
      v7 = *(_QWORD *)(a2 + 8);
    }
    v11 = *(_QWORD *)(a4 + 8);
    if ( v7 == v11 )
      return sub_4C4B50(a1, a2, a3, a4);
    if ( *(_QWORD *)(a3 + 8) == v11 )
      return sub_4C4B50(a1, a2, a3, a4);
    v12 = *(__int64 (__fastcall **)())(*(_QWORD *)v11 + 128LL);
    if ( v12 == sub_4C9AD0 )
      return sub_4C4B50(a1, a2, a3, a4);
    result = (_QWORD *)((__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64))v12)(*(_QWORD *)(a4 + 8), a2, a3, a4);
    goto LABEL_13;
  }
  result = (_QWORD *)v8();
  if ( !result )
  {
    v7 = *(_QWORD *)(a2 + 8);
    goto LABEL_2;
  }
  return result;
}

