__int64 __fastcall sub_1109590(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, unsigned __int8 a6)
{
  __int64 v6; // rbp
  void *v8[2]; // [rsp+8h] [rbp-68h] BYREF
  __int64 v9; // [rsp+18h] [rbp-58h] BYREF
  void **v10; // [rsp+28h] [rbp-48h] BYREF
  __int16 v11; // [rsp+48h] [rbp-28h]

  (*(void (__fastcall **)(void **, __int64, __int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 304LL))(
    v8,
    a1,
    a2,
    a3,
    a4,
    a5,
    a6);
  v10 = v8;
  v11 = 260;
  v6 = sub_10B6980(a2, (__int64)&v10);
  if ( v8[0] != &v9 )
    operator delete(v8[0]);
  return v6;
}

