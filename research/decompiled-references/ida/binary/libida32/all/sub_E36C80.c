__int64 __fastcall sub_E36C80(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  __int64 result; // rax
  const char *v4; // rsi
  size_t v5; // rax
  __int16 *v6; // [rsp+0h] [rbp-68h] BYREF
  __int64 v7; // [rsp+8h] [rbp-60h]
  __int16 v8; // [rsp+10h] [rbp-58h] BYREF
  __int64 v9; // [rsp+18h] [rbp-50h]

  v8 = 3;
  v9 = *(unsigned int *)(a2 + 20);
  v2 = j__strlen("numElements");
  v6 = &v8;
  v7 = a1 + 1048;
  sub_E34890(a1 + 1048, (__int64)"numElements", v2, (__int64)sub_E34840, &v6);
  sub_2207560(&v8);
  LOBYTE(result) = (*(_BYTE *)(a2 + 18) >> 3) & 0xF;
  switch ( (char)result )
  {
    case 1:
      v4 = "altivec";
      goto LABEL_3;
    case 2:
      v4 = "altivec pixel";
      goto LABEL_3;
    case 3:
      v4 = "altivec bool";
      goto LABEL_3;
    case 4:
      v4 = "neon";
      goto LABEL_3;
    case 5:
      v4 = "neon poly";
      goto LABEL_3;
    case 6:
      v4 = "fixed-length sve data vector";
      goto LABEL_3;
    case 7:
      v4 = "fixed-length sve predicate vector";
      goto LABEL_3;
    case 8:
      v4 = "fixed-length rvv data vector";
      goto LABEL_3;
    case 9:
    case 10:
    case 11:
    case 12:
      v4 = "fixed-length rvv mask vector";
LABEL_3:
      sub_E35B80((__int64)&v8, v4);
      v5 = j__strlen("vectorKind");
      v6 = &v8;
      v7 = a1 + 1048;
      sub_E34890(a1 + 1048, (__int64)"vectorKind", v5, (__int64)sub_E34840, &v6);
      result = sub_2207560(&v8);
      break;
    default:
      result = (unsigned __int8)result;
      break;
  }
  return result;
}

