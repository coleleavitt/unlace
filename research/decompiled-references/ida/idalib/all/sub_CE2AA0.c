__int64 __fastcall sub_CE2AA0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
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
  __int64 v23; // r12
  char v24; // al
  char v25; // al
  __int64 v26; // r8
  __int64 v27; // rsi
  bool v28; // zf
  unsigned __int64 v29; // rsi
  unsigned int v30; // eax
  unsigned __int64 v31; // rdx
  char v32; // al
  unsigned int v33; // r9d
  unsigned __int64 v34; // rdx
  char v35; // al
  unsigned int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // eax
  __int64 v40; // rax
  unsigned int v41; // eax
  __int64 v42; // rax
  unsigned int v43; // eax
  unsigned __int8 v44; // [rsp+8h] [rbp-80h]
  unsigned __int8 v45; // [rsp+8h] [rbp-80h]
  __int64 v46; // [rsp+10h] [rbp-78h]
  __int64 v47; // [rsp+10h] [rbp-78h]
  unsigned __int8 v48; // [rsp+1Fh] [rbp-69h]
  __int64 v49; // [rsp+28h] [rbp-60h] BYREF
  _QWORD v50[11]; // [rsp+30h] [rbp-58h] BYREF

  v6 = *(_QWORD *)(a2 + 16);
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v7 + 16) == 14 )
    return (unsigned int)sub_CE2620((__int64)a1, a2, a3, a4, a5);
  v8 = (unsigned int)*(unsigned __int8 *)(v7 + 16) - 57;
  if ( (unsigned int)v8 > 1 )
  {
    if ( *(_BYTE *)(v7 + 16) == 13 && (((*(_WORD *)(v7 + 18) >> 3) + 56) & 0x1FFu) <= 0x17 )
      return (unsigned int)sub_CE1F90((__int64)a1, a2);
    v14 = sub_CE6180(a1[158], *(_QWORD *)(v6 + 8));
    switch ( *(_BYTE *)(a2 + 2) >> 3 )
    {
      case 0:
        if ( (*(_BYTE *)(sub_CE6170(a1[158]) + 1) & 0x20) == 0 )
          goto LABEL_73;
        if ( !BYTE4(v14) )
          goto LABEL_72;
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, unsigned __int64))(*a1 + 48LL))(a1, v6) )
          return 0;
        v23 = a2 | 4;
        if ( (_DWORD)v14 == 13 )
        {
          v50[0] = a2 | 4;
          v9 = sub_D21BF0(a1, v50);
          if ( !(_BYTE)v9 )
            return 0;
          goto LABEL_83;
        }
        v24 = *((_BYTE *)a1 + 1360);
        v50[0] = a2 | 4;
        if ( (_DWORD)v14 == 12 )
        {
          if ( v24 )
            goto LABEL_101;
          v37 = sub_CB5450((__int64)a1, a2);
          return (unsigned int)sub_D43EF0(a1, v37, v50);
        }
        else
        {
          v17 = (unsigned int)v14;
          v18 = (*(_QWORD *)a2 >> 24) & 1LL;
          if ( v24 )
            return (unsigned int)sub_D54E60(a1, v17, v18, v50);
          return (unsigned int)sub_D53790(a1, (unsigned int)v14, v18, v50);
        }
      case 1:
        if ( (*(_BYTE *)(sub_CE6170(a1[158]) + 1) & 0x20) == 0 )
          goto LABEL_73;
        if ( !BYTE4(v14) )
          goto LABEL_72;
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, unsigned __int64))(*a1 + 48LL))(a1, v6) )
          return 0;
        v23 = a2 | 4;
        if ( (_DWORD)v14 == 13 )
        {
          v50[0] = a2 | 4;
          v9 = sub_D224C0(a1, v50);
          if ( !(_BYTE)v9 )
            return 0;
LABEL_83:
          if ( *((_BYTE *)a1 + 1360) )
          {
            v50[0] = v23;
            return (unsigned int)sub_D07CE0(a1, v50);
          }
        }
        else
        {
          v25 = *((_BYTE *)a1 + 1360);
          v50[0] = a2 | 4;
          if ( (_DWORD)v14 == 12 )
          {
            if ( v25 )
              goto LABEL_100;
            v36 = sub_CB5450((__int64)a1, a2);
            return (unsigned int)sub_D438E0(a1, v36, v50);
          }
          else
          {
            v20 = (unsigned int)v14;
            v21 = (*(_QWORD *)a2 >> 24) & 1LL;
            if ( v25 )
              return (unsigned int)sub_D5D8B0(a1, v20, v21, v50);
            return (unsigned int)sub_D5B8D0(a1, (unsigned int)v14, v21, v50);
          }
        }
        return v9;
      case 2:
        if ( (*(_BYTE *)(sub_CE6170(a1[158]) + 1) & 0x20) == 0 )
          goto LABEL_73;
        if ( !BYTE4(v14) )
          goto LABEL_72;
        v15 = (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64))(*a1 + 48LL))(a1, v6);
        if ( !v15 )
          return 0;
        v16 = a2 | 4;
        if ( (_DWORD)v14 == 13 )
        {
          v50[0] = a2 | 4;
          if ( (unsigned __int8)sub_D0EA80(a1, v50) )
          {
            v50[0] = a2 | 4;
            if ( (unsigned __int8)sub_D009A0(a1, 1, v50) )
            {
              v50[0] = a2 | 4;
              if ( (unsigned __int8)sub_D21BB0(a1, v50) )
                goto LABEL_80;
            }
          }
          return 0;
        }
        v9 = *((unsigned __int8 *)a1 + 1360);
        if ( (_BYTE)v9 )
        {
          v50[0] = a2 | 4;
          if ( (_DWORD)v14 == 12 )
          {
LABEL_101:
            v39 = sub_CB5450((__int64)a1, a2);
            return (unsigned int)sub_D44120(a1, v39, v50);
          }
          else
          {
            v17 = (unsigned int)v14;
            v18 = (*(_QWORD *)a2 >> 24) & 1LL;
            return (unsigned int)sub_D54E60(a1, v17, v18, v50);
          }
        }
        if ( (_DWORD)v14 != 12 )
        {
          v34 = *(_QWORD *)a2;
          v45 = v15;
          v50[0] = a2 | 4;
          v35 = sub_D54840(a1, (unsigned int)v14, (v34 >> 24) & 1, v50);
          v33 = v45;
          if ( v35 )
            goto LABEL_89;
          return 0;
        }
        v48 = v15;
        v40 = sub_CE6660(a1[158], *(_QWORD *)(a2 + 8));
        v50[0] = a2 | 4;
        v46 = v40;
        if ( !(unsigned __int8)sub_D0E2D0(a1, v50) )
          return v9;
        v49 = 1;
        sub_C213F0((__int64)v50, v46, &v49);
        if ( (unsigned __int8)sub_CB5FF0((__int64)a1, v50, a2) )
        {
          v49 = a2 | 4;
          v41 = sub_CB5450((__int64)a1, a2);
          if ( (unsigned __int8)sub_D422A0(a1, v41, &v49) )
            goto LABEL_105;
        }
        goto LABEL_110;
      case 3:
        if ( (*(_BYTE *)(sub_CE6170(a1[158]) + 1) & 0x20) == 0 )
        {
LABEL_73:
          v50[0] = a2 | 4;
          return (unsigned int)sub_D06A50(a1, v50);
        }
        if ( !BYTE4(v14) )
        {
LABEL_72:
          v50[0] = a2 | 4;
          return (unsigned int)sub_D00D60(a1, v50);
        }
        v19 = (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64))(*a1 + 48LL))(a1, v6);
        if ( !v19 )
          return 0;
        v16 = a2 | 4;
        if ( (_DWORD)v14 == 13 )
        {
          v50[0] = a2 | 4;
          if ( (unsigned __int8)sub_D0EA80(a1, v50)
            && (v50[0] = a2 | 4, (unsigned __int8)sub_D009A0(a1, 1, v50))
            && (v50[0] = a2 | 4, (unsigned __int8)sub_D22640(a1, v50)) )
          {
LABEL_80:
            v28 = *((_BYTE *)a1 + 1360) == 0;
            v50[0] = v16;
            if ( v28 )
              return (unsigned int)sub_D1D420(a1, v50);
            else
              return (unsigned int)sub_D1F420(a1, v50);
          }
          else
          {
            return 0;
          }
        }
        v9 = *((unsigned __int8 *)a1 + 1360);
        if ( (_BYTE)v9 )
        {
          v50[0] = a2 | 4;
          if ( (_DWORD)v14 == 12 )
          {
LABEL_100:
            v38 = sub_CB5450((__int64)a1, a2);
            return (unsigned int)sub_D43B10(a1, v38, v50);
          }
          else
          {
            v20 = (unsigned int)v14;
            v21 = (*(_QWORD *)a2 >> 24) & 1LL;
            return (unsigned int)sub_D5D8B0(a1, v20, v21, v50);
          }
        }
        if ( (_DWORD)v14 != 12 )
        {
          v31 = *(_QWORD *)a2;
          v44 = v19;
          v50[0] = a2 | 4;
          v32 = sub_D5D290(a1, (unsigned int)v14, (v31 >> 24) & 1, v50);
          v33 = v44;
          if ( !v32 )
            return 0;
          goto LABEL_89;
        }
        v48 = v19;
        v42 = sub_CE6660(a1[158], *(_QWORD *)(a2 + 8));
        v50[0] = a2 | 4;
        v47 = v42;
        if ( !(unsigned __int8)sub_D0E2D0(a1, v50) )
          return v9;
        v49 = 1;
        sub_C213F0((__int64)v50, v47, &v49);
        if ( (unsigned __int8)sub_CB5FF0((__int64)a1, v50, a2) )
        {
          v49 = a2 | 4;
          v43 = sub_CB5450((__int64)a1, a2);
          if ( (unsigned __int8)sub_D444E0(a1, v43, &v49) )
          {
LABEL_105:
            v49 = v16;
            if ( (unsigned __int8)sub_D0E380(a1, &v49) )
            {
              sub_9955A0(v50);
              v33 = v48;
LABEL_89:
              if ( (*(_BYTE *)(a2 + 1) & 6) == 0 )
              {
                v50[0] = v16;
                return (unsigned int)sub_D34FD0(a1, (unsigned int)v14, v50);
              }
              return v33;
            }
          }
        }
