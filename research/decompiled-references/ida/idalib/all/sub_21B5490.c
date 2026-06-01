_QWORD *__fastcall sub_21B5490(_DWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  bool (__fastcall *v3)(__int64); // rax
  char v4; // al
  _QWORD *v5; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // [rsp+20h] [rbp-58h]
  _QWORD *v9; // [rsp+28h] [rbp-50h] BYREF
  __int64 v10; // [rsp+30h] [rbp-48h] BYREF
  __int64 v11; // [rsp+38h] [rbp-40h]
  __int64 v12[2]; // [rsp+40h] [rbp-38h] BYREF
  char v13; // [rsp+50h] [rbp-28h]

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
  if ( v4 )
  {
    sub_21B3700((__int64)v12, a1, v2);
    v7 = (_QWORD *)v12[0];
    if ( (v13 & 1) != 0 )
    {
      v12[0] = 0;
      if ( v7 )
      {
        v9 = v7;
        sub_A05760(&v10, &v9);
        if ( v9 )
          (*(void (__fastcall **)(_QWORD *))(*v9 + 8LL))(v9);
        v11 = 0;
        v10 = 0;
        sub_21B34E0(v12);
        return nullptr;
      }
      v7 = nullptr;
    }
    v8 = v7;
    sub_21B34E0(v12);
    return v8;
  }
  sub_21B3B70((__int64)v12, a1, v2);
  v5 = (_QWORD *)v12[0];
  if ( (v13 & 1) == 0 )
  {
LABEL_5:
    v8 = v5;
    sub_21B3500(v12);
    return v8;
  }
  v12[0] = 0;
  if ( !v5 )
  {
    v5 = nullptr;
    goto LABEL_5;
  }
  v9 = v5;
  sub_A05760(&v10, &v9);
  if ( v9 )
    (*(void (__fastcall **)(_QWORD *))(*v9 + 8LL))(v9);
  v11 = 0;
  v10 = 0;
  sub_21B3500(v12);
  return nullptr;
}
