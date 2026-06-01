__int64 __fastcall sub_4525E0(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v6; // rax
  unsigned __int8 (__fastcall *v7)(_QWORD); // rax
  _QWORD *v8; // rdi
  char v9; // r12
  __int64 v10; // r14
  unsigned int v11; // r15d
  unsigned __int32 v13; // ecx
  void *v14; // r14
  void *v15; // rdi
  __m128i v16; // xmm0
  unsigned __int64 v17; // rcx
  __int64 v18; // r14
  char v19; // al
  int v20; // eax
  _BYTE *v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  void *v26; // rbp
  void *v27; // rdi
  __m128i v28; // xmm0
  int v29; // eax
  _QWORD *v30; // rbx
  _QWORD *v31; // rbp
  void *v32; // rdi
  _QWORD **v33; // rbx
  void *v34; // rdi
  unsigned int v35; // eax
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 *v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rax
  unsigned __int64 v42; // rsi
  __int64 (*v43)(); // rax
  __int64 (__fastcall *v44)(__int64 **, unsigned __int64, __int64 *); // rax
  __int64 **v45; // rdi
  __int64 v46; // rax
  __int64 (*v47)(); // rdx
  __int64 (__fastcall *v48)(unsigned __int16 *, _QWORD *); // rax
  __int64 v49; // rax
  _QWORD *v50; // rbp
  unsigned __int64 v51; // r12
  __int64 v52; // r15
  __int64 v53; // rdi
  _QWORD *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  _QWORD *v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rdx
  _QWORD *v61; // rbp
  _QWORD *v62; // r15
  void *v63; // rdi
  _QWORD **v64; // rbp
  void *v65; // rdi
  _QWORD *v66; // rbp
  _QWORD *v67; // r12
  void *v68; // rdi
  _QWORD **v69; // rbp
  void *v70; // rdi
  unsigned __int64 v71; // [rsp+0h] [rbp-168h]
  __int64 v73; // [rsp+10h] [rbp-158h]
  void *src; // [rsp+18h] [rbp-150h]
  __m128i v75; // [rsp+20h] [rbp-148h] BYREF
  __m128i v76; // [rsp+30h] [rbp-138h] BYREF
  size_t n; // [rsp+40h] [rbp-128h]
  int v78; // [rsp+4Ch] [rbp-11Ch]
  _QWORD *v79; // [rsp+50h] [rbp-118h]
  __int64 v80; // [rsp+58h] [rbp-110h]
  unsigned __int64 *v81; // [rsp+68h] [rbp-100h] BYREF
  __int64 v82[3]; // [rsp+70h] [rbp-F8h] BYREF
  bool v83; // [rsp+88h] [rbp-E0h]
  int v84; // [rsp+8Ch] [rbp-DCh]
  __int128 v85; // [rsp+90h] [rbp-D8h]
  __int64 v86; // [rsp+A0h] [rbp-C8h]
  __int64 v87; // [rsp+A8h] [rbp-C0h]
  int v88; // [rsp+B0h] [rbp-B8h]
  __int64 v89; // [rsp+B8h] [rbp-B0h] BYREF
  int v90; // [rsp+C0h] [rbp-A8h] BYREF
  void *v91; // [rsp+C8h] [rbp-A0h]
  int *v92; // [rsp+D0h] [rbp-98h]
  int *v93; // [rsp+D8h] [rbp-90h]
  __int64 v94; // [rsp+E0h] [rbp-88h]
  int v95; // [rsp+F0h] [rbp-78h] BYREF
  void *v96; // [rsp+F8h] [rbp-70h]
  int *v97; // [rsp+100h] [rbp-68h]
  int *v98; // [rsp+108h] [rbp-60h]
  __int64 v99; // [rsp+110h] [rbp-58h]
  _BYTE *v100; // [rsp+118h] [rbp-50h]
  __int64 *v101; // [rsp+120h] [rbp-48h]
  unsigned __int64 v102; // [rsp+128h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 872);
  v102 = __readfsqword(0x28u);
  src = nullptr;
  if ( v4 )
  {
    src = (void *)qalloc_or_throw(40 * v4);
    memcpy(src, *(const void **)(a1 + 864), 40 * v4);
  }
  v6 = *(_QWORD *)(a1 + 848);
  *(_BYTE *)(a1 + 792) = 0;
  v71 = v6;
  v78 = a3 & 0x10;
  LODWORD(n) = a3 & 0xF;
  if ( (a3 & 0xF) == 0 )
  {
    v7 = *(unsigned __int8 (__fastcall **)(_QWORD))(a1 + 536);
    v8 = (_QWORD *)(a1 + *(_QWORD *)(a1 + 544));
    if ( ((unsigned __int8)v7 & 1) != 0 )
      v7 = *(unsigned __int8 (__fastcall **)(_QWORD))((char *)v7 + *v8 - 1);
    if ( v7(v8) )
    {
      v9 = 0;
      *(_QWORD *)(a1 + 384) = a2;
      v10 = a2;
LABEL_8:
      v11 = *(unsigned __int8 *)(a1 + 792);
      if ( !(_BYTE)v11 )
      {
        v73 = (int)n;
        goto LABEL_14;
      }
    }
    else
    {
LABEL_49:
      v11 = 0;
    }
    goto LABEL_9;
  }
  v73 = (int)n;
  if ( *(_BYTE *)(a1 + (int)n + 512) )
  {
    v10 = a2;
    v9 = 0;
    goto LABEL_14;
  }
  v79 = (_QWORD *)(a1 + 864);
  v76.m128i_i32[0] = a3 & 0x20;
  v82[0] = a2;
  v83 = v76.m128i_i32[0] != 0;
  v75.m128i_i64[0] = (__int64)&v90;
  v92 = &v90;
  v93 = &v90;
  v82[1] = a1 + 864;
  v82[2] = a1;
  v84 = 200;
  v86 = a2;
  v87 = -1;
  v88 = 0;
  v90 = 0;
  v91 = nullptr;
  v94 = 0;
  v95 = 0;
  v96 = nullptr;
  v97 = &v95;
  v98 = &v95;
  v99 = 0;
  v85 = 0;
  *(_QWORD *)&v85 = get_func(a2);
  if ( !(_QWORD)v85 )
  {
    *((_QWORD *)&v85 + 1) = getseg(v86);
    if ( !*((_QWORD *)&v85 + 1) )
    {
      if ( !under_debugger )
        interr(10183);
      BUG();
    }
  }
  v100 = (_BYTE *)(a1 + 793);
  v101 = (__int64 *)(a1 + 800);
  v80 = a1 + 16;
  v18 = a1 + 16LL * (int)n + 536;
  v19 = *(_BYTE *)(a1 + 792);
LABEL_32:
  if ( !v19 )
  {
    v20 = sub_4514E0(v82);
    v21 = v100;
    if ( !*v100 )
      goto LABEL_36;
    if ( v20 == 21 )
      goto LABEL_37;
LABEL_35:
    *v21 = 0;
    goto LABEL_36;
  }
  while ( !v76.m128i_i32[0] )
  {
    v50 = v91;
    v51 = v82[0];
    v52 = v87;
    if ( v91 )
    {
      v53 = v75.m128i_i64[0];
      v54 = v91;
      do
      {
        while ( 1 )
        {
          v55 = v54[2];
          v56 = v54[3];
          if ( v82[0] < v54[4] )
            break;
          v54 = (_QWORD *)v54[3];
          if ( !v56 )
            goto LABEL_77;
        }
        v53 = (__int64)v54;
        v54 = (_QWORD *)v54[2];
      }
      while ( v55 );
LABEL_77:
      if ( (int *)v53 == v92 )
      {
        if ( v87 == -1 )
        {
          v87 = v82[0];
          v52 = v82[0];
        }
LABEL_89:
        v58 = (_QWORD *)v75.m128i_i64[0];
        do
        {
          while ( 1 )
          {
            v59 = v50[2];
            v60 = v50[3];
            if ( v50[4] >= v51 )
              break;
            v50 = (_QWORD *)v50[3];
            if ( !v60 )
              goto LABEL_93;
          }
          v58 = v50;
          v50 = (_QWORD *)v50[2];
        }
        while ( v59 );
LABEL_93:
        if ( v58 != (_QWORD *)v75.m128i_i64[0] && v51 >= v58[4] )
          goto LABEL_96;
        goto LABEL_95;
      }
    }
    else
    {
      v53 = v75.m128i_i64[0];
      if ( v92 == (int *)v75.m128i_i64[0] )
      {
        if ( v87 == -1 )
        {
          v87 = v82[0];
          v52 = v82[0];
        }
        goto LABEL_102;
      }
    }
    v57 = std::_Rb_tree_decrement(v53);
    if ( *(_QWORD *)(v57 + 40) >= v51 )
    {
      if ( v52 != -1 )
        *(_QWORD *)(v57 + 40) = v52;
      goto LABEL_81;
    }
    if ( v52 == -1 )
    {
      v87 = v51;
      v52 = v51;
    }
    if ( v50 )
      goto LABEL_89;
LABEL_102:
    v58 = (_QWORD *)v75.m128i_i64[0];
LABEL_95:
    v81 = (unsigned __int64 *)v82;
    v58 = sub_44A1C0(&v89, v58, &v81);
LABEL_96:
    v58[5] = v52;
LABEL_81:
    v20 = sub_4512E0((__int64)v82);
    v21 = v100;
    if ( *v100 )
      goto LABEL_35;
LABEL_36:
    if ( !v20 )
      break;
LABEL_37:
    if ( (~((unsigned __int16)get_flags_ex(v82[0], 4) >> 8) & 6) != 0
      || !(unsigned int)decode_insn(v80, v82[0], v22, v23, v24, v25, 0.0) )
    {
      break;
    }
    v38 = v87;
    v39 = v101;
    if ( v87 == -1 )
      v38 = v82[0];
    *v101 = v38;
    v40 = *(int *)(a1 + 528);
    if ( (_DWORD)v40 != -1 && !*(_BYTE *)(*(_QWORD *)(a1 + 864) + 40 * v40 + 1) )
    {
LABEL_83:
      v19 = *(_BYTE *)(a1 + 792);
      goto LABEL_32;
    }
    v41 = *(_QWORD *)a1;
    *(_BYTE *)(a1 + 792) = 0;
    v42 = (unsigned __int64)sub_449F30;
    v43 = *(__int64 (**)())(v41 + 168);
    if ( v43 == sub_449F30
      || (v42 = (unsigned int)n,
          ((unsigned __int8 (__fastcall *)(__int64, _QWORD, __int64 *))v43)(a1, (unsigned int)n, v39)) )
    {
      v44 = *(__int64 (__fastcall **)(__int64 **, unsigned __int64, __int64 *))v18;
      v45 = (__int64 **)(a1 + *(_QWORD *)(v18 + 8));
      if ( (*(_QWORD *)v18 & 1) != 0 )
      {
        v39 = *v45;
        v44 = *(__int64 (__fastcall **)(__int64 **, unsigned __int64, __int64 *))((char *)v44 + (_QWORD)*v45 - 1);
      }
      v9 = v44(v45, v42, v39);
      if ( v9 )
      {
        v10 = *(_QWORD *)(a1 + 32);
        v61 = v96;
        *(_QWORD *)(a1 + 8 * v73 + 384) = v10;
        while ( v61 )
        {
          v62 = v61;
          sub_44AE10((_QWORD *)v61[3]);
          v63 = (void *)v61[5];
          v61 = (_QWORD *)v61[2];
          if ( v63 )
          {
            v62[6] = 0;
            qfree(v63);
          }
          operator delete(v62, 0x48u);
        }
        v64 = (_QWORD **)v91;
        if ( v91 )
        {
          do
          {
            sub_44A540(v64[3]);
            v65 = v64;
            v64 = (_QWORD **)v64[2];
            operator delete(v65, 0x30u);
          }
          while ( v64 );
        }
        goto LABEL_8;
      }
    }
    if ( !*(_BYTE *)(a1 + 792) )
    {
      v46 = *(_QWORD *)a1;
      v47 = *(__int64 (**)())(*(_QWORD *)a1 + 16LL);
      if ( v47 != sub_449F10 )
      {
        if ( ((unsigned __int8 (__fastcall *)(__int64, _QWORD *))v47)(a1, v79) )
          goto LABEL_68;
        v46 = *(_QWORD *)a1;
      }
      v48 = *(__int64 (__fastcall **)(unsigned __int16 *, _QWORD *))(v46 + 24);
      if ( v48 == j__check_spoiled_jpt )
        check_spoiled_jpt((unsigned __int16 *)a1, v79);
      else
        v48((unsigned __int16 *)a1, v79);
LABEL_68:
      v49 = *(int *)(a1 + 528);
      if ( (_DWORD)v49 == -1 || *(_BYTE *)(*(_QWORD *)(a1 + 864) + 40 * v49 + 1) )
        goto LABEL_83;
      *(_BYTE *)(a1 + 792) = 1;
    }
  }
  v26 = nullptr;
  if ( v4 )
  {
    v26 = (void *)qalloc_or_throw(40 * v4);
    memcpy(v26, src, 40 * v4);
  }
  v27 = *(void **)(a1 + 864);
  v28 = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v4);
  if ( v27 )
  {
    *(_QWORD *)(a1 + 872) = 0;
    v75 = v28;
    qfree(v27);
    v28 = _mm_load_si128(&v75);
  }
  v29 = v78;
  *(_QWORD *)(a1 + 864) = v26;
  *(__m128i *)(a1 + 872) = v28;
  if ( !v29 )
  {
    v30 = v96;
    if ( v96 )
    {
      do
      {
        v31 = v30;
        sub_44AE10((_QWORD *)v30[3]);
        v32 = (void *)v30[5];
        v30 = (_QWORD *)v30[2];
        if ( v32 )
        {
          v31[6] = 0;
          qfree(v32);
        }
        operator delete(v31, 0x48u);
      }
      while ( v30 );
    }
    v33 = (_QWORD **)v91;
    if ( v91 )
    {
      do
      {
        sub_44A540(v33[3]);
        v34 = v33;
        v33 = (_QWORD **)v33[2];
        operator delete(v34, 0x30u);
      }
      while ( v33 );
    }
    goto LABEL_49;
  }
  sub_44D2A0((__int64 *)(a1 + 840), v71);
  v66 = v96;
  if ( v96 )
  {
    do
    {
      v67 = v66;
      sub_44AE10((_QWORD *)v66[3]);
      v68 = (void *)v66[5];
      v66 = (_QWORD *)v66[2];
      if ( v68 )
      {
        v67[6] = 0;
        qfree(v68);
      }
      operator delete(v67, 0x48u);
    }
    while ( v66 );
  }
  v69 = (_QWORD **)v91;
  if ( v91 )
  {
    do
    {
      sub_44A540(v69[3]);
      v70 = v69;
      v69 = (_QWORD **)v69[2];
      operator delete(v70, 0x30u);
    }
    while ( v69 );
  }
  v10 = a2;
  v9 = 0;
