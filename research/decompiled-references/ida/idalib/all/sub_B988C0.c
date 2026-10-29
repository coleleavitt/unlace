__int64 __fastcall sub_B988C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // eax
  unsigned int v7; // ebx
  _BYTE *v9; // [rsp+8h] [rbp-10h] BYREF

  v4 = sub_B7D580(a1, 1, a3, a4);
  if ( !v4 )
    v4 = a1;
  v6 = sub_B7D390(v4, (__int64)&v9, 0, v5);
  if ( (_BYTE)v6 && (v7 = v6, !(*(unsigned __int8 (__fastcall **)(_BYTE *))(*(_QWORD *)v9 + 24LL))(v9)) )
  {
    if ( ((v9[83] & 8) != 0 || (v9[128] & 1) == 0 && !*((_QWORD *)v9 + 16)) && (v9[83] & 0x40) == 0 )
      LOBYTE(v7) = (v9[84] & 0x40) != 0;
  }
  else
  {
    return 0;
  }
  return v7;
}
