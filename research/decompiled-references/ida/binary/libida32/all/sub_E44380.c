__int64 __fastcall sub_E44380(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  size_t v4; // rax
  __int64 v5; // rbx
  size_t v6; // rax
  size_t v7; // rax
  __int64 result; // rax
  __int64 v9; // r13
  const char *v10; // rsi
  size_t v11; // rax
  unsigned __int64 v12; // rdx
  size_t v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  size_t v17; // rax
  __int16 *v18; // [rsp+0h] [rbp-88h] BYREF
  __int64 v19; // [rsp+8h] [rbp-80h]
  __int16 *v20; // [rsp+10h] [rbp-78h] BYREF
  __int64 v21; // [rsp+18h] [rbp-70h]
  int v22; // [rsp+20h] [rbp-68h]
  __int16 v23; // [rsp+30h] [rbp-58h] BYREF
  __int64 v24; // [rsp+38h] [rbp-50h]
  __int64 v25; // [rsp+40h] [rbp-48h]
  int v26; // [rsp+48h] [rbp-40h]

  v3 = *a2;
  v4 = j__strlen("isGlobal");
  sub_E35E50(a1, (__int64)"isGlobal", v4, (v3 & 0x80000) != 0);
  v5 = *a2;
  v6 = j__strlen("isArray");
  sub_E35E50(a1, (__int64)"isArray", v6, (v5 & 0x100000) != 0);
  LOBYTE(v5) = *((_DWORD *)a2 + 1) != 0;
  v7 = j__strlen("isPlacement");
  sub_E35E50(a1, (__int64)"isPlacement", v7, v5);
  result = (*((_BYTE *)a2 + 3) >> 1) & 3;
  if ( (_BYTE)result == 1 )
  {
    v9 = a1 + 1048;
    v10 = "call";
  }
  else
  {
    if ( (_BYTE)result != 2 )
      goto LABEL_5;
    v9 = a1 + 1048;
    v10 = "list";
  }
  sub_E35B80((__int64)&v23, v10);
  v11 = j__strlen("initStyle");
  v20 = &v23;
  v21 = v9;
  sub_E34890(v9, (__int64)"initStyle", v11, (__int64)sub_E34840, &v20);
  result = sub_2207560(&v23);
LABEL_5:
  v12 = a2[2];
  if ( v12 )
  {
    sub_E43670((__int64)&v20, a1, v12);
    v23 = 7;
    v24 = (__int64)v20;
    v20 = nullptr;
    v25 = v21;
    v21 = 0;
    v26 = v22;
    v22 = 0;
    v13 = j__strlen("operatorNewDecl");
    v18 = &v23;
    v19 = a1 + 1048;
    sub_E34890(a1 + 1048, (__int64)"operatorNewDecl", v13, (__int64)sub_E34840, &v18);
    sub_2207560(&v23);
    result = sub_E395A0((__int64 *)&v20);
  }
  v14 = a2[3];
  if ( v14 )
  {
    sub_E43670((__int64)&v20, a1, v14);
    v23 = 7;
    v15 = (__int64)v20;
    v20 = nullptr;
    v24 = v15;
    v16 = v21;
    v21 = 0;
    v25 = v16;
    LODWORD(v16) = v22;
    v22 = 0;
    v26 = v16;
    v17 = j__strlen("operatorDeleteDecl");
    v18 = &v23;
    v19 = a1 + 1048;
    sub_E34890(a1 + 1048, (__int64)"operatorDeleteDecl", v17, (__int64)sub_E34840, &v18);
    sub_2207560(&v23);
    return sub_E395A0((__int64 *)&v20);
  }
  return result;
}

