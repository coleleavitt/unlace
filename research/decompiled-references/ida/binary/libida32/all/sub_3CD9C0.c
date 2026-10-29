unsigned __int64 __fastcall sub_3CD9C0(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v5; // r12
  unsigned int v7; // ebx
  __int64 range; // rax
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // rsi
  __int64 v13; // rax
  _DWORD *v14; // r12
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  char *v18; // r12
  char *v19; // r13
  __int64 (__fastcall *v20)(_QWORD, _QWORD); // rax
  int v22; // r13d
  _DWORD *v23; // rdi
  __int64 v24; // rdx
  _DWORD *v25; // r14
  int v26; // eax
  int v27; // edx
  unsigned int v28; // r13d
  __int64 v29; // rsi
  __int64 v30; // rax
  size_t v31; // r10
  __int64 v32; // r11
  size_t v33; // r8
  char *v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rax
  size_t v37; // r10
  __int64 v38; // r11
  size_t v39; // r8
  char *v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  size_t v44; // r8
  size_t v45; // r10
  unsigned __int64 v46; // r11
  char *v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rax
  char *v50; // rsi
  __int64 v51; // rdx
  char *v52; // rsi
  unsigned int v53; // edx
  int v54; // ebx
  unsigned int v55; // r13d
  unsigned int v56; // r12d
  unsigned __int64 v57; // rax
  unsigned int v58; // r14d
  unsigned __int64 v59; // [rsp+8h] [rbp-C0h]
  _DWORD *v60; // [rsp+10h] [rbp-B8h]
  unsigned int v61; // [rsp+1Ch] [rbp-ACh]
  unsigned __int64 *v62; // [rsp+20h] [rbp-A8h]
  size_t v63; // [rsp+28h] [rbp-A0h]
  size_t n; // [rsp+30h] [rbp-98h]
  __int64 v65; // [rsp+38h] [rbp-90h]
  void *v66; // [rsp+40h] [rbp-88h] BYREF
  __int128 v67; // [rsp+48h] [rbp-80h]
  void *v68; // [rsp+60h] [rbp-68h] BYREF
  __int128 v69; // [rsp+68h] [rbp-60h]
  _BYTE src[5]; // [rsp+83h] [rbp-45h] BYREF
  unsigned __int64 v71; // [rsp+88h] [rbp-40h] BYREF

  v5 = a1 + 1112;
  v7 = a2;
  LODWORD(v60) = a4;
  v71 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 1204) = a2;
  v61 = a3 + a2;
  *(_DWORD *)(a1 + 1208) = a3 + a2;
  while ( 1 )
  {
    sub_3B8E40(a1, v7, 0);
    if ( *(_DWORD *)(a1 + 1016) != v7 )
    {
      if ( !under_debugger )
        interr(517);
LABEL_108:
      BUG();
    }
    v10 = *(_QWORD *)(a1 + 1024);
    if ( a3 == 1 )
    {
      if ( v10 <= 0xFFFFFFFFFFFFFFFDLL )
        goto LABEL_38;
      goto LABEL_17;
    }
    if ( v10 - 1 > 0xFFFFFFFFFFFFFFFCLL )
      break;
    v11 = *(_QWORD *)(a1 + 1008);
    v12 = 0;
    if ( sub_8954D0(v11, v7) )
      v12 = *(unsigned int *)(*(_QWORD *)(v11 + 48) + 4LL);
    if ( (unsigned int)v12 >= *(_DWORD *)(a1 + 1208) )
      goto LABEL_77;
    if ( !rangeset_t_find_range(v5, v12) )
LABEL_15:
      sub_375320((__int64)"***CORRUPTED sparse/va storage");
LABEL_6:
    ++*(_DWORD *)(a1 + 1224);
    if ( (unsigned int)sub_3CD500((_QWORD *)a1, v7, *(_DWORD *)(a1 + 1208), 1) )
    {
      if ( !under_debugger )
        interr(66);
      goto LABEL_108;
    }
    --*(_DWORD *)(a1 + 1224);
  }
  if ( v10 != -1 )
  {
    if ( v10 <= 0xFFFFFFFFFFFFFFFDLL )
      goto LABEL_78;
    goto LABEL_18;
  }
  range = rangeset_t_find_range(v5, v7);
  if ( !range )
    sub_375320((__int64)"***CORRUPTED sparse storage");
  v9 = *(unsigned int *)(range + 4);
  if ( (unsigned int)v9 < *(_DWORD *)(a1 + 1208) )
  {
    if ( !sub_8954D0(*(_QWORD *)(a1 + 1008), v9) )
      goto LABEL_15;
    goto LABEL_6;
  }
