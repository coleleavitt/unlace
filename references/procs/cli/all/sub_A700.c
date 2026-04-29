__int64 __fastcall sub_A700(
        _QWORD *a1,
        char *a2,
        double a3,
        double a4,
        __m128 a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10)
{
  __int64 v10; // r13
  __int64 v12; // r12
  unsigned __int64 v13; // rdi
  char *v14; // rdx
  __int16 v16; // cx
  char *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  int v20; // r8d
  char v21; // ah
  double v22; // xmm4_8
  double v23; // xmm5_8
  void *v24; // rdx
  void (__fastcall *v25)(_QWORD *, __int64, __int64); // r13
  void *v26; // rax
  void *v27; // r9
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  const char *v33; // rcx
  char v34; // si
  char *v35; // rcx
  char v36; // si
  char *v37; // rsi
  char v38; // di
  char *v39; // rsi
  char v40; // di
  _BYTE *v41; // rsi
  __int64 v42; // rdx
  size_t v43; // r8
  __int64 v44; // r9
  size_t v45; // [rsp+8h] [rbp-10F8h]
  __int64 v46; // [rsp+10h] [rbp-10F0h]
  __int64 v47; // [rsp+18h] [rbp-10E8h]
  unsigned int v48; // [rsp+28h] [rbp-10D8h]
  __int64 v49; // [rsp+28h] [rbp-10D8h]
  unsigned __int8 *v50; // [rsp+38h] [rbp-10C8h] BYREF
  unsigned int v51; // [rsp+40h] [rbp-10C0h] BYREF
  int v52; // [rsp+44h] [rbp-10BCh]
  int v53; // [rsp+48h] [rbp-10B8h]
  void *v54; // [rsp+60h] [rbp-10A0h] BYREF
  __int64 v55; // [rsp+68h] [rbp-1098h]
  void *src; // [rsp+80h] [rbp-1080h] BYREF
  __int128 v57; // [rsp+88h] [rbp-1078h]
  _QWORD v58[4]; // [rsp+A0h] [rbp-1060h] BYREF
  _BYTE v59[1023]; // [rsp+C0h] [rbp-1040h] BYREF
  char v60; // [rsp+4BFh] [rbp-C41h] BYREF
  _BYTE v61[1024]; // [rsp+4C0h] [rbp-C40h] BYREF
  _BYTE v62[1024]; // [rsp+8C0h] [rbp-840h] BYREF
  _BYTE v63[1032]; // [rsp+CC0h] [rbp-440h] BYREF
  unsigned __int64 v64; // [rsp+10C8h] [rbp-38h]

  v10 = (unsigned int)a2;
  v48 = (unsigned int)a2;
  a2 = (char *)(unsigned int)a2;
  v64 = __readfsqword(0x28u);
  v12 = a1[77];
  v13 = *(_QWORD *)(v12 + 144);
  if ( netnode_supval(v13, (unsigned int)a2, &v51, 20, 97) <= 0 )
    return 0;
  v16 = v52;
  switch ( v52 & 7 )
  {
    case 0:
      v14 = "privatescope";
      v17 = v59;
      v13 = (unsigned __int64)"n %x\n";
      while ( 1 )
      {
        a2 = (char *)(unsigned __int8)*v14++;
        *v17 = (char)a2;
        if ( !(_BYTE)a2 )
          goto LABEL_7;
        ++v17;
        if ( v14 == "n %x\n" )
          goto LABEL_59;
      }
    case 1:
      v14 = "private";
      v17 = v59;
      v13 = (unsigned __int64)&jpt_D8A0[5] + 1;
      while ( 1 )
      {
        a2 = (char *)(unsigned __int8)*v14++;
        *v17 = (char)a2;
        if ( !(_BYTE)a2 )
          goto LABEL_7;
        ++v17;
        if ( v14 == (char *)&jpt_D8A0[5] + 1 )
          goto LABEL_59;
      }
    case 2:
      v14 = "famandassem";
      v17 = v59;
      v13 = (unsigned __int64)&jpt_E3A0[6] + 1;
      while ( 1 )
      {
        a2 = (char *)(unsigned __int8)*v14++;
        *v17 = (char)a2;
        if ( !(_BYTE)a2 )
          goto LABEL_7;
        ++v17;
        if ( v14 == (char *)&jpt_E3A0[6] + 1 )
          goto LABEL_59;
      }
    case 3:
      v14 = "assembly";
      v17 = v59;
      v13 = (unsigned __int64)&jpt_E3A0[2];
      while ( 1 )
      {
        a2 = (char *)(unsigned __int8)*v14++;
        *v17 = (char)a2;
        if ( !(_BYTE)a2 )
          goto LABEL_7;
        ++v17;
        if ( v14 == (char *)&jpt_E3A0[2] )
          goto LABEL_59;
      }
    case 4:
      v14 = "family";
      v17 = v59;
      v13 = (unsigned __int64)&jpt_D8A0[9] + 1;
      while ( 1 )
      {
        a2 = (char *)(unsigned __int8)*v14++;
        *v17 = (char)a2;
        if ( !(_BYTE)a2 )
          goto LABEL_7;
        ++v17;
        if ( v14 == (char *)&jpt_D8A0[9] + 1 )
          goto LABEL_59;
      }
    case 5:
      v14 = "famorassem";
      v17 = v59;
      v13 = (unsigned __int64)&jpt_EFFA[4] + 1;
      while ( 1 )
      {
        a2 = (char *)(unsigned __int8)*v14++;
        *v17 = (char)a2;
        if ( !(_BYTE)a2 )
          goto LABEL_7;
        ++v17;
        if ( v14 == (char *)&jpt_EFFA[4] + 1 )
          goto LABEL_59;
      }
    case 6:
      v14 = "public";
      v17 = v59;
      v13 = (unsigned __int64)&jpt_D8A0[1] + 2;
      break;
    default:
      v17 = v59;
      goto LABEL_7;
  }
  do
  {
    a2 = (char *)(unsigned __int8)*v14++;
    *v17 = (char)a2;
    if ( !(_BYTE)a2 )
    {
LABEL_7:
      if ( (v16 & 0x10) == 0 )
      {
LABEL_8:
        if ( (v16 & 0x20) == 0 )
          goto LABEL_9;
        if ( v59 < v17 )
        {
          if ( v17 < v61 )
          {
            v14 = &v60;
            goto LABEL_180;
          }
          goto LABEL_207;
        }
LABEL_163:
        if ( v17 >= v61 )
        {
          if ( !under_debugger )
            goto LABEL_211;
          goto LABEL_228;
        }
        v14 = &v60;
        if ( v17 == &v60 )
          goto LABEL_168;
        a2 = "initonly";
        while ( 1 )
        {
          v13 = (unsigned __int8)*a2++;
          *v17 = v13;
          if ( !(_BYTE)v13 )
            break;
          if ( ++v17 == &v60 )
            goto LABEL_168;
        }
LABEL_9:
        if ( (v16 & 0x40) == 0 )
          goto LABEL_10;
        if ( v59 >= v17 )
        {
LABEL_132:
          if ( v17 >= v61 )
          {
            if ( !under_debugger )
              goto LABEL_211;
            goto LABEL_228;
          }
          v14 = &v60;
          if ( v17 != &v60 )
          {
            a2 = "literal";
            while ( 1 )
            {
              v13 = (unsigned __int8)*a2++;
              *v17 = v13;
              if ( !(_BYTE)v13 )
                break;
              if ( ++v17 == &v60 )
                goto LABEL_137;
            }
LABEL_10:
            if ( (v16 & 0x80u) == 0 )
              goto LABEL_11;
            if ( v59 >= v17 )
              goto LABEL_119;
            if ( v17 < v61 )
            {
              v14 = &v60;
LABEL_170:
              if ( v17 == &v60 )
                goto LABEL_124;
              a2 = (char *)&unk_14DCD;
              while ( 1 )
              {
                v13 = (unsigned __int8)*a2++;
                *v17 = v13;
                if ( !(_BYTE)v13 )
                  break;
                if ( ++v17 == &v60 )
                  goto LABEL_124;
              }
LABEL_119:
              if ( v17 >= v61 )
                goto LABEL_212;
              v14 = &v60;
              if ( v17 != &v60 )
              {
                a2 = "notserialized";
                do
                {
                  v13 = (unsigned __int8)*a2++;
                  *v17 = v13;
                  if ( !(_BYTE)v13 )
                    goto LABEL_11;
                }
                while ( ++v17 != &v60 );
              }
LABEL_124:
              v60 = 0;
              if ( (v16 & 0x200) == 0 )
              {
                v17 = &v60;
                if ( (v16 & 0x2000) == 0 )
                  goto LABEL_13;
                goto LABEL_126;
              }
              goto LABEL_111;
            }
LABEL_207:
            sub_4B40(v13, a2, v14);
            goto LABEL_208;
          }
          goto LABEL_137;
        }
        if ( v17 >= v61 )
          goto LABEL_207;
        v14 = &v60;
        goto LABEL_157;
      }
      if ( v59 < v17 )
      {
        if ( v17 >= v61 )
          goto LABEL_207;
        v14 = &v60;
        if ( v17 == &v60 )
          goto LABEL_155;
        a2 = (char *)&unk_14DCD;
        while ( 1 )
        {
          v13 = (unsigned __int8)*a2++;
          *v17 = v13;
          if ( !(_BYTE)v13 )
            break;
          if ( ++v17 == &v60 )
            goto LABEL_155;
        }
      }
      if ( v17 >= v61 )
        goto LABEL_210;
      v14 = &v60;
      if ( v17 != &v60 )
      {
        a2 = "static";
        do
        {
          v13 = (unsigned __int8)*a2++;
          *v17 = v13;
          if ( !(_BYTE)v13 )
            goto LABEL_8;
        }
        while ( ++v17 != &v60 );
      }
LABEL_155:
      v60 = 0;
      if ( (v16 & 0x20) != 0 )
        goto LABEL_168;
      v17 = &v60;
      if ( (v16 & 0x40) == 0 )
        goto LABEL_10;
LABEL_157:
      if ( v17 != &v60 )
      {
        a2 = (char *)&unk_14DCD;
        do
        {
          v13 = (unsigned __int8)*a2++;
          *v17 = v13;
          if ( !(_BYTE)v13 )
            goto LABEL_132;
        }
        while ( ++v17 != &v60 );
      }
LABEL_137:
      v60 = 0;
      if ( (v16 & 0x80u) != 0 )
        goto LABEL_124;
      v17 = &v60;
      if ( (v16 & 0x200) == 0 )
        goto LABEL_12;
      goto LABEL_139;
    }
    ++v17;
  }
  while ( v14 != (char *)&jpt_D8A0[1] + 2 );
LABEL_59:
  v60 = 0;
  v14 = &v60;
  if ( (v16 & 0x10) != 0 )
    goto LABEL_155;
  if ( (v16 & 0x20) == 0 )
  {
    v17 = &v60;
    goto LABEL_9;
  }
  v14 = &v60;
  v17 = &v60;
LABEL_180:
  if ( v17 != &v60 )
  {
    a2 = (char *)&unk_14DCD;
    do
    {
      v13 = (unsigned __int8)*a2++;
      *v17 = v13;
      if ( !(_BYTE)v13 )
        goto LABEL_163;
    }
    while ( ++v17 != &v60 );
  }
LABEL_168:
  v60 = 0;
  if ( (v16 & 0x40) != 0 )
    goto LABEL_137;
  v17 = &v60;
  if ( (v16 & 0x80u) != 0 )
    goto LABEL_170;
LABEL_11:
  if ( (v16 & 0x200) != 0 )
  {
    if ( v59 >= v17 )
      goto LABEL_106;
    if ( v17 >= v61 )
      goto LABEL_207;
    v14 = &v60;
LABEL_139:
    if ( v17 == &v60 )
    {
LABEL_111:
      v60 = 0;
      if ( (v16 & 0x2000) != 0 )
        goto LABEL_98;
      v17 = &v60;
      if ( (v16 & 0x400) == 0 )
        goto LABEL_14;
      goto LABEL_113;
    }
    a2 = (char *)&unk_14DCD;
    while ( 1 )
    {
      v13 = (unsigned __int8)*a2++;
      *v17 = v13;
      if ( !(_BYTE)v13 )
        break;
      if ( ++v17 == &v60 )
        goto LABEL_111;
    }
LABEL_106:
    if ( v17 >= v61 )
    {
      if ( !under_debugger )
        goto LABEL_211;
      goto LABEL_228;
    }
    v14 = &v60;
    if ( v17 != &v60 )
    {
      a2 = "specialname";
      while ( 1 )
      {
        v13 = (unsigned __int8)*a2++;
        *v17 = v13;
        if ( !(_BYTE)v13 )
          goto LABEL_12;
        if ( ++v17 == &v60 )
          goto LABEL_111;
      }
    }
    goto LABEL_111;
  }
LABEL_12:
  if ( (v16 & 0x2000) == 0 )
    goto LABEL_13;
  if ( v59 < v17 )
  {
    if ( v17 < v61 )
    {
      v14 = &v60;
LABEL_126:
      if ( v17 != &v60 )
      {
        a2 = (char *)&unk_14DCD;
        while ( 1 )
        {
          v13 = (unsigned __int8)*a2++;
          *v17 = v13;
          if ( !(_BYTE)v13 )
            goto LABEL_93;
          if ( ++v17 == &v60 )
            goto LABEL_98;
        }
      }
      goto LABEL_98;
    }
    goto LABEL_207;
  }
LABEL_93:
  if ( v17 >= v61 )
  {
    if ( !under_debugger )
      goto LABEL_211;
    goto LABEL_228;
  }
  v14 = &v60;
  if ( v17 == &v60 )
  {
LABEL_98:
    v60 = 0;
    if ( (v16 & 0x400) == 0 )
    {
      v17 = &v60;
      if ( (v16 & 0x1000) == 0 )
        goto LABEL_15;
      goto LABEL_100;
    }
LABEL_85:
    v60 = 0;
    if ( (v16 & 0x1000) == 0 )
    {
      v17 = &v60;
      if ( (v16 & 0x100) == 0 )
        goto LABEL_16;
      goto LABEL_87;
    }
    goto LABEL_77;
  }
  a2 = "pinvokeimpl";
  while ( 1 )
  {
    v13 = (unsigned __int8)*a2++;
    *v17 = v13;
    if ( !(_BYTE)v13 )
      break;
    if ( ++v17 == &v60 )
      goto LABEL_98;
  }
LABEL_13:
  if ( (v16 & 0x400) != 0 )
  {
    if ( v59 >= v17 )
    {
LABEL_80:
      if ( v17 >= v61 )
      {
        if ( !under_debugger )
          goto LABEL_211;
        goto LABEL_228;
      }
      v14 = &v60;
      if ( v17 != &v60 )
      {
        a2 = "rtspecialname";
        while ( 1 )
        {
          v13 = (unsigned __int8)*a2++;
          *v17 = v13;
          if ( !(_BYTE)v13 )
            goto LABEL_14;
          if ( ++v17 == &v60 )
            goto LABEL_85;
        }
      }
      goto LABEL_85;
    }
    if ( v17 < v61 )
    {
LABEL_113:
      if ( v17 == &v60 )
        goto LABEL_85;
      v39 = (char *)&unk_14DCD;
      while ( 1 )
      {
        v40 = *v39++;
        *v17 = v40;
        if ( !v40 )
          goto LABEL_80;
        if ( ++v17 == &v60 )
          goto LABEL_85;
      }
    }
    goto LABEL_207;
  }
LABEL_14:
  if ( (v16 & 0x1000) == 0 )
    goto LABEL_15;
  if ( v59 < v17 )
  {
    if ( v17 < v61 )
    {
LABEL_100:
      if ( v17 != &v60 )
      {
        v37 = (char *)&unk_14DCD;
        while ( 1 )
        {
          v38 = *v37++;
          *v17 = v38;
          if ( !v38 )
            goto LABEL_72;
          if ( ++v17 == &v60 )
            goto LABEL_77;
        }
      }
      goto LABEL_77;
    }
    goto LABEL_207;
  }
LABEL_72:
  if ( v17 >= v61 )
  {
    if ( !under_debugger )
      goto LABEL_211;
    goto LABEL_228;
  }
  v14 = &v60;
  if ( v17 == &v60 )
  {
LABEL_77:
    v60 = 0;
    if ( (v16 & 0x100) != 0 )
      goto LABEL_69;
    goto LABEL_70;
  }
  a2 = "hasfieldmarshal";
  while ( 1 )
  {
    v13 = (unsigned __int8)*a2++;
    *v17 = v13;
    if ( !(_BYTE)v13 )
      break;
    if ( ++v17 == &v60 )
      goto LABEL_77;
  }
LABEL_15:
  if ( (v16 & 0x100) == 0 )
  {
LABEL_16:
    if ( v17 < v61 )
      goto LABEL_17;
LABEL_208:
    if ( !under_debugger )
    {
      interr(519);
LABEL_210:
      while ( !under_debugger )
      {
LABEL_211:
        interr(520);
LABEL_212:
        ;
      }
    }
LABEL_228:
    BUG();
  }
  if ( v59 >= v17 )
  {
LABEL_64:
    if ( v17 >= v61 )
      goto LABEL_210;
    if ( v17 != &v60 )
    {
      v33 = "hasfieldrva";
      while ( 1 )
      {
        v34 = *v33++;
        *v17 = v34;
        if ( !v34 )
          goto LABEL_16;
        if ( ++v17 == &v60 )
          goto LABEL_69;
      }
    }
    goto LABEL_69;
  }
  if ( v17 >= v61 )
    goto LABEL_207;
LABEL_87:
  if ( v17 != &v60 )
  {
    v35 = (char *)&unk_14DCD;
    do
    {
      v36 = *v35++;
      *v17 = v36;
      if ( !v36 )
        goto LABEL_64;
    }
    while ( ++v17 != &v60 );
  }
LABEL_69:
  v60 = 0;
LABEL_70:
  v17 = &v60;
LABEL_17:
  *v17 = 0;
  v18 = *(_QWORD *)(v12 + 144);
  v50 = nullptr;
  v19 = netnode_supval(v18, v10, v61, 1024, 100);
  if ( v19 < 0 )
    return 0;
  v50 = v61;
  sub_9420((__int64)&v54, (__int64)a1, &v50, (unsigned __int64)&v61[v19], v20);
  sub_5370(v12, v51, v48, v62, 1024);
  v21 = BYTE1(v52);
  src = nullptr;
  v57 = 0;
  if ( (v52 & 0x8000) != 0 )
  {
    sub_9490((__int64)a1, (__int64 *)&src, v53, v48);
    v41 = src;
    if ( (_QWORD)v57 )
    {
      v42 = v57 + 2;
      v43 = v57 - 1;
      v44 = v57 + 1;
      if ( *((_QWORD *)&v57 + 1) >= (unsigned __int64)(v57 + 2) )
        goto LABEL_146;
    }
    else
    {
      if ( *((_QWORD *)&v57 + 1) > 2u )
      {
        *(_QWORD *)&v57 = 3;
        *((_BYTE *)src + 2) = 0;
LABEL_148:
        *(_WORD *)src = 8253;
        v21 = BYTE1(v52);
        goto LABEL_19;
      }
      v43 = 0;
      v42 = 3;
      v44 = 2;
    }
    v45 = v43;
    v46 = v44;
    v47 = v42;
    src = (void *)qvector_reserve(&src, src, v42, 1);
    v43 = v45;
    v41 = src;
    v44 = v46;
    v42 = v47;
LABEL_146:
    *(_QWORD *)&v57 = v42;
    v41[v44] = 0;
    if ( v43 )
      memmove((char *)src + 2, src, v43);
    goto LABEL_148;
  }
LABEL_19:
  v63[0] = 0;
  if ( (v21 & 1) != 0 && netnode_supval(*(_QWORD *)(v12 + 144), v10, v58, 8, 120) == 8 )
    qsnprintf(v63, 1024, byte_14E1B, 8, v58[0], v58);
  sub_7630((__int64)v58, (__int64)a1, v48, 0.0, a4, a5);
  v24 = &unk_15584;
  v49 = v58[0];
  v25 = *(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 136LL);
  if ( (_QWORD)v57 )
    v24 = src;
  v26 = (void *)v58[0];
  if ( !v58[1] )
    v26 = &unk_15584;
  v27 = &unk_15584;
  if ( v55 )
    v27 = v54;
  v28 = sub_5010(v12, 7, 0.0, a4, *(double *)a5.m128_u64, a6, v22, v23, a9, a10, ".field", v62, v59, v27, v26, v24, v63);
  v25(a1, v28, 4294967294LL);
  if ( v49 )
    qfree(v49, v28, v29, v30, v31, v32);
  if ( src )
  {
    *(_QWORD *)&v57 = 0;
    qfree(src, v28, v29, v30, v31, v32);
  }
  if ( v54 )
  {
    v55 = 0;
    qfree(v54, v28, v29, v30, v31, v32);
  }
  return 1;
}
