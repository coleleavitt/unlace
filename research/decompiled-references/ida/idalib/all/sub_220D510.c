_QWORD *__fastcall sub_220D510(_QWORD *a1, _QWORD *a2, unsigned int a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v13; // [rsp+0h] [rbp-48h]
  __int64 v14; // [rsp+8h] [rbp-40h]

  v4 = sub_221DDC0(a3, a2[18], a2[19], 0);
  v6 = v5;
  v14 = v4;
  v7 = sub_2219E40(a2 + 20, a2 + 23, a2 + 24);
  v9 = a2[17];
  v13 = v7;
  if ( v9 )
  {
    v10 = v8;
    (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v9 + 248LL))(v9, "Attribute", 9);
    (*(void (__fastcall **)(_QWORD, char *, __int64, _QWORD))(*(_QWORD *)a2[17] + 64LL))(a2[17], "Tag", 3, a3);
    v11 = v13;
    if ( v6 )
    {
      (*(void (__fastcall **)(_QWORD, const char *, __int64, __int64, __int64))(*(_QWORD *)a2[17] + 232LL))(
        a2[17],
        "TagName",
        7,
        v14,
        v6);
      v11 = v13;
    }
    (*(void (__fastcall **)(_QWORD, char *, __int64, __int64, __int64))(*(_QWORD *)a2[17] + 232LL))(
      a2[17],
      "Value",
      5,
      v11,
      v10);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 256LL))(v9);
  }
  *a1 = 0;
  return a1;
}
