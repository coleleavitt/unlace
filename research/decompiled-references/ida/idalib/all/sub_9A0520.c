__int64 __fastcall sub_9A0520(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  __int64 result; // rax
  bool v9; // zf

  v7 = *(_QWORD *)(a2 + 24);
  if ( v7 )
    sub_99D480(a1, v7, 1, 0, a5, a6);
  result = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 112) = result;
  if ( result )
  {
    v9 = *(_BYTE *)(a1 + 320) == 0;
    *(_QWORD *)(result + 24) = a2;
    if ( v9 )
    {
LABEL_5:
      *(_QWORD *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 24) = result;
      return result;
    }
  }
  else
  {
    result = sub_999AE0(a1, v7, a3, a4, a5, a6);
    v9 = *(_BYTE *)(a1 + 320) == 0;
    *(_QWORD *)(a1 + 112) = result;
    *(_QWORD *)(result + 24) = a2;
    if ( v9 )
      goto LABEL_5;
  }
  return 0;
}