LABEL_110:
        sub_9955A0(v50);
        return v9;
      case 4:
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                  & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) != 33 )
          return (unsigned int)sub_CDF950(a1, v6);
        v50[0] = a2 | 4;
        return (unsigned int)sub_D05B40(a1, *(_QWORD *)(v6 + 16), v50);
      case 5:
        if ( *((_BYTE *)a1 + 1360) )
        {
          v29 = v6;
          return (unsigned int)sub_CDA710((__int64)a1, v29, v11, v12, v13);
        }
        else
        {
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, unsigned __int64))(*a1 + 48LL))(a1, v6) )
            return 0;
          v22 = sub_CB4C40((__int64)a1, v6);
          if ( !BYTE4(v22) )
            return sub_CDF950(a1, *(_QWORD *)(v6 + 16));
          if ( (_DWORD)v22 == 13 )
          {
            v50[0] = a2 | 4;
            return (unsigned int)sub_D07100(a1, v50);
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
          v50[0] = a2 | 4;
          return (unsigned int)sub_D25200(a1, (unsigned int)v14, v50);
        }
        return v9;
      case 7:
        if ( !BYTE4(v14) )
          goto LABEL_72;
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, unsigned __int64))(*a1 + 48LL))(a1, v6) )
          return 0;
        v27 = (unsigned int)v14;
        v28 = *((_BYTE *)a1 + 1360) == 0;
        v50[0] = a2 | 4;
        if ( !v28 )
          return (unsigned int)sub_D25200(a1, v27, v50);
        return (unsigned int)sub_D4E570(a1, (unsigned int)v14, v50);
      case 8:
        if ( !BYTE4(v14) )
          goto LABEL_72;
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, unsigned __int64))(*a1 + 48LL))(a1, v6) )
          return 0;
        v27 = (unsigned int)v14;
        v28 = *((_BYTE *)a1 + 1360) == 0;
        v50[0] = a2 | 4;
        if ( v28 )
          return (unsigned int)sub_D4E150(a1, (unsigned int)v14, v50);
        else
          return (unsigned int)sub_D25200(a1, v27, v50);
      case 9:
        if ( !BYTE4(v14) )
          goto LABEL_72;
        v29 = v6;
        if ( *((_BYTE *)a1 + 1360) )
          return (unsigned int)sub_CDA710((__int64)a1, v29, v11, v12, v13);
        if ( !(unsigned __int8)sub_CB59F0(a1, v6) )
          return 0;
        v50[0] = a2 | 4;
        if ( !(unsigned __int8)sub_D069E0(a1, v50) )
          return 0;
        v30 = sub_CB4CA0((__int64)a1, *(_QWORD *)(a2 + 8));
        if ( v30 == 10 )
          return 1;
        v50[0] = a2 | 4;
        return (unsigned int)sub_D2FA60(a1, 10, v30, v50);
      case 10:
      case 12:
        return (unsigned int)sub_CDF950(a1, v6);
      case 11:
        if ( !(unsigned __int8)sub_CDA710((__int64)a1, v6, v11, v12, v13) )
          return 0;
        return (unsigned int)sub_CB6350((__int64)a1, (unsigned int)v14, *(_QWORD *)(v6 + 8), v6, v26);
      default:
        return 0;
    }
  }
  return (unsigned int)sub_CE20A0((__int64)a1, a2, v8, a4, a5);
}
