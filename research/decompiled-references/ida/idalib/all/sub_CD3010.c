__int64 __fastcall sub_CD3010(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
    v29 = sub_CBEB30(a1, a2);
    if ( !BYTE4(v29) )
      return v6;
    a2 = (unsigned int)v29;
    v47[0] = v4 | 4;
    if ( !(unsigned __int8)sub_CFF720(a1, (unsigned int)v29, v47) )
      return v6;
  }
  v7 = *(_QWORD *)(v4 + 16);
  v8 = *(_QWORD *)(v4 + 24);
  v9 = *(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v36 = v9;
  if ( (unsigned int)*(unsigned __int8 *)(v9 + 16) - 57 > 1 )
    v36 = sub_CAEB00(v9, a2, a3, a4);
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
    v11 = sub_CAEB00(v11, a2, v12, a4);
  v13 = *(_QWORD *)(v11 + 32);
  v39 = sub_CE6180(*(_QWORD *)(a1 + 1264), v13);
  v38 = v39;
  v15 = *(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v16 = (unsigned int)*(unsigned __int8 *)(v15 + 16) - 57;
  if ( (unsigned int)v16 > 1 )
    v15 = sub_CAEB00(v15, v13, v16, v14);
  v17 = *(_QWORD *)(v15 + 32);
  v41 = sub_CE6180(*(_QWORD *)(a1 + 1264), v17);
  v19 = *(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v20 = (unsigned int)*(unsigned __int8 *)(v19 + 16) - 57;
  if ( (unsigned int)v20 > 1 )
    v19 = sub_CAEB00(v19, v17, v20, v18);
  v37 = sub_CE6180(*(_QWORD *)(a1 + 1264), *(_QWORD *)(v19 + 32));
  v47[0] = v7 | 2;
  v35 = sub_CD2220(a1, v47, 13, 1u, 0, 1, 0);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, v7) )
    return 0;
  v47[0] = v4 | 4;
  if ( !(unsigned __int8)sub_D256A0(a1, 13, v35, v47) )
    return 0;
  v47[0] = v8 | 2;
  v42 = sub_CD2220(a1, v47, 13, 1u, 0, 1, 0);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, v8) )
    return 0;
  v47[0] = v4 | 4;
  v45 = sub_D256A0(a1, 13, v42, v47);
  if ( !v45 )
    return 0;
  if ( ((*(_WORD *)(v4 + 2) >> 3) & 0x3Fu) - 22 <= 9 )
  {
    v47[0] = v4 | 4;
    v6 = sub_D32BF0(a1, 13, v35, v47);
    if ( !(_BYTE)v6 )
      return v6;
  }
  if ( v39 == 10
    && ((v30 = (*(_WORD *)(v4 + 2) >> 3) & 0x3F, v23 = (unsigned int)(v30 - 16), (unsigned int)v23 <= 2)
     || (unsigned int)(v30 - 7) <= 1) )
  {
    v26 = sub_AAF890(**(__int64 ***)(a1 + 1264), *(_QWORD *)(**(_QWORD **)(a1 + 1264) + 18640LL), v23, v24, v25);
    v44 = sub_CB4CA0(a1, v26);
    v43 = v44;
    v40 = v45;
  }
  else
  {
    v26 = sub_AAF890(**(__int64 ***)(a1 + 1264), *(_QWORD *)(**(_QWORD **)(a1 + 1264) + 18640LL), v23, v24, v25);
    v43 = sub_CB4CA0(a1, v26);
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
      if ( !(unsigned __int8)sub_D32BF0(a1, 13, v35, &v46) )
        return 0;
      v46 = v4 | 4;
      if ( !(unsigned __int8)sub_D337E0(a1, v38, v28, &v46) )
        return 0;
      if ( ((*(_WORD *)(v4 + 2) >> 3) & 0x3Fu) - 19 <= 1 )
      {
        if ( !(unsigned __int8)sub_CB5470(a1, v38, 10, *(_QWORD *)(**(_QWORD **)(a1 + 1264) + 18640LL), v4)
          || !(unsigned __int8)sub_CB5470(a1, 10, v37, *(_QWORD *)(v36 + 32), v4) )
        {
          return 0;
        }
      }
      else if ( v40 && !(unsigned __int8)sub_CB5470(a1, v38, v43, v48, v4) )
      {
        return 0;
      }
      v46 = v4 | 4;
      if ( !(unsigned __int8)sub_D32BF0(a1, 13, v42, &v46) )
        return 0;
      v46 = v4 | 4;
      if ( !(unsigned __int8)sub_D337E0(a1, v41, v28, &v46) )
        return 0;
      if ( ((*(_WORD *)(v4 + 2) >> 3) & 0x3Fu) - 19 <= 1 )
      {
        if ( !(unsigned __int8)sub_CB5470(a1, v41, 10, *(_QWORD *)(**(_QWORD **)(a1 + 1264) + 18640LL), v4)
          || !(unsigned __int8)sub_CB5470(a1, 10, v37, *(_QWORD *)(v36 + 32), v4) )
        {
          return 0;
        }
      }
      else if ( v40 && !(unsigned __int8)sub_CB5470(a1, v41, v43, v48, v4) )
      {
        return 0;
      }
      switch ( v10 )
      {
        case 2:
          v46 = v4 | 4;
          if ( v38 == 12 )
          {
            v31 = sub_CB5450(a1, v4);
            if ( (unsigned __int8)sub_D44330(a1, v31, &v46) )
              goto LABEL_44;
          }
          else if ( (unsigned __int8)sub_D70FE0(a1, v38, &v46) )
          {
            goto LABEL_44;
          }
          return 0;
        case 3:
          v46 = v4 | 4;
          if ( v38 == 12 )
          {
            v32 = sub_CB5450(a1, v4);
            if ( !(unsigned __int8)sub_D43D20(a1, v32, &v46) )
              return 0;
          }
          else if ( !(unsigned __int8)sub_D56CB0(a1, v38, &v46) )
          {
            return 0;
          }
          goto LABEL_44;
        case 4:
          v46 = v4 | 4;
          if ( !(unsigned __int8)sub_D573A0(a1, v38, &v46) )
            return 0;
          goto LABEL_44;
        case 5:
          v46 = v4 | 4;
          if ( v38 == 12 )
          {
            v34 = sub_CB5450(a1, v4);
            if ( !(unsigned __int8)sub_D422A0(a1, v34, &v46) )
              return 0;
          }
          else if ( !(unsigned __int8)sub_D53F60(a1, v38, &v46) )
          {
            return 0;
          }
LABEL_44:
          if ( ((*(_WORD *)(v4 + 2) >> 3) & 0x3Fu) - 9 <= 6 )
          {
            if ( !(unsigned __int8)sub_CB5470(a1, 10, v37, *(_QWORD *)(v36 + 32), v4) )
              return 0;
            v46 = v4 | 4;
            if ( !(unsigned __int8)sub_D4E570(a1, v37, &v46) )
              return 0;
          }
          if ( v40 && !(unsigned __int8)sub_CB5470(a1, v43, v37, *(_QWORD *)(v36 + 32), v4) )
            return 0;
          v46 = v4 | 4;
          if ( !(unsigned __int8)sub_D19550(a1, v37, v28, &v46) )
            return 0;
          if ( ++v28 == *(_DWORD *)(v36 + 20) )
            goto LABEL_49;
          break;
        case 6:
          v46 = v4 | 4;
          if ( v38 == 12 )
          {
            v33 = sub_CB5450(a1, v4);
            if ( !(unsigned __int8)sub_D444E0(a1, v33, &v46) )
              return 0;
          }
          else if ( !(unsigned __int8)sub_D5C630(a1, v38, &v46) )
          {
            return 0;
          }
          goto LABEL_44;
        case 7:
          v46 = v4 | 4;
          if ( !(unsigned __int8)sub_D85C50(a1, v44, v41, &v46) )
            return 0;
          goto LABEL_44;
        case 8:
          v46 = v4 | 4;
          if ( !(unsigned __int8)sub_D82BD0(a1, v44, v41, &v46) )
            return 0;
          goto LABEL_44;
        case 10:
          v46 = v4 | 4;
          if ( !(unsigned __int8)sub_D50890(a1, v38, &v46) )
            return 0;
          goto LABEL_44;
        case 11:
          v46 = v4 | 4;
          if ( !(unsigned __int8)sub_D50FF0(a1, v38, &v46) )
            return 0;
          goto LABEL_44;
        case 12:
          v46 = v4 | 4;
          if ( !(unsigned __int8)sub_D50C40(a1, v38, &v46) )
            return 0;
          goto LABEL_44;
        case 13:
          v46 = v4 | 4;
          if ( !(unsigned __int8)sub_D513A0(a1, v38, &v46) )
            return 0;
          goto LABEL_44;
        case 14:
          v46 = v4 | 4;
          if ( !(unsigned __int8)sub_D51B40(a1, v38, &v46) )
            return 0;
          goto LABEL_44;
        case 15:
          v46 = v4 | 4;
          if ( !(unsigned __int8)sub_D51750(a1, v38, &v46) )
            return 0;
          goto LABEL_44;
        case 16:
          v46 = v4 | 4;
          if ( !(unsigned __int8)sub_D4F950(a1, v44, &v46) )
            return 0;
          goto LABEL_44;
        case 17:
          v46 = v4 | 4;
          if ( !(unsigned __int8)sub_D502B0(a1, v44, &v46) )
            return 0;
          goto LABEL_44;
        case 18:
          v46 = v4 | 4;
          if ( !(unsigned __int8)sub_D4FE00(a1, v44, &v46) )
            return 0;
          goto LABEL_44;
        case 19:
          v46 = v4 | 4;
          if ( !(unsigned __int8)sub_D4F950(a1, v37, &v46) )
            return 0;
          goto LABEL_44;
        case 20:
          v46 = v4 | 4;
          if ( !(unsigned __int8)sub_D4FE00(a1, v37, &v46) )
            return 0;
          goto LABEL_44;
        default:
          v46 = v4 | 4;
          return (unsigned int)sub_D06A50(a1, &v46);
      }
    }
  }
LABEL_49:
  if ( !*(_BYTE *)(a1 + 1360) )
    return v45;
  if ( ((*(_WORD *)(v4 + 2) >> 3) & 0x3Fu) - 22 > 9 )
    return v45;
  v46 = v4 | 4;
  v6 = sub_D07CE0(a1, &v46);
  if ( (_BYTE)v6 )
    return v45;
  return v6;
}
