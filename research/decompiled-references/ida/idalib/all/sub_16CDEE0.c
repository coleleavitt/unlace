__int64 __fastcall sub_16CDEE0(__int64 a1, unsigned __int64 a2, unsigned int a3, double a4)
{
  __int64 v4; // rbp
  _WORD *v6; // rax
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // eax
  __int64 v12; // r12
  unsigned int v13; // eax
  unsigned int v14; // eax
  __int64 *v15; // rsi
  unsigned int v16; // ecx
  unsigned int v17; // eax
  int v18; // [rsp+0h] [rbp-B4h] BYREF
  __int64 v19; // [rsp+4h] [rbp-B0h] BYREF
  _BYTE v20[168]; // [rsp+Ch] [rbp-A8h] BYREF

  if ( !a2 )
    return 0;
  v4 = a3;
  v6 = (_WORD *)sub_BFBAE0(a2);
  if ( ((*v6 + 423) & 0x1FFu) > 4 || (unsigned int)sub_BFBE70((__int64)v6) != 398 )
    return 0;
  switch ( v4 )
  {
    case 0LL:
    case 1LL:
      v17 = sub_C00A40(a2, a2, v8, v9, v10);
      sub_168B9F0((__int64)v20, (__int64 *)(a1 + 8), v17, 0xD10u, 0);
      v18 = 0;
      goto LABEL_9;
    case 2LL:
      v14 = sub_C00A40(a2, a2, v8, v9, v10);
      v15 = (__int64 *)(a1 + 8);
      v16 = 3344;
      goto LABEL_12;
    case 3LL:
      v13 = sub_C00A40(a2, a2, v8, v9, v10);
      sub_168B9F0((__int64)v20, (__int64 *)(a1 + 8), v13, 0xD10u, 0);
      v18 = 2;
      goto LABEL_9;
    case 4LL:
      v11 = sub_C00A40(a2, a2, v8, v9, v10);
      sub_168B9F0((__int64)v20, (__int64 *)(a1 + 8), v11, 0xD12u, 0);
      v18 = 0;
      goto LABEL_9;
    case 5LL:
      v14 = sub_C00A40(a2, a2, v8, v9, v10);
      v15 = (__int64 *)(a1 + 8);
      v16 = 3346;
LABEL_12:
      sub_168B9F0((__int64)v20, v15, v14, v16, 0);
      v18 = 1;
LABEL_9:
      v12 = sub_1587D10((__int64)v20, &v18);
      v19 = sub_EEC8C0(a2, (__int64)&v18, a4);
      sub_1587DB0(v12, &v19);
      sub_15F7200(v20);
      result = 1;
      break;
    default:
      result = 1;
      break;
  }
  return result;
}
