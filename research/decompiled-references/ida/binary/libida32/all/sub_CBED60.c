__int64 __fastcall sub_CBED60(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
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
  __int64 v17; // rsi
  __int64 v18; // rdx
  unsigned __int8 v19; // al
  __int64 v20; // rsi
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r12
  char v26; // al
  char v27; // al
  __int64 v28; // r8
  __int64 v29; // rsi
  bool v30; // zf
  unsigned __int64 v31; // rsi
  unsigned int v32; // eax
  unsigned __int64 v33; // rdx
  char v34; // al
  unsigned int v35; // r9d
  unsigned __int64 v36; // rdx
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
  _QWORD v52[11]; // [rsp+30h] [rbp-58h] BYREF

  v6 = *(_QWORD *)(a2 + 16);
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v7 + 16) == 14 )
    return (unsigned int)sub_CBE8E0((__int64)a1, a2, a3, a4, a5);
  v8 = (unsigned int)*(unsigned __int8 *)(v7 + 16) - 57;
  if ( (unsigned int)v8 > 1 )
  {
    if ( *(_BYTE *)(v7 + 16) == 13 && (((*(_WORD *)(v7 + 18) >> 3) + 56) & 0x1FFu) <= 0x17 )
      return (unsigned int)sub_CBE250((__int64)a1, a2, v8, a4, a5);
    v14 = sub_CC2440(a1[158], *(_QWORD *)(v6 + 8));
    switch ( *(_BYTE *)(a2 + 2) >> 3 )
    {
      case 0:
        if ( (*(_BYTE *)(sub_CC2430(a1[158]) + 1) & 0x20) == 0 )
          goto LABEL_73;
        if ( !BYTE4(v14) )
          goto LABEL_72;
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, unsigned __int64))(*a1 + 48LL))(a1, v6) )
          return 0;
        v25 = a2 | 4;
        if ( (_DWORD)v14 == 13 )
        {
          v52[0] = a2 | 4;
          v9 = sub_CFDEB0(a1, v52);
          if ( !(_BYTE)v9 )
            return 0;
          goto LABEL_83;
        }
        v26 = *((_BYTE *)a1 + 1360);
        v52[0] = a2 | 4;
        if ( (_DWORD)v14 == 12 )
        {
          if ( v26 )
            goto LABEL_101;
          v39 = sub_C91710((__int64)a1, a2);
          return (unsigned int)sub_D201B0(a1, v39, v52);
        }
        else
        {
          v17 = (unsigned int)v14;
          v18 = (*(_QWORD *)a2 >> 24) & 1LL;
          if ( v26 )
            return (unsigned int)sub_D31120(a1, v17, v18, v52);
          return (unsigned int)sub_D2FA50(a1, (unsigned int)v14, v18, v52);
        }
      case 1:
        if ( (*(_BYTE *)(sub_CC2430(a1[158]) + 1) & 0x20) == 0 )
          goto LABEL_73;
        if ( !BYTE4(v14) )
          goto LABEL_72;
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, unsigned __int64))(*a1 + 48LL))(a1, v6) )
          return 0;
        v25 = a2 | 4;
        if ( (_DWORD)v14 == 13 )
        {
          v52[0] = a2 | 4;
          v9 = sub_CFE780(a1, v52);
          if ( !(_BYTE)v9 )
            return 0;
LABEL_83:
          if ( *((_BYTE *)a1 + 1360) )
          {
            v52[0] = v25;
            return (unsigned int)sub_CE3FA0(a1, v52);
          }
        }
        else
        {
          v27 = *((_BYTE *)a1 + 1360);
          v52[0] = a2 | 4;
          if ( (_DWORD)v14 == 12 )
          {
            if ( v27 )
              goto LABEL_100;
            v38 = sub_C91710((__int64)a1, a2);
            return (unsigned int)sub_D1FBA0(a1, v38, v52);
          }
          else
          {
            v20 = (unsigned int)v14;
            v21 = (*(_QWORD *)a2 >> 24) & 1LL;
            if ( v27 )
              return (unsigned int)sub_D39B70(a1, v20, v21, v52);
            return (unsigned int)sub_D37B90(a1, (unsigned int)v14, v21, v52);
          }
        }
        return v9;
      case 2:
        if ( (*(_BYTE *)(sub_CC2430(a1[158]) + 1) & 0x20) == 0 )
          goto LABEL_73;
        if ( !BYTE4(v14) )
          goto LABEL_72;
        v15 = (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64))(*a1 + 48LL))(a1, v6);
        if ( !v15 )
          return 0;
        v16 = a2 | 4;
        if ( (_DWORD)v14 == 13 )
        {
          v52[0] = a2 | 4;
          if ( (unsigned __int8)sub_CEAD40(a1, v52) )
          {
            v52[0] = a2 | 4;
            if ( (unsigned __int8)sub_CDCC60(a1, 1, v52) )
            {
              v52[0] = a2 | 4;
              if ( (unsigned __int8)sub_CFDE70(a1, v52) )
                goto LABEL_80;
            }
          }
          return 0;
        }
        v9 = *((unsigned __int8 *)a1 + 1360);
        if ( (_BYTE)v9 )
        {
          v52[0] = a2 | 4;
          if ( (_DWORD)v14 == 12 )
          {
LABEL_101:
            v41 = sub_C91710((__int64)a1, a2);
            return (unsigned int)sub_D203E0(a1, v41, v52);
          }
          else
          {
            v17 = (unsigned int)v14;
            v18 = (*(_QWORD *)a2 >> 24) & 1LL;
            return (unsigned int)sub_D31120(a1, v17, v18, v52);
          }
        }
        if ( (_DWORD)v14 != 12 )
        {
          v36 = *(_QWORD *)a2;
          v47 = v15;
          v52[0] = a2 | 4;
          v37 = sub_D30B00(a1, (unsigned int)v14, (v36 >> 24) & 1, v52);
          v35 = v47;
          if ( v37 )
            goto LABEL_89;
          return 0;
        }
        v50 = v15;
        v42 = sub_CC2920(a1[158], *(_QWORD *)(a2 + 8));
        v52[0] = a2 | 4;
        v48 = v42;
        if ( !(unsigned __int8)sub_CEA590(a1, v52) )
          return v9;
        v51 = 1;
        sub_BFD6B0((__int64)v52, v48, &v51);
        if ( (unsigned __int8)sub_C922B0((__int64)a1, v52, a2) )
        {
          v51 = a2 | 4;
          v43 = sub_C91710((__int64)a1, a2);
          if ( (unsigned __int8)sub_D1E560(a1, v43, &v51) )
            goto LABEL_105;
        }
        goto LABEL_110;
      case 3:
        if ( (*(_BYTE *)(sub_CC2430(a1[158]) + 1) & 0x20) == 0 )
        {
LABEL_73:
          v52[0] = a2 | 4;
          return (unsigned int)sub_CE2D10(a1, v52);
        }
        if ( !BYTE4(v14) )
        {
LABEL_72:
          v52[0] = a2 | 4;
          return (unsigned int)sub_CDD020(a1, v52);
        }
        v19 = (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64))(*a1 + 48LL))(a1, v6);
        if ( !v19 )
          return 0;
        v16 = a2 | 4;
        if ( (_DWORD)v14 == 13 )
        {
          v52[0] = a2 | 4;
          if ( (unsigned __int8)sub_CEAD40(a1, v52)
            && (v52[0] = a2 | 4, (unsigned __int8)sub_CDCC60(a1, 1, v52))
            && (v52[0] = a2 | 4, (unsigned __int8)sub_CFE900(a1, v52)) )
          {
LABEL_80:
            v30 = *((_BYTE *)a1 + 1360) == 0;
            v52[0] = v16;
            if ( v30 )
              return (unsigned int)sub_CF96E0(a1, v52);
            else
              return (unsigned int)sub_CFB6E0(a1, v52);
          }
          else
          {
            return 0;
          }
        }
        v9 = *((unsigned __int8 *)a1 + 1360);
        if ( (_BYTE)v9 )
        {
          v52[0] = a2 | 4;
          if ( (_DWORD)v14 == 12 )
          {
LABEL_100:
            v40 = sub_C91710((__int64)a1, a2);
            return (unsigned int)sub_D1FDD0(a1, v40, v52);
          }
          else
          {
            v20 = (unsigned int)v14;
            v21 = (*(_QWORD *)a2 >> 24) & 1LL;
            return (unsigned int)sub_D39B70(a1, v20, v21, v52);
          }
        }
        if ( (_DWORD)v14 != 12 )
        {
          v33 = *(_QWORD *)a2;
          v46 = v19;
          v52[0] = a2 | 4;
          v34 = sub_D39550(a1, (unsigned int)v14, (v33 >> 24) & 1, v52);
          v35 = v46;
          if ( !v34 )
            return 0;
          goto LABEL_89;
        }
        v50 = v19;
        v44 = sub_CC2920(a1[158], *(_QWORD *)(a2 + 8));
        v52[0] = a2 | 4;
        v49 = v44;
        if ( !(unsigned __int8)sub_CEA590(a1, v52) )
          return v9;
        v51 = 1;
        sub_BFD6B0((__int64)v52, v49, &v51);
        if ( (unsigned __int8)sub_C922B0((__int64)a1, v52, a2) )
        {
          v51 = a2 | 4;
          v45 = sub_C91710((__int64)a1, a2);
          if ( (unsigned __int8)sub_D207A0(a1, v45, &v51) )
          {
LABEL_105:
            v51 = v16;
            if ( (unsigned __int8)sub_CEA640(a1, &v51) )
            {
              sub_971860(v52);
              v35 = v50;
LABEL_89:
              if ( (*(_BYTE *)(a2 + 1) & 6) == 0 )
              {
                v52[0] = v16;
                return (unsigned int)sub_D11290(a1, (unsigned int)v14, v52);
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
          return (unsigned int)sub_CBBC10((__int64)a1, v6, v11, v12, v13);
        v52[0] = a2 | 4;
        return (unsigned int)sub_CE1E00(a1, *(_QWORD *)(v6 + 16), v52);
      case 5:
        if ( *((_BYTE *)a1 + 1360) )
        {
          v31 = v6;
          return (unsigned int)sub_CB69D0((__int64)a1, v31, v11, v12, v13);
        }
        else
        {
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, unsigned __int64))(*a1 + 48LL))(a1, v6) )
            return 0;
          v22 = sub_C90F00((__int64)a1, v6);
          if ( !BYTE4(v22) )
            return sub_CBBC10((__int64)a1, *(_QWORD *)(v6 + 16), HIDWORD(v22), v23, v24);
          if ( (_DWORD)v22 == 13 )
          {
            v52[0] = a2 | 4;
            return (unsigned int)sub_CE33C0(a1, v52);
          }
          else
          {
            return 1;
          }
        }
      case 6:
        if ( !BYTE4(v14) )
          goto LABEL_72;
        v9 = (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64))(*a1 + 48LL))(a1, v6);
        if ( !(_BYTE)v9 )
          return 0;
        if ( *((_BYTE *)a1 + 1360) )
        {
          v52[0] = a2 | 4;
          return (unsigned int)sub_D014C0(a1, (unsigned int)v14, v52);
        }
        return v9;
      case 7:
        if ( !BYTE4(v14) )
          goto LABEL_72;
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, unsigned __int64))(*a1 + 48LL))(a1, v6) )
          return 0;
        v29 = (unsigned int)v14;
        v30 = *((_BYTE *)a1 + 1360) == 0;
        v52[0] = a2 | 4;
        if ( !v30 )
          return (unsigned int)sub_D014C0(a1, v29, v52);
        return (unsigned int)sub_D2A830(a1, (unsigned int)v14, v52);
      case 8:
        if ( !BYTE4(v14) )
          goto LABEL_72;
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, unsigned __int64))(*a1 + 48LL))(a1, v6) )
          return 0;
        v29 = (unsigned int)v14;
        v30 = *((_BYTE *)a1 + 1360) == 0;
        v52[0] = a2 | 4;
        if ( v30 )
          return (unsigned int)sub_D2A410(a1, (unsigned int)v14, v52);
        else
          return (unsigned int)sub_D014C0(a1, v29, v52);
      case 9:
        if ( !BYTE4(v14) )
          goto LABEL_72;
        v31 = v6;
        if ( *((_BYTE *)a1 + 1360) )
          return (unsigned int)sub_CB69D0((__int64)a1, v31, v11, v12, v13);
        if ( !(unsigned __int8)sub_C91CB0(a1, v6) )
          return 0;
        v52[0] = a2 | 4;
        if ( !(unsigned __int8)sub_CE2CA0(a1, v52) )
          return 0;
        v32 = sub_C90F60((__int64)a1, *(_QWORD *)(a2 + 8));
        if ( v32 == 10 )
          return 1;
        v52[0] = a2 | 4;
        return (unsigned int)sub_D0BD20(a1, 10, v32, v52);
      case 10:
      case 12:
        return (unsigned int)sub_CBBC10((__int64)a1, v6, v11, v12, v13);
      case 11:
        if ( !(unsigned __int8)sub_CB69D0((__int64)a1, v6, v11, v12, v13) )
          return 0;
        return (unsigned int)sub_C92610((__int64)a1, (unsigned int)v14, *(_QWORD *)(v6 + 8), v6, v28);
      default:
        return 0;
    }
  }
  return (unsigned int)sub_CBE360((__int64)a1, a2, v8, a4, a5);
}

