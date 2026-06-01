__int64 __fastcall sub_17EB00(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  __int64 (*v6)(); // rax
  __int64 v8; // rax
  __int64 v9; // [rsp+8h] [rbp-20h]

  v5 = 0;
  v6 = *(__int64 (**)())(*(_QWORD *)a1 + 64LL);
  if ( v6 != sub_17E750 )
  {
    v9 = a4;
    v8 = ((__int64 (__fastcall *)(__int64, __int64, __int64 (*)(), __int64, _QWORD))v6)(a1, a2, sub_17E750, a4, 0);
    a4 = v9;
    v5 = v8;
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a3 + 16LL))(
           a3,
           a2,
           a1,
           a4,
           v5);
}

