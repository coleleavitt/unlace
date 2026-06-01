__int64 __fastcall sub_CB1460(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v5; // rax
  __int64 v6; // r14
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rax
  int v15; // eax
  unsigned __int16 v16; // ax
  __int64 result; // rax
  __int64 *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // [rsp+0h] [rbp-98h]
  unsigned int v22; // [rsp+4h] [rbp-94h]
  __int64 v23; // [rsp+8h] [rbp-90h] BYREF
  int v24; // [rsp+10h] [rbp-88h] BYREF
  int v25; // [rsp+14h] [rbp-84h] BYREF
  __int64 v26; // [rsp+18h] [rbp-80h] BYREF
  __int64 v27[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v28[13]; // [rsp+30h] [rbp-68h] BYREF

  v5 = (__int64 *)a1[61];
  v6 = *(_QWORD *)(a2 + 16);
  v7 = *(_QWORD *)(a2 + 24);
  v23 = a2;
  v8 = *v5;
  v24 = sub_AAE100(*v5, *(_QWORD *)(v6 + 8), a3, a4);
  v21 = sub_21EDE70(&v24);
  v25 = sub_AAE100(v8, *(_QWORD *)(v7 + 8), v9, v10);
  v22 = sub_21EDE70(&v25);
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*a1 + 40LL))(a1, v6) )
    return 0;
  v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v11 + 16) != 13 || (((*(_WORD *)(v11 + 18) >> 3) + 56) & 0x1FFu) > 0x17 )
  {
    v12 = a1[61];
    v28[0] = v23 | 4;
    v13 = sub_CE6180(v12, *(_QWORD *)(v6 + 8));
    if ( !(unsigned __int8)sub_CA4360((__int64)a1, v13, v21, v28) )
      return 0;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*a1 + 40LL))(a1, v7) )
    return 0;
  v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v14 + 16) != 13 || (((*(_WORD *)(v14 + 18) >> 3) + 56) & 0x1FFu) > 0x17 )
  {
    v28[0] = v23 | 4;
    v15 = sub_CB1440((__int64)a1, *(_QWORD *)(v7 + 8));
    if ( !(unsigned __int8)sub_CA4360((__int64)a1, v15, v22, v28) )
      return 0;
  }
  v28[0] = v8;
  v28[1] = (__int64)&v23;
  v27[0] = (__int64)&v23;
  v28[2] = (__int64)&v24;
  v28[3] = (__int64)&v25;
  v28[4] = (__int64)a1;
  v27[1] = (__int64)a1;
  v16 = *(_WORD *)(v23 + 2);
  v26 = v23 | 4;
  switch ( (v16 >> 3) & 0x3F )
  {
    case 2:
      v18 = &v26;
      result = sub_CAC060((__int64)a1, &v26);
      if ( (_BYTE)result )
        goto LABEL_15;
      break;
    case 3:
      v18 = &v26;
      result = sub_CA0EB0((__int64)a1, &v26);
      if ( (_BYTE)result )
        goto LABEL_15;
      break;
    case 5:
      v18 = &v26;
      result = sub_C9FEF0((__int64)a1, &v26);
      if ( (_BYTE)result )
        goto LABEL_15;
      break;
    case 6:
      v18 = &v26;
      result = sub_CA3A10((__int64)a1, &v26);
      if ( (_BYTE)result )
        goto LABEL_15;
      break;
    case 7:
      v18 = (_QWORD *)(&dword_0 + 1);
      result = sub_CA6430((__int64)a1, 1, &v26);
      if ( (_BYTE)result )
        goto LABEL_15;
      break;
    case 8:
      v18 = nullptr;
      result = sub_CA6430((__int64)a1, 0, &v26);
      if ( (_BYTE)result )
LABEL_15:
        result = sub_CAE6F0((__int64)v28, (__int64)v18, v19, v20);
      break;
    case 0xA:
      result = sub_CAC360((__int64)a1, &v26);
      if ( (_BYTE)result )
        goto LABEL_13;
      break;
    case 0xB:
      result = sub_CAB060((__int64)a1, &v26);
      if ( (_BYTE)result )
        goto LABEL_13;
      break;
    case 0xC:
      result = sub_CAB660((__int64)a1, &v26);
      if ( (_BYTE)result )
        goto LABEL_13;
      break;
    case 0xD:
      result = sub_CAB160((__int64)a1, &v26);
      if ( (_BYTE)result )
        goto LABEL_13;
      break;
    case 0xE:
      result = sub_CABD60((__int64)a1, &v26);
      if ( (_BYTE)result )
        goto LABEL_13;
      break;
    case 0xF:
      result = sub_CAB6E0((__int64)a1, &v26);
      if ( (_BYTE)result )
LABEL_13:
        result = sub_CAF9C0(v27);
      break;
    default:
      result = sub_CAAFE0((__int64)a1, &v26);
      break;
  }
  return result;
}
