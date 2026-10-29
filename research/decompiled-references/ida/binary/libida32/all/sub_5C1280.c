__int64 __fastcall sub_5C1280(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4, char a5, int a6)
{
  int i; // r14d
  __int64 v9; // r12
  _QWORD *v10; // rbp
  void *v11; // rdi
  void *v12; // rdi
  __int64 (__fastcall *v13)(__int64); // rax
  unsigned __int64 *v14; // rax
  int v15; // ecx
  bool (__fastcall *v16)(__int16); // rsi
  int *v17; // r8
  char v18; // bp
  unsigned int v19; // r14d
  unsigned __int32 v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // rdx
  _DWORD *v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rcx
  void *v32; // rdi
  unsigned __int64 v33; // rdx
  int v34; // eax
  unsigned int *v35; // r8
  unsigned int v36; // r14d
  unsigned __int64 v37; // rax
  int v38; // ebx
  unsigned int *v39; // rbp
  char v40; // al
  int *v41; // r8
  __int64 v42; // rax
  _QWORD *v43; // r8
  __int64 v44; // rax
  __int64 v45; // rsi
  char v46; // al
  __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned int v49; // ebp
  __int64 v50; // r8
  __int64 v51; // r9
  unsigned __int64 v52; // rdx
  int v53; // r13d
  __int64 v54; // rax
  __int64 v55; // r12
  int v56; // ebp
  __int64 v57; // rax
  unsigned __int64 v58; // rax
  _QWORD *v59; // rbx
  __int64 v60; // rax
  __int64 v61; // rsi
  __int64 v62; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rsi
  char j; // al
  __int64 v68; // r12
  int *v69; // r14
  __int64 v70; // rbp
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v76; // [rsp+8h] [rbp-1A0h]
  unsigned int *v78; // [rsp+18h] [rbp-190h]
  int *v79; // [rsp+18h] [rbp-190h]
  int *v80; // [rsp+18h] [rbp-190h]
  _QWORD *v81; // [rsp+18h] [rbp-190h]
  int *v82; // [rsp+18h] [rbp-190h]
  int v83; // [rsp+18h] [rbp-190h]
  int *v84; // [rsp+20h] [rbp-188h]
  int *v85; // [rsp+20h] [rbp-188h]
  unsigned int v87; // [rsp+28h] [rbp-180h]
  char v88; // [rsp+2Eh] [rbp-17Ah]
  char v90; // [rsp+3Ah] [rbp-16Eh] BYREF
  char v91; // [rsp+3Bh] [rbp-16Dh] BYREF
  unsigned int v92; // [rsp+3Ch] [rbp-16Ch] BYREF
  __m256i *p_ptr; // [rsp+40h] [rbp-168h] BYREF
  char v94; // [rsp+49h] [rbp-15Fh]
  __m256i ptr; // [rsp+50h] [rbp-158h] BYREF
  void *v96; // [rsp+70h] [rbp-138h]
  __int128 v97; // [rsp+78h] [rbp-130h]
  _QWORD v98[3]; // [rsp+90h] [rbp-118h] BYREF
  char v99; // [rsp+A8h] [rbp-100h] BYREF
  unsigned __int64 v100; // [rsp+168h] [rbp-40h] BYREF

  v100 = __readfsqword(0x28u);
  for ( i = 0; ; ++i )
  {
    v13 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL);
    if ( v13 != sub_5A9690 )
      break;
    if ( i >= *(_DWORD *)(a2 + 72) )
      goto LABEL_10;
LABEL_3:
    v9 = 56LL * i;
    v10 = (_QWORD *)(v9 + *(_QWORD *)(a2 + 64));
    v11 = (void *)v10[1];
    if ( v11 )
    {
      v10[2] = 0;
      qfree(v11);
      v10[1] = 0;
      v10[3] = 0;
      v10 = (_QWORD *)(v9 + *(_QWORD *)(a2 + 64));
    }
    v12 = (void *)v10[4];
    if ( v12 )
    {
      v10[5] = 0;
      qfree(v12);
      v10[4] = 0;
      v10[6] = 0;
    }
  }
  if ( i < (int)v13(a2) )
    goto LABEL_3;
