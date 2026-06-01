__int64 __fastcall sub_737610(__int64 a1, unsigned __int8 a2)
{
  char *v2; // rbp
  char *v3; // rdx
  char v4; // cl
  char v5; // cl
  char *v6; // rsi
  char v7; // dl
  char v8; // bp
  __int64 v10; // rdx
  char *v11; // rcx
  int v12; // r15d
  char *v13; // rbp
  int v14; // eax
  char *v15; // rax
  char *v16; // rdx
  __int64 v17; // rax
  char *v18; // rdx
  char *v19; // rdx
  char *v20; // rax
  int v21; // esi
  char *v22; // rdx
  char v23; // dl
  char v24; // dl
  char *v25; // rcx
  __int64 v26; // rsi
  char v27; // al
  const unsigned __int16 **v28; // rax
  const unsigned __int16 **v29; // rax
  char v30; // al
  char *v31; // rdx
  char v32; // dl
  __int64 v33; // rdx
  char v34; // dl
  char v35; // dl
  char *v36; // rcx
  char v37; // al
  int v38; // ecx
  int v39; // esi
  int v41; // [rsp+1Ch] [rbp-1CCh]
  char *v42; // [rsp+38h] [rbp-1B0h]
  char *v43; // [rsp+38h] [rbp-1B0h]
  char *v44; // [rsp+38h] [rbp-1B0h]
  char *v45; // [rsp+38h] [rbp-1B0h]
  char *v46; // [rsp+38h] [rbp-1B0h]
  char v47; // [rsp+40h] [rbp-1A8h]
  __int64 v49; // [rsp+48h] [rbp-1A0h]
  unsigned int v50; // [rsp+58h] [rbp-190h] BYREF
  int v51; // [rsp+5Ch] [rbp-18Ch] BYREF
  int v52; // [rsp+60h] [rbp-188h] BYREF
  int v53; // [rsp+64h] [rbp-184h] BYREF
  int v54; // [rsp+68h] [rbp-180h] BYREF
  unsigned int v55; // [rsp+6Ch] [rbp-17Ch] BYREF
  char *v56; // [rsp+70h] [rbp-178h] BYREF
  int v57; // [rsp+78h] [rbp-170h]
  char v58; // [rsp+80h] [rbp-168h] BYREF
  unsigned __int64 v59; // [rsp+1A8h] [rbp-40h]

  v59 = __readfsqword(0x28u);
  v50 = 0;
  v51 = 0;
LABEL_2:
  v2 = qword_2CAA5C0;
  if ( *qword_2CAA5C0 == 64 )
  {
    ++qword_2CAA5C0;
    if ( !v2[1] )
      goto LABEL_222;
    if ( (dword_2CAA5CC & 0x80u) == 0 )
    {
      sub_750CC0(&v50);
      sub_74F560(&v55, "__linkproc__ ", 13);
    }
    else
    {
      sub_74F810(&v55, 4209210, 3);
    }
    sub_7506B0(&v50, &v55);
    v2 = qword_2CAA5C0;
    dword_2CAA5C8 |= 0xA0000u;
    if ( a2 )
    {
      if ( *qword_2CAA5C0 != 37 )
        goto LABEL_48;
LABEL_50:
      if ( a2 == 0xFF )
        goto LABEL_222;
      goto LABEL_51;
    }
    if ( *qword_2CAA5C0 != 37 )
    {
      sub_74F120(&v55, 4);
      goto LABEL_6;
    }
  }
  else
  {
    if ( !(_WORD)v50 )
    {
      if ( *qword_2CAA5C0 != 37 )
      {
        sub_74F120(&v55, 2);
        if ( !a2 )
        {
LABEL_6:
          if ( !*(qword_2CAA5C0 - 1) && !(_WORD)v50 )
          {
            if ( (dword_2CAA5CC & 8) != 0 )
              return v55;
LABEL_222:
            sub_74E200();
          }
        }
LABEL_8:
        sub_7506B0(&v50, &v55);
        if ( byte_2CAA5A1 )
          return v50;
        v3 = qword_2CAA5C0;
        v4 = *(qword_2CAA5C0 - 1);
        if ( !v4 )
        {
          if ( a2 == 0xFF )
            goto LABEL_36;
          if ( dword_2CAA5C8 == 536871040 && *v2 == 95 && (unsigned __int8)(v2[1] - 48) <= 9u )
          {
            v35 = v2[2];
            v36 = v2 + 2;
            if ( v35 )
            {
              while ( (unsigned __int8)(v35 - 48) <= 9u )
              {
                v35 = *++v36;
                if ( !v35 )
                  goto LABEL_178;
              }
            }
            else
            {
LABEL_178:
              dword_2CAA5C8 = 536871055;
            }
          }
          return v50;
        }
        if ( v4 == 36 )
          return v50;
        if ( v4 != 64 )
          goto LABEL_36;
        if ( a1 )
        {
          *(_DWORD *)a1 = v55;
          v3 = qword_2CAA5C0;
        }
        v5 = *v3;
        goto LABEL_15;
      }
      goto LABEL_50;
    }
    sub_750270(&v50, 14906);
    v2 = qword_2CAA5C0;
    if ( a2 )
    {
      if ( *qword_2CAA5C0 != 37 )
      {
LABEL_48:
        sub_74F120(&v55, 2);
        goto LABEL_8;
      }
      goto LABEL_50;
    }
    dword_2CAA5C8 |= 0x80u;
    if ( *qword_2CAA5C0 != 37 )
    {
      sub_74F120(&v55, 2);
      goto LABEL_6;
    }
  }
LABEL_51:
  qword_2CAA5C0 = v2 + 1;
  sub_74F120(&v55, 2);
  sub_7506B0(&v50, &v55);
  if ( byte_2CAA5A1 )
  {
    sub_750840(&v50);
    sub_74F860(&v50, 60);
    return v50;
  }
  if ( a1 )
    *(_DWORD *)a1 = v55;
  if ( *(qword_2CAA5C0 - 1) != 36 )
    goto LABEL_36;
  sub_74F860(&v50, 60);
  v56 = &v58;
  v57 = 2359296;
  v49 = unk_2CAA5D0;
  v41 = 0;
  unk_2CAA5D0 = &v56;
  v10 = a2 ^ 1u;
  v47 = a2 ^ 1;
  while ( 2 )
  {
    v11 = qword_2CAA5C0;
    v52 = 0;
    v53 = 0;
    v12 = (unsigned __int8)*qword_2CAA5C0;
    if ( !(_BYTE)v12 )
    {
      byte_2CAA5A1 = 1;
      goto LABEL_74;
    }
    while ( 1 )
    {
      v13 = v11 + 1;
      qword_2CAA5C0 = v11 + 1;
      if ( !v41 )
      {
        if ( (_BYTE)v12 == 37 )
        {
          if ( *(v11 - 1) == 36 && v11[1] != 36 )
            goto LABEL_111;
          v44 = v11;
          v28 = __ctype_b_loc();
          v11 = v44;
          if ( (*((_BYTE *)*v28 + 75) & 2) != 0 )
            goto LABEL_125;
        }
        else if ( (_BYTE)v12 == 105 )
        {
          v27 = v11[1];
          if ( (unsigned __int8)(v27 - 36) <= 1u || *(v11 - 1) != 36 || (unsigned __int8)(v27 - 48) <= 9u )
            goto LABEL_125;
        }
        else if ( (unsigned int)(char)v12 <= 0x7F )
        {
          if ( (unsigned int)((char)v12 - 48) <= 9 )
          {
LABEL_64:
            v41 = 0x80000000;
            if ( (_BYTE)v12 != 116 )
              goto LABEL_65;
            goto LABEL_72;
          }
          v46 = v11;
          v29 = __ctype_b_loc();
          v11 = v46;
          if ( ((*v29)[(char)v12] & 0x200) != 0 )
          {
            if ( (unsigned __int8)(v12 - 103) > 0xDu )
              goto LABEL_125;
            v33 = -8258;
            if ( _bittest64(&v33, (unsigned int)(v12 - 103)) )
              goto LABEL_125;
          }
          else if ( (_BYTE)v12 == 67 )
          {
            v30 = v46[1];
            if ( v30 == 115 || v30 == 105 )
              goto LABEL_125;
          }
        }
        v42 = v11;
        v14 = sub_736AE0(0);
        v11 = v42;
        v51 = v14;
        if ( !byte_2CAA5A1 )
          goto LABEL_131;
        byte_2CAA5A1 = 0;
LABEL_63:
        qword_2CAA5C0 = v13;
        goto LABEL_64;
      }
      if ( v41 >= 0 )
        break;
      if ( (_BYTE)v12 != 116 )
        goto LABEL_65;
LABEL_72:
      v17 = v11[1];
      if ( (unsigned int)v17 > 0x7F )
        goto LABEL_73;
      if ( (unsigned int)(v17 - 48) > 9 )
      {
        v43 = v11;
        if ( ((*__ctype_b_loc())[v17] & 0x200) == 0 )
          goto LABEL_73;
        v11 = v43;
        qword_2CAA5C0 = v43 + 2;
        v21 = v43[1] - 87;
      }
      else
      {
        qword_2CAA5C0 = v11 + 2;
        v21 = v11[1] - 48;
      }
      v26 = (unsigned int)(v21 - 1);
      if ( byte_2CA2E58
        && *(unsigned __int16 *)(unk_2CAA5D0 + 8LL) <= (int)v26
        && qword_2CA2E60 - (__int64)qword_2CAA5C0 <= 119 )
      {
LABEL_73:
        sub_750840(&v50);
        sub_74F860(&v50, 62);
        byte_2CAA5A1 = 1;
LABEL_74:
        unk_2CAA5D0 = v49;
        return v50;
      }
      v51 = *(_DWORD *)sub_752810(unk_2CAA5D0, v26, v10, v11);
LABEL_66:
      v15 = qword_2CAA5C0;
      if ( *qword_2CAA5C0 == 36 )
      {
        ++qword_2CAA5C0;
        LOBYTE(v12) = v15[1];
        if ( !(_BYTE)v12 )
          goto LABEL_73;
        qword_2CAA5C0 = v15 + 2;
        if ( (unsigned __int8)(v12 - 36) <= 1u )
          goto LABEL_73;
        if ( (_BYTE)v12 == 101 )
        {
          if ( v15[2] == 38 )
          {
            qword_2CAA5C0 = v15 + 3;
            sub_752720(unk_2CAA5D0, &v51);
          }
          sub_752830(&v51);
          sub_7506B0(&v52, &v51);
          v22 = qword_2CAA5C0;
          if ( *qword_2CAA5C0 == 64 )
          {
            ++qword_2CAA5C0;
            sub_74F860(&v52, 38);
            v31 = qword_2CAA5C0;
            if ( *qword_2CAA5C0 != 37 )
              goto LABEL_84;
            v20 = ++qword_2CAA5C0;
            v32 = v31[1];
            if ( !v32 )
              goto LABEL_202;
            LOBYTE(v12) = 105;
            if ( v32 == 36 )
              goto LABEL_87;
          }
          else
          {
            if ( *qword_2CAA5C0 != 37 )
              goto LABEL_36;
            v20 = ++qword_2CAA5C0;
            v23 = v22[1];
            if ( !v23 )
            {
LABEL_202:
              sub_74F860(&v52, 62);
LABEL_96:
              v50 = sub_750E60(&v53, &v50);
              sub_7506B0(&v50, &v52);
              BYTE2(v50) |= 2u;
              goto LABEL_74;
            }
            if ( v23 == 36 )
              goto LABEL_87;
          }
        }
        else
        {
          sub_752830(&v51);
          sub_7506B0(&v52, &v51);
          v18 = qword_2CAA5C0;
          if ( *qword_2CAA5C0 == 37 )
          {
            v20 = ++qword_2CAA5C0;
            v34 = v18[1];
            if ( !v34 )
              goto LABEL_202;
            if ( v34 == 36 )
              goto LABEL_87;
          }
          if ( (_BYTE)v12 == 116 )
            goto LABEL_111;
LABEL_80:
          if ( (_BYTE)v12 == 109 )
          {
            v55 = sub_737610(0, 0xFFFFFFFFLL);
            sub_7506B0(&v52, &v55);
            if ( *(qword_2CAA5C0 - 1) != 36 )
              goto LABEL_36;
            if ( byte_2CAA5A1 )
              return v50;
            sub_750270(&v52, 14906);
            goto LABEL_84;
          }
          if ( (unsigned __int8)v12 > 0x6Du )
            goto LABEL_36;
        }
        if ( (((_BYTE)v12 - 103) & 0xFD) != 0 )
          goto LABEL_36;
        goto LABEL_84;
      }
      sub_7506B0(&v52, &v51);
      v16 = qword_2CAA5C0;
      if ( *qword_2CAA5C0 != 37 )
      {
        v50 = sub_750E60(&v53, &v50);
        sub_7506B0(&v50, &v52);
        goto LABEL_69;
      }
      v20 = ++qword_2CAA5C0;
      v24 = v16[1];
      if ( !v24 )
        goto LABEL_202;
      if ( v24 != 36 )
        goto LABEL_111;
LABEL_87:
      qword_2CAA5C0 = v20 + 1;
      sub_74F860(&v52, 62);
      v54 = sub_736A40();
      if ( byte_2CAA5A1 )
        goto LABEL_73;
      if ( *qword_2CAA5C0 != 113 )
        goto LABEL_73;
      v51 = sub_736820(v47);
      if ( byte_2CAA5A1 )
        goto LABEL_73;
      if ( (dword_2CAA5CC & 8) == 0 )
      {
        v53 = sub_750E60(&v51, &v53);
        if ( (dword_2CAA5C8 & 0x8000000) != 0 && (dword_2CAA5CC & 0x120) == 0 )
        {
          v55 = sub_74E340(2);
          v53 = sub_750E60(&v55, &v53);
        }
      }
      v51 = sub_737310(v47);
      if ( (dword_2CAA5CC & 8) == 0 )
      {
        v55 = sub_750E60(&v51, &v54);
        sub_7506B0(&v52, &v55);
      }
      if ( byte_2CAA5A1 )
        goto LABEL_96;
      v11 = qword_2CAA5C0;
      v12 = (unsigned __int8)*qword_2CAA5C0;
      if ( (_BYTE)v12 == 36 )
      {
        ++qword_2CAA5C0;
        v51 = sub_736AE0(0);
        if ( byte_2CAA5A1 )
          goto LABEL_96;
        if ( (dword_2CAA5CC & 8) == 0 )
        {
          if ( (_WORD)v51 )
            sub_74F860(&v51, 32);
          v53 = sub_750E60(&v51, &v53);
        }
        v11 = qword_2CAA5C0;
        v12 = (unsigned __int8)*qword_2CAA5C0;
      }
      if ( !(_BYTE)v12 )
        goto LABEL_96;
    }
    v45 = v11;
    v51 = sub_736AE0(0);
    if ( byte_2CAA5A1 )
      goto LABEL_36;
    v11 = v45;
LABEL_131:
    v10 = (unsigned __int8)*qword_2CAA5C0;
    if ( (_BYTE)v10 == 36 )
      goto LABEL_134;
    if ( (_BYTE)v10 != 37 )
    {
      if ( v41 )
        goto LABEL_36;
      goto LABEL_63;
    }
    if ( (_BYTE)v12 == 105 )
    {
      if ( qword_2CAA5C0[1] != 36 && (qword_2CAA5C0[1] & 0xBF) != 0 )
      {
        ++qword_2CAA5C0;
        sub_752830(&v51);
        sub_7506B0(&v52, &v51);
        if ( *(qword_2CAA5C0 - 1) != 36 )
          goto LABEL_36;
        if ( byte_2CAA5A1 )
          return v50;
        goto LABEL_84;
      }
      if ( v41 )
        goto LABEL_36;
LABEL_125:
      v41 = 0x80000000;
LABEL_65:
      qword_2CAA5C0 = v11;
      v51 = sub_736AE0(0);
      if ( byte_2CAA5A1 )
        goto LABEL_73;
      goto LABEL_66;
    }
LABEL_134:
    ++qword_2CAA5C0;
    if ( (_BYTE)v12 == 116 )
    {
      sub_7506B0(&v52, &v51);
      goto LABEL_111;
    }
    sub_752830(&v51);
    sub_7506B0(&v52, &v51);
    if ( *(qword_2CAA5C0 - 1) != 36 )
      goto LABEL_36;
    if ( byte_2CAA5A1 )
      return v50;
    if ( (_BYTE)v12 != 105 )
    {
      sub_74F860(&v52, 38);
      goto LABEL_80;
    }
LABEL_84:
    sub_74F120(&v55, 3);
    sub_7506B0(&v52, &v55);
    if ( byte_2CAA5A1 )
      return v50;
    v19 = qword_2CAA5C0;
    if ( *qword_2CAA5C0 != 37 )
      goto LABEL_193;
    v20 = ++qword_2CAA5C0;
    if ( v19[1] == 36 )
      goto LABEL_87;
    ++v19;
LABEL_193:
    v37 = *(v19 - 1);
    if ( v37 == 37 )
    {
LABEL_111:
      v50 = sub_750E60(&v53, &v50);
      sub_7506B0(&v50, &v52);
      if ( *(qword_2CAA5C0 - 1) == 36 )
      {
LABEL_69:
        v55 = sub_750E60(&v53, &v52);
        sub_752720(unk_2CAA5D0, &v55);
        sub_750750(&v50);
        ++v41;
        continue;
      }
      unk_2CAA5D0 = v49;
      if ( *(qword_2CAA5C0 - 1) != 37 )
        goto LABEL_36;
      sub_74F860(&v50, 62);
      v25 = qword_2CAA5C0;
      if ( *qword_2CAA5C0 != 64 )
      {
        if ( *qword_2CAA5C0 )
          goto LABEL_36;
        return v50;
      }
      v3 = ++qword_2CAA5C0;
      v5 = v25[1];
LABEL_15:
      if ( !v5 )
      {
        if ( !a1 )
          return v50;
        sub_74F860(&v50, 93);
        goto LABEL_155;
      }
      if ( (unsigned int)v5 <= 0x7F )
      {
        if ( (unsigned int)(v5 - 48) > 9 )
        {
LABEL_34:
          if ( v5 == 36 )
            goto LABEL_35;
        }
        else
        {
          v6 = v3 + 1;
          qword_2CAA5C0 = v3 + 1;
          v7 = *v3;
          v8 = v7 - 47;
          if ( (unsigned __int8)(v7 - 48) > 6u )
            goto LABEL_36;
          if ( (v8 & 2) != 0 && a1 )
          {
            *(_BYTE *)(a1 + 2) |= 1u;
            v6 = qword_2CAA5C0;
          }
          v5 = *v6;
          if ( (v8 & 5) == 0 )
            goto LABEL_33;
          if ( (v8 & 4) != 0 )
          {
            if ( v5 )
            {
              if ( !a1 )
                goto LABEL_36;
              if ( !(_WORD)v50 )
                goto LABEL_36;
              qword_2CAA5C0 = v6 + 1;
              if ( *v6 != 36 )
                goto LABEL_36;
              qword_2CAA5C0 = v6 + 2;
              if ( v6[1] != 118 )
                goto LABEL_36;
              qword_2CAA5C0 = v6 + 3;
              if ( v6[2] != 115 )
                goto LABEL_36;
              qword_2CAA5C0 = v6 + 4;
              v38 = 110;
              if ( (v8 & 1) != 0 )
                v38 = 102;
              if ( v6[3] != v38 || v6[4] )
                goto LABEL_36;
              v39 = 1;
              if ( (v8 & 2) != 0 )
                v39 = 6;
              dword_2CAA5C8 |= v39 | 0x80000;
              sub_74F560(&v55, "::{thunk", 8);
              sub_7506B0(&v50, &v55);
              if ( (dword_2CAA5CC & 8) == 0 )
                sub_74F920(&v50, (2 * v8) & 2);
              sub_74F860(&v50, 125);
              if ( (dword_2CAA5CC & 0x120) == 0 && (*(_BYTE *)(a1 + 2) & 1) != 0 )
              {
                v55 = sub_74E340(3);
                return (unsigned int)sub_750E60(&v55, &v50);
              }
              return v50;
            }
LABEL_25:
            if ( a1 )
              sub_74F860(&v50, 93);
            if ( (dword_2CAA5CC & 8) == 0 )
            {
              if ( (v8 & 1) != 0 )
              {
                sub_74F560(&v55, ",`far'", 6);
                sub_7506B0(&v50, &v55);
              }
              if ( (v8 & 4) != 0 )
              {
                sub_74F560(&v55, ",`RTTI'", 7);
                sub_7506B0(&v50, &v55);
              }
            }
            v5 = *qword_2CAA5C0;
LABEL_33:
            if ( v5 )
              goto LABEL_34;
            if ( !a1 )
              return v50;
LABEL_155:
            sub_74F560(&v55, "`__vtable__'[", 13);
            return (unsigned int)sub_750E60(&v55, &v50);
          }
          if ( !v5 )
            goto LABEL_25;
          if ( v5 == 36 )
          {
LABEL_35:
            if ( !a1 )
              goto LABEL_36;
            return v50;
          }
        }
      }
      goto LABEL_2;
    }
    break;
  }
  if ( v37 == 36 )
  {
    if ( v41 < 0 && *(_WORD *)v19 == 25959 && v19[2] == 36 )
      qword_2CAA5C0 = v19 + 3;
    goto LABEL_111;
  }
LABEL_36:
  byte_2CAA5A1 = 1;
  return v50;
}

