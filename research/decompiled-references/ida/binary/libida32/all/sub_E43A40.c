__int64 __fastcall sub_E43A40(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rax
  size_t v10; // rax
  __int64 v11; // rax
  size_t v12; // rax
  char v13; // bp
  size_t v14; // rax
  __int64 v16; // r12
  const char *v17; // rsi
  size_t v18; // rax
  _QWORD v19[2]; // [rsp+0h] [rbp-88h] BYREF
  __int16 *v20; // [rsp+10h] [rbp-78h] BYREF
  __int64 v21; // [rsp+18h] [rbp-70h]
  int v22; // [rsp+20h] [rbp-68h]
  __int16 v23; // [rsp+30h] [rbp-58h] BYREF
  __int64 v24; // [rsp+38h] [rbp-50h]
  __int64 v25; // [rsp+40h] [rbp-48h]
  int v26; // [rsp+48h] [rbp-40h]

  v4 = *(_QWORD *)(a2 + 16);
  if ( (v4 & 4) == 0 )
  {
LABEL_8:
    v7 = a1 + 1048;
    goto LABEL_4;
  }
  v5 = v4 & 0xFFFFFFFFFFFFFFF8LL;
  v6 = *(_QWORD *)(v5 + 48);
  if ( v6 )
  {
    v7 = a1 + 1048;
    sub_E43670((__int64)&v20, a1, v6);
    v23 = 7;
    v8 = (__int64)v20;
    v20 = nullptr;
    v24 = v8;
    v9 = v21;
    v21 = 0;
    v25 = v9;
    LODWORD(v9) = v22;
    v22 = 0;
    v26 = v9;
    v10 = j__strlen("extendingDecl");
    v19[0] = &v23;
    v19[1] = a1 + 1048;
    sub_E34890(a1 + 1048, (__int64)"extendingDecl", v10, (__int64)sub_E34840, v19);
    sub_2207560(&v23);
    sub_E395A0((__int64 *)&v20);
    v11 = *(_QWORD *)(a2 + 16);
    if ( (v11 & 4) == 0 )
    {
LABEL_4:
      sub_E35B80((__int64)&v23, "full expression");
      v12 = j__strlen("storageDuration");
      v20 = &v23;
      v21 = v7;
      sub_E34890(v7, (__int64)"storageDuration", v12, (__int64)sub_E34840, &v20);
      sub_2207560(&v23);
      goto LABEL_5;
    }
    v5 = v11 & 0xFFFFFFFFFFFFFFF8LL;
  }
  switch ( sub_B75F80(v5) )
  {
    case 0LL:
      goto LABEL_8;
    case 1LL:
      v16 = a1 + 1048;
      v17 = "automatic";
      goto LABEL_10;
    case 2LL:
      v16 = a1 + 1048;
      v17 = "thread";
      goto LABEL_10;
    case 3LL:
      v16 = a1 + 1048;
      v17 = "static";
      goto LABEL_10;
    case 4LL:
      v16 = a1 + 1048;
      v17 = "dynamic";
LABEL_10:
      sub_E35B80((__int64)&v23, v17);
      v18 = j__strlen("storageDuration");
      v20 = &v23;
      v21 = v16;
      sub_E34890(v16, (__int64)"storageDuration", v18, (__int64)sub_E34840, &v20);
      sub_2207560(&v23);
      break;
    default:
      break;
  }
LABEL_5:
  v13 = ((*(_BYTE *)(a2 + 1) >> 1) & 3) == 1;
  v14 = j__strlen("boundToLValueRef");
  return sub_E35E50(a1, (__int64)"boundToLValueRef", v14, v13);
}

