unsigned __int64 __fastcall sub_21B11C0(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // rax
  char v3; // al
  __int64 v4; // rsi

  v2 = *(__int64 (**)(void))(*(_QWORD *)a1 + 64LL);
  if ( (char *)v2 == (char *)sub_21B1110 )
    v3 = *(_DWORD *)(a1 + 8) == 12;
  else
    v3 = v2();
  v4 = (a2 - *(_QWORD *)(a1 + 64)) >> 3;
  if ( v3 )
    return 0x8E38E38E38E38E39LL * v4 + 1;
  else
    return 0xCCCCCCCCCCCCCCCDLL * v4 + 1;
}
