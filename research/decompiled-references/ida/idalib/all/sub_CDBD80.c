__int64 __fastcall sub_CDBD80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r13
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // r12
  int v9; // eax
  __int64 result; // rax
  char v11; // al
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  bool v15; // al
  __int64 v16; // r9
  unsigned __int64 v17; // r11
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdi
  int v23; // ecx
  __int64 v24; // rdx
  __int64 v25; // rbp
  int v26; // eax
  int v27; // eax
  int v28; // eax
  __int64 v29; // r12
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  _QWORD *v34; // rbp
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  __int64 v37; // r12
  unsigned int v38; // r14d
  __int64 v39; // rdx
  __int64 v40; // rdi
  unsigned __int64 v41; // rcx
  __int64 v42; // r13
  unsigned __int64 v43; // r12
  __int64 v44; // r8
  _QWORD *v45; // rax
  __int64 v46; // rcx
  unsigned __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  char v51; // [rsp+8h] [rbp-90h]
  unsigned __int64 v52; // [rsp+10h] [rbp-88h]
  __int64 v53; // [rsp+18h] [rbp-80h]
  __int64 v54; // [rsp+20h] [rbp-78h]
  unsigned int v55; // [rsp+20h] [rbp-78h]
  __int64 v56; // [rsp+28h] [rbp-70h]
  unsigned int v57; // [rsp+30h] [rbp-68h]
  unsigned int v58; // [rsp+3Ch] [rbp-5Ch]
  unsigned __int64 v59; // [rsp+40h] [rbp-58h]
  __int64 v60; // [rsp+48h] [rbp-50h]
  unsigned int v61; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v62; // [rsp+54h] [rbp-44h] BYREF
  __int64 v63[8]; // [rsp+58h] [rbp-40h] BYREF

  v4 = 0;
  if ( (*(_QWORD *)a2 & 0x1000000) != 0 )
    v4 = *(_QWORD *)(a2 + 8 * ((*(_QWORD *)a2 >> 20) & 1LL) + 56);
  v6 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v6 + 16) != 42 )
    v6 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4);
  v7 = *(_QWORD *)(v6 + 32);
  v8 = sub_CE6180(*(_QWORD *)(a1 + 1264), v7);
  v9 = *(_DWORD *)(a2 + 4);
  if ( !v9 )
  {
    if ( !sub_B760E0(*(_QWORD *)(a2 + 16), nullptr, nullptr) )
    {
      v63[0] = a2 | 4;
      return sub_D06D40(a1, a2, v63);
    }
    goto LABEL_22;
  }
  if ( v9 != 1 )
  {
    v63[0] = a2 | 4;
    return sub_D06A50(a1, v63);
  }
  v54 = *(_QWORD *)(a2 + 16);
  v52 = *(_QWORD *)(a2 + 8LL * (((*(_QWORD *)a2 >> 20) & 1) + ((*(_QWORD *)a2 >> 24) & 1)) + 56);
  v11 = sub_F632A0(*(_QWORD *)(*(_QWORD *)(v52 + 8) & 0xFFFFFFFFFFFFFFF0LL));
  v14 = v54;
  v51 = v11;
  if ( v11 )
  {
    v55 = 1;
    v51 = sub_CDA710(a1, v52, v12, v14, v13);
    if ( !v51 )
      return 0;
LABEL_23:
    if ( BYTE4(v8) )
    {
      v53 = 0;
      v18 = *(_QWORD *)a2;
      if ( (*(_QWORD *)a2 & 0x100000) == 0 )
      {
        v45 = *(_QWORD **)(a1 + 1272);
        v63[0] = a2 | 2;
        v46 = v45[16];
        v45[26] += 88LL;
        v47 = (v46 + 15) & 0xFFFFFFFFFFFFFFF0LL;
        if ( v45[17] >= v47 + 88 && v46 )
        {
          v45[16] = v47 + 88;
          v53 = (v46 + 15) & 0xFFFFFFFFFFFFFFF0LL;
          sub_CEE970(v53, (unsigned int)v63, 0, v8, 16, 0, 0, 0, 0);
        }
        else
        {
          v53 = sub_986170((__int64)(v45 + 16), 88, 88, 4, 0x100000010LL, v16);
          sub_CEE970(v53, (unsigned int)v63, 0, v8, 16, 0, 0, 0, 0);
        }
        v18 = *(_QWORD *)a2;
      }
    }
    else
    {
      v22 = *(_QWORD *)(a1 + 1272);
      v23 = 16;
      if ( (*(_QWORD *)a2 & 0x100000LL) != 0 )
        v23 = 0;
      v24 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
      v63[0] = a2 | 2;
      v53 = sub_E2B9B0(v22, (unsigned int)v63, v24, v23, 0, 0, 0, 0, v4);
      v18 = *(_QWORD *)a2;
    }
    v17 = 0;
    if ( (v18 & 0x100000) == 0 )
    {
      v56 = a2 | 4;
      v63[0] = a2 | 4;
      if ( !(unsigned __int8)sub_CFF8A0(a1, v53, v63) )
        return 0;
      goto LABEL_16;
    }
LABEL_28:
    if ( (v18 & 0x100000) == 0 )
      return 0;
    v25 = *(_QWORD *)(a2 + 56);
    if ( !v25 )
      return 0;
    if ( (*(_WORD *)v25 & 0x1FF) == 0x4F )
    {
      v26 = (*(_WORD *)(v25 + 2) >> 3) & 0x7F;
      if ( v26 == 5 || v26 == 27 )
      {
        do
        {
          v25 = *(_QWORD *)(v25 + 16);
          if ( (*(_WORD *)v25 & 0x1FF) != 0x4F )
            break;
          v27 = (*(_WORD *)(v25 + 2) >> 3) & 0x7F;
        }
        while ( v27 == 27 || v27 == 5 );
      }
    }
    v59 = v17;
    v28 = sub_CB4CA0(a1, *(_QWORD *)(v25 + 8));
    v60 = v25 | 2;
    v63[0] = v25 | 2;
    v57 = v28;
    v58 = sub_CD2220(a1, v63, v28, 0, 0, 1, 0);
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, v25) )
      return 0;
    v56 = a2 | 4;
    v63[0] = a2 | 4;
    if ( !(unsigned __int8)sub_D256A0(a1, v57, v58, v63) )
      return 0;
    if ( v59 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 48LL))(a1, v59) )
        return 0;
      v63[0] = a2 | 4;
      if ( !(unsigned __int8)sub_D082E0(a1, v63) )
        return 0;
      v63[0] = a2 | 4;
      if ( !(unsigned __int8)sub_D32BF0(a1, v57, v58, v63) )
        return 0;
      v63[0] = a2 | 4;
      if ( !(unsigned __int8)sub_D2F760(a1, v57, a2, v63) )
        return 0;
    }
    else
    {
      v63[0] = a2 | 4;
      if ( !(unsigned __int8)sub_D32BF0(a1, v57, v58, v63) )
        return 0;
      if ( BYTE4(v8) )
      {
        v63[0] = a2 | 4;
        if ( !(unsigned __int8)sub_D55FB0(a1, v57, (unsigned int)v8, a2, v55, v63) )
          return 0;
      }
      else
      {
        v63[0] = a2 | 4;
        if ( !(unsigned __int8)sub_D55800(a1, v57, v53, v55, v63) )
          return 0;
      }
    }
    if ( !v4 )
      goto LABEL_73;
    v29 = *(_QWORD *)(v4 + 8);
    v30 = sub_A72040(**(_QWORD ***)(a1 + 1264), v29);
    if ( v30 && (v33 = (unsigned int)*(unsigned __int8 *)(v30 + 16) - 2, (unsigned int)v33 <= 1) )
    {
      v34 = *(_QWORD **)(v30 + 40);
      if ( (*(_BYTE *)(v30 + 19) & 2) != 0 )
      {
        if ( *((_DWORD *)v34 + 2) <= 0x40u )
          v34 = (_QWORD *)*v34;
        else
          v34 = *(_QWORD **)*v34;
      }
      if ( !(unsigned __int8)sub_CD6B90(a1, v4, v33, v31, v32) )
        return 0;
      if ( (*(_WORD *)v4 & 0x1FF) == 0x35 )
      {
        v35 = *(_QWORD *)(v4 + 56);
        if ( v35 )
        {
          if ( (v35 & 2) == 0 )
          {
            v36 = v35 & 0xFFFFFFFFFFFFFFFCLL;
            if ( v36 )
            {
              v4 = v36;
              v37 = 0;
              goto LABEL_55;
            }
          }
        }
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) != 5 )
          goto LABEL_73;
        goto LABEL_105;
      }
    }
    else
    {
      v34 = nullptr;
    }
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 5 )
      goto LABEL_73;
    if ( (*(_WORD *)v4 & 0x1FFu) - 113 <= 1 )
    {
      v37 = sub_CB4B10(a1);
      if ( !v37 )
        return 0;
      v4 = 0;
LABEL_55:
      v61 = sub_CFF2B0(a1);
      v62 = sub_CFF2B0(a1);
      if ( v51 )
      {
        v63[0] = a2 | 4;
        if ( !(unsigned __int8)sub_D00AF0(a1, v63) )
          return 0;
        v63[0] = a2 | 4;
        if ( !(unsigned __int8)sub_D072A0(a1, 0, 0, v63) )
          return 0;
        v63[0] = a2 | 4;
        if ( !(unsigned __int8)sub_D0A5F0(a1, v63) )
          return 0;
        if ( !(unsigned __int8)sub_CFF5D0(a1, &v61) )
          return 0;
      }
      v63[0] = v60;
      v38 = sub_CD2220(a1, v63, v57, 0, 0, 1, 0);
      if ( !(unsigned __int8)sub_CB8AC0(a1, (__int64)v34, v57, a2) )
        return 0;
      v63[0] = a2 | 4;
      if ( !(unsigned __int8)sub_D256A0(a1, v57, v38, v63) )
        return 0;
      sub_CFF6E0(a1, &v62);
      sub_CFF2A0(a1, v62);
      v63[0] = a2 | 4;
      if ( !(unsigned __int8)sub_D32BF0(a1, v57, v38, v63) )
        return 0;
      v63[0] = a2 | 4;
      if ( !(unsigned __int8)sub_D32BF0(a1, v57, v58, v63) )
        return 0;
      v63[0] = a2 | 4;
      if ( !(unsigned __int8)sub_D50890(a1, v57, v63) )
        return 0;
      if ( !(unsigned __int8)sub_CFF640(a1, &v61) )
        return 0;
      v63[0] = a2 | 4;
      if ( !(unsigned __int8)sub_D32BF0(a1, v57, v38, v63) )
        return 0;
      v63[0] = a2 | 4;
      if ( !(unsigned __int8)sub_D58390(a1, v57, v63) )
        return 0;
      if ( !v4 )
      {
        v63[0] = a2 | 4;
        if ( !(unsigned __int8)sub_CFFC60(a1, v37, 0, v63) )
          return 0;
        goto LABEL_69;
      }
      if ( (*(_WORD *)v4 & 0x1FF) == 0x36
        && (v40 = *(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL),
            v41 = *(_QWORD *)(v40 + 8) & 0xFFFFFFFFFFFFFFF0LL,
            (unsigned __int8)(*(_BYTE *)(*(_QWORD *)v41 + 16LL) - 2) <= 4u) )
      {
        v42 = *(_QWORD *)(sub_CAFA70(v40, v57, v39, v41) + 32);
        v43 = (unsigned int)sub_CB4CA0(a1, v42);
        if ( !(unsigned __int8)sub_CB6350(a1, v43, v42, a2, v44) )
          return 0;
      }
      else
      {
        v43 = sub_CB4C40(a1, v4);
        if ( !BYTE4(v43) )
        {
          if ( (unsigned __int8)sub_CD6B90(a1, v4, v48, v49, v50) )
          {
            v63[0] = a2 | 4;
            if ( !(unsigned __int8)sub_D07CE0(a1, v63) )
              return 0;
            goto LABEL_69;
          }
          return 0;
        }
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 48LL))(a1, v4) )
          return 0;
      }
      v63[0] = a2 | 4;
      if ( (unsigned __int8)sub_D27520(a1, (unsigned int)v43, v63) )
      {
LABEL_69:
        v63[0] = a2 | 4;
        if ( !(unsigned __int8)sub_CFF720(a1, v38, v63) )
          return 0;
        v63[0] = a2 | 4;
        if ( !(unsigned __int8)sub_D54E60(a1, v57, 0, v63) || !(unsigned __int8)sub_CFF6B0(a1, &v62) )
          return 0;
        sub_CFF6E0(a1, &v61);
        sub_CFF2A0(a1, v61);
        goto LABEL_73;
      }
      return 0;
    }
