char __fastcall sub_1EA570(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdi

  v7 = *(_QWORD *)(a1 + 96);
  v8 = *(_QWORD *)(v7 + 32);
  if ( *(char *)(v8 + 9) < 0 || a5 )
  {
    LOBYTE(v8) = sub_192130(a3, a2, v7);
    v9 = *(_QWORD *)(a1 + 96);
    if ( (_BYTE)v8 )
    {
      if ( *(_DWORD *)(v9 + 948) != 10 || (*(_BYTE *)(v9 + 952) & 0x20) == 0 )
        LOBYTE(v8) = sub_531B30(2, 0, 0);
    }
    else
    {
      LOBYTE(v8) = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v9 + 904LL))(
                     v9,
                     a2,
                     a3,
                     a4);
    }
  }
  return v8;
}
