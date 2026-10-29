char *__fastcall sub_21B5720(_DWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  bool (__fastcall *v3)(__int64); // rax
  char v4; // al
  _QWORD *v5; // rax
  _QWORD *v7; // rax
  char *v8; // [rsp+20h] [rbp-58h]
  _QWORD *v9; // [rsp+28h] [rbp-50h] BYREF
  __int64 v10; // [rsp+30h] [rbp-48h] BYREF
  __int64 v11; // [rsp+38h] [rbp-40h]
  _QWORD *v12; // [rsp+40h] [rbp-38h] BYREF
  __int64 v13; // [rsp+48h] [rbp-30h]
  char v14; // [rsp+50h] [rbp-28h]

  v2 = a2;
  v3 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL);
  if ( v3 == sub_21B1110 )
  {
    v4 = a1[2] == 12;
  }
  else
  {
    v4 = ((__int64 (__fastcall *)(_DWORD *, __int64, __int64))v3)(a1, a2, a2);
    v2 = a2;
  }
  if ( !v4 )
  {
    sub_21B3B70((__int64)&v12, a1, v2);
    v5 = v12;
    if ( (v14 & 1) != 0 )
    {
      v12 = nullptr;
      if ( v5 )
      {
        v9 = v5;
        sub_A05760(&v10, &v9);
        if ( v9 )
          (*(void (__fastcall **)(_QWORD *))(*v9 + 8LL))(v9);
        v11 = 0;
        v10 = 0;
        sub_21B3500((__int64 *)&v12);
        return nullptr;
      }
    }
    v8 = (char *)v5 + 10 * v13;
    sub_21B3500((__int64 *)&v12);
    return v8;
  }
  sub_21B3700((__int64)&v12, a1, v2);
  v7 = v12;
  if ( (v14 & 1) == 0 || (v12 = nullptr, !v7) )
  {
    v8 = (char *)v7 + 14 * v13;
    sub_21B34E0((__int64 *)&v12);
    return v8;
  }
  v9 = v7;
  sub_A05760(&v10, &v9);
  if ( v9 )
    (*(void (__fastcall **)(_QWORD *))(*v9 + 8LL))(v9);
  v11 = 0;
  v10 = 0;
  sub_21B34E0((__int64 *)&v12);
  return nullptr;
}
