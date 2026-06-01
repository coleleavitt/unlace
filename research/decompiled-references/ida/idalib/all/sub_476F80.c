unsigned __int64 __fastcall sub_476F80(
        __int64 a1,
        signed int a2,
        signed int a3,
        __int64 *a4,
        char a5,
        double a6,
        __m128 a7)
{
  unsigned __int64 v7; // r15
  __int64 v8; // r12
  unsigned __int64 v9; // rax
  __int64 v10; // r9
  __int64 *v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // r8
  int v14; // ecx
  __int64 flags; // rax
  unsigned __int64 v16; // r14
  unsigned int v17; // r13d
  __int64 v18; // rax
  unsigned __int64 v19; // r12
  __int64 v20; // rbx
  unsigned __int64 v21; // rax
  char v22; // r14
  unsigned int v23; // edx
  __int64 v24; // rax
  char v25; // bl
  _BYTE *v26; // rax
  _QWORD *v27; // r14
  void *v28; // rbx
  unsigned __int64 v29; // r12
  __int64 v30; // rax
  _BYTE *v31; // rbx
  void *v32; // rdi
  __int64 v34; // r12
  char v35; // al
  __int64 v36; // rax
  char *v37; // rax
  __int64 v38; // rdx
  unsigned __int64 v39; // rax
  bool v40; // bl
  char v41; // r12
  __int64 v42; // r12
  __int64 v43; // rbx
  unsigned __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rbx
  char *v47; // r14
  char *v48; // r14
  char *v49; // rsi
  _BYTE *v50; // rax
  __int64 v51; // rax
  char v52; // r14
  int v53; // ebx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  unsigned __int64 v58; // rbx
  __int64 v59; // r13
  __int64 v60; // r14
  _QWORD *v61; // rdi
  _QWORD *v62; // rdi
  unsigned __int64 v63; // rax
  __int64 v64; // r8
  __int64 v65; // r9
  _BYTE *v66; // rax
  __int64 v67; // [rsp+8h] [rbp-568h]
  char v68; // [rsp+13h] [rbp-55Dh]
  __int64 v70; // [rsp+18h] [rbp-558h]
  unsigned int v71; // [rsp+18h] [rbp-558h]
  _QWORD *v72; // [rsp+20h] [rbp-550h]
  char *v73; // [rsp+28h] [rbp-548h]
  int v76; // [rsp+38h] [rbp-538h]
  __int64 v77; // [rsp+38h] [rbp-538h]
  unsigned __int64 v78; // [rsp+38h] [rbp-538h]
  int v79; // [rsp+40h] [rbp-530h]
  __int64 *v80; // [rsp+40h] [rbp-530h]
  int v81; // [rsp+40h] [rbp-530h]
  unsigned __int64 v84; // [rsp+58h] [rbp-518h]
  int v85[2]; // [rsp+60h] [rbp-510h] BYREF
  int v86[2]; // [rsp+68h] [rbp-508h] BYREF
  int v87[2]; // [rsp+70h] [rbp-500h] BYREF
  unsigned __int64 v88; // [rsp+78h] [rbp-4F8h] BYREF
  int v89; // [rsp+80h] [rbp-4F0h] BYREF
  void *v90; // [rsp+88h] [rbp-4E8h]
  __int128 v91; // [rsp+90h] [rbp-4E0h]
  void *v92; // [rsp+A0h] [rbp-4D0h]
  __int128 v93; // [rsp+A8h] [rbp-4C8h]
  void *v94; // [rsp+C0h] [rbp-4B0h] BYREF
  __int128 v95; // [rsp+C8h] [rbp-4A8h]
  void *ptr; // [rsp+D8h] [rbp-498h]
  __int128 v97; // [rsp+E0h] [rbp-490h]
  char v98; // [rsp+F0h] [rbp-480h]
  __int64 *v99; // [rsp+100h] [rbp-470h]
  __int64 v100; // [rsp+108h] [rbp-468h]
  signed int v101; // [rsp+110h] [rbp-460h]
  unsigned int v102; // [rsp+114h] [rbp-45Ch]
  unsigned int v103; // [rsp+118h] [rbp-458h]
  __m128i v104[17]; // [rsp+120h] [rbp-450h] BYREF
  char v105; // [rsp+230h] [rbp-340h]
  _BYTE v106[360]; // [rsp+240h] [rbp-330h] BYREF
  char v107[8]; // [rsp+3A8h] [rbp-1C8h] BYREF
  _BYTE v108[360]; // [rsp+3B0h] [rbp-1C0h] BYREF
  _BYTE v109[17]; // [rsp+518h] [rbp-58h] BYREF
  __int64 v110; // [rsp+529h] [rbp-47h]
  __int16 v111; // [rsp+531h] [rbp-3Fh]
  char v112; // [rsp+533h] [rbp-3Dh]
  unsigned __int64 v113; // [rsp+538h] [rbp-38h]

  v113 = __readfsqword(0x28u);
  *(_QWORD *)v85 = a4;
  v7 = sub_46D210(a1, (char **)v86, a4, a3, 1);
  v84 = v7 & 0x600;
  if ( v84 == 512 )
  {
    if ( !under_debugger )
      interr(2104);
    goto LABEL_182;
  }
  v8 = qword_2CCB598;
  if ( v84 != 1536 )
  {
LABEL_3:
    v9 = sub_46D210(a1, (char **)v87, a4, a2, 0);
    v11 = &qword_2CCB598;
    v88 = v9;
    v12 = qword_2CCB598;
    if ( (v9 & 0x600) == 0x200 || (v13 = *(_QWORD *)v86, *(_QWORD *)v87 != *(_QWORD *)v86) || !v84 )
    {
      v14 = 2;
      goto LABEL_7;
    }
LABEL_94:
    v105 = 0;
    v103 = -1;
    v16 = v88;
    v99 = a4;
    v100 = a1;
    v101 = a2;
    v102 = a3;
    goto LABEL_8;
  }
  if ( (sub_3BE900(*(_QWORD **)(qword_2CCB598 + 1672), (unsigned __int64)a4, 1) & 0x100) == 0 )
  {
    v7 = 0;
    sub_46C190(a1, a3, (unsigned __int64)a4, 2);
    v84 = 0;
    goto LABEL_3;
  }
  v39 = sub_46D210(a1, (char **)v87, a4, a2, 0);
  v11 = &qword_2CCB598;
  v88 = v39;
  v12 = qword_2CCB598;
  if ( (v39 & 0x600) == 0x200 )
  {
    v14 = 38;
  }
  else
  {
    v13 = *(_QWORD *)v86;
    if ( *(_QWORD *)v86 == *(_QWORD *)v87 )
      goto LABEL_94;
    v14 = 38;
  }
LABEL_7:
  sub_46C190(a1, a2, (unsigned __int64)a4, v14);
  flags = get_flags_ex(a4, 0);
  v99 = a4;
  v88 = flags;
  v16 = flags;
  v103 = -1;
  v100 = a1;
  v105 = 0;
  v101 = a2;
  v102 = a3;
  if ( !v84 )
  {
    v68 = 0;
    if ( (~(_WORD)flags & 0x600) == 0 )
      goto LABEL_76;
    goto LABEL_39;
  }
LABEL_8:
  if ( v84 == 1536 )
  {
    if ( (~(_WORD)v16 & 0x600) == 0 && *(_QWORD *)v87 == *(_QWORD *)v86 )
    {
      v68 = 0;
      v76 = 8;
      goto LABEL_11;
    }
    v37 = &v106[40];
    *(_QWORD *)&v106[24] = 0;
    *(_QWORD *)&v106[32] = 0;
    memset(v106, 255, 24);
    do
    {
      *(_WORD *)v37 = 0;
      v37 += 40;
      *((_WORD *)v37 - 19) = 0;
      *((_WORD *)v37 - 18) = 0;
      *((_DWORD *)v37 - 2) = 0;
      *((_WORD *)v37 - 17) = 0;
      *((_OWORD *)v37 - 2) = 0;
      *((_QWORD *)v37 - 2) = 0;
    }
    while ( v107 != v37 );
    if ( !(unsigned int)decode_insn(v106, a4, v107, v11, v13, v10, 0.0) )
    {
      v60 = *(_QWORD *)v86;
      if ( !(unsigned __int8)sub_46D740((unsigned __int16 *)v106, (__int64)a4, *(__int64 *)v86, a1, a2, a3, 0.0, a7) )
      {
        if ( !(unsigned __int8)sub_46C440(a1, a2, a3, (unsigned __int64)a4, *(__int64 *)v87, v60) )
        {
          if ( !under_debugger )
            interr(1850);
          goto LABEL_182;
        }
        v61 = *(_QWORD **)(v8 + 1672);
        v88 = 0;
        v7 = sub_3BE900(v61, (unsigned __int64)a4, 0);
LABEL_159:
        v68 = 1;
        LODWORD(v16) = v88;
LABEL_37:
        if ( (~(_WORD)v16 & 0x600) == 0 )
          goto LABEL_76;
        goto LABEL_38;
      }
    }
    v78 = *(_QWORD *)v86;
    if ( *(unsigned __int16 *)&v106[26] != *(_QWORD *)v86 )
    {
      v48 = (char *)a4 + 1;
      v73 = (char *)a4 + *(_QWORD *)v86;
      while ( v48 < v73 )
      {
        v49 = v48++;
        sub_3E3B20(*(_QWORD **)(v12 + 1672), v49);
      }
      v50 = &v108[40];
      *(_OWORD *)&v108[24] = 0u;
      memset(v108, 255, 24);
      do
      {
        *(_WORD *)v50 = 0;
        v50 += 40;
        *((_WORD *)v50 - 19) = 0;
        *((_WORD *)v50 - 18) = 0;
        *((_DWORD *)v50 - 2) = 0;
        *((_WORD *)v50 - 17) = 0;
        *((_OWORD *)v50 - 2) = 0;
        *((_QWORD *)v50 - 2) = 0;
      }
      while ( v109 != v50 );
      qmemcpy(v106, v108, sizeof(v106));
      decode_insn(v106, a4, v38, 0, 0, 0, 0.0);
      if ( v78 != *(unsigned __int16 *)&v106[26] )
      {
        sub_46D740((unsigned __int16 *)v106, (__int64)a4, v78, a1, a2, a3, 0.0, a7);
        if ( v78 != *(unsigned __int16 *)&v106[26] )
        {
          if ( (unsigned __int8)sub_478C80(a1, (int)v85) || (unsigned __int8)sub_478C80(a1, (int)v85) )
            return *(_QWORD *)v85;
          if ( (unsigned __int8)sub_46C440(a1, a2, a3, (unsigned __int64)a4, *(__int64 *)v87, v78) )
          {
            v62 = *(_QWORD **)(v8 + 1672);
            v88 = 0;
            v7 = sub_3BE900(v62, (unsigned __int64)a4, 0);
            goto LABEL_159;
          }
          v51 = *(unsigned __int16 *)&v106[26];
          if ( v78 < *(unsigned __int16 *)&v106[26] )
          {
            v72 = *(_QWORD **)(switch_dbctx(*(int *)(a1 + 4LL * a3 + 16)) + 1672);
            v71 = sub_46AA70(a1);
            if ( v71 != -1 )
            {
              v63 = sub_46CF20(v72, (unsigned __int64)v73, 0);
              v94 = v73;
              *(_QWORD *)&v95 = &v73[v63];
              sub_51BF30(a1, (unsigned int)a2, (unsigned int)a3, v71, &v94);
            }
            *(_QWORD *)v85 = sub_476F80(a1, (unsigned int)a2, (unsigned int)a3, v73, 1);
            switch_dbctx(*(int *)(a1 + 4LL * a2 + 16));
            v66 = &v108[40];
            *(_OWORD *)&v108[24] = 0u;
            memset(v108, 255, 24);
            do
            {
              *(_WORD *)v66 = 0;
              v66 += 40;
              *((_WORD *)v66 - 19) = 0;
              *((_WORD *)v66 - 18) = 0;
              *((_DWORD *)v66 - 2) = 0;
              *((_WORD *)v66 - 17) = 0;
              *((_OWORD *)v66 - 2) = 0;
              *((_QWORD *)v66 - 2) = 0;
            }
            while ( v109 != v66 );
            qmemcpy(v106, v108, sizeof(v106));
            decode_insn(v106, a4, 0, 0, v64, v65, 0.0);
            v51 = *(unsigned __int16 *)&v106[26];
          }
          if ( v78 != v51 )
          {
            *(_QWORD *)&v106[16] = -1;
            LODWORD(v94) = -1;
            v52 = v106[34] & 1;
            v53 = *(_DWORD *)(a1 + 4LL * a3 + 16);
            if ( get_dbctx_qty() )
              LODWORD(v94) = get_dbctx_id();
            *(_QWORD *)&v95 = switch_dbctx(v53);
            if ( *(char *)(v8 + 938) >= 0
              || v78 != (int)decode_insn(v106, a4, v54, v55, v56, v57, 0.0)
              || v52 == (v106[34] & 1) )
            {
              sub_378C70(
                (__int64)"The item at %a is marked as code, but its length (%d) differs from the instruction length (%d)\n"
                         "(in %s).\n"
                         "Please fix this issue and rerun merge\n",
                0.0,
                (_DWORD)a4,
                v78,
                (const char *)*(unsigned __int16 *)&v106[26]);
            }
            v58 = (int)v94;
            if ( (_DWORD)v94 != -1 && v58 < get_dbctx_qty() && (unsigned __int8)sub_3FB5F0() )
              switch_dbctx((int)v94);
          }
        }
      }
    }
    v68 = sub_46C590(a1, a2, (__int64)v106);
    if ( v68 )
    {
      v76 = 8;
      v88 = get_flags_ex(a4, 0);
      v16 = v88;
      goto LABEL_11;
    }
    if ( !under_debugger )
      interr(1851);
LABEL_182:
    BUG();
  }
  if ( v84 == 1024 )
  {
    v40 = 1;
    if ( (v16 & 0x600) == 0x400 )
      v40 = *(_QWORD *)v87 != *(_QWORD *)v86;
    v103 = 0;
    v81 = *(_DWORD *)(qword_2CCB598 + 88);
    if ( (unsigned __int8)sub_46A0E0(v104, a1, a3, (unsigned __int64)a4, 0, v7) )
    {
      v41 = sub_475520(v100, v104[0].m128i_i16, v7, v103, v102, v101, 1);
      if ( v41 )
      {
        if ( (v7 & 0xF0000000) != 0x60000000 && !(unsigned __int8)is_enum(v7, 0)
          || (v59 = v104[0].m128i_i64[0], v104[0].m128i_i64[0] == -1) )
        {
LABEL_106:
          v105 = v41;
          switch_dbctx(v81);
          if ( !v40 && (((unsigned int)v7 ^ (unsigned int)v16) & 0xF0000600) == 0 )
          {
            v42 = v88;
            v43 = *(int *)(qword_2CCB598 + 88);
            v68 = sub_46A0E0((__m128i *)v108, v100, v101, (unsigned __int64)v99, v103, v88);
            if ( v68 == v105 )
            {
              if ( !v68 )
              {
                switch_dbctx(v43);
                v16 = v88;
                v76 = 1;
                goto LABEL_11;
              }
              if ( !sub_3C54F0((int *)v108, (__int64)v104, v42, v103) )
              {
                switch_dbctx(v43);
                v68 = 0;
                v16 = v88;
                v76 = 1;
                goto LABEL_11;
              }
            }
            switch_dbctx(v43);
          }
          v44 = v7 & 0xFFFFFFFFFF0FFFFFLL;
          v45 = (unsigned int)v7 & 0xF0000000;
          v88 = v7 & 0xFFFFFFFFFF0FFFFFLL;
          if ( v105 )
          {
            v46 = v104[0].m128i_i64[0];
            if ( v45 != 1610612736 )
            {
              if ( v45 == 1342177280 )
              {
                v46 = v104[0].m128i_i32[0];
LABEL_114:
                v47 = *(char **)v86;
                if ( (unsigned __int8)sub_46C840(a1, a2, a4, v44, *(char **)v86, (void *)v46)
                  || (sub_46C190(a1, a2, (unsigned __int64)a4, 6),
                      (unsigned __int8)sub_46C840(a1, a2, a4, v88, v47, (void *)v46)) )
                {
                  v68 = 1;
                  v88 = get_flags_ex(a4, 0);
                  v16 = v88;
                  v76 = 1;
                  goto LABEL_11;
                }
                if ( !under_debugger )
                  interr(1852);
                goto LABEL_182;
              }
              v46 = -1;
              if ( v45 != 3489660928LL )
                goto LABEL_114;
              v46 = (int)(v104[0].m128i_u16[0] | 0xFFFF0000);
            }
            if ( v46 != -1 )
              goto LABEL_114;
          }
          else if ( v45 != 1610612736 && v45 != 3489660928LL )
          {
            goto LABEL_144;
          }
          v44 = v7 & 0xF0FFFFF;
          v88 = v44;
LABEL_144:
          v46 = -1;
          goto LABEL_114;
        }
        switch_dbctx(*(int *)(v100 + 4LL * v101 + 16));
        v94 = nullptr;
        if ( (unsigned __int8)get_type_by_tid(&v94, v59) && get_tinfo_size(0, v94, 0) != -1 )
        {
          clear_tinfo_t(&v94);
          goto LABEL_106;
        }
        clear_tinfo_t(&v94);
      }
    }
    v41 = 0;
    goto LABEL_106;
  }
  v76 = 1;
  v68 = *(_QWORD *)v86 != *(_QWORD *)v87;
LABEL_11:
  v17 = 0;
  while ( 1 )
  {
    v18 = 15LL << (4 * ((unsigned __int8)v17 + ((int)v17 > 1) + 5));
    v19 = v16 & v18;
    v20 = v7 & v18;
    if ( v84 != 1024 || ((((unsigned int)v7 & 0xF0000000) - 1342177280LL) & 0xFFFFFFFFEFFFFFFFLL) != 0 )
    {
      v21 = (v7 | v16) & v18;
    }
    else
    {
      v21 = v16 & v18;
      v20 = 0;
    }
    if ( !v21 )
      goto LABEL_21;
    v103 = v17;
    v79 = *(_DWORD *)(qword_2CCB598 + 88);
    if ( !(unsigned __int8)sub_46A0E0(v104, v100, v102, (unsigned __int64)v99, v17, v7) )
      goto LABEL_16;
    v22 = sub_475520(v100, v104[0].m128i_i16, v7, v103, v102, v101, 1);
    if ( !v22 )
      goto LABEL_16;
    if ( v84 == 1024 && (v7 & 0xF0000000) == 0x60000000 || (unsigned __int8)is_enum(v7, v17) )
    {
      v67 = v104[0].m128i_i64[0];
      if ( v104[0].m128i_i64[0] != -1 )
      {
        switch_dbctx(*(int *)(v100 + 4LL * v101 + 16));
        v94 = nullptr;
        if ( !(unsigned __int8)get_type_by_tid(&v94, v67) || get_tinfo_size(0, v94, 0) == -1 )
        {
          clear_tinfo_t(&v94);
LABEL_16:
          v22 = 0;
          goto LABEL_17;
        }
        clear_tinfo_t(&v94);
      }
    }
LABEL_17:
    v105 = v22;
    switch_dbctx(v79);
    v80 = *(__int64 **)(switch_dbctx(*(int *)(a1 + 4LL * a2 + 16)) + 1672);
    if ( v20 == v19 )
    {
      v70 = v88;
      v34 = *(int *)(qword_2CCB598 + 88);
      v35 = sub_46A0E0((__m128i *)v108, v100, v101, (unsigned __int64)v99, v103, v88);
      if ( v35 == v105 && (!v35 || !sub_3C54F0((int *)v108, (__int64)v104, v70, v103)) )
      {
        switch_dbctx(v34);
        goto LABEL_21;
      }
      switch_dbctx(v34);
    }
    if ( v20 )
    {
      if ( !(unsigned __int8)sub_3D5790(*v80, (unsigned __int64)a4, v20, v17) )
      {
        if ( !under_debugger )
          interr(1853);
        goto LABEL_182;
      }
    }
    else
    {
      sub_3D0D10(v80, a4, v17);
    }
    if ( v105 )
      break;
LABEL_21:
    if ( v76 == ++v17 )
      goto LABEL_35;
LABEL_22:
    v16 = v88;
  }
  v23 = v17++;
  sub_3CA2F0(v80, (__int64)a4, v23, v20, v104, 1);
  if ( v76 != v17 )
    goto LABEL_22;
LABEL_35:
  v24 = get_flags_ex(a4, 0);
  v16 = v24;
  if ( v84 != 1536 )
  {
    v88 = v24;
    goto LABEL_37;
  }
  v36 = v24 & 0x600;
  if ( (v7 & 0x40000000) != 0 )
  {
    v16 |= 0x40000000u;
    v88 = v16;
    if ( v36 != 1536 )
      goto LABEL_80;
LABEL_76:
    if ( (v16 & 0x10000000) != 0 )
    {
      v25 = 0;
      switch_dbctx(*(int *)(a1 + 4LL * a3 + 16));
      v89 = 0;
      v90 = nullptr;
      v92 = nullptr;
      v91 = 0;
      v93 = 0;
      goto LABEL_41;
    }
LABEL_38:
    if ( (~(_WORD)v7 & 0x600) == 0 )
      goto LABEL_80;
LABEL_39:
    switch_dbctx(*(int *)(a1 + 4LL * a3 + 16));
    v89 = 0;
    v90 = nullptr;
    v92 = nullptr;
    v91 = 0;
    v93 = 0;
  }
  else
  {
    v16 &= ~0x40000000uLL;
    v88 = v16;
    if ( v36 == 1536 )
      goto LABEL_76;
LABEL_80:
    switch_dbctx(*(int *)(a1 + 4LL * a3 + 16));
    v89 = 0;
    v90 = nullptr;
    v92 = nullptr;
    v91 = 0;
    v93 = 0;
    if ( (v7 & 0x10000000) != 0 )
    {
      v25 = 0;
      goto LABEL_41;
    }
  }
  sub_46AE10(&v89, (__int64)a4, v7);
  v25 = 1;
LABEL_41:
  *(_DWORD *)v108 = -1;
  memset(&v108[16], 0, 24);
  v26 = &v108[40];
  do
  {
    *(_QWORD *)v26 = 0;
    v26 += 24;
    *((_OWORD *)v26 - 1) = 0;
  }
  while ( &v108[232] != v26 );
  v109[16] = 0;
  *(_QWORD *)&v108[232] = -1;
  v111 = 0;
  *(__m128i *)&v108[248] = _mm_load_si128((const __m128i *)&xmmword_23A7890);
  *(_QWORD *)&v108[240] = &loc_800000;
  memset(&v108[280], 0, 24);
  *(_QWORD *)&v108[304] = 0xFFFFFFFFLL;
  *(_QWORD *)&v108[312] = 0;
  *(_QWORD *)&v108[320] = 2;
  *(_QWORD *)&v108[328] = -1;
  memset(&v108[336], 0, 24);
  v112 = 0;
  *(_QWORD *)&v108[4] = 0;
  *(_DWORD *)&v108[12] = 0;
  v110 = 0;
  *(_OWORD *)&v108[264] = -1;
  sub_46B730((__int64)v108, (unsigned __int64)a4, v7);
  v98 = 0;
  v94 = nullptr;
  ptr = nullptr;
  v95 = 0;
  v97 = 0;
  sub_3C5AF0((__int64)&v94, (__int64)a4, v7);
  v27 = *(_QWORD **)(switch_dbctx(*(int *)(a1 + 4LL * a2 + 16)) + 1672);
  if ( v25 )
    sub_46AFC0(&v89, (__int64 *)&v88, a4);
  sub_46BAA0((__int64)v108, &v88, (__int64)a4);
  sub_3D2050((__int64)&v94, (__int64 *)&v88, a4);
  v28 = a4;
  sub_3D07C0(v27, a4, v88);
  v77 = *(_QWORD *)v86;
  v29 = (unsigned __int64)a4 + *(_QWORD *)v86;
  if ( (v88 & 0x600) == 0 )
  {
    while ( 1 )
    {
      v28 = (void *)sub_46CB10(v27, (unsigned __int64)v28, 1u, v29);
      if ( (unsigned __int64)v28 >= v29 )
        break;
      v30 = ea2node(v28);
      netnode_supdel(v30, 15, 65);
      set_name((int)v28, (void *)&byte_22F0C30);
      set_name((int)v28, (void *)&byte_22F0C30);
      sub_3D12D0(v28);
    }
  }
  if ( a5 || v68 )
    sub_459560(a1, 6u, a2, a3, a4, v7, v77);
  if ( v29 < *(_QWORD *)v85 )
    v29 = *(_QWORD *)v85;
  if ( ptr )
  {
    *(_QWORD *)&v97 = 0;
    qfree(ptr);
  }
  if ( v94 )
  {
    *(_QWORD *)&v95 = 0;
    qfree(v94);
  }
  if ( *(_QWORD *)&v108[336] )
  {
    *(_QWORD *)&v108[344] = 0;
    qfree(*(void **)&v108[336]);
  }
  v31 = &v108[208];
  do
  {
    v32 = *(void **)v31;
    if ( *(_QWORD *)v31 )
    {
      *((_QWORD *)v31 + 1) = 0;
      qfree(v32);
    }
    v31 -= 24;
  }
  while ( v31 != &v108[16] );
  if ( *(_QWORD *)&v108[16] )
  {
    *(_QWORD *)&v108[24] = 0;
    qfree(*(void **)&v108[16]);
  }
  if ( v92 )
  {
    *(_QWORD *)&v93 = 0;
    qfree(v92);
  }
  if ( v90 )
  {
    *(_QWORD *)&v91 = 0;
    qfree(v90);
  }
  return v29;
}
