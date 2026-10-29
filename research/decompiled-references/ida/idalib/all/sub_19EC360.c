void __fastcall sub_19EC360(__int64 a1, _DWORD *a2, unsigned __int8 **a3)
{
  __int64 v5; // rax
  char v6; // al
  int v7; // esi
  unsigned __int64 v8; // rax
  int v9; // eax

  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 72LL))(a2)
    || (v5 = sub_B8BF30((__int64)a2)) == 0
    || (*(_BYTE *)(v5 + 84) & 0x40) != 0 )
  {
    v6 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 264) + 152LL) + 24LL);
    if ( (v6 & 1) == 0
      && ((v6 & 0x10) == 0 || (v7 = a2[6]) == 0 || (v9 = sub_1021680(*(_QWORD *)(a1 + 272), v7)) == 0 || v9 == 3)
      && !(unsigned __int8)sub_15F7970(a1) )
    {
      v8 = sub_B8D340((__int64)a2);
      if ( !(unsigned __int8)sub_B8E180(v8) )
        sub_19EC290(a1, (__int64)a2, a3);
    }
  }
}
