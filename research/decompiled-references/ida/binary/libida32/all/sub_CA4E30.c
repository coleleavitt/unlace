__int64 __fastcall sub_CA4E30(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  int v38; // eax
  int v39; // edx
  unsigned int v40; // r14d
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rdi
  unsigned __int64 v51; // rcx
  __int64 v52; // r13
  unsigned __int64 v53; // r12
  __int64 v54; // r8
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  _QWORD *v63; // rax
  __int64 v64; // rcx
  unsigned __int64 v65; // rdx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  char v69; // [rsp+8h] [rbp-90h]
  unsigned __int64 v70; // [rsp+10h] [rbp-88h]
  __int64 v71; // [rsp+18h] [rbp-80h]
  __int64 v72; // [rsp+20h] [rbp-78h]
  char v73; // [rsp+20h] [rbp-78h]
  __int64 v74; // [rsp+28h] [rbp-70h]
  unsigned int v75; // [rsp+30h] [rbp-68h]
  unsigned int v76; // [rsp+3Ch] [rbp-5Ch]
  unsigned __int64 v77; // [rsp+40h] [rbp-58h]
  __int64 v78; // [rsp+48h] [rbp-50h]
  int v79; // [rsp+50h] [rbp-48h] BYREF
  int v80; // [rsp+54h] [rbp-44h] BYREF
  __int64 v81[8]; // [rsp+58h] [rbp-40h] BYREF

  v4 = 0;
  if ( (*(_QWORD *)a2 & 0x1000000) != 0 )
    v4 = *(_QWORD *)(a2 + 8 * ((*(_QWORD *)a2 >> 20) & 1LL) + 56);
  v6 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v6 + 16) != 42 )
    v6 = sub_F3F310(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4);
  v7 = *(_QWORD *)(v6 + 32);
  v8 = sub_CC2440(*(_QWORD *)(a1 + 488), v7);
  v9 = *(_DWORD *)(a2 + 4);
  if ( !v9 )
  {
    if ( !sub_B523A0(*(_QWORD *)(a2 + 16), nullptr, nullptr) )
    {
      v81[0] = a2 | 4;
      return sub_C82FA0((_QWORD *)a1, a2, v81);
    }
    goto LABEL_22;
  }
  if ( v9 != 1 )
  {
    v81[0] = a2 | 4;
    return sub_C872A0(a1, v81);
  }
  v72 = *(_QWORD *)(a2 + 16);
  v70 = *(_QWORD *)(a2 + 8LL * (((*(_QWORD *)a2 >> 20) & 1) + ((*(_QWORD *)a2 >> 24) & 1)) + 56);
  v11 = sub_F3F560(*(_QWORD *)(*(_QWORD *)(v70 + 8) & 0xFFFFFFFFFFFFFFF0LL));
  v14 = v72;
  v69 = v11;
  if ( v11 )
  {
    v73 = 1;
    v69 = sub_CA37C0(a1, v70, v12, v14, v13);
    if ( !v69 )
      return 0;
LABEL_23:
    if ( BYTE4(v8) )
    {
      v71 = 0;
      v18 = *(_QWORD *)a2;
      if ( (*(_QWORD *)a2 & 0x100000) == 0 )
      {
        v63 = *(_QWORD **)(a1 + 496);
        v81[0] = a2 | 2;
        v64 = v63[16];
        v63[26] += 88LL;
        v65 = (v64 + 15) & 0xFFFFFFFFFFFFFFF0LL;
        if ( v63[17] >= v65 + 88 && v64 )
        {
          v63[16] = v65 + 88;
          v71 = (v64 + 15) & 0xFFFFFFFFFFFFFFF0LL;
          sub_CCAC30(v71, (unsigned int)v81, 0, v8, 16, 0, 0, 0, 0);
        }
        else
        {
          v71 = sub_962430((__int64)(v63 + 16), 88, 88, 4, 0x100000010LL, v16);
          sub_CCAC30(v71, (unsigned int)v81, 0, v8, 16, 0, 0, 0, 0);
        }
        v18 = *(_QWORD *)a2;
      }
    }
    else
    {
      v22 = *(_QWORD *)(a1 + 496);
      v23 = 16;
      if ( (*(_QWORD *)a2 & 0x100000LL) != 0 )
        v23 = 0;
      v24 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
      v81[0] = a2 | 2;
      v71 = sub_E07C70(v22, (unsigned int)v81, v24, v23, 0, 0, 0, 0, v4);
      v18 = *(_QWORD *)a2;
    }
    v17 = 0;
    if ( (v18 & 0x100000) == 0 )
    {
      v74 = a2 | 4;
      v81[0] = a2 | 4;
      if ( !(unsigned __int8)sub_C81C90((_QWORD *)a1, v71, v81) )
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
    v77 = v17;
    v28 = sub_C8D700(a1, *(_QWORD *)(v25 + 8));
    v78 = v25 | 2;
    v81[0] = v25 | 2;
    v75 = v28;
    v76 = sub_C9B2B0(a1, v81, v28, 0, 0, 1, 0);
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, v25) )
      return 0;
    v74 = a2 | 4;
    v81[0] = a2 | 4;
    if ( !(unsigned __int8)sub_C81650(a1, v75, v76, v81) )
      return 0;
    if ( v77 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 40LL))(a1, v77) )
        return 0;
      v81[0] = a2 | 4;
      if ( !(unsigned __int8)sub_C7F8A0(a1, v81) )
        return 0;
      v81[0] = a2 | 4;
      if ( !(unsigned __int8)sub_C80B80(a1, v75, v76, v81) )
        return 0;
      v81[0] = a2 | 4;
      if ( !(unsigned __int8)sub_C82EE0((_QWORD *)a1, v75, a2, v81) )
        return 0;
    }
    else
    {
      v81[0] = a2 | 4;
      if ( !(unsigned __int8)sub_C80B80(a1, v75, v76, v81) )
        return 0;
      if ( BYTE4(v8) )
      {
        v81[0] = a2 | 4;
        if ( !(unsigned __int8)sub_C82CB0((_QWORD *)a1, v75, v8, a2, v73, v81) )
          return 0;
      }
      else
      {
        v81[0] = a2 | 4;
        if ( !(unsigned __int8)sub_C81F40((_QWORD *)a1, v75, v71, v73, v81) )
          return 0;
      }
    }
    if ( !v4 )
      goto LABEL_73;
    v29 = *(_QWORD *)(v4 + 8);
    v30 = sub_A4E300(**(_QWORD ***)(a1 + 488), v29);
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
      if ( !(unsigned __int8)sub_C9FC20(a1, v4, v33, v31, v32) )
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
      v37 = sub_C8D570(a1);
      if ( !v37 )
        return 0;
      v4 = 0;
