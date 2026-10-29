void __fastcall sub_E47BB0(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, const char *a5, size_t a6)
{
  __int64 v9; // rbx
  size_t v10; // rax
  size_t v11; // rax
  __int64 v12; // rax
  const char *v13; // rsi
  __int64 v14; // rax
  size_t v15; // rax
  const char *v16; // rsi
  size_t v17; // rax
  __int64 *v20; // [rsp+10h] [rbp-88h] BYREF
  __int64 v21; // [rsp+18h] [rbp-80h]
  int v22; // [rsp+20h] [rbp-78h]
  unsigned __int64 v23; // [rsp+30h] [rbp-68h] BYREF
  __int64 v24; // [rsp+38h] [rbp-60h]
  __int64 v25; // [rsp+40h] [rbp-58h]
  int v26; // [rsp+48h] [rbp-50h]

  v9 = a1 + 1048;
  v10 = j__strlen("TemplateArgument");
  sub_E35AF0((__int64)&v23, (__int64)"TemplateArgument", v10);
  v11 = j__strlen("kind");
  sub_2206E30(a1 + 1048, "kind", v11);
  sub_2208D80(a1 + 1048, &v23);
  sub_2205EB0(a1 + 1048);
  sub_2207560(&v23);
  if ( (_DWORD)a3 && HIDWORD(a3) )
  {
    v23 = a3;
    v24 = a1;
    v17 = j__strlen("range");
    sub_2206E30(v9, "range", v17);
    sub_2205CB0(v9);
    sub_E36490((__int64 *)&v23);
    sub_2205E20(v9);
    sub_2205EB0(v9);
  }
  if ( a4 )
  {
    sub_E43670((__int64)&v20, a1, a4);
    v12 = (__int64)v20;
    v20 = nullptr;
    LOWORD(v23) = 7;
    v13 = a5;
    v24 = v12;
    v14 = v21;
    v21 = 0;
    v25 = v14;
    LODWORD(v14) = v22;
    v22 = 0;
    v26 = v14;
    if ( !a6 )
    {
      v13 = "fromDecl";
      a6 = j__strlen("fromDecl");
    }
    sub_2206E30(v9, v13, a6);
    sub_2208D80(v9, &v23);
    sub_2205EB0(v9);
    sub_2207560(&v23);
    sub_E395A0((__int64 *)&v20);
  }
  switch ( *(_DWORD *)a2 & 0x7FFFFFFF )
  {
    case 0:
      LOBYTE(v24) = 1;
      LOWORD(v23) = 1;
      v15 = j__strlen("isNull");
      v20 = (__int64 *)&v23;
      v21 = a1 + 1048;
      v16 = "isNull";
      goto LABEL_10;
    case 1:
      sub_E40030(a1, a2);
      return;
    case 2:
      sub_E43990(a1, a2);
      return;
    case 3:
      LOBYTE(v24) = 1;
      LOWORD(v23) = 1;
      v15 = j__strlen("isNullptr");
      v20 = (__int64 *)&v23;
      v21 = a1 + 1048;
      v16 = "isNullptr";
      goto LABEL_10;
    case 4:
      sub_E391A0(a1, a2);
      return;
    case 5:
      sub_E36190(a1, *(_DWORD **)(a2 + 8), *(_QWORD *)(a2 + 16));
      return;
    case 6:
    case 7:
      return;
    case 8:
      sub_E39280(a1, a2);
      return;
    case 9:
      LOBYTE(v24) = 1;
      LOWORD(v23) = 1;
      v15 = j__strlen("isPack");
      v20 = (__int64 *)&v23;
      v21 = a1 + 1048;
      v16 = "isPack";
LABEL_10:
      sub_E34890(v9, (__int64)v16, v15, (__int64)sub_E34840, &v20);
      sub_2207560(&v23);
      return;
  }
}

