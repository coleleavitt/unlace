__int64 __fastcall sub_CCE240(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
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
  __int64 v29; // r9
  unsigned __int8 v30; // r8
  unsigned __int16 v31; // ax
  unsigned __int64 v32; // r15
  unsigned __int64 v33; // rax
  char v34; // al
  char v35; // al
  unsigned int v36; // eax
  char v37; // al
  unsigned int v38; // eax
  char v39; // al
  unsigned int v40; // eax
  char v41; // al
  unsigned int v42; // eax
  __int64 v43; // rax
  __int64 v44; // r9
  unsigned __int8 v45; // r8
  __int64 v46; // rdx
  char v47; // al
  unsigned int v48; // eax
  char v49; // al
  char v50; // al
  int v51; // r9d
  char v52; // al
  __int64 v53; // [rsp+8h] [rbp-A0h]
  int v54; // [rsp+8h] [rbp-A0h]
  int v55; // [rsp+8h] [rbp-A0h]
  int v56; // [rsp+8h] [rbp-A0h]
  int v57; // [rsp+8h] [rbp-A0h]
  __int64 v58; // [rsp+8h] [rbp-A0h]
  __int64 v59; // [rsp+8h] [rbp-A0h]
  int v60; // [rsp+8h] [rbp-A0h]
  unsigned __int8 v61; // [rsp+10h] [rbp-98h]
  unsigned __int8 v62; // [rsp+10h] [rbp-98h]
  __int64 v63; // [rsp+28h] [rbp-80h] BYREF
  _QWORD v64[4]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v65[11]; // [rsp+50h] [rbp-58h] BYREF

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
      return (unsigned int)sub_CB22A0(a1, a2);
  }
  v8 = *(_QWORD *)(a2 + 16);
  v9 = *(_QWORD *)(a2 + 24);
  if ( (_BYTE)v5 == 32 )
  {
    if ( (unsigned __int8)sub_CC7500(a1, *(_QWORD *)(a2 + 16), v7, v6, a5) )
    {
      v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v22 + 16) == 13 && ((*(_WORD *)(v22 + 18) >> 3) & 0x1FF) == 0x1B3 )
        return (unsigned int)sub_CC7500(a1, v9, v19, v20, v21);
      else
        return (unsigned int)sub_CCC710(a1, v9);
    }
    return 0;
  }
  v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v10 + 16) == 14 )
    return (unsigned int)sub_CBF3A0((_BYTE *)a1, a2, v10, v6);
  v11 = (unsigned int)*(unsigned __int8 *)(v10 + 16) - 57;
  if ( (unsigned int)v11 <= 1 )
    return (unsigned int)sub_CBFDE0(a1, a2, v11, v6);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) == 14
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) == 14 )
  {
    v6 = (unsigned int)(v6 - 9);
    if ( (unsigned int)v6 <= 6 )
      return (unsigned int)sub_CC2C90((_QWORD *)a1, *(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 24), a2);
  }
  v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v14 + 16) == 13 )
  {
    v15 = *(unsigned __int16 *)(v14 + 18);
    LOWORD(v15) = (unsigned __int16)v15 >> 3;
    v16 = (unsigned int)(v15 + 56);
    LOWORD(v16) = v16 & 0x1FF;
    if ( (unsigned __int16)v16 <= 0x17u )
      return (unsigned int)sub_CB1460((_QWORD *)a1, a2, v16, v6);
  }
  v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v17 + 16) == 13 )
  {
    v18 = *(unsigned __int16 *)(v17 + 18);
    LOWORD(v18) = (unsigned __int16)v18 >> 3;
    v16 = (unsigned int)(v18 + 56);
    LOWORD(v16) = v16 & 0x1FF;
    if ( (unsigned __int16)v16 <= 0x17u )
      return (unsigned int)sub_CB1460((_QWORD *)a1, a2, v16, v6);
  }
  if ( (unsigned __int8)v5 > 1u )
  {
    v23 = sub_CB13E0(a1, *(_QWORD *)(a2 + 16));
    v24 = sub_CB13E0(a1, v9);
    v25 = sub_CE6180(*(_QWORD *)(a1 + 488), *(_QWORD *)(a2 + 8));
    v12 = HIDWORD(v25);
    if ( !BYTE4(v25) )
    {
      if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3F) != 9 )
        return v12;
      if ( !*(_BYTE *)(a1 + 584) )
      {
        v32 = sub_B61960((__int64 *)(**(_QWORD **)(a1 + 488) + 22888LL), *(_QWORD *)(a2 + 8));
        if ( !*(_BYTE *)(a1 + 586) )
        {
          v65[0] = a2 | 2;
          v48 = sub_CBC410(a1, v65, 0, 0, 1, 0);
          v65[0] = a2 | 4;
          v12 = sub_CA4BA0(a1, v48, v65);
          if ( !(_BYTE)v12 )
            return v12;
        }
        if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 40LL))(a1, v8)
          && (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 40LL))(a1, v9) )
        {
          v65[0] = a2 | 4;
          return (unsigned int)sub_CA7430((_QWORD *)a1, v23, v32, v65);
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
      v27 = *(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 40LL);
      if ( v26 == 21 )
      {
        v58 = v25;
        if ( !v27(a1, v9) )
          return 0;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 40LL))(a1, v8) )
          return 0;
        v43 = sub_CE6170(*(_QWORD *)(a1 + 488));
        v44 = v58;
        v45 = BYTE4(v24);
        v46 = a2 | 4;
        if ( (*(_BYTE *)(v43 + 1) & 8) == 0 )
        {
          v65[0] = a2 | 4;
          v49 = sub_CAAFE0(a1, v65);
          v46 = a2 | 4;
          v44 = v58;
          v45 = BYTE4(v24);
          if ( !v49 )
            return 0;
        }
        v65[0] = v46;
        v61 = v45;
        v59 = v44;
        v47 = sub_CA11C0(a1, v23, (unsigned int)v24, v65);
        v29 = v59;
        v30 = v61;
        if ( !v47 )
          return 0;
        goto LABEL_35;
      }
    }
    else
    {
      if ( (unsigned int)(v25 - 13) <= 1 || (unsigned int)(v23 - 13) <= 1 && (unsigned int)(v24 - 13) <= 1 )
        return (unsigned int)sub_CB17E0((_BYTE *)a1, a2);
      v27 = *(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 40LL);
    }
    v53 = v25;
    if ( !v27(a1, v8) )
      return 0;
    v28 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 40LL))(a1, v9);
    v29 = v53;
    v30 = BYTE4(v24);
    if ( !v28 )
      return 0;