LABEL_55:
      v38 = *(_DWORD *)(a1 + 384);
      v39 = v38 + 1;
      v38 += 2;
      v79 = v39;
      *(_DWORD *)(a1 + 384) = v38;
      v80 = v38;
      if ( v69 )
      {
        v81[0] = a2 | 4;
        if ( !(unsigned __int8)sub_C7D320(a1, v81) )
          return 0;
        v81[0] = a2 | 4;
        if ( !(unsigned __int8)sub_C86E10((_QWORD *)a1, 0, 0, v81) )
          return 0;
        v81[0] = a2 | 4;
        if ( !(unsigned __int8)sub_C87720(a1, v81) )
          return 0;
        if ( !(unsigned __int8)sub_C892C0(a1, &v79) )
          return 0;
      }
      v81[0] = v78;
      v40 = sub_C9B2B0(a1, v81, v75, 0, 0, 1, 0);
      if ( !(unsigned __int8)sub_C93A70(a1, (__int64)v34, v75, a2) )
        return 0;
      v81[0] = a2 | 4;
      if ( !(unsigned __int8)sub_C81650(a1, v75, v40, v81) )
        return 0;
      sub_C8A710(a1, &v80, v41, v42, v43, v44);
      sub_C8A330(a1, v80, v45, v46, v47, v48);
      v81[0] = a2 | 4;
      if ( !(unsigned __int8)sub_C80B80(a1, v75, v40, v81) )
        return 0;
      v81[0] = a2 | 4;
      if ( !(unsigned __int8)sub_C80B80(a1, v75, v76, v81) )
        return 0;
      v81[0] = a2 | 4;
      if ( !(unsigned __int8)sub_C7E3C0(a1, v75, v81) )
        return 0;
      if ( !(unsigned __int8)sub_C891B0(a1, &v79) )
        return 0;
      v81[0] = a2 | 4;
      if ( !(unsigned __int8)sub_C80B80(a1, v75, v40, v81) )
        return 0;
      v81[0] = a2 | 4;
      if ( !(unsigned __int8)sub_C7C390(a1, v75, v81) )
        return 0;
      if ( !v4 )
      {
        v81[0] = a2 | 4;
        if ( !(unsigned __int8)sub_C837F0((_QWORD *)a1, v37, 0, v81) )
          return 0;
        goto LABEL_69;
      }
      if ( (*(_WORD *)v4 & 0x1FF) == 0x36
        && (v50 = *(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL),
            v51 = *(_QWORD *)(v50 + 8) & 0xFFFFFFFFFFFFFFF0LL,
            (unsigned __int8)(*(_BYTE *)(*(_QWORD *)v51 + 16LL) - 2) <= 4u) )
      {
        v52 = *(_QWORD *)(sub_C8BD30(v50, v75, v49, v51) + 32);
        LODWORD(v53) = sub_C8D700(a1, v52);
        if ( !(unsigned __int8)sub_C8ED90(a1, (unsigned int)v53, v52, a2, v54) )
          return 0;
      }
      else
      {
        v53 = sub_C8D6A0(a1, v4);
        if ( !BYTE4(v53) )
        {
          if ( (unsigned __int8)sub_C9FC20(a1, v4, v66, v67, v68) )
          {
            v81[0] = a2 | 4;
            if ( !(unsigned __int8)sub_C7EAC0(a1, v81) )
              return 0;
            goto LABEL_69;
          }
          return 0;
        }
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 40LL))(a1, v4) )
          return 0;
      }
      v81[0] = a2 | 4;
      if ( (unsigned __int8)sub_C7FBC0(a1, v53, v81) )
      {
LABEL_69:
        v81[0] = a2 | 4;
        if ( !(unsigned __int8)sub_C80E60(a1, v40, v81) )
          return 0;
        v81[0] = a2 | 4;
        if ( !(unsigned __int8)sub_C823F0(a1, v75, 0, v81) || !(unsigned __int8)sub_C890A0(a1, &v80) )
          return 0;
        sub_C8A710(a1, &v79, v55, v56, v57, v58);
        sub_C8A330(a1, v79, v59, v60, v61, v62);
        goto LABEL_73;
      }
      return 0;
    }