LABEL_77:
  v10 = *(_QWORD *)(a1 + 1024);
  if ( v10 > 0xFFFFFFFFFFFFFFFDLL )
  {
LABEL_17:
    if ( v10 == -1 )
    {
      v13 = a1 + 944;
LABEL_19:
      v14 = (_DWORD *)(v13 + 8);
      v15 = *(_QWORD *)(v13 + 16);
      v60 = v14;
      if ( !v15 )
        goto LABEL_26;
      do
      {
        while ( 1 )
        {
          v16 = *(_QWORD *)(v15 + 16);
          v17 = *(_QWORD *)(v15 + 24);
          if ( *(_DWORD *)(v15 + 32) >= v7 )
            break;
          v15 = *(_QWORD *)(v15 + 24);
          if ( !v17 )
            goto LABEL_24;
        }
        v14 = (_DWORD *)v15;
        v15 = *(_QWORD *)(v15 + 16);
      }
      while ( v16 );
LABEL_24:
      if ( v14 == v60 || v7 < v14[8] )
      {
LABEL_26:
        if ( !under_debugger )
          interr(67);
        goto LABEL_108;
      }
      sub_3B63D0(v7, (unsigned int)v14[9], a3);
      v14[9] = a3;
      if ( a3 <= 1 )
        goto LABEL_37;
      v22 = *(_DWORD *)(a1 + 1224);
      v23 = v14;
      v66 = nullptr;
      v67 = 0;
      v69 = 0;
      *(_DWORD *)(a1 + 1224) = v22 + 1;
      v68 = nullptr;
      v25 = (_DWORD *)std::_Rb_tree_increment();
      v62 = &v71;
      if ( v25 == v60 )
      {
        *(_DWORD *)(a1 + 1224) = v22;
        goto LABEL_35;
      }
      while ( 1 )
      {
        v28 = v25[8];
        if ( v28 >= v61 )
        {
LABEL_28:
          if ( (_QWORD)v67 )
            add_undo_record(6, v66, v67);
          v18 = (char *)v68;
          v19 = (char *)v68 + 16 * v69;
          if ( v19 != v68 )
          {
            do
            {
              sub_3C08C0(a1, *(_DWORD *)v18);
              v18 += 16;
            }
            while ( v19 != v18 );
            v18 = (char *)v68;
          }
          --*(_DWORD *)(a1 + 1224);
          if ( v18 )
          {
            *(_QWORD *)&v69 = 0;
            qfree(v18);
          }
LABEL_35:
          if ( v66 )
          {
            *(_QWORD *)&v67 = 0;
            qfree(v66);
          }
LABEL_37:
          *(_BYTE *)(a1 + 1192) = 1;
          goto LABEL_38;
        }
        v29 = (unsigned int)v25[9];
        if ( (_DWORD)v29 )
        {
          if ( !under_debugger )
            interr(68);
          goto LABEL_108;
        }
        LODWORD(v59) = v25[10];
        if ( !(unsigned __int8)must_journal(v23, v29, v24) )
          goto LABEL_43;
        v30 = pack_dd(src, v62, v28) - (_QWORD)src;
        v31 = v30;
        if ( v30 )
          break;
LABEL_54:
        v36 = pack_dd(src, v62, (unsigned int)v59) - (_QWORD)src;
        v37 = v36;
        if ( !v36 )
          goto LABEL_60;
        v38 = v67;
        v39 = v67 + v36;
        if ( __CFADD__((_QWORD)v67, v36) )
        {
          if ( (unsigned __int64)v67 > 0x7FFFFFFFFFFFFFFELL )
          {
            if ( (_QWORD)v67 != 0x7FFFFFFFFFFFFFFFLL )
              *(_QWORD *)&v67 = 0x7FFFFFFFFFFFFFFFLL;
            goto LABEL_59;
          }
          v39 = 0x7FFFFFFFFFFFFFFFLL;
        }
        v40 = (char *)v66;
        v41 = v67;
        if ( *((_QWORD *)&v67 + 1) < v39 )
        {
          v65 = v67;
          n = v37;
          v63 = v39;
          v66 = (void *)qvector_reserve(&v66, v66, v39, 1);
          v40 = (char *)v66;
          v38 = v65;
          v41 = v67;
          v37 = n;
          v39 = v63;
        }
        v65 = v38;
        n = v37;
        v63 = v39;
        memset(&v40[v41], 0, v39 - v41);
        v37 = n;
        v38 = v65;
        *(_QWORD *)&v67 = v63;
LABEL_59:
        memcpy((char *)v66 + v38, src, v37);
LABEL_60:
        v42 = (unsigned int)v59;
        BYTE1(v42) = BYTE1(v59) | 2;
        v43 = pack_dd(src, v62, v42) - (_QWORD)src;
        v44 = v43;
        if ( v43 )
        {
          v45 = v67;
          v46 = v67 + v43;
          if ( __CFADD__((_QWORD)v67, v43) )
          {
            if ( (unsigned __int64)v67 <= 0x7FFFFFFFFFFFFFFELL )
            {
              v47 = (char *)v66;
              v48 = v67;
              v46 = 0x7FFFFFFFFFFFFFFFLL;
              if ( *((_QWORD *)&v67 + 1) < 0x7FFFFFFFFFFFFFFFuLL )
                goto LABEL_95;
              goto LABEL_63;
            }
            if ( (_QWORD)v67 != 0x7FFFFFFFFFFFFFFFLL )
              *(_QWORD *)&v67 = 0x7FFFFFFFFFFFFFFFLL;
          }
          else
          {
            v47 = (char *)v66;
            v48 = v67;
            if ( *((_QWORD *)&v67 + 1) >= v46 )
              goto LABEL_63;
LABEL_95:
            n = v67;
            v63 = v44;
            v59 = v46;
            v66 = (void *)qvector_reserve(&v66, v47, v46, 1);
            v47 = (char *)v66;
            v45 = n;
            v48 = v67;
            v44 = v63;
            v46 = v59;
LABEL_63:
            n = v45;
            v63 = v44;
            v59 = v46;
            memset(&v47[v48], 0, v46 - v48);
            v44 = v63;
            v45 = n;
            *(_QWORD *)&v67 = v59;
          }
          memcpy((char *)v66 + v45, src, v44);
        }
LABEL_43:
        v26 = v25[10];
        v27 = v26;
        BYTE1(v27) = BYTE1(v26) | 2;
        v25[10] = v27;
        if ( (v26 & 0xC000) != 0 )
        {
          v49 = v69;
          v50 = (char *)v68;
          v51 = v69 + 1;
          if ( *((_QWORD *)&v69 + 1) < (unsigned __int64)(v69 + 1) )
          {
            v68 = (void *)qvector_reserve(&v68, v68, v51, 16);
            v50 = (char *)v68;
            v49 = v69;
            v51 = v69 + 1;
          }
          *(_QWORD *)&v69 = v51;
          v52 = &v50[16 * v49];
          *(_DWORD *)v52 = v28;
          *((_QWORD *)v52 + 1) = (unsigned int)v25[10];
        }
        v23 = v25;
        v25 = (_DWORD *)std::_Rb_tree_increment();
        if ( v25 == v60 )
          goto LABEL_28;
      }
      v32 = v67;
      v33 = v67 + v30;
      if ( __CFADD__((_QWORD)v67, v30) )
      {
        if ( (unsigned __int64)v67 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v67 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v67 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_53;
        }
        v33 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v34 = (char *)v66;
      v35 = v67;
      if ( *((_QWORD *)&v67 + 1) < v33 )
      {
        v65 = v67;
        n = v31;
        v63 = v33;
        v66 = (void *)qvector_reserve(&v66, v66, v33, 1);
        v34 = (char *)v66;
        v32 = v65;
        v35 = v67;
        v31 = n;
        v33 = v63;
      }
      v65 = v32;
      n = v31;
      v63 = v33;
      memset(&v34[v35], 0, v33 - v35);
      v31 = n;
      v32 = v65;
      *(_QWORD *)&v67 = v63;
LABEL_53:
      memcpy((char *)v66 + v32, src, v31);
      goto LABEL_54;
    }
LABEL_18:
    v13 = a1 + 896;
    goto LABEL_19;
  }
LABEL_78:
  if ( a3 <= 1 )
    goto LABEL_38;
  v53 = a3;
  if ( (_DWORD)v60 )
    v53 = sub_3BCC90((_QWORD *)a1, v7, a3, (unsigned int)v60);
  LODWORD(v59) = v7;
  v54 = 1;
  v55 = v53;
  do
  {
    v58 = v54 + v59;
    if ( !--v55 )
      v55 = sub_3BCC90((_QWORD *)a1, v58, a3 - v54, (unsigned int)v60);
    v56 = v54;
    if ( (v58 & 1) == 0 )
      v56 = v55;
    if ( v56 > 0xFFF )
      v56 = 4095;
    v57 = sub_3B9AA0(a1, v58, 0);
    if ( (v57 & 0x400) != 0 )
    {
      if ( !under_debugger )
        interr(69);
      goto LABEL_108;
    }
    ++v54;
    sub_3CAE70((_QWORD *)a1, v58, v57 & 0xFF9FF | (v56 << 20) | 0x200);
    sub_3C08C0(a1, v58);
  }
  while ( a3 != v54 );
  v7 = v59;
LABEL_38:
  v20 = qword_2CA1648;
  *(__m128i *)(a1 + 1532) = _mm_load_si128((const __m128i *)&xmmword_2383860);
  if ( v20 )
    return v20(v7, a3);
  else
    return v71 - __readfsqword(0x28u);
}

