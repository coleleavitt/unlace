__int64 __fastcall sub_18A0470(
        __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __int64 a8,
        __int64 a9,
        char a10,
        unsigned __int8 a11)
{
  unsigned __int64 v11; // r15
  __int64 v15; // r12
  __int64 v16; // r9
  __int64 v17; // rbp
  unsigned __int64 v18; // rbx
  char v19; // dl
  unsigned __int64 *v20; // rdi
  __int64 v21; // r10
  __int64 v22; // r8
  unsigned __int64 *v23; // rcx
  unsigned __int64 *v24; // rax
  unsigned __int64 *v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int64 v32; // r14
  __int64 v33; // rax
  unsigned __int64 v34; // rbp
  __int64 v35; // r14
  char v36; // dl
  unsigned __int64 *v37; // rdi
  __int64 v38; // r10
  unsigned __int64 *v39; // rcx
  unsigned __int64 *v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rdx
  unsigned __int64 v43; // rax
  __int64 v44; // rdx
  __int64 result; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // r14
  __int64 v49; // rdx
  unsigned __int64 v50; // rdx
  __int64 v51; // r14
  char v52; // dl
  __int64 v53; // rcx
  __int64 i; // r14
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  unsigned __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v65; // [rsp+10h] [rbp-58h]
  __int64 v66; // [rsp+10h] [rbp-58h]
  unsigned __int64 v67; // [rsp+10h] [rbp-58h]
  __int64 v68[8]; // [rsp+28h] [rbp-40h] BYREF

  v11 = a2;
  v15 = a8;
  v16 = sub_B8E970(a8 + 48);
  if ( v16 )
  {
    while ( (*(_BYTE *)(v16 + 28) & 0x7F) != 0x12 || (*(_BYTE *)(v16 + 58) & 2) == 0 )
    {
      v16 = *(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v16 )
        goto LABEL_38;
    }
    v65 = a5;
    v17 = a4;
    v18 = v16;
LABEL_7:
    v19 = *(_BYTE *)(v17 + 20);
    a2 = *(_QWORD *)(v18 + 40);
    if ( !v19 )
      goto LABEL_128;
    v20 = *(unsigned __int64 **)v17;
    v21 = *(unsigned int *)(v17 + 12);
    v22 = 8 * v21;
    v23 = (unsigned __int64 *)(*(_QWORD *)v17 + 8 * v21);
    if ( *(unsigned __int64 **)v17 != v23 )
    {
      v24 = *(unsigned __int64 **)v17;
      if ( a2 == *v20 )
      {
LABEL_133:
        v19 = 0;
        goto LABEL_15;
      }
      while ( v23 != ++v24 )
      {
        if ( a2 == *v24 )
          goto LABEL_133;
      }
    }
    if ( (unsigned int)v21 < *(_DWORD *)(v17 + 8) )
    {
      *(_DWORD *)(v17 + 12) = v21 + 1;
      *v23 = a2;
      v20 = *(unsigned __int64 **)v17;
      v24 = (unsigned __int64 *)(*(_QWORD *)v17 + v22);
    }
    else
    {
LABEL_128:
      v24 = (unsigned __int64 *)sub_2236760(v17, a2);
      v20 = *(unsigned __int64 **)v17;
      if ( !*(_BYTE *)(v17 + 20) )
      {
        v25 = &v20[*(unsigned int *)(v17 + 8)];
        goto LABEL_16;
      }
    }
LABEL_15:
    v25 = &v20[*(unsigned int *)(v17 + 12)];
LABEL_16:
    if ( v25 != v24 )
    {
      a2 = *v24 + 2;
      if ( a2 <= 1 )
      {
        do
          ++v24;
        while ( v25 != v24 && *v24 >= 0xFFFFFFFFFFFFFFFELL );
      }
    }
    if ( !v19 )
      goto LABEL_33;
    a2 = *(_QWORD *)(v18 + 40);
    if ( (*(_BYTE *)(v18 + 58) & 8) == 0 )
    {
      if ( *(_BYTE *)(v11 + 20) )
      {
        v26 = *(_QWORD **)v11;
        v27 = *(_QWORD *)v11 + 8LL * *(unsigned int *)(v11 + 12);
        if ( *(_QWORD *)v11 == v27 )
        {
LABEL_138:
          if ( a10 )
          {
            a2 = a6;
            sub_18A00C0(*a1, a6, v18, 0x1D2Cu, 0, v16);
          }
LABEL_33:
          while ( 1 )
          {
            v18 = *(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            if ( !v18 )
              break;
            while ( (*(_BYTE *)(v18 + 28) & 0x7F) == 0x12 )
            {
              if ( (*(_BYTE *)(v18 + 58) & 2) != 0 )
                goto LABEL_7;
              v18 = *(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              if ( !v18 )
                goto LABEL_37;
            }
          }
LABEL_37:
          LODWORD(a4) = v17;
          a5 = v65;
          goto LABEL_38;
        }
        while ( a2 != *v26 )
        {
          if ( (_QWORD *)v27 == ++v26 )
            goto LABEL_138;
        }
      }
      else
      {
        if ( !sub_2236570(v11, a2) )
          goto LABEL_138;
        a2 = *(_QWORD *)(v18 + 40);
      }
    }
    v28 = sub_BAA9D0(a6, a2, 1, 0, v22, v16);
    if ( v28 && (*(_BYTE *)(v28 + 58) & 0x10) == 0 )
    {
      if ( a11 )
      {
        if ( (*(_BYTE *)(v18 + 58) & 8) == 0 )
        {
          a2 = v28;
          sub_189ED00(a1, v28, v18, (*(_BYTE *)(a8 + 28) & 0x7F) == 19, a7);
        }
      }
      else
      {
        a2 = v28;
        sub_189F0C0(a1, v28, v18, (*(_BYTE *)(a8 + 28) & 0x7F) == 19, a7);
      }
    }
    goto LABEL_33;
  }
LABEL_38:
  v32 = sub_B8E970(a8 + 48);
  if ( !v32 )
    goto LABEL_75;
  while ( (*(_BYTE *)(v32 + 28) & 0x7F) != 0x12 || (*(_BYTE *)(v32 + 58) & 2) != 0 )
  {
    v32 = *(_QWORD *)(v32 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v32 )
      goto LABEL_75;
  }
  v33 = a5;
  v34 = v32;
  v35 = v33;
LABEL_44:
  v36 = *(_BYTE *)(v35 + 20);
  a2 = *(_QWORD *)(v34 + 40);
  if ( !v36 )
    goto LABEL_130;
  v37 = *(unsigned __int64 **)v35;
  v38 = *(unsigned int *)(v35 + 12);
  v30 = 8 * v38;
  v39 = (unsigned __int64 *)(*(_QWORD *)v35 + 8 * v38);
  if ( *(unsigned __int64 **)v35 != v39 )
  {
    v40 = *(unsigned __int64 **)v35;
    if ( a2 == *v37 )
    {
LABEL_132:
      v36 = 0;
      goto LABEL_52;
    }
    while ( v39 != ++v40 )
    {
      if ( a2 == *v40 )
        goto LABEL_132;
    }
  }
  if ( (unsigned int)v38 < *(_DWORD *)(v35 + 8) )
  {
    *(_DWORD *)(v35 + 12) = v38 + 1;
    *v39 = a2;
    v37 = *(unsigned __int64 **)v35;
    v40 = (unsigned __int64 *)(*(_QWORD *)v35 + v30);
  }
  else
  {
LABEL_130:
    v40 = (unsigned __int64 *)sub_2236760(v35, a2);
    v37 = *(unsigned __int64 **)v35;
    if ( !*(_BYTE *)(v35 + 20) )
    {
      v29 = (unsigned __int64)&v37[*(unsigned int *)(v35 + 8)];
      goto LABEL_53;
    }
  }
LABEL_52:
  v29 = (unsigned __int64)&v37[*(unsigned int *)(v35 + 12)];
LABEL_53:
  if ( (unsigned __int64 *)v29 != v40 )
  {
    a2 = *v40 + 2;
    if ( a2 <= 1 )
    {
      do
        ++v40;
      while ( (unsigned __int64 *)v29 != v40 && *v40 >= 0xFFFFFFFFFFFFFFFELL );
    }
  }
  if ( !v36 )
    goto LABEL_70;
  a2 = *(_QWORD *)(v34 + 40);
  if ( (*(_BYTE *)(v34 + 58) & 8) != 0 )
    goto LABEL_65;
  if ( !*(_BYTE *)(a3 + 20) )
  {
    if ( !sub_2236570(a3, a2) )
      goto LABEL_134;
    a2 = *(_QWORD *)(v34 + 40);
LABEL_65:
    v43 = sub_BAA9D0(a6, a2, 0, 0, v30, v31);
    if ( v43 && (*(_BYTE *)(v43 + 58) & 0x10) == 0 )
    {
      if ( a11 )
      {
        if ( (*(_BYTE *)(v34 + 58) & 8) == 0 )
        {
          a2 = v43;
          sub_189ED00(a1, v43, v34, (*(_BYTE *)(a8 + 28) & 0x7F) == 19, a7);
        }
      }
      else
      {
        a2 = v43;
        sub_189F0C0(a1, v43, v34, (*(_BYTE *)(a8 + 28) & 0x7F) == 19, a7);
      }
    }
    goto LABEL_70;
  }
  v41 = *(_QWORD **)a3;
  v42 = *(_QWORD *)a3 + 8LL * *(unsigned int *)(a3 + 12);
  if ( *(_QWORD *)a3 != v42 )
  {
    while ( a2 != *v41 )
    {
      if ( (_QWORD *)v42 == ++v41 )
        goto LABEL_134;
    }
    goto LABEL_65;
  }
LABEL_134:
  if ( a10 )
  {
    a2 = a6;
    sub_18A00C0(*a1, a6, v34, 0x1D2Cu, 0, v31);
  }
LABEL_70:
  while ( 1 )
  {
    v34 = *(_QWORD *)(v34 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v34 )
      break;
    while ( (*(_BYTE *)(v34 + 28) & 0x7F) == 0x12 )
    {
      if ( (*(_BYTE *)(v34 + 58) & 2) == 0 )
        goto LABEL_44;
      v34 = *(_QWORD *)(v34 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v34 )
        goto LABEL_74;
    }
  }
LABEL_74:
  LODWORD(a5) = v35;
LABEL_75:
  v44 = *(unsigned __int8 *)(a8 + 28);
  result = *(_BYTE *)(a8 + 28) & 0x7F;
  if ( (_BYTE)result != 19 )
    goto LABEL_84;
  v46 = *(_QWORD *)(a8 + 104);
  if ( !v46 )
  {
    a2 = *(_QWORD *)(a8 + 96);
    sub_A79820((__int64 *)(a2 + 88), a2, v44, v29, v30, v31);
    v29 = *(_QWORD *)(a8 + 104) & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v29 )
    {
      if ( *(_QWORD *)(a8 + 104)
        || (a2 = *(_QWORD *)(a8 + 96),
            sub_A79820((__int64 *)(a2 + 88), a2, v62, 0, v30, v31),
            (*(_QWORD *)(a8 + 104) & 0xFFFFFFFFFFFFFFF8LL) == 0) )
      {
LABEL_147:
        LOBYTE(v44) = *(_BYTE *)(a8 + 28);
        goto LABEL_83;
      }
      v66 = 0;
      v47 = *(_QWORD *)((*(_QWORD *)(a8 + 104) & 0xFFFFFFFFFFFFFFF8LL) + 8);
LABEL_79:
      if ( v66 != v47 )
      {
        v48 = v47;
        do
        {
          a2 = v11;
          v48 += 8;
          sub_18A0470((_DWORD)a1, v11, a3, a4, a5, a6, *(_QWORD *)(v48 - 8), a9, 0, a11);
        }
        while ( v66 != v48 );
        v15 = a8;
        LOBYTE(v44) = *(_BYTE *)(a8 + 28);
        goto LABEL_83;
      }
      goto LABEL_147;
    }
LABEL_78:
    v47 = *(_QWORD *)(v29 + 8);
    v66 = v47 + 8LL * *(unsigned int *)(v29 + 16);
    goto LABEL_79;
  }
  v29 = v46 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v46 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    goto LABEL_78;
LABEL_83:
  result = v44 & 0x7F;
LABEL_84:
  if ( (_BYTE)result != 20 )
    return result;
  result = *(_QWORD *)(v15 + 120);
  v49 = result;
  if ( a11 )
  {
    if ( !result )
    {
      a2 = *(_QWORD *)(v15 + 96);
      sub_A794E0((__int64 *)(a2 + 88), a2, result, v29, v30, v31);
      v49 = *(_QWORD *)(v15 + 120);
    }
    v60 = v49 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v60 )
    {
      if ( (*(_BYTE *)(v60 + 72) & 1) != 0 )
      {
        sub_BA8900(v15);
        v60 = *(_QWORD *)(v15 + 120) & 0xFFFFFFFFFFFFFFF8LL;
      }
      v61 = *(_QWORD *)(v60 + 56);
    }
    else
    {
      v61 = 0;
    }
    for ( v68[0] = v61; ; v68[0] = *(_QWORD *)(v68[0] + 128) )
    {
      sub_1894010(v68);
      if ( !v68[0] )
        break;
      a2 = v11;
      sub_18A0470((_DWORD)a1, v11, a3, a4, a5, a6, v68[0], a9, 0, 1);
    }
    goto LABEL_102;
  }
  if ( !result )
  {
    a2 = *(_QWORD *)(v15 + 96);
    sub_A794E0((__int64 *)(a2 + 88), a2, 0, v29, v30, v31);
    result = *(_QWORD *)(v15 + 120);
  }
  v50 = result & 0xFFFFFFFFFFFFFFF8LL;
  if ( (result & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    if ( (*(_BYTE *)(v50 + 72) & 1) != 0 )
    {
      sub_BA8900(v15);
      result = *(_QWORD *)(v15 + 120);
      v50 = result & 0xFFFFFFFFFFFFFFF8LL;
      v51 = *(_QWORD *)((result & 0xFFFFFFFFFFFFFFF8LL) + 56);
      if ( v51 )
        goto LABEL_91;
LABEL_103:
      if ( result )
        goto LABEL_104;
      goto LABEL_156;
    }
    v51 = *(_QWORD *)(v50 + 56);
    if ( !v51 )
      goto LABEL_104;
LABEL_91:
    while ( *(char *)(v51 + 28) < 0 || (*(_BYTE *)(v51 + 8) & 6) != 0 )
    {
      v51 = *(_QWORD *)(v51 + 128);
      if ( !v51 )
        goto LABEL_103;
    }
    while ( 1 )
    {
      v52 = 0;
      if ( a10 )
      {
        v53 = *(_QWORD *)(v51 + 40);
        v52 = 1;
        if ( (v53 & 7) == 0 )
          v52 = (v53 & 0xFFFFFFFFFFFFFFF8LL) == 0;
      }
      a2 = v11;
      sub_18A0470((_DWORD)a1, v11, a3, a4, a5, a6, v51, a9, v52, 0);
      v51 = *(_QWORD *)(v51 + 128);
      if ( !v51 )
        break;
      while ( *(char *)(v51 + 28) < 0 || (*(_BYTE *)(v51 + 8) & 6) != 0 )
      {
        v51 = *(_QWORD *)(v51 + 128);
        if ( !v51 )
          goto LABEL_102;
      }
    }
LABEL_102:
    result = *(_QWORD *)(v15 + 120);
    goto LABEL_103;
  }
  if ( result )
    goto LABEL_115;
LABEL_156:
  a2 = *(_QWORD *)(v15 + 96);
  sub_A794E0((__int64 *)(a2 + 88), a2, v50, v29, v30, v31);
  result = *(_QWORD *)(v15 + 120);
LABEL_104:
  v50 = result & 0xFFFFFFFFFFFFFFF8LL;
  if ( (result & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
LABEL_153:
    v67 = 0;
    if ( !result )
    {
LABEL_154:
      a2 = *(_QWORD *)(v15 + 96);
      sub_A794E0((__int64 *)(a2 + 88), a2, v50, v29, v30, v31);
      v50 = *(_QWORD *)(v15 + 120) & 0xFFFFFFFFFFFFFFF8LL;
LABEL_109:
      if ( !v50 )
      {
        result = 0;
LABEL_113:
        for ( i = result; v67 != i; result = sub_18A0470(
                                               (_DWORD)a1,
                                               v11,
                                               a3,
                                               a4,
                                               a5,
                                               a6,
                                               *(_QWORD *)(i - 8),
                                               a9,
                                               0,
                                               a11) )
        {
          a2 = v11;
          i += 8;
        }
        goto LABEL_115;
      }
      if ( (*(_BYTE *)(v50 + 72) & 1) != 0 )
      {
        sub_BA8900(v15);
        v50 = *(_QWORD *)(v15 + 120) & 0xFFFFFFFFFFFFFFF8LL;
        v29 = *(unsigned int *)(v50 + 48);
        if ( (_DWORD)v29 )
          goto LABEL_112;
        if ( !*(_QWORD *)(v15 + 120) )
        {
          a2 = *(_QWORD *)(v15 + 96);
          sub_A794E0((__int64 *)(a2 + 88), a2, v50, v29, v30, v31);
          v50 = *(_QWORD *)(v15 + 120) & 0xFFFFFFFFFFFFFFF8LL;
        }
        result = 0;
        if ( !v50 )
          goto LABEL_113;
      }
      else if ( *(_DWORD *)(v50 + 48) )
      {
LABEL_112:
        result = *(_QWORD *)(v50 + 40);
        goto LABEL_113;
      }
      if ( (*(_BYTE *)(v50 + 72) & 1) != 0 )
      {
        sub_BA8900(v15);
        v50 = *(_QWORD *)(v15 + 120) & 0xFFFFFFFFFFFFFFF8LL;
      }
      result = *(_QWORD *)(v50 + 16);
      goto LABEL_113;
    }
    goto LABEL_115;
  }
  if ( (*(_BYTE *)(v50 + 72) & 1) == 0 )
  {
    v29 = *(unsigned int *)(v50 + 48);
    if ( (_DWORD)v29 )
    {
LABEL_107:
      a2 = *(_QWORD *)(v50 + 40);
      v67 = a2 + 8 * v29;
      goto LABEL_108;
    }
    goto LABEL_157;
  }
  sub_BA8900(v15);
  result = *(_QWORD *)(v15 + 120);
  v50 = result & 0xFFFFFFFFFFFFFFF8LL;
  v29 = *(unsigned int *)((result & 0xFFFFFFFFFFFFFFF8LL) + 48);
  if ( (_DWORD)v29 )
    goto LABEL_107;
  if ( !result )
  {
    a2 = *(_QWORD *)(v15 + 96);
    sub_A794E0((__int64 *)(a2 + 88), a2, v50, v29, v30, v31);
    result = *(_QWORD *)(v15 + 120);
    v50 = result & 0xFFFFFFFFFFFFFFF8LL;
    if ( (result & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
LABEL_158:
      if ( (*(_BYTE *)(v50 + 72) & 1) != 0 )
      {
        sub_BA8900(v15);
        result = *(_QWORD *)(v15 + 120);
        v50 = result & 0xFFFFFFFFFFFFFFF8LL;
      }
      a2 = *(unsigned int *)(v50 + 24);
      v29 = *(_QWORD *)(v50 + 16);
      v67 = v29 + 8 * a2;
LABEL_108:
      if ( result )
        goto LABEL_109;
      goto LABEL_154;
    }
    goto LABEL_153;
  }
LABEL_157:
  if ( v50 )
    goto LABEL_158;
LABEL_115:
  if ( !a11 )
  {
    result = sub_BAB630(v15, a2, v50, v29, v30, v31);
    if ( result )
    {
      v59 = sub_BAB630(v15, a2, v55, v56, v57, v58);
      return sub_18A0470((_DWORD)a1, v11, a3, a4, a5, a6, v59, a9, 0, 0);
    }
  }
  return result;
}