LABEL_10:
  *(_BYTE *)(a2 + 8) = 0;
  v98[0] = -1;
  v98[2] = 0;
  v98[1] = 0xFFFFFFFFLL;
  v14 = (unsigned __int64 *)&v99;
  do
  {
    v15 = 0;
    LODWORD(v16) = 0;
    LODWORD(v17) = 0;
    *(_WORD *)v14 = 0;
    v14 += 3;
    *((_WORD *)v14 - 11) = 0;
    *((_WORD *)v14 - 10) = 0;
    *((_DWORD *)v14 - 1) = 0;
    *((_WORD *)v14 - 9) = 0;
    *(v14 - 2) = 0;
    *((_DWORD *)v14 - 2) = 0;
  }
  while ( &v100 != v14 );
  while ( 1 )
  {
LABEL_15:
    if ( (*(_BYTE *)(a2 + 56) & 0x10) != 0 )
      callui(27, (int)v16, (int)&callui, v15, (int)v17, a6);
    v19 = *(_DWORD *)(a3 + 24);
    if ( (~((unsigned __int16)sub_3B9AA0((__int64)a1, v19, 4) >> 8) & 6) == 0 )
      break;
    v16 = sub_39AFB0;
    v18 = func_item_iterator_next(a3, sub_39AFB0, 0);
LABEL_14:
    if ( !v18 )
      goto LABEL_39;
  }
  memset(&ptr.m256i_u64[1], 0, 24);
  v96 = nullptr;
  ptr.m256i_i64[0] = v19;
  v97 = 0;
  while ( 1 )
  {
    v20 = sub_3BCF60((__int64)a1, v19);
    v18 = func_item_iterator_next(a3, sub_39AFB0, 0);
    if ( !v18
      || !(unsigned int)decode_insn(v98, v19, v21, v22, v23, v24)
      || (unsigned __int8)sub_5C1170(a1, (__int64)v98, (*(_BYTE *)(a2 + 56) & 0x20) != 0) )
    {
      break;
    }
    v25 = *(_QWORD *)a3;
    if ( *(_QWORD *)a3 )
    {
      v26 = *(int *)(a3 + 8);
      if ( (int)v26 >= 0 && (int)v26 < *(_DWORD *)(v25 + 104) )
        v25 = *(_QWORD *)(v25 + 112) + 8 * v26;
    }
    else
    {
      v25 = a3 + 12;
    }
    if ( v20 < *(_DWORD *)v25 || v20 >= *(_DWORD *)(v25 + 4) )
      break;
    v19 = v20;
  }
  ptr.m256i_i32[1] = v20;
  v27 = *(_QWORD *)(a2 + 72);
  v28 = a4[2];
  if ( !v28 )
  {
    v29 = a4 + 1;
    goto LABEL_34;
  }
  v29 = a4 + 1;
  do
  {
    while ( 1 )
    {
      v30 = *(_QWORD *)(v28 + 16);
      v31 = *(_QWORD *)(v28 + 24);
      if ( *(_DWORD *)(v28 + 32) < ptr.m256i_i32[0] )
        break;
      v29 = (_DWORD *)v28;
      v28 = *(_QWORD *)(v28 + 16);
      if ( !v30 )
        goto LABEL_32;
    }
    v28 = *(_QWORD *)(v28 + 24);
  }
  while ( v31 );
LABEL_32:
  if ( v29 == (_DWORD *)(a4 + 1) || ptr.m256i_i32[0] < v29[8] )
  {
LABEL_34:
    p_ptr = &ptr;
    v29 = sub_5BC450(a4, (__int64)v29, (_DWORD **)&p_ptr);
  }
  v29[9] = v27;
  v16 = (bool (__fastcall *)(__int16))&ptr;
  sub_5C0790((__int64 *)(a2 + 64), ptr.m256i_i8);
  v32 = v96;
  ++*(_DWORD *)(a2 + 88);
  if ( v32 )
  {
    *(_QWORD *)&v97 = 0;
    qfree(v32);
  }
  if ( !ptr.m256i_i64[1] )
    goto LABEL_14;
  ptr.m256i_i64[2] = 0;
  qfree((void *)ptr.m256i_i64[1]);
  if ( v18 )
    goto LABEL_15;
