__int64 __fastcall sub_CABB20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // r15d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r14
  unsigned __int8 v15; // al
  __int64 v16; // r12
  int v17; // esi
  __int64 v18; // rdx
  unsigned __int8 v19; // al
  int v20; // esi
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r12
  char v26; // al
  char v27; // al
  __int64 v28; // r8
  int v29; // esi
  bool v30; // zf
  unsigned __int64 v31; // rsi
  int v32; // eax
  __int64 v33; // rdx
  char v34; // al
  unsigned int v35; // r9d
  __int64 v36; // rdx
  char v37; // al
  unsigned int v38; // eax
  unsigned int v39; // eax
  unsigned int v40; // eax
  unsigned int v41; // eax
  __int64 v42; // rax
  unsigned int v43; // eax
  __int64 v44; // rax
  unsigned int v45; // eax
  unsigned __int8 v46; // [rsp+8h] [rbp-80h]
  unsigned __int8 v47; // [rsp+8h] [rbp-80h]
  __int64 v48; // [rsp+10h] [rbp-78h]
  __int64 v49; // [rsp+10h] [rbp-78h]
  unsigned __int8 v50; // [rsp+1Fh] [rbp-69h]
  __int64 v51; // [rsp+28h] [rbp-60h] BYREF
  __int64 v52[11]; // [rsp+30h] [rbp-58h] BYREF

  v6 = *(_QWORD *)(a2 + 16);
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v7 + 16) == 14 )
    return (unsigned int)sub_CAB6A0(a1, a2, a3, a4, a5);
  v8 = (unsigned int)*(unsigned __int8 *)(v7 + 16) - 57;
  if ( (unsigned int)v8 > 1 )
  {
    if ( *(_BYTE *)(v7 + 16) == 13 && (((*(_WORD *)(v7 + 18) >> 3) + 56) & 0x1FFu) <= 0x17 )
      return (unsigned int)sub_CAB010(a1, a2, v8, a4, a5);
    v14 = sub_CC2440(*(_QWORD *)(a1 + 488), *(_QWORD *)(v6 + 8));
    switch ( *(_BYTE *)(a2 + 2) >> 3 )
    {
      case 0:
        if ( (*(_BYTE *)(sub_CC2430(*(_QWORD *)(a1 + 488)) + 1) & 0x20) == 0 )
          goto LABEL_73;
        if ( !BYTE4(v14) )
          goto LABEL_72;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 40LL))(a1, v6) )
          return 0;
        v25 = a2 | 4;
        if ( (_DWORD)v14 == 13 )
        {
          v52[0] = a2 | 4;
          v9 = sub_C7E170(a1, v52);
          if ( !(_BYTE)v9 )
            return 0;
          goto LABEL_83;
        }
        v26 = *(_BYTE *)(a1 + 584);
        v52[0] = a2 | 4;
        if ( (_DWORD)v14 == 12 )
        {
          if ( v26 )
            goto LABEL_101;
          v39 = sub_C8DEB0(a1, a2);
          return (unsigned int)sub_C80F50(a1, v39, v52);
        }
        else
        {
          v17 = v14;
          v18 = (*(_QWORD *)a2 >> 24) & 1LL;
          if ( v26 )
            return (unsigned int)sub_C823F0(a1, v17, v18, v52);
          return (unsigned int)sub_C82310(a1, v14, v18, v52);
        }
      case 1:
        if ( (*(_BYTE *)(sub_CC2430(*(_QWORD *)(a1 + 488)) + 1) & 0x20) == 0 )
          goto LABEL_73;
        if ( !BYTE4(v14) )
          goto LABEL_72;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 40LL))(a1, v6) )
          return 0;
        v25 = a2 | 4;
        if ( (_DWORD)v14 == 13 )
        {
          v52[0] = a2 | 4;
          v9 = sub_C871A0(a1, v52);
          if ( !(_BYTE)v9 )
            return 0;
LABEL_83:
          if ( *(_BYTE *)(a1 + 584) )
          {
            v52[0] = v25;
            return (unsigned int)sub_C7EAC0(a1, v52);
          }
        }
        else
        {
          v27 = *(_BYTE *)(a1 + 584);
          v52[0] = a2 | 4;
          if ( (_DWORD)v14 == 12 )
          {
            if ( v27 )
              goto LABEL_100;
            v38 = sub_C8DEB0(a1, a2);
            return (unsigned int)sub_C80760(a1, v38, v52);
          }
          else
          {
            v20 = v14;
            v21 = (*(_QWORD *)a2 >> 24) & 1LL;
            if ( v27 )
              return (unsigned int)sub_C82230(a1, v20, v21, v52);
            return (unsigned int)sub_C82150(a1, v14, v21, v52);
          }
        }
        return v9;
      case 2:
        if ( (*(_BYTE *)(sub_CC2430(*(_QWORD *)(a1 + 488)) + 1) & 0x20) == 0 )
          goto LABEL_73;
        if ( !BYTE4(v14) )
          goto LABEL_72;
        v15 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 40LL))(a1, v6);
        if ( !v15 )
          return 0;
        v16 = a2 | 4;
        if ( (_DWORD)v14 == 13 )
        {
          v52[0] = a2 | 4;
          if ( (unsigned __int8)sub_C87A20(a1, v52) )
          {
            v52[0] = a2 | 4;
            if ( (unsigned __int8)sub_C853C0(a1, 1, v52) )
            {
              v52[0] = a2 | 4;
              if ( (unsigned __int8)sub_C7C290(a1, v52) )
                goto LABEL_80;
            }
          }
          return 0;
        }
        v9 = *(unsigned __int8 *)(a1 + 584);
        if ( (_BYTE)v9 )
        {
          v52[0] = a2 | 4;
          if ( (_DWORD)v14 == 12 )
          {
LABEL_101:
            v41 = sub_C8DEB0(a1, a2);
            return (unsigned int)sub_C80F80(a1, v41, v52);
          }
          else
          {
            v17 = v14;
            v18 = (*(_QWORD *)a2 >> 24) & 1LL;
            return (unsigned int)sub_C823F0(a1, v17, v18, v52);
          }
        }
        if ( (_DWORD)v14 != 12 )
        {
          v36 = *(_QWORD *)a2;
          v47 = v15;
          v52[0] = a2 | 4;
          v37 = sub_C825B0(a1, v14, BYTE3(v36) & 1, v52);
          v35 = v47;
          if ( v37 )
            goto LABEL_89;
          return 0;
        }
        v50 = v15;
        v42 = sub_CC2920(*(_QWORD *)(a1 + 488), *(_QWORD *)(a2 + 8));
        v52[0] = a2 | 4;
        v48 = v42;
        if ( !(unsigned __int8)sub_C885A0(a1, v52) )
          return v9;
        v51 = 1;
        sub_BFD6B0((__int64)v52, v48, &v51);
        if ( (unsigned __int8)sub_C8EA30(a1, v52, a2) )
        {
          v51 = a2 | 4;
          v43 = sub_C8DEB0(a1, a2);
          if ( (unsigned __int8)sub_C800D0(a1, v43, &v51) )
            goto LABEL_105;
        }
        goto LABEL_110;
      case 3:
        if ( (*(_BYTE *)(sub_CC2430(*(_QWORD *)(a1 + 488)) + 1) & 0x20) == 0 )
        {
LABEL_73:
          v52[0] = a2 | 4;
          return (unsigned int)sub_C872A0(a1, v52);
        }
        if ( !BYTE4(v14) )
        {
LABEL_72:
          v52[0] = a2 | 4;
          return (unsigned int)sub_C87CA0(a1, v52);
        }
        v19 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 40LL))(a1, v6);
        if ( !v19 )
          return 0;
        v16 = a2 | 4;
        if ( (_DWORD)v14 == 13 )
        {
          v52[0] = a2 | 4;
          if ( (unsigned __int8)sub_C87A20(a1, v52)
            && (v52[0] = a2 | 4, (unsigned __int8)sub_C853C0(a1, 1, v52))
            && (v52[0] = a2 | 4, (unsigned __int8)sub_C7FDC0(a1, v52)) )
          {
LABEL_80:
            v30 = *(_BYTE *)(a1 + 584) == 0;
            v52[0] = v16;
            if ( v30 )
              return (unsigned int)sub_C7F8C0(a1, v52);
            else
              return (unsigned int)sub_C7FBB0(a1, v52);
          }
          else
          {
            return 0;
          }
        }
        v9 = *(unsigned __int8 *)(a1 + 584);
        if ( (_BYTE)v9 )
        {
          v52[0] = a2 | 4;
          if ( (_DWORD)v14 == 12 )
          {
LABEL_100:
            v40 = sub_C8DEB0(a1, a2);
            return (unsigned int)sub_C80790(a1, v40, v52);
          }
          else
          {
            v20 = v14;
            v21 = (*(_QWORD *)a2 >> 24) & 1LL;
            return (unsigned int)sub_C82230(a1, v20, v21, v52);
          }
        }
        if ( (_DWORD)v14 != 12 )
        {
          v33 = *(_QWORD *)a2;
          v46 = v19;
          v52[0] = a2 | 4;
          v34 = sub_C824D0(a1, v14, BYTE3(v33) & 1, v52);
          v35 = v46;
          if ( !v34 )
            return 0;
          goto LABEL_89;
        }
        v50 = v19;
        v44 = sub_CC2920(*(_QWORD *)(a1 + 488), *(_QWORD *)(a2 + 8));
        v52[0] = a2 | 4;
        v49 = v44;
        if ( !(unsigned __int8)sub_C885A0(a1, v52) )
          return v9;
        v51 = 1;
        sub_BFD6B0((__int64)v52, v49, &v51);
        if ( (unsigned __int8)sub_C8EA30(a1, v52, a2) )
        {
          v51 = a2 | 4;
          v45 = sub_C8DEB0(a1, a2);
          if ( (unsigned __int8)sub_C81760(a1, v45, &v51) )
          {
LABEL_105:
            v51 = v16;
            if ( (unsigned __int8)sub_C7F8D0(a1, &v51) )
            {
              sub_971860(v52);
              v35 = v50;
LABEL_89:
              if ( (*(_BYTE *)(a2 + 1) & 6) == 0 )
              {
                v52[0] = v16;
                return (unsigned int)sub_C7E5D0(a1, v14, v52);
              }
              return v35;
            }
          }
        }
