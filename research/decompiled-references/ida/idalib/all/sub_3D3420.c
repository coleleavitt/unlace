unsigned __int64 __fastcall sub_3D3420(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 v5; // r12
  unsigned __int64 v7; // rbx
  __int64 range; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // r13
  unsigned __int64 v12; // rsi
  __int64 v13; // rax
  _QWORD *v14; // r12
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  char *v18; // r12
  char *v19; // r13
  __int64 (__fastcall *v20)(unsigned __int64, unsigned __int64); // rax
  char *v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // r13d
  _QWORD *v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // r14
  unsigned int v29; // eax
  __int64 v30; // rdx
  unsigned __int64 v31; // r13
  __int64 v32; // rcx
  __int64 v33; // rax
  size_t v34; // r8
  size_t v35; // r10
  size_t v36; // r11
  char *v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rax
  size_t v40; // r10
  __int64 v41; // r11
  size_t v42; // r8
  char *v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rax
  size_t v47; // r8
  size_t v48; // r9
  unsigned __int64 v49; // r10
  char *v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rax
  char *v53; // rsi
  unsigned __int64 v54; // rdx
  __int64 v55; // rbx
  unsigned __int64 v56; // r13
  unsigned __int64 v57; // r12
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // r14
  unsigned __int64 v60; // [rsp+0h] [rbp-C8h]
  _QWORD *v61; // [rsp+8h] [rbp-C0h]
  unsigned __int64 v62; // [rsp+10h] [rbp-B8h]
  size_t v63; // [rsp+18h] [rbp-B0h]
  _QWORD *v64; // [rsp+20h] [rbp-A8h]
  size_t n; // [rsp+28h] [rbp-A0h]
  size_t v66; // [rsp+30h] [rbp-98h]
  __int64 v67; // [rsp+38h] [rbp-90h]
  void *v68; // [rsp+40h] [rbp-88h] BYREF
  __int128 v69; // [rsp+48h] [rbp-80h]
  int v70; // [rsp+58h] [rbp-70h]
  void *v71; // [rsp+60h] [rbp-68h] BYREF
  __int128 v72; // [rsp+68h] [rbp-60h]
  int v73; // [rsp+78h] [rbp-50h]
  _BYTE src[2]; // [rsp+7Eh] [rbp-4Ah] BYREF
  int v75; // [rsp+80h] [rbp-48h] BYREF
  _QWORD v76[8]; // [rsp+88h] [rbp-40h] BYREF

  v5 = a1 + 1120;
  v7 = a2;
  v61 = a4;
  v76[0] = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 1224) = a2;
  v62 = a3 + a2;
  *(_QWORD *)(a1 + 1232) = a3 + a2;
  while ( 1 )
  {
    sub_3BDAC0(a1, v7, 0);
    if ( *(_QWORD *)(a1 + 1024) != v7 )
    {
      if ( !under_debugger )
        interr(517);
LABEL_108:
      BUG();
    }
    v10 = *(_QWORD *)(a1 + 1032);
    if ( a3 == 1 )
    {
      if ( v10 <= 0xFFFFFFFFFFFFFFFDLL )
        goto LABEL_38;
      goto LABEL_17;
    }
    if ( v10 - 1 > 0xFFFFFFFFFFFFFFFCLL )
      break;
    v11 = *(_QWORD *)(a1 + 1016);
    v12 = sub_8B8E80(v11, v7);
    if ( v12 )
      v12 = *(_QWORD *)(*(_QWORD *)(v11 + 56) + 8LL);
    if ( v12 >= *(_QWORD *)(a1 + 1232) )
      goto LABEL_77;
    if ( !rangeset_t_find_range(v5, v12) )
LABEL_15:
      sub_378C70((__int64)"***CORRUPTED sparse/va storage");
LABEL_6:
    ++*(_DWORD *)(a1 + 1248);
    if ( (unsigned int)sub_3D2F00(
                         a1,
                         v60,
                         v61,
                         v62,
                         v63,
                         (int)v64,
                         (void *)n,
                         v66,
                         v67,
                         (int)v68,
                         v69,
                         SDWORD2(v69),
                         v70,
                         (int)v71,
                         v72,
                         SDWORD2(v72),
                         v73,
                         v75,
                         v76[0],
                         v76[1]) )
    {
      if ( !under_debugger )
        interr(66);
      goto LABEL_108;
    }
    --*(_DWORD *)(a1 + 1248);
  }
  if ( v10 != -1 )
  {
    if ( v10 <= 0xFFFFFFFFFFFFFFFDLL )
      goto LABEL_78;
    goto LABEL_18;
  }
  range = rangeset_t_find_range(v5, v7);
  if ( !range )
    sub_378C70((__int64)"***CORRUPTED sparse storage");
  v9 = *(_QWORD *)(range + 8);
  if ( v9 < *(_QWORD *)(a1 + 1232) )
  {
    if ( !sub_8B8E80(*(_QWORD *)(a1 + 1016), v9) )
      goto LABEL_15;
    goto LABEL_6;
  }
