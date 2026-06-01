__int64 __fastcall sub_1097500(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, unsigned int a5)
{
  unsigned __int64 v6; // rax
  __int64 v7; // r9
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v11; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-20h]

  v11 = a3;
  v12 = a4;
  v6 = sub_2223270(&v11, "=+&", 3, 0);
  v8 = v12;
  v9 = 0;
  if ( v6 < v12 )
  {
    v8 = v6;
    v9 = v12 - v6;
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, unsigned __int64, _QWORD, __int64, unsigned __int64, unsigned __int64))(*(_QWORD *)a1 + 984LL))(
           a1,
           a2,
           v8 + v11,
           v9,
           a5,
           v7,
           v8 + v11,
           v9);
}

