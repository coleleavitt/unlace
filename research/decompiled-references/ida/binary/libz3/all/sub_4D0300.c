void __fastcall sub_4D0300(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 (__fastcall *v6)(__int64); // rax
  __int64 v7; // rdi
  __int32 v8; // edx
  __int64 (__fastcall *v9)(__int64); // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  __int32 v12; // [rsp+0h] [rbp-20h]

  if ( a3 )
  {
    v4 = a3;
    v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 192LL);
    if ( v6 == sub_4D0080 )
    {
      v7 = a1 + 64;
    }
    else
    {
      v4 = a3;
      v7 = ((__int64 (__fastcall *)(__int64, __int64))v6)(a1, a3);
    }
    v8 = sub_4C2FA0(v7, v4);
    if ( v8 != -1 )
    {
      v9 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 192LL);
      if ( v9 == sub_4D0080 )
      {
        v10 = a1 + 64;
      }
      else
      {
        v12 = v8;
        v11 = v9(a1);
        v8 = v12;
        v10 = v11;
      }
      sub_4C2C80(v10, a2, v8);
    }
  }
}

