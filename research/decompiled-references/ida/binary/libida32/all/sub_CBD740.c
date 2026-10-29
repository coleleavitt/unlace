__int64 __fastcall sub_CBD740(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int16 v5; // ax
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned int v12; // r8d
  __int64 v14; // rdx
  int v15; // edx
  __int64 v16; // rdx
  __int64 v17; // rdx
  int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // r15
  __int64 v25; // r9
  int v26; // eax
  unsigned __int8 (__fastcall *v27)(__int64, unsigned __int64); // rdx
  char v28; // al
  __int64 v29; // rcx
  __int64 v30; // r9
  __int64 v31; // r8
  unsigned __int16 v32; // ax
  unsigned __int64 v33; // r15
  unsigned __int64 v34; // rax
  char v35; // al
  char v36; // al
  unsigned int v37; // eax
  char v38; // al
  unsigned int v39; // eax
  char v40; // al
  unsigned int v41; // eax
  char v42; // al
  unsigned int v43; // eax
  __int64 v44; // rax
  __int64 v45; // r9
  unsigned __int8 v46; // r8
  __int64 v47; // rdx
  char v48; // al
  unsigned int v49; // eax
  char v50; // al
  char v51; // al
  unsigned int v52; // r9d
  char v53; // al
  __int64 v54; // [rsp+8h] [rbp-A0h]
  unsigned int v55; // [rsp+8h] [rbp-A0h]
  unsigned int v56; // [rsp+8h] [rbp-A0h]
  unsigned int v57; // [rsp+8h] [rbp-A0h]
  unsigned int v58; // [rsp+8h] [rbp-A0h]
  __int64 v59; // [rsp+8h] [rbp-A0h]
  __int64 v60; // [rsp+8h] [rbp-A0h]
  unsigned int v61; // [rsp+8h] [rbp-A0h]
  unsigned __int8 v62; // [rsp+10h] [rbp-98h]
  unsigned __int8 v63; // [rsp+10h] [rbp-98h]
  __int64 v64; // [rsp+28h] [rbp-80h] BYREF
  __int64 v65[4]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v66[11]; // [rsp+50h] [rbp-58h] BYREF

  v5 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
  v6 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
  v7 = (unsigned int)(v6 - 19);
  if ( (unsigned int)v7 <= 1 )
  {
    v7 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8)
                                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                                  + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 57;
    if ( (unsigned int)v7 > 1 )
      return (unsigned int)sub_C91DC0(a1, a2);
  }
  v8 = *(_QWORD *)(a2 + 16);
  v9 = *(_QWORD *)(a2 + 24);
  if ( (_BYTE)v5 == 32 )
  {
    if ( (unsigned __int8)sub_CB69D0(a1, *(_QWORD *)(a2 + 16), v7, v6, a5) )
    {
      v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v22 + 16) == 13 && ((*(_WORD *)(v22 + 18) >> 3) & 0x1FF) == 0x1B3 )
        return (unsigned int)sub_CB69D0(a1, v9, v19, v20, v21);
      else
        return (unsigned int)sub_CBBC10(a1, v9, v19, v20, v21);
    }
    return 0;
  }
  v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v10 + 16) == 14 )
    return (unsigned int)sub_CAE890((_BYTE *)a1, a2, v10, v6);
  v11 = (unsigned int)*(unsigned __int8 *)(v10 + 16) - 57;
  if ( (unsigned int)v11 <= 1 )
    return (unsigned int)sub_CAF2D0(a1, a2, v11, v6);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) == 14
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) == 14 )
  {
    v6 = (unsigned int)(v6 - 9);
    if ( (unsigned int)v6 <= 6 )
      return (unsigned int)sub_CB2180((_QWORD *)a1, *(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 24), a2);
  }
  v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v14 + 16) == 13 )
  {
    v15 = *(unsigned __int16 *)(v14 + 18);
    LOWORD(v15) = (unsigned __int16)v15 >> 3;
    v16 = (unsigned int)(v15 + 56);
    LOWORD(v16) = v16 & 0x1FF;
    if ( (unsigned __int16)v16 <= 0x17u )
      return (unsigned int)sub_C90F80((_QWORD *)a1, a2, v16, v6);
  }
  v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v17 + 16) == 13 )
  {
    v18 = *(unsigned __int16 *)(v17 + 18);
    LOWORD(v18) = (unsigned __int16)v18 >> 3;
    v16 = (unsigned int)(v18 + 56);
    LOWORD(v16) = v16 & 0x1FF;
    if ( (unsigned __int16)v16 <= 0x17u )
      return (unsigned int)sub_C90F80((_QWORD *)a1, a2, v16, v6);
  }
  if ( (unsigned __int8)v5 > 1u )
  {
    v23 = sub_C90F00(a1, *(_QWORD *)(a2 + 16));
    v24 = sub_C90F00(a1, v9);
    v25 = sub_CC2440(*(_QWORD *)(a1 + 1264), *(_QWORD *)(a2 + 8));
    v12 = HIDWORD(v25);
    if ( !BYTE4(v25) )
    {
      if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3F) != 9 )
        return v12;
      if ( !*(_BYTE *)(a1 + 1360) )
      {
        v33 = sub_B3DC20((__int64 *)(**(_QWORD **)(a1 + 1264) + 22888LL), *(_QWORD *)(a2 + 8));
        if ( !*(_BYTE *)(a1 + 1362) )
        {
          v66[0] = a2 | 2;
          v49 = sub_C99000(a1, v66, 0, 0, 1, 0);
          v66[0] = a2 | 4;
          v12 = sub_CDB9E0(a1, v49, v66);
          if ( !(_BYTE)v12 )
            return v12;
        }
        if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 48LL))(a1, v8)
          && (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 48LL))(a1, v9) )
        {
          v66[0] = a2 | 4;
          return (unsigned int)sub_D2A020(a1, (unsigned int)v23, v33, v66);
        }
        return 0;
      }
      return 1;
    }
    if ( !BYTE4(v23) || !BYTE4(v24) )
      return 0;
    v26 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
    if ( (unsigned int)(v26 - 5) > 1 )
    {
      v27 = *(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 48LL);
      if ( v26 == 21 )
      {
        v59 = v25;
        if ( !v27(a1, v9) )
          return 0;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 48LL))(a1, v8) )
          return 0;
        v44 = sub_CC2430(*(_QWORD *)(a1 + 1264));
        v45 = v59;
        v46 = BYTE4(v24);
        v47 = a2 | 4;
        if ( (*(_BYTE *)(v44 + 1) & 8) == 0 )
        {
          v66[0] = a2 | 4;
          v50 = sub_CE2D10(a1, v66);
          v47 = a2 | 4;
          v45 = v59;
          v46 = BYTE4(v24);
          if ( !v50 )
            return 0;
        }
        v66[0] = v47;
        v62 = v46;
        v60 = v45;
        v48 = sub_CDD270(a1, (unsigned int)v23, (unsigned int)v24, v66);
        v30 = v60;
        v31 = v62;
        if ( !v48 )
          return 0;
        goto LABEL_35;
      }
    }
    else
    {
      if ( (unsigned int)(v25 - 13) <= 1 || (unsigned int)(v23 - 13) <= 1 && (unsigned int)(v24 - 13) <= 1 )
        return (unsigned int)sub_C91300((_BYTE *)a1, a2);
      v27 = *(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 48LL);
    }
    v54 = v25;
    if ( !v27(a1, v8) )
      return 0;
    v28 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 48LL))(a1, v9);
    v30 = v54;
    v31 = BYTE4(v24);
    if ( !v28 )
      return 0;
