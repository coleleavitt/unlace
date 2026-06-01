__int64 __fastcall sub_E2200(int a1, char a2)
{
  unsigned int v2; // r12d
  __int64 v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // ecx
  __int64 v9; // rsi
  __int64 v10; // rsi
  _DWORD *v11; // rcx
  unsigned int *v12; // r15
  int *v13; // r8
  unsigned int v14; // r14d
  int *i; // rbp
  unsigned int v16; // edx
  char v17; // di
  int *v18; // rax
  unsigned int v19; // ebp
  unsigned int v20; // edx
  char v21; // cl
  int *v22; // rax
  __int64 v23; // rcx
  unsigned __int64 *v24; // rax
  unsigned int v25; // r15d
  void *v26; // rax
  int *v27; // rbp
  __int64 v28; // rsi
  unsigned int v29; // edx
  char v30; // cl
  int *v31; // rax
  unsigned int *v32; // rcx
  unsigned int *v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rdi
  int v36; // ebp
  __int64 v37; // rax
  unsigned int v38; // r14d
  unsigned int v39; // eax
  __int64 v40; // rcx
  unsigned int *v41; // rdx
  unsigned int *v42; // rax
  int *v43; // r15
  unsigned int v44; // ecx
  char v45; // si
  int *v46; // rax
  char *v47; // r14
  __int64 v48; // rbp
  char *v49; // r12
  unsigned __int64 v50; // rdx
  char *v51; // rbp
  unsigned int v52; // ecx
  unsigned int v53; // edx
  char *v54; // rax
  char *v55; // rsi
  __int64 v56; // rbp
  __int64 bpt_kernel_interface; // rax
  __int64 v58; // rdx
  _DWORD *v59; // rax
  __int64 v60; // rdx
  unsigned int v61; // eax
  unsigned int v62; // ebp
  int *v63; // r8
  int v64; // [rsp+0h] [rbp-298h]
  int *v65; // [rsp+0h] [rbp-298h]
  _DWORD *v66; // [rsp+8h] [rbp-290h]
  double v67[2]; // [rsp+18h] [rbp-280h] BYREF
  char v68; // [rsp+2Ah] [rbp-26Eh]
  bool v69; // [rsp+2Bh] [rbp-26Dh]
  unsigned int v70; // [rsp+2Ch] [rbp-26Ch]
  void *src; // [rsp+30h] [rbp-268h] BYREF
  __int128 v72; // [rsp+38h] [rbp-260h]
  __int64 v73; // [rsp+50h] [rbp-248h]
  __int128 v74; // [rsp+58h] [rbp-240h]
  _DWORD *v75; // [rsp+70h] [rbp-228h] BYREF
  __int128 v76; // [rsp+78h] [rbp-220h]
  __int64 v77; // [rsp+88h] [rbp-210h]
  int v78; // [rsp+90h] [rbp-208h]
  int v79; // [rsp+A8h] [rbp-1F0h] BYREF
  int *v80; // [rsp+B0h] [rbp-1E8h]
  int *v81; // [rsp+B8h] [rbp-1E0h]
  int *v82; // [rsp+C0h] [rbp-1D8h]
  __int64 v83; // [rsp+C8h] [rbp-1D0h]
  int v84; // [rsp+D8h] [rbp-1C0h] BYREF
  int *v85; // [rsp+E0h] [rbp-1B8h]
  int *v86; // [rsp+E8h] [rbp-1B0h]
  int *v87; // [rsp+F0h] [rbp-1A8h]
  __int64 v88; // [rsp+F8h] [rbp-1A0h]
  __m128 v89; // [rsp+100h] [rbp-198h] BYREF
  __int64 v90; // [rsp+110h] [rbp-188h]
  __int16 v91; // [rsp+118h] [rbp-180h]
  __m128i si128; // [rsp+11Ch] [rbp-17Ch]
  __int64 v93; // [rsp+130h] [rbp-168h]
  int v94; // [rsp+138h] [rbp-160h]
  __int64 v95; // [rsp+140h] [rbp-158h]
  int v96; // [rsp+148h] [rbp-150h]
  __int64 v97; // [rsp+150h] [rbp-148h]
  int v98; // [rsp+158h] [rbp-140h]
  __int64 v99; // [rsp+160h] [rbp-138h]
  int v100; // [rsp+168h] [rbp-130h]
  __int64 v101; // [rsp+170h] [rbp-128h]
  __int64 v102; // [rsp+180h] [rbp-118h]
  __int64 v103; // [rsp+188h] [rbp-110h]
  __int64 v104; // [rsp+190h] [rbp-108h]
  char v105; // [rsp+198h] [rbp-100h] BYREF
  unsigned __int64 v106; // [rsp+258h] [rbp-40h] BYREF

  v68 = a2;
  v106 = __readfsqword(0x28u);
  v2 = 0;
  if ( dword_2515A4 >= 0 || a1 == 0 )
    return v2;
  v4 = qword_251410;
  v6 = qword_251410 + 232 * xmmword_251418;
  if ( qword_251410 == v6 )
    return v2;
  while ( a1 != *(_DWORD *)v4 )
  {
    v4 += 232;
    if ( v6 == v4 )
      return 0;
  }
  if ( !v4 )
    return 0;
  v7 = *(_QWORD *)(v4 + 40);
  v75 = nullptr;
  v77 = 0;
  v78 = -1;
  v76 = 0;
  if ( !v7 )
    goto LABEL_73;
  v8 = dword_24411C;
  v9 = *(_QWORD *)(v7 + 32LL * dword_24411C + 8);
  v70 = v9;
  if ( !dbg )
    goto LABEL_11;
  if ( (*(_BYTE *)(dbg + 37LL) & 0x40) == 0 )
    goto LABEL_11;
  v35 = qword_2515B0;
  if ( !qword_2515B0 )
    goto LABEL_11;
  *(_DWORD *)qword_2515B0 = v9;
  v35[1] = v7;
  *((_DWORD *)v35 + 4) = v8;
  if ( (unsigned int)sub_CC780((__int64)v35, 11) == 1 )
    v70 = *(_DWORD *)qword_2515B0;
  else
LABEL_73:
    v70 = -1;
LABEL_11:
  *(_QWORD *)&v67[0] = &v75;
  *(_QWORD *)&v67[1] = &v89;
  v89 = _mm_loadh_ps(v67);
  sub_E1F40(nullptr, v70, 3u, (__int64)&v89, 2);
  v10 = v76;
  v11 = v75;
  src = nullptr;
  v72 = 0;
  v12 = v75;
  v81 = &v79;
  v79 = 0;
  v80 = nullptr;
  v82 = &v79;
  v83 = 0;
  if ( !(8LL * (_QWORD)v76) )
  {
    v19 = dword_244128;
    v63 = &v79;
LABEL_147:
    if ( v63 != &v79 )
    {
LABEL_69:
      if ( *(_DWORD *)(std::_Rb_tree_decrement() + 32) >= v19 )
        goto LABEL_67;
    }
LABEL_31:
    *(_DWORD *)(operator new(0x28u) + 32) = dword_244128;
    std::_Rb_tree_insert_and_rebalance();
    v23 = ++v83;
    goto LABEL_32;
  }
  v13 = nullptr;
  do
  {
    v14 = *v12;
    if ( v13 )
    {
      for ( i = v13; ; i = v18 )
      {
        v16 = i[8];
        v17 = 0;
        v18 = *((int **)i + 3);
        if ( v14 < v16 )
        {
          v18 = *((int **)i + 2);
          v17 = 1;
        }
        if ( !v18 )
          break;
      }
      if ( !v17 )
        goto LABEL_20;
      if ( v81 != i )
        goto LABEL_63;
    }
    else if ( v81 != &v79 )
    {
LABEL_63:
      v66 = v11;
      v65 = v13;
      v34 = std::_Rb_tree_decrement();
      v11 = v66;
      v16 = *(_DWORD *)(v34 + 32);
      v13 = v65;
LABEL_20:
      if ( v16 >= v14 )
        goto LABEL_22;
    }
    *(_DWORD *)(operator new(0x28u) + 32) = *v12;
    std::_Rb_tree_insert_and_rebalance();
    v11 = v75;
    v10 = v76;
    ++v83;
    v13 = v80;
LABEL_22:
    v12 += 2;
  }
  while ( v12 != &v11[2 * v10] );
  v19 = dword_244128;
  if ( !v13 )
  {
    v63 = v81;
    goto LABEL_147;
  }
  while ( 1 )
  {
    v20 = v13[8];
    v21 = 0;
    v22 = *((int **)v13 + 3);
    if ( dword_244128 < v20 )
    {
      v22 = *((int **)v13 + 2);
      v21 = 1;
    }
    if ( !v22 )
      break;
    v13 = v22;
  }
  if ( v21 )
  {
    if ( v13 != v81 )
      goto LABEL_69;
    goto LABEL_31;
  }
  if ( v20 < dword_244128 )
    goto LABEL_31;
LABEL_67:
  v23 = v83;
LABEL_32:
  v84 = 0;
  v85 = nullptr;
  v88 = 0;
  v102 = -1;
  v104 = 0;
  v86 = &v84;
  v87 = &v84;
  v103 = 0xFFFFFFFFLL;
  v24 = (unsigned __int64 *)&v105;
  do
  {
    *(_WORD *)v24 = 0;
    v24 += 3;
    *((_WORD *)v24 - 11) = 0;
    *((_WORD *)v24 - 10) = 0;
    *((_DWORD *)v24 - 1) = 0;
    *((_WORD *)v24 - 9) = 0;
    *(v24 - 2) = 0;
    *((_DWORD *)v24 - 2) = 0;
  }
  while ( &v106 != v24 );
  if ( !v23 )
  {
LABEL_55:
    if ( !(_QWORD)v72 )
      goto LABEL_56;
    v47 = (char *)src;
    v48 = 4 * v72;
    v49 = (char *)src + 4 * v72;
    if ( src != v49 )
    {
      if ( v48 >> 2 )
      {
        _BitScanReverse64(&v50, v48 >> 2);
        sub_B8850((__m128i *)src, (unsigned int *)src + v72, 2LL * (int)v50);
        if ( v48 > 64 )
        {
          v51 = v47 + 64;
          sub_B8240(v47, v47 + 64);
          do
          {
            v52 = *(_DWORD *)v51;
            v53 = *((_DWORD *)v51 - 1);
            v54 = v51 - 4;
            if ( *(_DWORD *)v51 >= v53 )
            {
              v55 = v51;
            }
            else
            {
              do
              {
                *((_DWORD *)v54 + 1) = v53;
                v55 = v54;
                v53 = *((_DWORD *)v54 - 1);
                v54 -= 4;
              }
              while ( v52 < v53 );
            }
            v51 += 4;
            *(_DWORD *)v55 = v52;
          }
          while ( v49 != v51 );
          goto LABEL_128;
        }
      }
      else
      {
        sub_B8850((__m128i *)src, (unsigned int *)src + v72, -2);
      }
      sub_B8240(v47, v49);
    }
LABEL_128:
    sub_BDAB0(v85);
    sub_BDAB0(v80);
    if ( (_QWORD)v72 != 1 || (v62 = *(_DWORD *)src, (_QWORD)v76) && rangeset_t_find_range() )
    {
      v56 = operator new(0xA0u);
      *(_QWORD *)(v56 + 8) = 0;
      *(_QWORD *)(v56 + 16) = 0;
      *(_QWORD *)(v56 + 24) = 88;
      *(_QWORD *)(v56 + 32) = 0;
      *(_OWORD *)(v56 + 40) = 0;
      *(_QWORD *)(v56 + 56) = 0xFFFFFFFFLL;
      *(_QWORD *)(v56 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v56 + 72) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v56 + 80) = 4;
      *(_QWORD *)(v56 + 96) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v56 + 88) = 9;
      *(_QWORD *)(v56 + 104) = 0;
      *(_QWORD *)v56 = &off_22F688;
      *(_QWORD *)(v56 + 120) = 0;
      *(_QWORD *)(v56 + 144) = 0;
      *(_DWORD *)(v56 + 152) = -1;
      *(_OWORD *)(v56 + 128) = 0;
      rangeset_t_swap();
      *(_DWORD *)(v56 + 112) = sub_C9980((__int64 *)&src);
      bpt_kernel_interface = get_bpt_kernel_interface();
      (*(void (__fastcall **)(__int64, __int64, char *, _QWORD, _QWORD))(*(_QWORD *)bpt_kernel_interface + 136LL))(
        bpt_kernel_interface,
        v56 + 24,
        "",
        *(unsigned int *)(v56 + 112),
        0);
      if ( (unsigned int)sub_C6F80(v4, v56, 0) != 1 )
        goto LABEL_57;
      if ( (*(_BYTE *)(dbg + 32LL) & 0x10) != 0 )
      {
        v58 = qword_2510F0 + 24LL * *(int *)(v56 + 112);
        v59 = *(_DWORD **)v58;
        v60 = *(_QWORD *)v58 + 4LL * *(_QWORD *)(v58 + 8);
        if ( v59 != (_DWORD *)v60 )
        {
          while ( v70 != *v59 )
          {
            if ( (_DWORD *)v60 == ++v59 )
              goto LABEL_138;
          }
          if ( (_DWORD *)v60 != v59 )
          {
            v2 = sub_D3340(v4, 4097, 0.0);
            if ( (int)v2 <= 0 )
            {
              byte_2515A0 = 0;
              sub_C6F20(v56, v4);
              goto LABEL_58;
            }
          }
        }
      }
LABEL_138:
      v61 = sub_D46B0(0, 0);
    }
    else
    {
      if ( v62 == (unsigned int)sub_D0B80(*(_QWORD *)(v4 + 40), 1) )
      {
        v2 = sub_D4D90((int *)v4, 1, 0, 0.0);
        goto LABEL_58;
      }
      v61 = sub_D47A0(a1, v62, 0, 0);
    }
    v2 = v61;
    goto LABEL_58;
  }
  while ( 2 )
  {
    v25 = v81[8];
    v26 = (void *)std::_Rb_tree_rebalance_for_erase();
    operator delete(v26, 0x28u);
    v27 = v85;
    v28 = --v83;
    if ( v85 )
    {
      while ( 1 )
      {
        v29 = v27[8];
        v30 = 0;
        v31 = *((int **)v27 + 3);
        if ( v25 < v29 )
        {
          v31 = *((int **)v27 + 2);
          v30 = 1;
        }
        if ( !v31 )
          break;
        v27 = v31;
      }
      if ( v30 )
      {
        if ( v27 != v86 )
          goto LABEL_75;
        goto LABEL_43;
      }
LABEL_42:
      if ( v29 < v25 )
        goto LABEL_43;
LABEL_54:
      if ( !v28 )
        goto LABEL_55;
      continue;
    }
    break;
  }
  if ( v86 != &v84 )
  {
LABEL_75:
    v29 = *(_DWORD *)(std::_Rb_tree_decrement() + 32);
    goto LABEL_42;
  }