LABEL_35:
    v31 = *(_WORD *)(a2 + 2);
    v64[0] = a1;
    v64[1] = v29;
    v64[2] = a2;
    v65[0] = a1;
    v65[1] = v29;
    v65[2] = a2;
    switch ( (v31 >> 3) & 0x3F )
    {
      case 2:
        v56 = v29;
        v39 = sub_F58060(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL));
        v63 = a2 | 4;
        if ( v39 )
        {
          v40 = sub_CB1BF0(a1, a2);
          v12 = sub_CA5360(a1, v40, &v63);
          if ( (_BYTE)v12 )
            return (unsigned int)sub_CAE6B0(v65);
        }
        else
        {
          v12 = sub_CA2420(a1, v56, &v63);
          if ( (_BYTE)v12 )
            return (unsigned int)sub_CAE6B0(v65);
        }
        return v12;
      case 3:
        v57 = v29;
        v41 = sub_F58060(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL));
        v63 = a2 | 4;
        if ( v41 )
        {
          v42 = sub_CB1BF0(a1, a2);
          v12 = sub_CA4530(a1, v42, &v63);
          if ( (_BYTE)v12 )
            return (unsigned int)sub_CAE6B0(v65);
        }
        else
        {
          v12 = sub_CA0EC0(a1, v57, &v63);
          if ( (_BYTE)v12 )
            return (unsigned int)sub_CAE6B0(v65);
        }
        return v12;
      case 4:
        v63 = a2 | 4;
        v12 = sub_CA2940(a1, v29, &v63);
        if ( !(_BYTE)v12 )
          return v12;
        return (unsigned int)sub_CAE6B0(v65);
      case 5:
        v55 = v29;
        v37 = sub_F58060(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL));
        v63 = a2 | 4;
        if ( v37 )
        {
          v38 = sub_CB1BF0(a1, a2);
          v12 = sub_CA3E10(a1, v38, &v63);
          if ( (_BYTE)v12 )
            return (unsigned int)sub_CAE6B0(v65);
        }
        else
        {
          v12 = sub_C9FF00(a1, v55, &v63);
          if ( (_BYTE)v12 )
            return (unsigned int)sub_CAE6B0(v65);
        }
        return v12;
      case 6:
        v54 = v29;
        v35 = sub_F58060(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL));
        v63 = a2 | 4;
        if ( v35 )
        {
          v36 = sub_CB1BF0(a1, a2);
          v12 = sub_CA54A0(a1, v36, &v63);
          if ( !(_BYTE)v12 )
            return v12;
        }
        else
        {
          v12 = sub_CA3A20(a1, v54, &v63);
          if ( !(_BYTE)v12 )
            return v12;
        }
        return (unsigned int)sub_CAE6B0(v65);
      case 7:
        v63 = a2 | 4;
        v12 = sub_CA2B40(a1, v23, v24, &v63);
        if ( !(_BYTE)v12 )
          return v12;
        return (unsigned int)sub_CAE6B0(v65);
      case 8:
        v63 = a2 | 4;
        v12 = sub_CA3080(a1, v23, v24, &v63);
        if ( !(_BYTE)v12 )
          return v12;
        return (unsigned int)sub_CAE6B0(v65);
      case 0xA:
        v63 = a2 | 4;
        v12 = sub_CA2100(a1, v23, &v63);
        if ( !(_BYTE)v12 )
          return v12;
        return (unsigned int)sub_CAE630((__int64)v64);
      case 0xB:
        v63 = a2 | 4;
        v12 = sub_CA1D90(a1, v23, &v63);
        if ( !(_BYTE)v12 )
          return v12;
        return (unsigned int)sub_CAE630((__int64)v64);
      case 0xC:
        v63 = a2 | 4;
        v12 = sub_CA2000(a1, v23, &v63);
        if ( !(_BYTE)v12 )
          return v12;
        return (unsigned int)sub_CAE630((__int64)v64);
      case 0xD:
        v63 = a2 | 4;
        v12 = sub_CA1C90(a1, v23, &v63);
        if ( !(_BYTE)v12 )
          return v12;
        return (unsigned int)sub_CAE630((__int64)v64);
      case 0xE:
        v63 = a2 | 4;
        v12 = sub_CA1080(a1, v23, &v63);
        if ( !(_BYTE)v12 )
          return v12;
        return (unsigned int)sub_CAE630((__int64)v64);
      case 0xF:
        v63 = a2 | 4;
        v12 = sub_CA25D0(a1, v23, &v63);
        if ( (_BYTE)v12 )
          return (unsigned int)sub_CAE630((__int64)v64);
        return v12;
      case 0x10:
        v63 = a2 | 4;
        v12 = sub_CA0290(a1, v29, &v63);
        if ( !(_BYTE)v12 )
          return v12;
        return (unsigned int)sub_CAE6B0(v65);
      case 0x11:
        v63 = a2 | 4;
        v12 = sub_CA0440(a1, v29, &v63);
        if ( !(_BYTE)v12 )
          return v12;
        return (unsigned int)sub_CAE6B0(v65);
      case 0x12:
        v63 = a2 | 4;
        v12 = sub_CA0370(a1, v29, &v63);
        if ( (_BYTE)v12 )
          return (unsigned int)sub_CAE6B0(v65);
        return v12;
      case 0x15:
        v34 = (*(_BYTE *)(v8 + 1) >> 3) & 7;
        if ( *(_BYTE *)(a1 + 584) )
        {
          v63 = a2 | 4;
          if ( v34 == 1 )
            return (unsigned int)sub_CA3810(a1, v29, &v63);
          else
            return (unsigned int)sub_CA3900(a1, v29, &v63);
        }
        else
        {
          v62 = v30;
          v63 = a2 | 4;
          v60 = v29;
          if ( v34 == 1 )
          {
            v52 = sub_CA3730(a1, v29, &v63);
            v51 = v60;
            v12 = v62;
            if ( !v52 )
              return 0;
          }
          else
          {
            v50 = sub_CA3620(a1, v29, &v63);
            v51 = v60;
            v12 = v62;
            if ( !v50 )
              return 0;
          }
          if ( ((*(_BYTE *)(a2 + 1) >> 1) & 3) != 1 )
          {
            v63 = a2 | 4;
            return (unsigned int)sub_CA2310(a1, v51, &v63);
          }
        }
        return v12;
      default:
        return 0;
    }
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, *(_QWORD *)(a2 + 16)) )
    return 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 40LL))(a1, v9) )
    return 0;
  v65[0] = a2 | 4;
  if ( !(unsigned __int8)sub_CABDE0(a1, v65) )
    return 0;
  v33 = sub_CB13E0(a1, a2);
  if ( BYTE4(v33) )
  {
    if ( (_DWORD)v33 != 14 )
    {
      v65[0] = a2 | 4;
      v12 = sub_CA0CA0(a1, v65);
      if ( (_BYTE)v12 )
      {
        if ( *(_BYTE *)(a1 + 584) )
        {
          v65[0] = a2 | 4;
          return (unsigned int)sub_CA2800(a1, v65);
        }
        return v12;
      }
      return 0;
    }
    return 1;
  }
  return sub_CCED50();
}
