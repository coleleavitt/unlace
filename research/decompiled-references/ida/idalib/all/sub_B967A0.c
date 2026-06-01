__int64 __fastcall sub_B967A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned int v6; // edx

  v4 = sub_B7D580(a1, 1, a3, a4);
  if ( !v4 )
    v4 = a1;
  v5 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v4 + 32LL))(v4);
  v6 = 0;
  if ( (*(_BYTE *)(v5 + 82) & 0x40) == 0 )
    LOBYTE(v6) = (*(_BYTE *)((*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(*(_QWORD *)v4 + 32LL))(
                               v4,
                               1,
                               0)
                           + 83)
                & 2) == 0;
  return v6;
}
