unsigned __int64 __fastcall sub_9D4530(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax
  char v6; // dl
  __int64 v7; // rax
  __int64 v8; // rdi
  char v9; // al
  __int64 v10; // rax
  unsigned __int8 **v11; // rax
  unsigned __int8 **v12; // r12
  __int64 v13; // rax
  unsigned __int8 **v14; // rax
  __int64 v15; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v16[4]; // [rsp+8h] [rbp-20h] BYREF

  v15 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
  if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) == 0 )
    return sub_A2E0C0(a1, &v15, 110, 0);
  result = (*(_BYTE *)(a3 + 28) & 0x7Fu) - 38;
  v6 = *(_BYTE *)(a3 + 28) & 0x7F;
  if ( (unsigned int)result <= 6 )
  {
    v7 = *(_QWORD *)(a3 + 48);
    if ( (v7 & 1) == 0 && (byte_8[v7 & 0xFFFFFFFFFFFFFFF0LL] & 1) == 0 )
      goto LABEL_8;
    result = sub_77BD20((_QWORD *)a3, v16);
    if ( !result )
      return sub_9D4270(a1, a2, (unsigned int *)a3);
    v6 = *(_BYTE *)(a3 + 28) & 0x7F;
  }
  if ( v6 == 48 )
    return result;
  v7 = *(_QWORD *)(a3 + 48);
LABEL_8:
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v9 = *(_BYTE *)(v8 + 16);
  switch ( v9 )
  {
    case 13:
      if ( (((*(_WORD *)(v8 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
        break;
LABEL_19:
      v14 = (unsigned __int8 **)sub_A2E0C0(a1, &v15, 2227, 1);
      if ( v14 )
        sub_8356A0(v14, a3, 0xAu);
      return sub_A2DD70(a1, *(unsigned int *)(a3 + 24), 105);
    case 46:
      v13 = sub_B14A40(v8);
      if ( (*(_BYTE *)(v13 + 74) & 1) == 0 && *(_QWORD *)(v13 + 128) <= 7u )
        break;
      goto LABEL_19;
    case 10:
      goto LABEL_19;
  }
  v10 = sub_A2CB40(a1);
  v11 = (unsigned __int8 **)sub_A2E0C0(a1, &v15, (unsigned int)((*(_BYTE *)(v10 + 1) & 0x10) == 0) + 2228, 1);
  v12 = v11;
  if ( v11 )
  {
    sub_8356A0(v11, a3, 0xAu);
    sub_9B5660(v12, *(_QWORD *)(a3 + 48));
  }
  return sub_A2DD70(a1, *(unsigned int *)(a3 + 24), 105);
}