LABEL_110:
        sub_971860(v52);
        return v9;
      case 4:
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                  & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) != 33 )
          return (unsigned int)sub_CA89D0(a1, v6, v11, v12, v13);
        v52[0] = a2 | 4;
        return (unsigned int)sub_C855C0((_QWORD *)a1, *(_QWORD *)(v6 + 16), v52);
      case 5:
        if ( *(_BYTE *)(a1 + 584) )
        {
          v31 = v6;
          return (unsigned int)sub_CA37C0(a1, v31, v11, v12, v13);
        }
        else
        {
          if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 40LL))(a1, v6) )
            return 0;
          v22 = sub_C8D6A0(a1, v6);
          if ( !BYTE4(v22) )
            return sub_CA89D0(a1, *(_QWORD *)(v6 + 16), HIDWORD(v22), v23, v24);
          if ( (_DWORD)v22 == 13 )
          {
            v52[0] = a2 | 4;
            return (unsigned int)sub_C878A0(a1, v52);
          }
          else
          {
            return 1;
          }
        }
      case 6:
        if ( !BYTE4(v14) )
          goto LABEL_72;
        v9 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 40LL))(a1, v6);
        if ( !(_BYTE)v9 )
          return 0;
        if ( *(_BYTE *)(a1 + 584) )
        {
          v52[0] = a2 | 4;
          return (unsigned int)sub_C7EAD0(a1, v14, v52);
        }
        return v9;
      case 7:
        if ( !BYTE4(v14) )
          goto LABEL_72;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 40LL))(a1, v6) )
          return 0;
        v29 = v14;
        v30 = *(_BYTE *)(a1 + 584) == 0;
        v52[0] = a2 | 4;
        if ( !v30 )
          return (unsigned int)sub_C7EAD0(a1, v29, v52);
        return (unsigned int)sub_C7E9B0(a1, v14, v52);
      case 8:
        if ( !BYTE4(v14) )
          goto LABEL_72;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 40LL))(a1, v6) )
          return 0;
        v29 = v14;
        v30 = *(_BYTE *)(a1 + 584) == 0;
        v52[0] = a2 | 4;
        if ( v30 )
          return (unsigned int)sub_C7D050(a1, v14, v52);
        else
          return (unsigned int)sub_C7EAD0(a1, v29, v52);
      case 9:
        if ( !BYTE4(v14) )
          goto LABEL_72;
        v31 = v6;
        if ( *(_BYTE *)(a1 + 584) )
          return (unsigned int)sub_CA37C0(a1, v31, v11, v12, v13);
        if ( !(unsigned __int8)sub_C8E450((_QWORD *)a1, v6) )
          return 0;
        v52[0] = a2 | 4;
        if ( !(unsigned __int8)sub_C7E290(a1, v52) )
          return 0;
        v32 = sub_C8D700(a1, *(_QWORD *)(a2 + 8));
        if ( v32 == 10 )
          return 1;
        v52[0] = a2 | 4;
        return (unsigned int)sub_C7C7D0(a1, 10, v32, v52);
      case 10:
      case 12:
        return (unsigned int)sub_CA89D0(a1, v6, v11, v12, v13);
      case 11:
        if ( !(unsigned __int8)sub_CA37C0(a1, v6, v11, v12, v13) )
          return 0;
        return (unsigned int)sub_C8ED90(a1, (unsigned int)v14, *(_QWORD *)(v6 + 8), v6, v28);
      default:
        return 0;
    }
  }
  return (unsigned int)sub_CAB120(a1, a2, v8, a4, a5);
}