LABEL_77:
  v10 = *(_QWORD *)(a1 + 1032);
  if ( v10 > 0xFFFFFFFFFFFFFFFDLL )
  {
LABEL_17:
    if ( v10 == -1 )
    {
      v13 = a1 + 952;
LABEL_19:
      v14 = (_QWORD *)(v13 + 8);
      v15 = *(_QWORD **)(v13 + 16);
      v61 = v14;
      if ( !v15 )
        goto LABEL_26;
      do
      {
        while ( 1 )
        {
          v16 = v15[2];
          v17 = v15[3];
          if ( v15[4] >= v7 )
            break;
          v15 = (_QWORD *)v15[3];
          if ( !v17 )
            goto LABEL_24;
        }
        v14 = v15;
        v15 = (_QWORD *)v15[2];
      }
      while ( v16 );
LABEL_24:
      if ( v14 == v61 || v7 < v14[4] )
      {
LABEL_26:
        if ( !under_debugger )
          interr(67);
        goto LABEL_108;
      }
      v22 = (char *)v14[5];
      sub_3BAF10(v7, (__int64)v22, a3);
      v14[5] = a3;
      if ( a3 <= 1 )
        goto LABEL_37;
      v25 = *(_DWORD *)(a1 + 1248);
      v26 = v14;
      v68 = nullptr;
      v71 = nullptr;
      v69 = 0;
      *(_DWORD *)(a1 + 1248) = v25 + 1;
      v72 = 0;
      v28 = std::_Rb_tree_increment(v14, v22, v23, v24);
      v64 = v76;
      if ( (_QWORD *)v28 == v61 )
      {
        *(_DWORD *)(a1 + 1248) = v25;
        goto LABEL_35;
      }
      while ( 1 )
      {
        v31 = *(_QWORD *)(v28 + 32);
        if ( v31 >= v62 )
        {
LABEL_28:
          if ( (_QWORD)v69 )
            add_undo_record(6, v68, v69);
          v18 = (char *)v71;
          v19 = (char *)v71 + 16 * v72;
          if ( v19 != v71 )
          {
            do
            {
              sub_3C59C0(a1, *(_QWORD *)v18);
              v18 += 16;
            }
            while ( v19 != v18 );
            v18 = (char *)v71;
          }
          --*(_DWORD *)(a1 + 1248);
          if ( v18 )
          {
            *(_QWORD *)&v72 = 0;
            qfree(v18);
          }
LABEL_35:
          if ( v68 )
          {
            *(_QWORD *)&v69 = 0;
            qfree(v68);
          }
LABEL_37:
          *(_BYTE *)(a1 + 1200) = 1;
          goto LABEL_38;
        }
        if ( *(_QWORD *)(v28 + 40) )
        {
          if ( !under_debugger )
            interr(68);
          goto LABEL_108;
        }
        LODWORD(v60) = *(_DWORD *)(v28 + 48);
        if ( !(unsigned __int8)must_journal(v26, v22, v27) )
          goto LABEL_43;
        v33 = pack_dq(src, v64, v31) - (_QWORD)src;
        v34 = v33;
        if ( v33 )
          break;
LABEL_54:
        v63 = (size_t)&v75 + 3;
        v39 = pack_dd(src, (char *)&v75 + 3, (unsigned int)v60) - (_QWORD)src;
        v40 = v39;
        if ( !v39 )
          goto LABEL_60;
        v41 = v69;
        v42 = v69 + v39;
        if ( __CFADD__((_QWORD)v69, v39) )
        {
          if ( (unsigned __int64)v69 > 0x7FFFFFFFFFFFFFFELL )
          {
            if ( (_QWORD)v69 != 0x7FFFFFFFFFFFFFFFLL )
              *(_QWORD *)&v69 = 0x7FFFFFFFFFFFFFFFLL;
            goto LABEL_59;
          }
          v42 = 0x7FFFFFFFFFFFFFFFLL;
        }
        v43 = (char *)v68;
        v44 = v69;
        if ( *((_QWORD *)&v69 + 1) < v42 )
        {
          v67 = v69;
          v66 = v40;
          n = v42;
          v68 = (void *)qvector_reserve(&v68, v68, v42, 1);
          v43 = (char *)v68;
          v41 = v67;
          v44 = v69;
          v40 = v66;
          v42 = n;
        }
        v67 = v41;
        v66 = v40;
        n = v42;
        memset(&v43[v44], 0, v42 - v44);
        v40 = v66;
        v41 = v67;
        *(_QWORD *)&v69 = n;
LABEL_59:
        memcpy((char *)v68 + v41, src, v40);
LABEL_60:
        v45 = (unsigned int)v60;
        v22 = (char *)v63;
        BYTE1(v45) = BYTE1(v60) | 2;
        v46 = pack_dd(src, v63, v45) - (_QWORD)src;
        v47 = v46;
        if ( v46 )
        {
          v48 = v69;
          v49 = v69 + v46;
          if ( __CFADD__((_QWORD)v69, v46) )
          {
            if ( (unsigned __int64)v69 <= 0x7FFFFFFFFFFFFFFELL )
            {
              v50 = (char *)v68;
              v51 = v69;
              v49 = 0x7FFFFFFFFFFFFFFFLL;
              if ( *((_QWORD *)&v69 + 1) < 0x7FFFFFFFFFFFFFFFuLL )
                goto LABEL_95;
              goto LABEL_63;
            }
            if ( (_QWORD)v69 != 0x7FFFFFFFFFFFFFFFLL )
              *(_QWORD *)&v69 = 0x7FFFFFFFFFFFFFFFLL;
          }
          else
          {
            v50 = (char *)v68;
            v51 = v69;
            if ( *((_QWORD *)&v69 + 1) >= v49 )
              goto LABEL_63;
LABEL_95:
            n = v69;
            v63 = v47;
            v60 = v49;
            v68 = (void *)qvector_reserve(&v68, v50, v49, 1);
            v50 = (char *)v68;
            v48 = n;
            v51 = v69;
            v47 = v63;
            v49 = v60;
LABEL_63:
            n = v48;
            v63 = v47;
            v60 = v49;
            memset(&v50[v51], 0, v49 - v51);
            v47 = v63;
            v48 = n;
            *(_QWORD *)&v69 = v60;
          }
          v22 = src;
          memcpy((char *)v68 + v48, src, v47);
        }
LABEL_43:
        v29 = *(_DWORD *)(v28 + 48);
        v30 = v29;
        BYTE1(v30) = BYTE1(v29) | 2;
        *(_DWORD *)(v28 + 48) = v30;
        if ( (v29 & 0xC000) != 0 )
        {
          v52 = v72;
          v53 = (char *)v71;
          v30 = v72 + 1;
          if ( *((_QWORD *)&v72 + 1) < (unsigned __int64)(v72 + 1) )
          {
            v71 = (void *)qvector_reserve(&v71, v71, v30, 16);
            v53 = (char *)v71;
            v52 = v72;
            v30 = v72 + 1;
          }
          *(_QWORD *)&v72 = v30;
          v22 = &v53[16 * v52];
          *(_QWORD *)v22 = v31;
          *((_QWORD *)v22 + 1) = *(unsigned int *)(v28 + 48);
        }
        v26 = (_QWORD *)v28;
        v28 = std::_Rb_tree_increment(v28, v22, v30, v32);
        if ( (_QWORD *)v28 == v61 )
          goto LABEL_28;
      }
      v35 = v69;
      v36 = v69 + v33;
      if ( __CFADD__((_QWORD)v69, v33) )
      {
        if ( (unsigned __int64)v69 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v69 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v69 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_53;
        }
        v36 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v37 = (char *)v68;
      v38 = v69;
      if ( *((_QWORD *)&v69 + 1) < v36 )
      {
        v66 = v69;
        n = v34;
        v63 = v36;
        v68 = (void *)qvector_reserve(&v68, v68, v36, 1);
        v37 = (char *)v68;
        v35 = v66;
        v38 = v69;
        v34 = n;
        v36 = v63;
      }
      v66 = v35;
      n = v34;
      v63 = v36;
      memset(&v37[v38], 0, v36 - v38);
      v34 = n;
      v35 = v66;
      *(_QWORD *)&v69 = v63;
LABEL_53:
      memcpy((char *)v68 + v35, src, v34);
      goto LABEL_54;
    }
LABEL_18:
    v13 = a1 + 904;
    goto LABEL_19;
  }
LABEL_78:
  if ( a3 <= 1 )
    goto LABEL_38;
  v54 = a3;
  if ( v61 )
    v54 = sub_3C1C20((__int64 *)a1, v7, a3, (unsigned __int64)v61);
  v60 = v7;
  v55 = 1;
  v56 = v54;
  do
  {
    v59 = v55 + v60;
    if ( !--v56 )
      v56 = sub_3C1C20((__int64 *)a1, v55 + v60, a3 - v55, (unsigned __int64)v61);
    v57 = v55;
    if ( (v59 & 1) == 0 )
      v57 = v56;
    if ( v57 > 0xFFF )
      LODWORD(v57) = 4095;
    v58 = sub_3BE900((_QWORD *)a1, v59, 0);
    if ( (v58 & 0x400) != 0 )
    {
      if ( !under_debugger )
        interr(69);
      goto LABEL_108;
    }
    ++v55;
    sub_3D07C0((_QWORD *)a1, (void *)v59, v58 & 0xFF9FF | ((_DWORD)v57 << 20) | 0x200u);
    sub_3C59C0(a1, v59);
  }
  while ( a3 != v55 );
  v7 = v60;
LABEL_38:
  v20 = qword_2CCB548;
  *(__m128i *)(a1 + 1584) = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
  *(_OWORD *)(a1 + 1600) = -1;
  if ( v20 )
    return v20(v7, a3);
  else
    return v76[0] - __readfsqword(0x28u);
}
