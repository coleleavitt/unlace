void __fastcall sub_540F70(__int64 a1, char a2)
{
  __int16 v2; // r12
  bool v3; // zf
  __int64 v5; // rax
  __int16 v6; // ax
  char v7; // r13
  char **v8; // r15
  char *v9; // rdi
  char *v10; // r14
  char *i; // r12
  char *v12; // rbp
  void *v13; // rdi
  void *v14; // rdi
  char **v15; // r12
  char *v16; // rdi
  char *v17; // rdi
  char *v18; // r13
  char *v19; // rbp
  char *v20; // rbx
  void *v21; // rdi
  void *v22; // rdi
  unsigned __int8 v23; // r13
  char **v24; // r13
  char **v25; // rbp
  char *v26; // rdi
  char *v27; // r13
  char *v28; // r12
  char *v29; // rbx
  void *v30; // rdi
  void *v31; // rdi
  char *v32; // rdi
  char *v33; // r14
  __int64 v34; // r13
  char *v35; // r12
  char *v36; // rbx
  void *v37; // rdi
  void *v38; // rdi
  char *v39; // rdi
  char *v40; // r14
  char *v41; // r12
  char *v42; // rbx
  void *v43; // rdi
  void *v44; // rdi
  __m128i v45; // [rsp+0h] [rbp-68h] BYREF
  __m128i v46; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v47; // [rsp+28h] [rbp-40h]

  v2 = *(_WORD *)(a1 + 68);
  v47 = __readfsqword(0x28u);
  v3 = *(_BYTE *)(a1 + 70) == 0;
  *(_WORD *)(a1 + 68) = v2 & 0xDD78;
  if ( v3 )
    return;
  if ( v2 < 0 && !(unsigned __int8)sub_5401F0(*(__m256i ***)(qword_2CCB598 + 1824), a1, nullptr, 2) )
  {
    if ( !under_debugger )
      interr(3204);
    goto LABEL_85;
  }
  v5 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 48) = -1;
  if ( v5 )
  {
    qfree(*(void **)(v5 + 16));
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) = 0;
    if ( a2 )
    {
      v6 = *(_WORD *)(a1 + 68);
      if ( !*(_QWORD *)(a1 + 32) || (~(_BYTE)v6 & 0x70) == 0 )
      {
LABEL_7:
        if ( (v6 & 0x4000) == 0 || *(_QWORD *)(a1 + 16) == -1 )
          return;
      }
    }
  }
  else if ( a2 )
  {
    v6 = *(_WORD *)(a1 + 68);
    goto LABEL_7;
  }
  v7 = *(_BYTE *)(a1 + 70);
  *(_BYTE *)(a1 + 70) = 0;
  if ( (v2 & 1) == 0 )
  {
    if ( *(_QWORD *)a1 )
    {
      if ( !under_debugger )
        interr(973);
      goto LABEL_85;
    }
    return;
  }
  v8 = *(char ***)(a1 + 40);
  if ( v8 )
  {
    v9 = *v8;
    if ( *v8 )
    {
      v10 = v8[1];
      if ( v10 )
      {
        for ( i = nullptr; i != v10; ++i )
        {
          v12 = &v9[48 * (_QWORD)i];
          v13 = *((void **)v12 + 3);
          if ( v13 )
          {
            *((_QWORD *)v12 + 4) = 0;
            qfree(v13);
          }
          v14 = *(void **)v12;
          if ( *(_QWORD *)v12 )
          {
            *((_QWORD *)v12 + 1) = 0;
            qfree(v14);
          }
          v9 = *v8;
        }
      }
      v8[1] = nullptr;
      qfree(v9);
    }
    qfree(v8);
  }
  *(_QWORD *)(a1 + 40) = 0;
  qfree(*(void **)(a1 + 72));
  *(_BYTE *)(a1 + 71) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  switch ( v7 & 0xF )
  {
    case 0xA:
      v45 = _mm_loadu_si128((const __m128i *)a1);
      v46 = _mm_loadu_si128((const __m128i *)(a1 + 16));
      *(_OWORD *)a1 = 0;
      *(_OWORD *)(a1 + 16) = 0;
      clear_tinfo_t(&v46);
      clear_tinfo_t(&v45.m128i_u64[1]);
      clear_tinfo_t(&v45);
      return;
    case 0xB:
      v45 = _mm_loadu_si128((const __m128i *)a1);
      v46 = _mm_loadu_si128((const __m128i *)(a1 + 16));
      *(_OWORD *)a1 = 0;
      *(_OWORD *)(a1 + 16) = 0;
      clear_tinfo_t(&v45);
      return;
    case 0xC:
      v15 = *(char ***)a1;
      *(_QWORD *)a1 = 0;
      if ( v15 )
      {
        v16 = v15[8];
        if ( v16 )
        {
          v15[9] = nullptr;
          qfree(v16);
        }
        cleanup_argloc(v15 + 5);
        clear_tinfo_t(v15 + 4);
        v17 = *v15;
        if ( *v15 )
        {
          v18 = v15[1];
          v19 = nullptr;
          if ( v18 )
          {
            do
            {
              v20 = &v17[80 * (_QWORD)v19];
              clear_tinfo_t(v20 + 64);
              v21 = *((void **)v20 + 5);
              if ( v21 )
              {
                *((_QWORD *)v20 + 6) = 0;
                qfree(v21);
              }
              v22 = *((void **)v20 + 2);
              if ( v22 )
              {
                *((_QWORD *)v20 + 3) = 0;
                qfree(v22);
              }
              ++v19;
              cleanup_argloc(v20);
              v17 = *v15;
            }
            while ( v18 != v19 );
          }
          v15[1] = nullptr;
          qfree(v17);
        }
        qfree(v15);
      }
      return;
    case 0xD:
      v23 = v7 & 0x30;
      if ( v23 == 32 )
      {
        v25 = *(char ***)a1;
        *(_QWORD *)a1 = 0;
        if ( !v25 )
          return;
        v32 = v25[3];
        if ( v32 )
        {
          v25[4] = nullptr;
          qfree(v32);
        }
        v26 = *v25;
        if ( *v25 )
        {
          v33 = v25[1];
          v34 = 0;
          v35 = nullptr;
          if ( v33 )
          {
            do
            {
              v36 = &v26[v34];
              v37 = *(void **)&v26[v34 + 24];
              if ( v37 )
              {
                *((_QWORD *)v36 + 4) = 0;
                qfree(v37);
              }
              v38 = *(void **)v36;
              if ( *(_QWORD *)v36 )
              {
                *((_QWORD *)v36 + 1) = 0;
                qfree(v38);
              }
              ++v35;
              v26 = *v25;
              v34 += 56;
            }
            while ( v33 != v35 );
          }
          goto LABEL_56;
        }
LABEL_57:
        qfree(v25);
        return;
      }
      if ( v23 <= 0x20u )
      {
        v24 = *(char ***)a1;
        v25 = *(char ***)(a1 + 8);
        *(_OWORD *)a1 = 0;
        if ( v24 )
        {
          v39 = *v24;
          if ( *v24 )
          {
            v40 = v24[1];
            v41 = nullptr;
            if ( v40 )
            {
              do
              {
                v42 = &v39[144 * (_QWORD)v41];
                clear_tinfo_t(v42 + 64);
                v43 = *((void **)v42 + 5);
                if ( v43 )
                {
                  *((_QWORD *)v42 + 6) = 0;
                  qfree(v43);
                }
                v44 = *((void **)v42 + 2);
                if ( v44 )
                {
                  *((_QWORD *)v42 + 3) = 0;
                  qfree(v44);
                }
                ++v41;
                v39 = *v24;
              }
              while ( v40 != v41 );
            }
            v24[1] = nullptr;
            qfree(v39);
          }
          qfree(v24);
        }
        if ( !v25 )
          return;
        v26 = *v25;
        if ( *v25 )
        {
          v27 = v25[1];
          v28 = nullptr;
          if ( v27 )
          {
            do
            {
              v29 = &v26[144 * (_QWORD)v28];
              clear_tinfo_t(v29 + 64);
              v30 = *((void **)v29 + 5);
              if ( v30 )
              {
                *((_QWORD *)v29 + 6) = 0;
                qfree(v30);
              }
              v31 = *((void **)v29 + 2);
              if ( v31 )
              {
                *((_QWORD *)v29 + 3) = 0;
                qfree(v31);
              }
              ++v28;
              v26 = *v25;
            }
            while ( v27 != v28 );
          }
LABEL_56:
          v25[1] = nullptr;
          qfree(v26);
          goto LABEL_57;
        }
        goto LABEL_57;
      }
      if ( v23 == 48 )
      {
        if ( !under_debugger )
          interr(974);
LABEL_85:
        BUG();
      }
      return;
    case 0xE:
      *(_OWORD *)a1 = 0;
      *(_OWORD *)(a1 + 16) = 0;
      return;
    default:
      if ( (v7 & 0xFu) <= 9 )
        return;
      if ( !under_debugger )
        interr(879);
      goto LABEL_85;
  }
}