LABEL_14:
  v75.m128i_i8[0] = (v78 & 0x10) != 0;
  n = 40 * v4;
  while ( 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( *(_BYTE *)(4 * v73 + *(_QWORD *)(a1 + 808) + v13) )
      {
        v76.m128i_i32[0] = v13;
        v35 = sub_4525E0(a1, v10);
        v13 = v76.m128i_i32[0];
        v11 = v35;
        if ( !(_BYTE)v35 )
          break;
      }
      if ( ++v13 == 4 )
      {
        v11 = 1;
        break;
      }
    }
    v14 = nullptr;
    if ( v4 )
    {
      v14 = (void *)qalloc_or_throw(n);
      memcpy(v14, src, n);
    }
    v15 = *(void **)(a1 + 864);
    v16 = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v4);
    if ( v15 )
    {
      *(_QWORD *)(a1 + 872) = 0;
      v76 = v16;
      qfree(v15);
      v16 = _mm_load_si128(&v76);
    }
    *(_QWORD *)(a1 + 864) = v14;
    *(__m128i *)(a1 + 872) = v16;
    if ( (_BYTE)v11 == 1 || !v75.m128i_i8[0] )
      break;
    if ( !v9 )
      goto LABEL_49;
    *(_QWORD *)(a1 + 8 * v73 + 384) = -1;
    v17 = *(_QWORD *)(a1 + 848);
    if ( v17 < v71 )
    {
      v36 = *(_QWORD *)(a1 + 840);
      if ( *(_QWORD *)(a1 + 856) < v71 )
      {
        v37 = qvector_reserve(a1 + 840, v36, v71, 8);
        *(_QWORD *)(a1 + 840) = v37;
        v17 = *(_QWORD *)(a1 + 848);
        v36 = v37;
      }
      memset((void *)(v36 + 8 * v17), 0, 8 * (v71 - v17));
      *(_QWORD *)(a1 + 848) = v71;
    }
    else if ( v71 != v17 )
    {
      *(_QWORD *)(a1 + 848) = v71;
    }
    v10 = a2;
    v9 = 0;
  }
LABEL_9:
  if ( src )
    qfree(src);
  return v11;
}
