__int64 __fastcall sub_211C8E0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 (*v4)(); // rax
  _BYTE *v6; // rdx
  char v7; // al
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rsi
  unsigned __int8 v13; // [rsp+Fh] [rbp-99h]
  unsigned __int64 v14; // [rsp+18h] [rbp-90h] BYREF
  _QWORD v15[4]; // [rsp+20h] [rbp-88h] BYREF
  __int16 v16; // [rsp+40h] [rbp-68h]
  _QWORD v17[4]; // [rsp+50h] [rbp-58h] BYREF
  __int16 v18; // [rsp+70h] [rbp-38h]

  v3 = *a1;
  v14 = 0;
  if ( !a3 )
    goto LABEL_7;
  v4 = *(__int64 (**)())(v3 + 80);
  v6 = nullptr;
  if ( v4 != sub_210EC60 )
    v6 = (_BYTE *)((__int64 (__fastcall *)(__int64 *, __int64, _QWORD))v4)(a1, a2, 0);
  v7 = sub_210E270(a3, &v14, v6);
  if ( v7 )
  {
    if ( v14 <= 0x7FFFFFFF )
    {
      v3 = *a1;
LABEL_7:
      (*(void (__fastcall **)(__int64 *, __int64))(v3 + 176))(a1, a2);
      return 0;
    }
    v13 = v7;
    v9 = a1[1];
    v15[0] = "subsection number ";
    v10 = *(_QWORD *)(a3 + 8);
    v17[0] = v15;
    v16 = 3075;
    v18 = 770;
    v15[2] = &v14;
    v17[2] = " is not within [0,2147483647]";
    sub_2100A30(v9, v10, (__int64)v17);
    return v13;
  }
  else
  {
    v11 = a1[1];
    v12 = *(_QWORD *)(a3 + 8);
    v17[0] = "cannot evaluate subsection number";
    v18 = 259;
    sub_2100A30(v11, v12, (__int64)v17);
    return 1;
  }
}