LABEL_105:
    v37 = 0;
    goto LABEL_55;
  }
  v56 = a2 | 4;
  v63[0] = a2 | 4;
  if ( !(unsigned __int8)sub_D06D40(a1, a2, v63) )
    return 0;
  v15 = sub_B74AF0(v54);
  v17 = v52;
  if ( !v15 )
  {
LABEL_22:
    v55 = 0;
    v51 = 0;
    goto LABEL_23;
  }
  v18 = *(_QWORD *)a2;
  if ( (*(_QWORD *)a2 & 0x100000) != 0 )
  {
    v55 = 0;
    goto LABEL_28;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 48LL))(a1, v52) )
    return 0;
  v63[0] = a2 | 4;
  if ( !(unsigned __int8)sub_D082E0(a1, v63) )
    return 0;
  v63[0] = a2 | 4;
  if ( !(unsigned __int8)sub_D00610(a1, a2, v63) )
    return 0;
LABEL_16:
  if ( v4 )
  {
    if ( BYTE4(v8) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 48LL))(a1, v4) )
        return 0;
      v63[0] = v56;
      if ( !(unsigned __int8)sub_D25C40(a1, (unsigned int)v8, v63) )
        return 0;
    }
    else if ( !(unsigned __int8)sub_CD6B90(a1, v4, v19, v20, v21) )
    {
      return 0;
    }
  }
LABEL_73:
  result = 1;
  if ( *(_BYTE *)(a1 + 1360) )
  {
    v63[0] = v56;
    return sub_D07CE0(a1, v63);
  }
  return result;
}
