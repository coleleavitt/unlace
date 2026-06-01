_QWORD *__fastcall sub_4FBDB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *result; // rax
  __int64 v5; // rdi
  _QWORD *v6; // rbx

  result = nullptr;
  if ( *(_DWORD *)(*(_QWORD *)(a3 + 8) + 32LL) == 1 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 8) + 32LL) != 1 )
    {
LABEL_5:
      result = (_QWORD *)sub_186B270(8u);
      *result = off_1C50108;
      return result;
    }
    if ( a4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(a4 + 8) + 32LL) != 1 )
        goto LABEL_5;
      v5 = *(_QWORD *)(a1 + 24);
      a4 = *(_QWORD *)(a4 + 32);
    }
    else
    {
      v5 = *(_QWORD *)(a1 + 24);
    }
    v6 = sub_4C4B50(v5, *(_QWORD *)(a2 + 32), *(_QWORD *)(a3 + 32), a4);
    result = (_QWORD *)sub_186B270(0x10u);
    *result = &off_1C50130;
    result[1] = v6;
  }
  return result;
}

