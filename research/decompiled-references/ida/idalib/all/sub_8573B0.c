__int64 __fastcall sub_8573B0(unsigned int **a1, _DWORD *a2, _DWORD *a3, int *a4, __int64 a5, __int64 a6)
{
  unsigned int *v6; // rdi
  int v7; // eax
  unsigned int v9; // eax
  __int64 v10; // r14
  int v11; // esi
  __int64 v12; // r9
  int v13; // r12d
  int v14; // ebx
  int v16; // eax
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // r11
  __int64 v20; // rax
  unsigned int *v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // r11
  unsigned int v25; // r9d
  __int16 v26; // ax
  _DWORD *v27; // r8
  int v28; // eax
  char v29; // cl
  _DWORD *v30; // rax
  int v31; // edx
  __int64 v32; // r11
  __int64 v33; // rax
  unsigned int v34; // ebx
  int v36; // eax
  _DWORD *v37; // r10
  int v38; // r12d
  unsigned int *v39; // rdi
  unsigned int *v40; // rax
  unsigned __int64 v41; // r8
  int v42; // r9d
  _DWORD *v43; // r11
  _QWORD *v44; // rax
  int v45; // eax
  int v46; // eax
  int v47; // edx
  int v48; // eax
  int v49; // edx
  __int64 v50; // [rsp-8h] [rbp-B0h]
  __int64 v54; // [rsp+20h] [rbp-88h]
  int v55; // [rsp+2Ch] [rbp-7Ch]
  int v56; // [rsp+3Ch] [rbp-6Ch] BYREF
  unsigned int *v57; // [rsp+40h] [rbp-68h] BYREF
  _DWORD *v58; // [rsp+48h] [rbp-60h] BYREF
  _QWORD v59[11]; // [rsp+50h] [rbp-58h] BYREF

  v6 = *a1;
  v59[3] = __readfsqword(0x28u);
  v7 = *a4;
  v57 = v6;
  *a4 = v7 + 1;
  if ( v7 > 2000 )
  {
    *a3 = 135;
    return (unsigned int)-1;
  }
  v9 = *v6;
  v10 = a5;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  while ( 1 )
  {
    if ( (v9 & 0x80000000) == 0 )
    {
      v16 = 1;
      v11 = 1;
      v12 = 1;
      v17 = 0x7FFFFFFF - v13;
      goto LABEL_4;
    }
    v18 = v9;
    LOWORD(v18) = 0;
    if ( (_DWORD)v18 == -2145976320 )
      goto LABEL_132;
    if ( (unsigned int)v18 <= 0x80170000 )
      break;
    if ( (_DWORD)v18 == -2144862208 )
      goto LABEL_132;
    if ( (unsigned int)v18 <= 0x80280000 )
    {
      if ( (_DWORD)v18 == -2145452032 )
      {
        v57 = v6 + 2;
        if ( 0x7FFFFFFF - v13 < 0 )
          goto LABEL_57;
        v9 = v6[3];
        v11 = 0;
        v6 += 2;
        v12 = 0;
        goto LABEL_7;
      }
      if ( (unsigned int)v18 <= 0x801F0000 )
      {
        if ( (_DWORD)v18 != -2145648640 )
        {
          if ( (unsigned int)v18 > 0x801C0000 )
          {
            if ( (_DWORD)v18 == -2145583104 )
              goto LABEL_72;
            if ( (_DWORD)v18 != -2145517568 )
              goto LABEL_49;
            goto LABEL_125;
          }
          if ( (_DWORD)v18 != -2145779712 )
          {
            if ( (_DWORD)v18 != -2145714176 )
              goto LABEL_49;
            goto LABEL_56;
          }
          goto LABEL_88;
        }
        v49 = (unsigned __int16)v9;
        if ( (_WORD)v9 == 22 )
          return (unsigned int)-1;
        if ( (unsigned __int16)v9 == 17 )
        {
          v16 = 2;
          v11 = 1;
          v12 = 2;
          v17 = 0x7FFFFFFF - v13;
        }
        else
        {
          if ( (unsigned int)(unsigned __int16)v9 - 6 > 0x10 )
            goto LABEL_88;
          if ( (*(_BYTE *)(a6 + 230) & 8) != 0 && (unsigned __int16)v9 == 14 )
          {
            *a3 = 136;
            return (unsigned int)-1;
          }
          v17 = 0x7FFFFFFF - v13;
          v16 = 1;
          v11 = 1;
          v12 = 1;
          if ( (unsigned int)(v49 - 15) <= 1 )
            v57 = v6 + 1;
        }
LABEL_4:
        if ( v16 > v17 )
          goto LABEL_57;
LABEL_5:
        v13 += v12;
        if ( v13 > 0xFFFF )
          goto LABEL_57;
LABEL_6:
        v6 = v57;
        v9 = v57[1];
        goto LABEL_7;
      }
      if ( (_DWORD)v18 == -2145058816 )
        goto LABEL_19;
      if ( (unsigned int)v18 <= 0x80250000 )
      {
        if ( (_DWORD)v18 != -2145124352 )
          goto LABEL_49;
        v25 = (unsigned __int16)v9;
LABEL_40:
        v32 = v6[1];
        v33 = v6[2];
        v57 = v6 + 2;
        v24 = v33 | (v32 << 32);
        goto LABEL_23;
      }
      v12 = 0;
      if ( (_DWORD)v18 == -2144993280 )
        goto LABEL_126;
      if ( (_DWORD)v18 != -2144927744 )
        goto LABEL_49;
LABEL_132:
      v46 = sub_8580A0(v6 + 1, &v57, v10, a6, a4, v12);
      *a3 = v46;
      if ( v46 )
        return (unsigned int)-1;
      v6 = v57;
      v47 = 0x7FFFFFFF - v13;
      v9 = v57[1];
      if ( v9 == -2143223808 )
        goto LABEL_177;
      if ( v9 > 0x80410000 )
      {
        if ( (v9 & 0xFFFEFFFF) != 0x80420000 )
          goto LABEL_140;
LABEL_177:
        v57 += 3;
        if ( v47 < 0 )
          goto LABEL_57;
        v9 = v6[4];
        v11 = 0;
        v6 += 3;
        v12 = 0;
        goto LABEL_7;
      }
      if ( v9 == -2143551488 )
        goto LABEL_185;
      if ( v9 <= 0x803C0000 )
      {
        if ( v9 != -2143682560 )
        {
          if ( v9 > 0x803A0000 )
          {
            if ( v9 != -2143617024 )
              goto LABEL_140;
          }
          else if ( (v9 & 0xFFFEFFFF) != 0x80380000 )
          {
            goto LABEL_140;
          }
        }
        goto LABEL_185;
      }
      if ( v9 == -2143354880 )
        goto LABEL_185;
      if ( v9 <= 0x803F0000 )
      {
        if ( ((v9 + 2143485952) & 0xFFFEFFFF) != 0 )
          goto LABEL_140;
        goto LABEL_185;
      }
      if ( v9 == -2143289344 )
      {
LABEL_185:
        ++v57;
        if ( v47 < 0 )
          goto LABEL_57;
        v9 = v6[2];
        v11 = 0;
        ++v6;
        v12 = 0;
        goto LABEL_7;
      }
LABEL_140:
      if ( v47 < 0 )
        goto LABEL_57;
LABEL_90:
      v11 = 0;
      v12 = 0;
      goto LABEL_7;
    }
    if ( (_DWORD)v18 == -2144206848 )
      goto LABEL_88;
    if ( (unsigned int)v18 > 0x80320000 )
    {
      if ( (_DWORD)v18 == -2143354880 )
        goto LABEL_161;
      if ( (unsigned int)v18 > 0x803F0000 )
      {
        if ( (_DWORD)v18 != -2143158272 )
        {
          if ( (unsigned int)v18 > 0x80420000 )
          {
            if ( (_DWORD)v18 != -2143092736 )
              goto LABEL_49;
          }
          else
          {
            if ( (_DWORD)v18 == -2143289344 )
              goto LABEL_161;
            if ( (_DWORD)v18 != -2143223808 )
              goto LABEL_49;
          }
        }
        v16 = v6[2];
        a5 = v6[1];
        v57 = v6 + 2;
        if ( v16 == (_DWORD)&stru_10000 )
          goto LABEL_49;
        if ( !(_DWORD)v12 || !v16 )
        {
          if ( (_DWORD)a5 )
          {
            a5 = (unsigned int)(a5 - 1);
            v11 *= (_DWORD)a5;
          }
          else
          {
            v14 -= v11;
            v11 = 0;
          }
          if ( v16 )
          {
            v12 = (unsigned int)((v16 - 1) * v12);
            v17 = 0x7FFFFFFF - v13;
            v16 = v12;
          }
          else
          {
            v13 -= v12;
            v12 = 0;
            v17 = 0x7FFFFFFF - v13;
          }
          goto LABEL_4;
        }
        v17 = 0x7FFFFFFF - v13;
        if ( (0x7FFFFFFF - v13) / (unsigned int)v12 < v16 - 1 )
          goto LABEL_57;
        v12 = (unsigned int)((v16 - 1) * v12);
        v16 = v12;
        if ( (_DWORD)a5 )
        {
          a5 = (unsigned int)(a5 - 1);
          v11 *= (_DWORD)a5;
          goto LABEL_4;
        }
      }
      else
      {
        if ( (_DWORD)v18 == -2143944704 )
          goto LABEL_88;
        if ( (unsigned int)v18 <= 0x80360000 )
        {
          if ( (_DWORD)v18 != -2144075776 )
          {
            if ( (((_DWORD)v18 + 2144141312) & 0xFFFD0000) != 0 )
              goto LABEL_49;
            goto LABEL_87;
          }
          goto LABEL_88;
        }
        if ( (_DWORD)v18 == -2143879168 )
          goto LABEL_87;
        if ( (_DWORD)v18 != -2143420416 )
          goto LABEL_49;
LABEL_161:
        v17 = 0x7FFFFFFF - v13;
        if ( !(_DWORD)v12 )
        {
          v14 -= v11;
          if ( v17 < 0 )
            goto LABEL_57;
          v11 = 0;
          goto LABEL_6;
        }
        v16 = 0;
        v12 = 0;
      }
      v14 -= v11;
      v11 = 0;
      goto LABEL_4;
    }
    if ( (_DWORD)v18 == -2144534528 )
      goto LABEL_87;
    if ( (unsigned int)v18 > 0x802D0000 )
    {
      if ( (_DWORD)v18 == -2144403456 )
      {
        v48 = v13;
        v38 = v14;
        v34 = v48;
        goto LABEL_107;
      }
      if ( (unsigned int)v18 <= 0x802F0000 )
      {
        v45 = v13;
        v38 = v14;
        v34 = v45;
        if ( (_DWORD)v18 != -2144468992 )
          goto LABEL_49;
LABEL_107:
        v6 = sub_857120(v6, 0);
        if ( !v6 )
        {
LABEL_148:
          *a3 = 190;
          return (unsigned int)-1;
        }
        goto LABEL_108;
      }
      if ( (_DWORD)v18 != -2144337920 )
      {
        if ( (_DWORD)v18 != -2144272384 )
          goto LABEL_49;
LABEL_87:
        v6 += v6[1] + 1;
        v57 = v6;
      }
LABEL_88:
      if ( 0x7FFFFFFF - v13 < 0 )
        goto LABEL_57;
LABEL_89:
      v9 = v6[1];
      goto LABEL_90;
    }
    if ( (_DWORD)v18 != -2144731136 )
    {
      if ( (unsigned int)v18 <= 0x802A0000 )
      {
        if ( (_DWORD)v18 != -2144796672 )
          goto LABEL_49;
      }
      else
      {
        if ( (_DWORD)v18 == -2144665600 )
          goto LABEL_132;
        if ( (_DWORD)v18 != -2144600064 )
          goto LABEL_49;
      }
    }
    if ( !(unsigned int)sub_857F20(&v57, a3, a4, v10, a6, v12) )
      return (unsigned int)-1;
    if ( 0x7FFFFFFF - v13 < 0 )
    {
LABEL_57:
      *a3 = 187;
      return (unsigned int)-1;
    }
    v6 = v57;
    v11 = 0;
    v12 = 0;
    v9 = v57[1];
LABEL_7:
    ++v6;
    v14 += v11;
    v57 = v6;
  }
  if ( (_DWORD)v18 == -2146959360 )
  {
    LODWORD(v12) = (unsigned __int16)v9;
LABEL_126:
    v39 = v6 + 1;
LABEL_83:
    v57 = v39;
    v16 = sub_8585F0((unsigned int)&v57, (unsigned int)&v56, 1, (_DWORD)a3, (_DWORD)a4, v12, v10, a6);
    if ( v16 == -1 )
      return (unsigned int)-1;
    goto LABEL_84;
  }
  if ( (unsigned int)v18 > 0x80080000 )
  {
    if ( (_DWORD)v18 != -2146435072 )
    {
      if ( (unsigned int)v18 > 0x80100000 )
      {
        if ( (_DWORD)v18 != -2146107392 )
        {
          if ( (unsigned int)v18 > 0x80150000 )
            goto LABEL_49;
          if ( (_DWORD)v18 != -2146238464 )
          {
            if ( (unsigned int)v18 > 0x80130000 )
            {
              if ( (_DWORD)v18 != -2146172928 )
                goto LABEL_49;
            }
            else if ( (((_DWORD)v18 + 2146369536) & 0xFFFE0000) != 0 )
            {
              goto LABEL_49;
            }
          }
        }
        v39 = v6 + 4;
        LODWORD(v12) = 0;
        goto LABEL_83;
      }
      if ( (_DWORD)v18 == -2146566144 )
        goto LABEL_147;
      if ( (unsigned int)v18 > 0x800E0000 )
      {
        if ( (_DWORD)v18 != -2146500608 )
          goto LABEL_49;
        v39 = v6 + 1;
        LODWORD(v12) = 0;
        goto LABEL_83;
      }
      if ( (_DWORD)v18 == -2146828288 )
      {
LABEL_147:
        v57 = sub_857120(v6, 1);
        if ( !v57 )
          goto LABEL_148;
LABEL_56:
        v11 = 1;
        v12 = 1;
        if ( 0x7FFFFFFF - v13 < 1 )
          goto LABEL_57;
        goto LABEL_5;
      }
      if ( (_DWORD)v18 == -2146697216 )
        goto LABEL_56;
      if ( (_DWORD)v18 != -2146893824 )
        goto LABEL_49;
      goto LABEL_88;
    }
    v57 = sub_857120(v6 + 1, 2);
    v6 = v57;
    if ( 0x7FFFFFFF - v13 < 0 )
      goto LABEL_57;
    goto LABEL_89;
  }
  if ( (_DWORD)v18 == -2147155968 )
  {
    v57 = v6 + 1;
    goto LABEL_56;
  }
  if ( (unsigned int)v18 > 0x80050000 )
  {
    if ( (_DWORD)v18 == -2147090432 )
    {
      v57 = v6 + 3;
      if ( 0x7FFFFFFF - v13 < 0 )
        goto LABEL_57;
      v9 = v6[4];
      v11 = 0;
      v6 += 3;
      v12 = 0;
    }
    else
    {
      if ( (_DWORD)v18 != -2147024896 )
        goto LABEL_49;
      v57 = v6 + 5;
      if ( 0x7FFFFFFF - v13 < 0 )
        goto LABEL_57;
      v9 = v6[6];
      v11 = 0;
      v6 += 5;
      v12 = 0;
    }
    goto LABEL_7;
  }
  if ( (_DWORD)v18 == -2147287040 )
  {
    if ( (*(_BYTE *)(a6 + 229) & 2) != 0 || (*(_BYTE *)(a6 + 234) & 0x20) != 0 )
      goto LABEL_49;
    v25 = (unsigned __int16)v9;
    if ( (unsigned __int16)v9 <= 9u )
    {
      v24 = *(_QWORD *)(a6 + 8LL * (unsigned __int16)v9 + 88);
      goto LABEL_23;
    }
    goto LABEL_40;
  }
  if ( (unsigned int)v18 <= 0x80030000 )
  {
    if ( (_DWORD)v18 != -2147418112 )
    {
      if ( (_DWORD)v18 != -2147352576 )
        goto LABEL_49;
LABEL_125:
      LODWORD(v12) = 0;
      goto LABEL_126;
    }
LABEL_72:
    v36 = v13;
    v37 = a2;
    v38 = v14;
    v34 = v36;
LABEL_108:
    *a1 = v6;
    *v37 = v38;
    return v34;
  }
  if ( (_DWORD)v18 != -2147221504 || (*(_BYTE *)(a6 + 229) & 2) != 0 )
    goto LABEL_49;
LABEL_19:
  v19 = v6[2];
  v20 = v6[3];
  v21 = v6 + 3;
  v22 = *(v21 - 2);
  v57 = v21;
  v55 = v18;
  v54 = v20 | (v19 << 32);
  v23 = sub_864820(*(_QWORD *)(a6 + 56) + v54, v22, a6, v18, a5, v12);
  v24 = v54;
  if ( !v23 )
  {
    *a3 = 115;
    *(_QWORD *)(a6 + 168) = v54;
    return (unsigned int)-1;
  }
  v25 = *(_DWORD *)(v23 + 8);
  v26 = *(_WORD *)(v23 + 14);
  if ( v55 != -2145058816 && (v26 < 0 || (*(_BYTE *)(a6 + 234) & 0x20) != 0) )
    goto LABEL_49;
LABEL_23:
  if ( *(_DWORD *)(a6 + 236) < v25 )
  {
    *(_QWORD *)(a6 + 168) = v24;
    *a3 = 115;
    return (unsigned int)-1;
  }
  if ( !v25 )
    goto LABEL_49;
  v27 = *(_DWORD **)(a6 + 248);
  v28 = *v27;
  v58 = v27;
  if ( v28 == 0x80000000 )
    goto LABEL_93;
  v29 = 0;
  while ( 1 )
  {
    HIWORD(v31) = HIWORD(v28);
    LOWORD(v31) = 0;
    if ( v31 == -2147155968 )
    {
      v30 = v27 + 1;
      goto LABEL_29;
    }
    if ( (v25 | 0x80080000) == v28 )
      break;
    v30 = v27;
LABEL_29:
    v27 = v30 + 1;
    v28 = v30[1];
    v29 = 1;
    if ( v28 == 0x80000000 )
      goto LABEL_92;
  }
  if ( !v29 )
    goto LABEL_93;
LABEL_92:
  v58 = v27;
LABEL_93:
  v40 = sub_857120(v27 + 1, 2);
  if ( !v40 )
    goto LABEL_148;
  if ( v41 < (unsigned __int64)v57 && v57 < v40 )
    goto LABEL_49;
  if ( !v10 )
  {
LABEL_101:
    v59[1] = v41;
    v59[0] = v10;
    v58 = v43;
    v16 = sub_8585F0((unsigned int)&v58, (unsigned int)&v56, 0, (_DWORD)a3, (_DWORD)a4, v42, (__int64)v59, a6);
    a5 = v50;
    if ( v16 == -1 )
    {
      if ( !*a3 )
        goto LABEL_49;
      return (unsigned int)-1;
    }
LABEL_84:
    v11 = v56;
    v12 = (unsigned int)v16;
    v17 = 0x7FFFFFFF - v13;
    goto LABEL_4;
  }
  v44 = (_QWORD *)v10;
  while ( v44[1] != v41 )
  {
    v44 = (_QWORD *)*v44;
    if ( !v44 )
      goto LABEL_101;
  }
LABEL_49:
  *a3 = 125;
  return (unsigned int)-1;
}