LABEL_43:
  *(_DWORD *)(operator new(0x28u) + 32) = v25;
  std::_Rb_tree_insert_and_rebalance();
  ++v88;
  if ( (unsigned int)decode_insn() )
  {
    v74 = 0;
    v73 = 0;
    v64 = sub_9E220();
    if ( v64 < 0 || !(_QWORD)v74 )
    {
      v32 = (unsigned int *)((char *)src + 4 * v72);
      if ( src == v32 )
        goto LABEL_76;
      v33 = (unsigned int *)src;
      while ( v25 != *v33 )
      {
        if ( v32 == ++v33 )
          goto LABEL_76;
      }
      if ( v32 == v33 )
      {
LABEL_76:
        if ( *((_QWORD *)&v72 + 1) < (unsigned __int64)(v72 + 1) )
        {
          src = (void *)qvector_reserve();
          v32 = (unsigned int *)((char *)src + 4 * v72);
        }
        *v32 = v25;
        *(_QWORD *)&v72 = v72 + 1;
      }
LABEL_51:
      if ( v73 )
      {
        *(_QWORD *)&v74 = 0;
        qfree();
      }
      v28 = v83;
      goto LABEL_54;
    }
    v36 = 0;
    v37 = 0;
    while ( 2 )
    {
      v38 = *(_DWORD *)(v73 + 4 * v37);
      if ( v64 > v36 )
      {
        v91 = 0;
        v90 = 0xFFFFFFFFLL;
        v93 = 0;
        v94 = 0;
        v95 = 0;
        v96 = 0;
        v97 = 0;
        v98 = 0;
        v99 = 0;
        v100 = 0;
        v101 = 0;
        v89 = (__m128)v38;
        si128 = _mm_load_si128((const __m128i *)&unk_1D2310);
        v89.m128_i32[1] = get_item_end();
        v39 = calc_thunk_func_target();
        if ( v39 != -1 )
          v38 = v39;
      }
      if ( (_QWORD)v76 && rangeset_t_find_range() )
      {
        if ( *v75 != v38 )
        {
          v43 = v80;
          if ( v80 )
          {
            while ( 1 )
            {
              v44 = v43[8];
              v45 = 0;
              v46 = *((int **)v43 + 3);
              if ( v38 < v44 )
              {
                v46 = *((int **)v43 + 2);
                v45 = 1;
              }
              if ( !v46 )
                break;
              v43 = v46;
            }
            if ( !v45 )
              goto LABEL_102;
            if ( v43 != v81 )
              goto LABEL_115;
LABEL_103:
            v69 = 1;
            if ( v43 != &v79 )
              v69 = v38 < v43[8];
LABEL_105:
            *(_DWORD *)(operator new(0x28u) + 32) = v38;
            std::_Rb_tree_insert_and_rebalance();
            ++v83;
          }
          else
          {
            v43 = &v79;
            if ( v81 == &v79 )
            {
              v69 = 1;
              goto LABEL_105;
            }
LABEL_115:
            v44 = *(_DWORD *)(std::_Rb_tree_decrement() + 32);
LABEL_102:
            if ( v44 < v38 )
              goto LABEL_103;
          }
LABEL_91:
          v37 = ++v36;
          if ( v36 >= (unsigned __int64)v74 )
            goto LABEL_51;
          continue;
        }
        v40 = v72;
        v41 = (unsigned int *)((char *)src + 4 * v72);
        if ( src != v41 )
        {
          v42 = (unsigned int *)src;
          while ( *v42 != v38 )
          {
            if ( v41 == ++v42 )
              goto LABEL_106;
          }
LABEL_90:
          if ( v41 != v42 )
            goto LABEL_91;
        }
      }
      else
      {
        v40 = v72;
        v41 = (unsigned int *)((char *)src + 4 * v72);
        if ( src != v41 )
        {
          v42 = (unsigned int *)src;
          while ( *v42 != v38 )
          {
            if ( v41 == ++v42 )
              goto LABEL_106;
          }
          goto LABEL_90;
        }
      }
      break;
    }
LABEL_106:
    if ( *((_QWORD *)&v72 + 1) < (unsigned __int64)(v40 + 1) )
    {
      src = (void *)qvector_reserve();
      v41 = (unsigned int *)((char *)src + 4 * v72);
    }
    *v41 = v38;
    *(_QWORD *)&v72 = v72 + 1;
    goto LABEL_91;
  }
  sub_8F660((__int64)"%a: cannot decode\n", 0.0);
LABEL_56:
  sub_BDAB0(v85);
  sub_BDAB0(v80);
  sub_8F660((__int64)"%a: failed to calculate step addresses!\n", 0.0);
LABEL_57:
  v2 = 0;
LABEL_58:
  if ( src )
  {
    *(_QWORD *)&v72 = 0;
    qfree();
  }
  if ( v75 )
  {
    *(_QWORD *)&v76 = 0;
    qfree();
  }
  return v2;
}

