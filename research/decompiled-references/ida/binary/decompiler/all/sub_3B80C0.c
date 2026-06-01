__int64 __fastcall sub_3B80C0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v5; // r12
  __int64 v6; // rsi
  int v7; // eax
  unsigned __int64 v9; // [rsp+48h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 16);
  v9 = __readfsqword(0x28u);
  v5 = *a2;
  v6 = sub_3856D0(v3, *a2);
  if ( v6 )
  {
    v7 = *(_DWORD *)(a1 + 24);
    if ( !v7 )
      return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)a1 + 32LL))(a1, v6, a2);
    if ( v7 != 1 )
      sub_3B5950(v3);
    if ( v5 == *(_QWORD *)(v6 + 8) )
      return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)a1 + 32LL))(a1, v6, a2);
  }
  if ( !*(_BYTE *)(a1 + 28) )
  {
    v6 = 0;
    return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)a1 + 32LL))(a1, v6, a2);
  }
  return 0;
}
