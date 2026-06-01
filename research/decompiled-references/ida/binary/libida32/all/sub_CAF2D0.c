__int64 __fastcall sub_CAF2D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  unsigned int v6; // r14d
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // rdi
  int v10; // r15d
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  int v22; // edx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r13
  unsigned int v27; // eax
  unsigned int v28; // r14d
  __int64 v29; // rax
  int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // [rsp+Ch] [rbp-ACh]
  __int64 v36; // [rsp+10h] [rbp-A8h]
  unsigned int v37; // [rsp+18h] [rbp-A0h]
  unsigned int v38; // [rsp+1Ch] [rbp-9Ch]
  unsigned int v39; // [rsp+20h] [rbp-98h]
  unsigned __int8 v40; // [rsp+20h] [rbp-98h]
  unsigned int v41; // [rsp+28h] [rbp-90h]
  unsigned int v42; // [rsp+2Ch] [rbp-8Ch]
  unsigned int v43; // [rsp+34h] [rbp-84h]
  unsigned int v44; // [rsp+38h] [rbp-80h]
  unsigned __int8 v45; // [rsp+3Fh] [rbp-79h]
  __int64 v46; // [rsp+48h] [rbp-70h] BYREF
  __int64 v47[5]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v48; // [rsp+78h] [rbp-40h]

  v4 = a2;
  v6 = *(unsigned __int8 *)(a1 + 1362);
  if ( !(_BYTE)v6 && ((*(_WORD *)(a2 + 2) >> 3) & 0x3Fu) - 22 > 9 )
  {
    v29 = sub_C9ADF0(a1, a2);
    if ( !BYTE4(v29) )
      return v6;
    a2 = (unsigned int)v29;
    v47[0] = v4 | 4;
    if ( !(unsigned __int8)sub_CDB9E0(a1, (unsigned int)v29, v47) )
      return v6;
  }
  v7 = *(_QWORD *)(v4 + 16);
  v8 = *(_QWORD *)(v4 + 24);
  v9 = *(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v36 = v9;
  if ( (unsigned int)*(unsigned __int8 *)(v9 + 16) - 57 > 1 )
    v36 = sub_C8ADC0(v9, a2, a3, a4);
  v10 = (*(_WORD *)(v4 + 2) >> 3) & 0x3F;
  if ( (unsigned int)(v10 - 22) <= 9 )
  {
    v22 = v10 - 13;
    a4 = (unsigned int)(v10 - 20);
    if ( ((*(_WORD *)(v4 + 2) >> 3) & 0x3Fu) < 0x1D )
      v22 = v10 - 20;
    v10 = v22;
  }
  v11 = *(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v12 = (unsigned int)*(unsigned __int8 *)(v11 + 16) - 57;
  if ( (unsigned int)v12 > 1 )
    v11 = sub_C8ADC0(v11, a2, v12, a4);
  v13 = *(_QWORD *)(v11 + 32);
  v39 = sub_CC2440(*(_QWORD *)(a1 + 1264), v13);
  v38 = v39;
  v15 = *(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v16 = (unsigned int)*(unsigned __int8 *)(v15 + 16) - 57;
  if ( (unsigned int)v16 > 1 )
    v15 = sub_C8ADC0(v15, v13, v16, v14);
  v17 = *(_QWORD *)(v15 + 32);
  v41 = sub_CC2440(*(_QWORD *)(a1 + 1264), v17);
  v19 = *(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v20 = (unsigned int)*(unsigned __int8 *)(v19 + 16) - 57;
  if ( (unsigned int)v20 > 1 )
    v19 = sub_C8ADC0(v19, v17, v20, v18);
  v37 = sub_CC2440(*(_QWORD *)(a1 + 1264), *(_QWORD *)(v19 + 32));
  v47[0] = v7 | 2;
  v35 = sub_CAE4E0(a1, v47, 13, 1u, 0, 1, 0);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, v7) )
    return 0;
  v47[0] = v4 | 4;
  if ( !(unsigned __int8)sub_D01960(a1, 13, v35, v47) )
    return 0;
  v47[0] = v8 | 2;
  v42 = sub_CAE4E0(a1, v47, 13, 1u, 0, 1, 0);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, v8) )
    return 0;
  v47[0] = v4 | 4;
  v45 = sub_D01960(a1, 13, v42, v47);
  if ( !v45 )
    return 0;
  if ( ((*(_WORD *)(v4 + 2) >> 3) & 0x3Fu) - 22 <= 9 )
  {
    v47[0] = v4 | 4;
    v6 = sub_D0EEB0(a1, 13, v35, v47);
    if ( !(_BYTE)v6 )
      return v6;
  }
  if ( v39 == 10
    && ((v30 = (*(_WORD *)(v4 + 2) >> 3) & 0x3F, v23 = (unsigned int)(v30 - 16), (unsigned int)v23 <= 2)
     || (unsigned int)(v30 - 7) <= 1) )
  {
    v26 = sub_A8BB50(**(__int64 ***)(a1 + 1264), *(_QWORD *)(**(_QWORD **)(a1 + 1264) + 18640LL), v23, v24, v25);
    v44 = sub_C90F60(a1, v26);
    v43 = v44;
    v40 = v45;
  }
  else
  {
    v26 = sub_A8BB50(**(__int64 ***)(a1 + 1264), *(_QWORD *)(**(_QWORD **)(a1 + 1264) + 18640LL), v23, v24, v25);
    v43 = sub_C90F60(a1, v26);
    v27 = v39;
    v40 = 0;
    v44 = v27;
  }
  v48 = v26;
  if ( *(_DWORD *)(v36 + 20) )
  {
    v28 = 0;
    while ( 1 )
    {
      v46 = v4 | 4;
      if ( !(unsigned __int8)sub_D0EEB0(a1, 13, v35, &v46) )
        return 0;
      v46 = v4 | 4;
      if ( !(unsigned __int8)sub_D0FAA0(a1, v38, v28, &v46) )
        return 0;
      if ( ((*(_WORD *)(v4 + 2) >> 3) & 0x3Fu) - 19 <= 1 )
      {
        if ( !(unsigned __int8)sub_C91730(a1, v38, 10, *(_QWORD *)(**(_QWORD **)(a1 + 1264) + 18640LL), v4)
          || !(unsigned __int8)sub_C91730(a1, 10, v37, *(_QWORD *)(v36 + 32), v4) )
        {
          return 0;
        }
      }
      else if ( v40 && !(unsigned __int8)sub_C91730(a1, v38, v43, v48, v4) )
      {
        return 0;
      }
      v46 = v4 | 4;
      if ( !(unsigned __int8)sub_D0EEB0(a1, 13, v42, &v46) )
        return 0;
      v46 = v4 | 4;
      if ( !(unsigned __int8)sub_D0FAA0(a1, v41, v28, &v46) )
        return 0;
      if ( ((*(_WORD *)(v4 + 2) >> 3) & 0x3Fu) - 19 <= 1 )
      {
        if ( !(unsigned __int8)sub_C91730(a1, v41, 10, *(_QWORD *)(**(_QWORD **)(a1 + 1264) + 18640LL), v4)
          || !(unsigned __int8)sub_C91730(a1, 10, v37, *(_QWORD *)(v36 + 32), v4) )
        {
          return 0;
        }
      }
      else if ( v40 && !(unsigned __int8)sub_C91730(a1, v41, v43, v48, v4) )
      {
        return 0;
      }
      switch ( v10 )
      {
        case 2:
          v46 = v4 | 4;
          if ( v38 == 12 )
          {
            v31 = sub_C91710(a1, v4);
            if ( (unsigned __int8)sub_D205F0(a1, v31, &v46) )
              goto LABEL_44;
          }
          else if ( (unsigned __int8)sub_D4D2A0(a1, v38, &v46) )
          {
            goto LABEL_44;
          }
          return 0;
        case 3:
          v46 = v4 | 4;
          if ( v38 == 12 )
          {
            v32 = sub_C91710(a1, v4);
            if ( !(unsigned __int8)sub_D1FFE0(a1, v32, &v46) )
              return 0;
          }
          else if ( !(unsigned __int8)sub_D32F70(a1, v38, &v46) )
          {
            return 0;
          }
          goto LABEL_44;
        case 4:
          v46 = v4 | 4;
          if ( !(unsigned __int8)sub_D33660(a1, v38, &v46) )
            return 0;
          goto LABEL_44;
        case 5:
          v46 = v4 | 4;
          if ( v38 == 12 )
          {
            v34 = sub_C91710(a1, v4);
            if ( !(unsigned __int8)sub_D1E560(a1, v34, &v46) )
              return 0;
          }
          else if ( !(unsigned __int8)sub_D30220(a1, v38, &v46) )
          {
            return 0;
          }
LABEL_44:
          if ( ((*(_WORD *)(v4 + 2) >> 3) & 0x3Fu) - 9 <= 6 )
          {
            if ( !(unsigned __int8)sub_C91730(a1, 10, v37, *(_QWORD *)(v36 + 32), v4) )
              return 0;
            v46 = v4 | 4;
            if ( !(unsigned __int8)sub_D2A830(a1, v37, &v46) )
              return 0;
          }
          if ( v40 && !(unsigned __int8)sub_C91730(a1, v43, v37, *(_QWORD *)(v36 + 32), v4) )
            return 0;
          v46 = v4 | 4;
          if ( !(unsigned __int8)sub_CF5810(a1, v37, v28, &v46) )
            return 0;
          if ( ++v28 == *(_DWORD *)(v36 + 20) )
            goto LABEL_49;
          break;
        case 6:
          v46 = v4 | 4;
          if ( v38 == 12 )
          {
            v33 = sub_C91710(a1, v4);
            if ( !(unsigned __int8)sub_D207A0(a1, v33, &v46) )
              return 0;
          }
          else if ( !(unsigned __int8)sub_D388F0(a1, v38, &v46) )
          {
            return 0;
          }
          goto LABEL_44;
        case 7:
          v46 = v4 | 4;
          if ( !(unsigned __int8)sub_D61F10(a1, v44, v41, &v46) )
            return 0;
          goto LABEL_44;
        case 8:
          v46 = v4 | 4;
          if ( !(unsigned __int8)sub_D5EE90(a1, v44, v41, &v46) )
            return 0;
          goto LABEL_44;
        case 10:
          v46 = v4 | 4;
          if ( !(unsigned __int8)sub_D2CB50(a1, v38, &v46) )
            return 0;
          goto LABEL_44;
        case 11:
          v46 = v4 | 4;
          if ( !(unsigned __int8)sub_D2D2B0(a1, v38, &v46) )
            return 0;
          goto LABEL_44;
        case 12:
          v46 = v4 | 4;
          if ( !(unsigned __int8)sub_D2CF00(a1, v38, &v46) )
            return 0;
          goto LABEL_44;
        case 13:
          v46 = v4 | 4;
          if ( !(unsigned __int8)sub_D2D660(a1, v38, &v46) )
            return 0;
          goto LABEL_44;
        case 14:
          v46 = v4 | 4;
          if ( !(unsigned __int8)sub_D2DE00(a1, v38, &v46) )
            return 0;
          goto LABEL_44;
        case 15:
          v46 = v4 | 4;
          if ( !(unsigned __int8)sub_D2DA10(a1, v38, &v46) )
            return 0;
          goto LABEL_44;
        case 16:
          v46 = v4 | 4;
          if ( !(unsigned __int8)sub_D2BC10(a1, v44, &v46) )
            return 0;
          goto LABEL_44;
        case 17:
          v46 = v4 | 4;
          if ( !(unsigned __int8)sub_D2C570(a1, v44, &v46) )
            return 0;
          goto LABEL_44;
        case 18:
          v46 = v4 | 4;
          if ( !(unsigned __int8)sub_D2C0C0(a1, v44, &v46) )
            return 0;
          goto LABEL_44;
        case 19:
          v46 = v4 | 4;
          if ( !(unsigned __int8)sub_D2BC10(a1, v37, &v46) )
            return 0;
          goto LABEL_44;
        case 20:
          v46 = v4 | 4;
          if ( !(unsigned __int8)sub_D2C0C0(a1, v37, &v46) )
            return 0;
          goto LABEL_44;
        default:
          v46 = v4 | 4;
          return (unsigned int)sub_CE2D10(a1, &v46);
      }
    }
  }
LABEL_49:
  if ( !*(_BYTE *)(a1 + 1360) )
    return v45;
  if ( ((*(_WORD *)(v4 + 2) >> 3) & 0x3Fu) - 22 > 9 )
    return v45;
  v46 = v4 | 4;
  v6 = sub_CE3FA0(a1, &v46);
  if ( (_BYTE)v6 )
    return v45;
  return v6;
}

