__int64 __fastcall sub_13F30(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v3; // ax

  *(_DWORD *)(a2 + 4) = 4;
  *(_WORD *)a2 = 0;
  v3 = *(_WORD *)(a3 + 12);
  if ( v3 == 16 )
  {
    *(_DWORD *)(a2 + 4) = 0;
    *(_WORD *)a2 = 13;
    (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64, _QWORD, __int64))(*a1 + 8LL))(a1, a1[4], a1[7], 7, 0, 1);
    return 1;
  }
  if ( v3 > 0x10u )
  {
    if ( v3 != 24 )
      goto LABEL_5;
    *(_DWORD *)(a2 + 4) = 0;
    *(_WORD *)a2 = 1;
    (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64, _QWORD, __int64))(*a1 + 8LL))(a1, a1[4], a1[7], 15, 0, 1);
    return 1;
  }
  if ( !v3 )
    return 1;
  if ( v3 != 14 )
  {
LABEL_5:
    (*(void (__fastcall **)(_QWORD *, _QWORD))*a1)(a1, v3);
    return 0;
  }
  *(_DWORD *)(a2 + 4) = 0;
  *(_WORD *)a2 = 4;
  (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64, _QWORD, __int64))(*a1 + 8LL))(a1, a1[4], a1[7], 31, 0, 1);
  return 1;
}
