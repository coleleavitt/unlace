__int64 __fastcall sub_3C9570(_QWORD *a1)
{
  __int64 v1; // rsi

  v1 = a1[4];
  if ( *(_BYTE *)(v1 + 64) || *(_DWORD *)(v1 + 68) == -1 )
    return 0;
  (*(void (__fastcall **)(_QWORD *, __int64, _QWORD, __int64))(*a1 + 24LL))(a1, v1 + 64, 0, 1);
  return 0;
}
