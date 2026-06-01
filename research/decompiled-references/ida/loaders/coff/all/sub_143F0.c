__int64 __fastcall sub_143F0(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v3; // ax
  __int64 v4; // rdx
  __int64 v5; // rsi

  v3 = *(_WORD *)(a3 + 12);
  if ( v3 == 2 )
  {
    *(_DWORD *)(a2 + 4) = 0;
    *(_WORD *)a2 = 4;
    v5 = a1[4];
    v4 = a1[5] - 4LL - v5;
    goto LABEL_5;
  }
  if ( v3 <= 2u )
  {
    if ( !v3 )
      return 1;
    *(_DWORD *)(a2 + 4) = 0;
    *(_WORD *)a2 = 4;
    v4 = a1[7];
    v5 = a1[4];
LABEL_5:
    (*(void (__fastcall **)(_QWORD *, __int64, __int64, __int64, __int64, __int64))(*a1 + 8LL))(a1, v5, v4, 31, 1, 1);
    return 1;
  }
  if ( v3 == 4 )
  {
    *(_DWORD *)(a2 + 4) = 0;
    *(_WORD *)a2 = 4;
    (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64, _QWORD, __int64))(*a1 + 8LL))(a1, a1[4], a1[7], 31, 0, 1);
    return 1;
  }
  (*(void (__fastcall **)(_QWORD *, _QWORD))*a1)(a1, v3);
  return 0;
}

