__int64 __fastcall sub_E688D0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r12
  size_t v4; // rax
  size_t v5; // rax
  char v6; // r12
  size_t v7; // rax
  __int64 v8; // r12
  size_t v9; // rax
  __int64 v10; // rbx
  size_t v11; // rax
  size_t v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  size_t v16; // rax
  char *v17; // rsi
  __int16 *v18; // [rsp+0h] [rbp-88h] BYREF
  __int64 v19; // [rsp+8h] [rbp-80h]
  __int16 *v20; // [rsp+10h] [rbp-78h] BYREF
  __int64 v21; // [rsp+18h] [rbp-70h]
  int v22; // [rsp+20h] [rbp-68h]
  __int16 v23; // [rsp+30h] [rbp-58h] BYREF
  __int64 v24; // [rsp+38h] [rbp-50h]
  __int64 v25; // [rsp+40h] [rbp-48h]
  int v26; // [rsp+48h] [rbp-40h]

  v2 = a1 + 1048;
  if ( (a2[2] & 4) == 0 )
  {
    sub_E598C0((__int64)&v23, "explicit");
    v13 = j__strlen("propertyKind");
    v20 = &v23;
    v21 = a1 + 1048;
    sub_E585D0(v2, (__int64)"propertyKind", v13, (__int64)sub_E58580, &v20);
    sub_222B2A0(&v23);
    sub_E673B0((__int64)&v20, a1, a2[2] & 0xFFFFFFFFFFFFFFF8LL);
    v23 = 7;
    v14 = (__int64)v20;
    v20 = nullptr;
    v24 = v14;
    v15 = v21;
    v21 = 0;
    v25 = v15;
    LODWORD(v15) = v22;
    v22 = 0;
    v26 = v15;
    v16 = j__strlen("property");
    v18 = &v23;
    v19 = a1 + 1048;
    v17 = "property";
LABEL_7:
    sub_E585D0(v2, (__int64)v17, v16, (__int64)sub_E58580, &v18);
    sub_222B2A0(&v23);
    sub_E5D2E0((__int64 *)&v20);
    goto LABEL_5;
  }
  sub_E598C0((__int64)&v23, "implicit");
  v4 = j__strlen("propertyKind");
  v20 = &v23;
  v21 = a1 + 1048;
  sub_E585D0(v2, (__int64)"propertyKind", v4, (__int64)sub_E58580, &v20);
  sub_222B2A0(&v23);
  if ( (a2[2] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    sub_E673B0((__int64)&v20, a1, a2[2] & 0xFFFFFFFFFFFFFFF8LL);
    v23 = 7;
    v24 = (__int64)v20;
    v20 = nullptr;
    v25 = v21;
    v21 = 0;
    v26 = v22;
    v22 = 0;
    v5 = j__strlen("getter");
    v18 = &v23;
    v19 = a1 + 1048;
    sub_E585D0(v2, (__int64)"getter", v5, (__int64)sub_E58580, &v18);
    sub_222B2A0(&v23);
    sub_E5D2E0((__int64 *)&v20);
  }
  if ( (a2[3] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    sub_E673B0((__int64)&v20, a1, a2[3] & 0xFFFFFFFFFFFFFFF8LL);
    v23 = 7;
    v24 = (__int64)v20;
    v20 = nullptr;
    v25 = v21;
    v21 = 0;
    v26 = v22;
    v22 = 0;
    v16 = j__strlen("setter");
    v18 = &v23;
    v19 = a1 + 1048;
    v17 = "setter";
    goto LABEL_7;
  }
LABEL_5:
  v6 = (((__int64)a2[5] >> 1) & 3) == 1;
  v7 = j__strlen("isSuperReceiver");
  sub_E59B90(a1, (__int64)"isSuperReceiver", v7, v6);
  v8 = a2[3];
  v9 = j__strlen("isMessagingGetter");
  sub_E59B90(a1, (__int64)"isMessagingGetter", v9, (v8 >> 1) & 1);
  v10 = a2[3];
  v11 = j__strlen("isMessagingSetter");
  return sub_E59B90(a1, (__int64)"isMessagingSetter", v11, (v10 & 4) != 0);
}
