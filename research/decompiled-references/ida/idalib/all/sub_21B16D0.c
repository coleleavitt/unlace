unsigned __int64 __fastcall sub_21B16D0(_DWORD *a1, __int64 a2)
{
  __int64 (*v2)(void); // rdx
  __int64 (*v3)(void); // rax
  char v4; // al
  _DWORD *v5; // rdx
  _DWORD *v6; // rsi
  char v7; // al

  v2 = *(__int64 (**)(void))(*(_QWORD *)a1 + 264LL);
  if ( (char *)v2 == (char *)sub_21B15E0 )
  {
    v3 = *(__int64 (**)(void))(*(_QWORD *)a1 + 64LL);
    if ( (char *)v3 == (char *)sub_21B1110 )
      v4 = a1[2] == 12;
    else
      v4 = v3();
    v5 = (_DWORD *)(a2 + 64);
    v6 = (_DWORD *)(a2 + 36);
    if ( v4 )
      v6 = v5;
    v7 = (*v6 & 0x10200000) != 0;
  }
  else
  {
    v7 = v2();
  }
  return (-(__int64)(v7 == 0) & 0xFFFFFFFFFFFFFFFCLL) + 8;
}
