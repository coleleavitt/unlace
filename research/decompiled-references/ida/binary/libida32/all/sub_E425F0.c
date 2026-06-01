__int64 __fastcall sub_E425F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  size_t v4; // rax
  char v5; // r13
  size_t v6; // rax
  __int64 result; // rax
  const char *v8; // rsi
  size_t v9; // rax
  __int16 *v10; // [rsp+0h] [rbp-88h] BYREF
  __int64 v11; // [rsp+8h] [rbp-80h]
  int v12; // [rsp+10h] [rbp-78h]
  __int16 v13; // [rsp+20h] [rbp-68h] BYREF
  __int64 v14; // [rsp+28h] [rbp-60h]
  __int64 v15; // [rsp+30h] [rbp-58h]
  int v16; // [rsp+38h] [rbp-50h]

  sub_E374F0(a1, a2);
  sub_E3FD20((__int64)&v10, a1, *(_QWORD *)(a2 + 48), 1);
  v13 = 7;
  v2 = (__int64)v10;
  v10 = nullptr;
  v14 = v2;
  v3 = v11;
  v11 = 0;
  v15 = v3;
  LODWORD(v3) = v12;
  v12 = 0;
  v16 = v3;
  v4 = j__strlen("type");
  sub_2206E30(a1 + 1048, "type", v4);
  sub_2208D80(a1 + 1048, &v13);
  sub_2205EB0(a1 + 1048);
  sub_2207560(&v13);
  sub_E395A0((__int64 *)&v10);
  v5 = *(_BYTE *)(a2 + 88);
  v6 = j__strlen("synthesized");
  sub_E35E50(a1, (__int64)"synthesized", v6, (v5 & 8) != 0);
  LOBYTE(result) = *(_BYTE *)(a2 + 88) & 7;
  switch ( (char)result )
  {
    case 0:
      v8 = "none";
      goto LABEL_3;
    case 1:
      v8 = "private";
      goto LABEL_3;
    case 2:
      v8 = "protected";
      goto LABEL_3;
    case 3:
      v8 = "public";
      goto LABEL_3;
    case 4:
      v8 = "package";
LABEL_3:
      sub_E35B80((__int64)&v13, v8);
      v9 = j__strlen("access");
      v10 = &v13;
      v11 = a1 + 1048;
      sub_E34890(a1 + 1048, (__int64)"access", v9, (__int64)sub_E34840, &v10);
      result = sub_2207560(&v13);
      break;
    default:
      result = (unsigned __int8)result;
      break;
  }
  return result;
}