LABEL_105:
    v37 = 0;
    goto LABEL_55;
  }
  v74 = a2 | 4;
  v81[0] = a2 | 4;
  if ( !(unsigned __int8)sub_C82FA0((_QWORD *)a1, a2, v81) )
    return 0;
  v15 = sub_B50DB0(v72);
  v17 = v70;
  if ( !v15 )
  {
LABEL_22:
    v73 = 0;
    v69 = 0;
    goto LABEL_23;
  }
  v18 = *(_QWORD *)a2;
  if ( (*(_QWORD *)a2 & 0x100000) != 0 )
  {
    v73 = 0;
    goto LABEL_28;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 40LL))(a1, v70) )
    return 0;
  v81[0] = a2 | 4;
  if ( !(unsigned __int8)sub_C7F8A0(a1, v81) )
    return 0;
  v81[0] = a2 | 4;
  if ( !(unsigned __int8)sub_C82EB0((_QWORD *)a1, a2, v81) )
    return 0;
LABEL_16:
  if ( v4 )
  {
    if ( BYTE4(v8) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 40LL))(a1, v4) )
        return 0;
      v81[0] = v74;
      if ( !(unsigned __int8)sub_C7E180(a1, v8, v81) )
        return 0;
    }
    else if ( !(unsigned __int8)sub_C9FC20(a1, v4, v19, v20, v21) )
    {
      return 0;
    }
  }
LABEL_73:
  result = 1;
  if ( *(_BYTE *)(a1 + 584) )
  {
    v81[0] = v74;
    return sub_C7EAC0(a1, v81);
  }
  return result;
}