LABEL_39:
  v33 = *(int *)(a2 + 88);
  if ( *(_QWORD *)(a2 + 72) < v33 )
  {
    if ( !under_debugger )
      interr(78);
    goto LABEL_111;
  }
  if ( a5 )
  {
    v34 = *(_DWORD *)(a2 + 56);
    if ( (int)v33 > 0 )
    {
      v76 = 0;
      do
      {
        if ( (v34 & 0x10) != 0 )
          callui(27, (int)v16, (int)&callui, v15, (int)v17, a6);
        v35 = (unsigned int *)(*(_QWORD *)(a2 + 64) + 56 * v76);
        v36 = v35[1];
        v87 = v36;
        if ( v36 != -1 )
        {
          v78 = (unsigned int *)(*(_QWORD *)(a2 + 64) + 56 * v76);
          v37 = sub_3B9AA0((__int64)a1, v36, 4);
          v35 = v78;
          if ( (v37 & 0x10000) != 0 )
          {
            v38 = v76 + 1;
            v88 = a5;
            if ( (int)v76 + 1 >= *(_DWORD *)(a2 + 88) || *(_DWORD *)(*(_QWORD *)(a2 + 64) + 56LL * v38) != v36 )
              goto LABEL_48;
            v65 = *((_QWORD *)v78 + 2);
            v66 = *((_QWORD *)v78 + 1);
            if ( *((_QWORD *)v78 + 3) < (unsigned __int64)(v65 + 1) )
            {
              v74 = qvector_reserve(v78 + 2, v66, v65 + 1, 4);
              v35 = v78;
              v66 = v74;
              *((_QWORD *)v78 + 1) = v74;
              v65 = *((_QWORD *)v78 + 2);
            }
            *(_DWORD *)(v66 + 4 * v65) = v38;
            ++*((_QWORD *)v35 + 2);
          }
        }
        v88 = 0;
LABEL_48:
        v79 = (int *)v35;
        v39 = sub_4EE820((__int64)(a1 + 203), *v35);
        v40 = xrefblk_t_first_to(&p_ptr, (unsigned int)*v79, 5);
        v41 = v79;
        if ( v40 )
        {
          v84 = v79;
          do
          {
            while ( (unsigned __int8)(v94 - 16) <= 1u && v39 && (*((_BYTE *)v39 + 10) & 2) == 0 )
            {
              if ( !(unsigned __int8)xrefblk_t_next_to(&p_ptr) )
                goto LABEL_59;
            }
            v42 = sub_5BC020(a2, (__int64)a4, (unsigned int)p_ptr);
            if ( v42 != -1 )
            {
              v43 = (_QWORD *)(*(_QWORD *)(a2 + 64) + 56 * v42);
              v44 = v43[2];
              v45 = v43[1];
              if ( v43[3] < (unsigned __int64)(v44 + 1) )
              {
                v81 = v43;
                v64 = qvector_reserve(v43 + 1, v45, v44 + 1, 4);
                v43 = v81;
                v45 = v64;
                v81[1] = v64;
                v44 = v81[2];
              }
              *(_DWORD *)(v45 + 4 * v44) = v76;
              ++v43[2];
            }
          }
          while ( (unsigned __int8)xrefblk_t_next_to(&p_ptr) );
LABEL_59:
          v41 = v84;
        }
        v16 = (bool (__fastcall *)(__int16))&ptr;
        memset(&ptr, 0, 24);
        v80 = v41;
        v46 = sub_5C0D40((__int64)a1, ptr.m256i_i64, *v41);
        v17 = v80;
        if ( v46 && ptr.m256i_i32[2] > 0 )
        {
          v68 = 0;
          v69 = v80 + 2;
          v70 = 4LL * (unsigned int)(ptr.m256i_i32[2] - 1) + 4;
          do
          {
            LODWORD(v16) = (_DWORD)a4;
            v82 = v17;
            v71 = sub_5BC020(a2, (__int64)a4, *(_DWORD *)(ptr.m256i_i64[0] + v68));
            v17 = v82;
            a6 = v71;
            if ( v71 != -1 )
            {
              v72 = *((_QWORD *)v82 + 2);
              v16 = *((bool (__fastcall **)(__int16))v82 + 1);
              if ( *((_QWORD *)v82 + 3) < (unsigned __int64)(v72 + 1) )
              {
                v85 = v82;
                v83 = a6;
                v73 = qvector_reserve(v69, v16, v72 + 1, 4);
                v17 = v85;
                v16 = (bool (__fastcall *)(__int16))v73;
                a6 = v83;
                *((_QWORD *)v85 + 1) = v73;
                v72 = *((_QWORD *)v85 + 2);
              }
              *((_DWORD *)v16 + v72) = a6;
              ++*((_QWORD *)v17 + 2);
            }
            v68 += 4;
          }
          while ( v68 != v70 );
        }
        v34 = *(_DWORD *)(a2 + 56);
        if ( (v34 & 2) != 0 )
        {
          if ( ptr.m256i_i64[0] )
          {
            ptr.m256i_i64[1] = 0;
            qfree((void *)ptr.m256i_i64[0]);
            v34 = *(_DWORD *)(a2 + 56);
          }
        }
        else
        {
          if ( v88 )
            sub_5C0A20(a2, a4, v76, v87);
          v49 = sub_3BD5D0((__int64)a1, v87);
          if ( *(char *)(a1[2] + 10LL) < 0 )
          {
            v92 = v49;
            v90 = 1;
            v91 = 1;
            if ( sub_375980(0x2Du, &v92, &v90, &v91) == 1 && v92 == v49 )
              v49 = sub_3BD5D0((__int64)a1, v49);
          }
          LODWORD(v16) = v49;
          if ( !(unsigned int)decode_insn(v98, v49, v47, v48, v50, v51) || !(unsigned __int8)is_call_insn(v98) )
          {
            LODWORD(v16) = v49;
            for ( j = xrefblk_t_first_from(&p_ptr, v49, 5); j; j = xrefblk_t_next_from(&p_ptr) )
            {
              LODWORD(v16) = (_DWORD)a4;
              sub_5C0A20(a2, a4, v76, HIDWORD(p_ptr));
            }
          }
          if ( ptr.m256i_i64[0] )
          {
            ptr.m256i_i64[1] = 0;
            qfree((void *)ptr.m256i_i64[0]);
          }
          v34 = *(_DWORD *)(a2 + 56);
        }
        v15 = ++v76;
      }
      while ( *(_DWORD *)(a2 + 88) > (int)v76 );
    }
    if ( (v34 & 0x40) == 0 )
    {
      v52 = *(_QWORD *)(a2 + 72);
      if ( v52 )
      {
        v53 = 0;
        v54 = 0;
        while ( 1 )
        {
          v55 = *(_QWORD *)(a2 + 64) + 56 * v54;
          if ( *(_QWORD *)(v55 + 16) )
            break;
LABEL_86:
          v54 = ++v53;
          if ( v53 >= v52 )
            return 1;
        }
        v56 = 0;
        v57 = 0;
        while ( 1 )
        {
          v58 = *(int *)(*(_QWORD *)(v55 + 8) + 4 * v57);
          if ( v58 >= v52 )
            break;
          v59 = (_QWORD *)(*(_QWORD *)(a2 + 64) + 56 * v58);
          v60 = v59[5];
          v61 = v59[4];
          if ( v59[6] < (unsigned __int64)(v60 + 1) )
          {
            v62 = qvector_reserve(v59 + 4, v61, v60 + 1, 4);
            v59[4] = v62;
            v61 = v62;
            v60 = v59[5];
          }
          ++v56;
          *(_DWORD *)(v61 + 4 * v60) = v53;
          v57 = v56;
          ++v59[5];
          v52 = *(_QWORD *)(a2 + 72);
          if ( (unsigned __int64)v56 >= *(_QWORD *)(v55 + 16) )
            goto LABEL_86;
        }
        if ( !under_debugger )
          interr(79);
LABEL_111:
        BUG();
      }
    }
  }
  return 1;
}

