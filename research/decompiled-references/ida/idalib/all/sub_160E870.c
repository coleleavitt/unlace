char __fastcall sub_160E870(__int64 a1, unsigned int a2, __int64 a3, double a4)
{
  __int64 (__fastcall *v4)(__int64); // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 (__fastcall *v7)(__int64); // rcx
  __int64 v8; // rsi

  LOBYTE(v4) = *(_BYTE *)(a3 + 28) & 0x7F;
  if ( (unsigned int)(unsigned __int8)v4 - 40 > 6 )
  {
    if ( (unsigned int)(unsigned __int8)v4 - 34 > 5 )
    {
      if ( (_BYTE)v4 == 7 )
      {
        v4 = (__int64 (__fastcall *)(__int64))sub_B70A90(a3);
        if ( v4 )
          LOBYTE(v4) = sub_160D770(a1, (__int64)v4, a4, v5, v6);
      }
      else if ( (_BYTE)v4 == 8 )
      {
        v7 = sub_6EE8D0;
        v4 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 64LL);
        if ( v4 == sub_6EE8D0 )
        {
          v8 = *(_QWORD *)(a3 + 88);
        }
        else
        {
          v4 = (__int64 (__fastcall *)(__int64))v4(a3);
          v8 = (__int64)v4;
        }
        if ( v8 )
          LOBYTE(v4) = sub_160D770(a1, v8, a4, a3, (__int64)v7);
      }
    }
    else
    {
      LOBYTE(v4) = sub_160DD70(a1, a2, a3, a4);
    }
  }
  return (char)v4;
}