LABEL_35:
    v32 = *(_WORD *)(a2 + 2);
    v65[0] = a1;
    v65[1] = v30;
    v65[2] = a2;
    v66[0] = a1;
    v66[1] = v30;
    v66[2] = a2;
    switch ( (v32 >> 3) & 0x3F )
    {
      case 2:
        v57 = v30;
        v40 = sub_F34320(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL));
        v64 = a2 | 4;
        if ( v40 )
        {
          v41 = sub_C91710(a1, a2);
          v12 = sub_D205F0(a1, v41, &v64);
          if ( (_BYTE)v12 )
            return (unsigned int)sub_C8AAC0(v66);
        }
        else
        {
          v12 = sub_D4D2A0(a1, v57, &v64);
          if ( (_BYTE)v12 )
            return (unsigned int)sub_C8AAC0(v66);
        }
        return v12;
      case 3:
        v58 = v30;
        v42 = sub_F34320(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL));
        v64 = a2 | 4;
        if ( v42 )
        {
          v43 = sub_C91710(a1, a2);
          v12 = sub_D1FFE0(a1, v43, &v64);
          if ( (_BYTE)v12 )
            return (unsigned int)sub_C8AAC0(v66);
        }
        else
        {
          v12 = sub_D32F70(a1, v58, &v64);
          if ( (_BYTE)v12 )
            return (unsigned int)sub_C8AAC0(v66);
        }
        return v12;
      case 4:
        v64 = a2 | 4;
        v12 = sub_D33660(a1, (unsigned int)v30, &v64);
        if ( !(_BYTE)v12 )
          return v12;
        return (unsigned int)sub_C8AAC0(v66);
      case 5:
        v56 = v30;
        v38 = sub_F34320(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL));
        v64 = a2 | 4;
        if ( v38 )
        {
          v39 = sub_C91710(a1, a2);
          v12 = sub_D1E560(a1, v39, &v64);
          if ( (_BYTE)v12 )
            return (unsigned int)sub_C8AAC0(v66);
        }
        else
        {
          v12 = sub_D30220(a1, v56, &v64);
          if ( (_BYTE)v12 )
            return (unsigned int)sub_C8AAC0(v66);
        }
        return v12;
      case 6:
        v55 = v30;
        v36 = sub_F34320(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL));
        v64 = a2 | 4;
        if ( v36 )
        {
          v37 = sub_C91710(a1, a2);
          v12 = sub_D207A0(a1, v37, &v64);
          if ( !(_BYTE)v12 )
            return v12;
        }
        else
        {
          v12 = sub_D388F0(a1, v55, &v64);
          if ( !(_BYTE)v12 )
            return v12;
        }
        return (unsigned int)sub_C8AAC0(v66);
      case 7:
        v64 = a2 | 4;
        v12 = sub_D61F10(a1, (unsigned int)v23, (unsigned int)v24, &v64);
        if ( !(_BYTE)v12 )
          return v12;
        return (unsigned int)sub_C8AAC0(v66);
      case 8:
        v64 = a2 | 4;
        v12 = sub_D5EE90(a1, (unsigned int)v23, (unsigned int)v24, &v64);
        if ( !(_BYTE)v12 )
          return v12;
        return (unsigned int)sub_C8AAC0(v66);
      case 0xA:
        v64 = a2 | 4;
        v12 = sub_D2CB50(a1, (unsigned int)v23, &v64);
        if ( !(_BYTE)v12 )
          return v12;
        return (unsigned int)sub_C8AA40(v65);
      case 0xB:
        v64 = a2 | 4;
        v12 = sub_D2D2B0(a1, (unsigned int)v23, &v64);
        if ( !(_BYTE)v12 )
          return v12;
        return (unsigned int)sub_C8AA40(v65);
      case 0xC:
        v64 = a2 | 4;
        v12 = sub_D2CF00(a1, (unsigned int)v23, &v64);
        if ( !(_BYTE)v12 )
          return v12;
        return (unsigned int)sub_C8AA40(v65);
      case 0xD:
        v64 = a2 | 4;
        v12 = sub_D2D660(a1, (unsigned int)v23, &v64);
        if ( !(_BYTE)v12 )
          return v12;
        return (unsigned int)sub_C8AA40(v65);
      case 0xE:
        v64 = a2 | 4;
        v12 = sub_D2DE00(a1, (unsigned int)v23, &v64);
        if ( !(_BYTE)v12 )
          return v12;
        return (unsigned int)sub_C8AA40(v65);
      case 0xF:
        v64 = a2 | 4;
        v12 = sub_D2DA10(a1, (unsigned int)v23, &v64);
        if ( (_BYTE)v12 )
          return (unsigned int)sub_C8AA40(v65);
        return v12;
      case 0x10:
        v64 = a2 | 4;
        v12 = sub_D2BC10(a1, (unsigned int)v30, &v64);
        if ( !(_BYTE)v12 )
          return v12;
        return (unsigned int)sub_C8AAC0(v66);
      case 0x11:
        v64 = a2 | 4;
        v12 = sub_D2C570(a1, (unsigned int)v30, &v64);
        if ( !(_BYTE)v12 )
          return v12;
        return (unsigned int)sub_C8AAC0(v66);
      case 0x12:
        v64 = a2 | 4;
        v12 = sub_D2C0C0(a1, (unsigned int)v30, &v64);
        if ( (_BYTE)v12 )
          return (unsigned int)sub_C8AAC0(v66);
        return v12;
      case 0x15:
        v35 = (*(_BYTE *)(v8 + 1) >> 3) & 7;
        if ( *(_BYTE *)(a1 + 1360) )
        {
          v64 = a2 | 4;
          if ( v35 == 1 )
            return (unsigned int)sub_D2B0E0(a1, (unsigned int)v30, &v64, v29, v31);
          else
            return (unsigned int)sub_D037E0(a1, (unsigned int)v30, &v64);
        }
        else
        {
          v63 = v31;
          v64 = a2 | 4;
          v61 = v30;
          if ( v35 == 1 )
          {
            v53 = sub_D2AD50(a1, (unsigned int)v30, &v64);
            v52 = v61;
            v12 = v63;
            if ( !v53 )
              return 0;
          }
          else
          {
            v51 = sub_D026C0(a1, (unsigned int)v30, &v64);
            v52 = v61;
            v12 = v63;
            if ( !v51 )
              return 0;
          }
          if ( ((*(_BYTE *)(a2 + 1) >> 1) & 3) != 1 )
          {
            v64 = a2 | 4;
            return (unsigned int)sub_D11290(a1, v52, &v64);
          }
        }
        return v12;
      default:
        return 0;
    }
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 48LL))(a1, *(_QWORD *)(a2 + 16)) )
    return 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 48LL))(a1, v9) )
    return 0;
  v66[0] = a2 | 4;
  if ( !(unsigned __int8)sub_CE4810(a1, v66) )
    return 0;
  v34 = sub_C90F00(a1, a2);
  if ( BYTE4(v34) )
  {
    if ( (_DWORD)v34 != 14 )
    {
      v66[0] = a2 | 4;
      v12 = sub_CDC1A0(a1, v66);
      if ( (_BYTE)v12 )
      {
        if ( *(_BYTE *)(a1 + 1360) )
        {
          v66[0] = a2 | 4;
          return (unsigned int)sub_CE3FA0(a1, v66);
        }
        return v12;
      }
      return 0;
    }
    return 1;
  }
  return sub_CBE250();
}

