_QWORD *__fastcall sub_2BF000(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rax
  _QWORD *v7; // r15
  unsigned __int64 v8; // rbp
  int v9; // r12d
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rsi
  int v14; // r13d
  __int64 v15; // r8
  int v16; // r9d
  unsigned int v17; // r10d
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // r11d
  __int64 v21; // rsi
  char v22; // al
  int v23; // edx
  int v24; // r13d
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // r13
  _QWORD *v29; // r9
  unsigned __int64 v30; // rax
  __int64 v31; // rsi
  int v33; // eax
  char v34; // al
  unsigned int v35; // eax
  unsigned int v36; // eax
  __int64 v38; // [rsp+8h] [rbp-D0h]
  int v39; // [rsp+8h] [rbp-D0h]
  __int64 v40; // [rsp+8h] [rbp-D0h]
  int v41; // [rsp+8h] [rbp-D0h]
  int v42; // [rsp+8h] [rbp-D0h]
  int v43; // [rsp+8h] [rbp-D0h]
  unsigned int v44; // [rsp+10h] [rbp-C8h]
  __int64 v45; // [rsp+10h] [rbp-C8h]
  int v46; // [rsp+10h] [rbp-C8h]
  __int64 v47; // [rsp+10h] [rbp-C8h]
  __int64 v48; // [rsp+10h] [rbp-C8h]
  _QWORD *v50; // [rsp+20h] [rbp-B8h]
  char v51; // [rsp+2Fh] [rbp-A9h]
  __int64 v52; // [rsp+30h] [rbp-A8h]
  int v53; // [rsp+38h] [rbp-A0h]
  unsigned int v54; // [rsp+38h] [rbp-A0h]
  int v55; // [rsp+3Ch] [rbp-9Ch]
  int v56; // [rsp+3Ch] [rbp-9Ch]
  _QWORD v57[2]; // [rsp+40h] [rbp-98h] BYREF
  char v58; // [rsp+50h] [rbp-88h]
  __int64 v59; // [rsp+58h] [rbp-80h]
  __int64 v60; // [rsp+60h] [rbp-78h]
  _QWORD v61[2]; // [rsp+70h] [rbp-68h] BYREF
  char v62; // [rsp+80h] [rbp-58h]
  __m128i v63; // [rsp+88h] [rbp-50h]
  unsigned __int64 v64; // [rsp+98h] [rbp-40h]

  v64 = __readfsqword(0x28u);
  if ( sub_3BF8B0(a1 + 164) )
    return nullptr;
  v3 = a1[188];
  v4 = a1[5];
  v5 = a1[187];
  v58 = 103;
  v59 = v3;
  v57[1] = v4;
  v57[0] = off_4B4A68;
  v60 = 0;
  v6 = sub_2B1030(v5, (__int64)v57, ((int)a2 - (int)v4) << 6);
  v7 = (_QWORD *)v6;
  if ( !v6 )
    return nullptr;
  if ( *(_QWORD *)(v6 + 8) )
  {
    v51 = 0;
    v8 = 0;
    v9 = 1;
    v10 = -1;
    v50 = a1;
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = *v7 + 80 * v8;
        if ( *(_DWORD *)v11 == 1 )
          break;
        v8 = v9++;
        if ( v8 >= v7[1] )
          goto LABEL_23;
      }
      v38 = v10;
      v12 = *(_QWORD *)(v11 + 8);
      if ( v10 == -1 )
        goto LABEL_22;
      v13 = *(_QWORD *)(v11 + 64);
      v44 = *((_DWORD *)v50 + 18);
      v14 = *(_DWORD *)(v50[188] + 80LL);
      LODWORD(v61[0]) = 0;
      get_tinfo_size(v61, v13, 0);
      v16 = v61[0];
      v17 = v44;
      v18 = v38;
      v19 = (unsigned int)(LODWORD(v61[0]) - 1);
      if ( ((unsigned int)v19 & v61[0]) != 0 )
      {
        if ( !under_debugger )
          interr(2858, v13, v19, v38, v15);
        BUG();
      }
      v20 = 2 * v14;
      if ( SLODWORD(v61[0]) <= 2 * v14 )
      {
        if ( v14 > SLODWORD(v61[0]) )
        {
          if ( v44 <= 0x10 )
            goto LABEL_42;
          goto LABEL_12;
        }
        if ( v44 <= 0x10 )
        {
LABEL_49:
          v48 = v18;
          v43 = v16;
          v36 = getinf(99);
          v18 = v48;
          v16 = v43;
          v17 = v36;
        }
        if ( v17 == 176 || v17 == 256 )
        {
LABEL_16:
          v23 = v14 - 1;
          goto LABEL_17;
        }
        goto LABEL_46;
      }
      if ( v44 <= 0x10 )
      {
        v55 = LODWORD(v61[0]) - 1;
        v53 = v61[0];
        v33 = getinf(99);
        v20 = 2 * v14;
        v18 = v38;
        if ( v33 == 176 || v33 == 256 )
        {
          if ( v14 <= v20 )
            goto LABEL_48;
LABEL_41:
          v16 = v20;
LABEL_42:
          v47 = v18;
          v42 = v16;
          v35 = getinf(99);
          v18 = v47;
          v16 = v42;
          v17 = v35;
LABEL_12:
          if ( v17 != 176 && v17 != 256 )
          {
LABEL_14:
            v45 = v18;
            v21 = 2;
            v39 = v16;
LABEL_15:
            v22 = getinf_flag(67, v21);
            v16 = v39;
            v18 = v45;
            if ( !v22 )
              goto LABEL_16;
          }
          v23 = v16 - 1;
          v14 = v16;
          goto LABEL_17;
        }
        v17 = v44;
        v16 = v53;
        LODWORD(v19) = v55;
      }
      else if ( v44 == 256 || v44 == 176 )
      {
        if ( v14 > v20 )
          v14 *= 2;
        v23 = v14 - 1;
        goto LABEL_17;
      }
      v52 = v18;
      v46 = v19;
      v41 = v16;
      v56 = v20;
      v54 = v17;
      v34 = getinf_flag(67, 512);
      v23 = v46;
      v18 = v52;
      if ( !v34 )
      {
        v20 = v56;
        if ( v14 > v56 )
        {
          v16 = v56;
          if ( v54 <= 0x10 )
            goto LABEL_41;
          goto LABEL_14;
        }
        v16 = v56;
        if ( v54 <= 0x10 )
        {
LABEL_48:
          v16 = v20;
          goto LABEL_49;
        }
LABEL_46:
        v45 = v18;
        v21 = 4;
        v39 = v16;
        goto LABEL_15;
      }
      v14 = v41;
LABEL_17:
      v24 = -v14;
      v25 = v18 + v23;
      v26 = v25 & v24;
      if ( v12 != v26 )
      {
        v40 = v25 & v24;
        v27 = *v7 + 80LL * (v9 - 2);
        if ( v12 >= v26
          || *(_DWORD *)v27 != 1
          || (v28 = *(_QWORD *)(v27 + 8), get_tinfo_size(0, *(_QWORD *)(v27 + 64), 0) + v28 != v12) )
        {
          sub_68620(
            (__int64)"%a: wrong location in the user-defined vararg #%d - the rest of arguments will be ignored!\n",
            a3,
            a2);
          sub_E5FF0(v7, v8);
          v29 = v50;
LABEL_24:
          if ( v51 )
          {
            v30 = v29[188];
            v31 = v29[5];
            v62 = 103;
            v61[1] = v31;
            v61[0] = off_4B4A68;
            v63 = _mm_unpacklo_epi64((__m128i)v30, (__m128i)(unsigned __int64)v7);
            sub_2B0E40(*(_QWORD *)(v30 + 96), (__int64)v61, (a2 - v31) << 6);
          }
          return v7;
        }
        sub_68620((__int64)"%a: fix unaligned location in the user-defined vararg #%d\n", a3, a2);
        cleanup_argloc(v11);
        *(_DWORD *)v11 = 1;
        v51 = 1;
        *(_QWORD *)(v11 + 8) = v40;
      }
LABEL_22:
      v8 = v9++;
      v10 = v12 + get_tinfo_size(0, *(_QWORD *)(v11 + 64), 0);
      if ( v8 >= v7[1] )
      {
LABEL_23:
        v29 = v50;
        goto LABEL_24;
      }
    }
  }
  return v7;
}
