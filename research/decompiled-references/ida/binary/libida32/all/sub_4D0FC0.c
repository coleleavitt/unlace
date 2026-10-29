__int64 __fastcall sub_4D0FC0(__int64 a1, __int64 a2, char **a3, __int64 a4)
{
  const char *v5; // rdi
  __int64 v7; // rbx
  bool v8; // zf
  char *file_ext; // rax
  __int64 extlang; // rax
  __int64 v12; // rdx
  __int64 (__fastcall *v13)(const char *, const char *, char **); // rcx
  const char *v14; // rdi
  unsigned int v15; // r13d
  __int64 v16; // rax
  const char *v17; // r9
  size_t v18; // r15
  __int64 v19; // r8
  unsigned __int64 v20; // r15
  _BYTE *v21; // rsi
  __int64 v22; // r8
  __int64 v23; // r10
  unsigned __int64 v24; // r15
  __int64 v26; // rax
  const char *v27; // rcx
  const char *v28; // rsi
  const char *v29; // r13
  __int64 v30; // rbx
  const char *v31; // rdi
  __int64 v32; // rbp
  const char *v33; // rdi
  __int64 (__fastcall **v34)(); // r15
  int v35; // eax
  int v36; // eax
  int v37; // edx
  const char *v38; // r15
  size_t v39; // rax
  size_t v40; // rbx
  void *v41; // rdi
  size_t v42; // rbp
  char v43; // al
  _DWORD *v44; // rdx
  __int64 v45; // rdi
  char *v46; // rsi
  __m128i si128; // xmm0
  __int64 v48; // r10
  __int64 v49; // r15
  const char *v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // [rsp+8h] [rbp-100h]
  __int64 v55; // [rsp+8h] [rbp-100h]
  __int64 v56; // [rsp+8h] [rbp-100h]
  _DWORD *src; // [rsp+10h] [rbp-F8h]
  __int64 v58; // [rsp+18h] [rbp-F0h]
  unsigned __int8 v59; // [rsp+2Fh] [rbp-D9h]
  __int64 v60; // [rsp+30h] [rbp-D8h]
  char **v61; // [rsp+38h] [rbp-D0h]
  void *dest; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v63; // [rsp+68h] [rbp-A0h]
  char v64[8]; // [rsp+80h] [rbp-88h] BYREF
  __int128 v65; // [rsp+88h] [rbp-80h]
  __int64 v66; // [rsp+98h] [rbp-70h]
  char v67[8]; // [rsp+A0h] [rbp-68h] BYREF
  _OWORD v68[2]; // [rsp+A8h] [rbp-60h] BYREF
  unsigned __int64 v69; // [rsp+C8h] [rbp-40h]

  v5 = haystack;
  v7 = a2;
  v8 = *(_QWORD *)(a2 + 8) == 0;
  v69 = __readfsqword(0x28u);
  if ( !v8 )
    v5 = *(const char **)a2;
  file_ext = (char *)get_file_ext(v5);
  extlang = find_extlang(file_ext);
  v12 = *(_QWORD *)(a1 + 88);
  if ( v12 )
    --*(_DWORD *)(v12 + 12);
  *(_QWORD *)(a1 + 88) = extlang;
  if ( !extlang
    || (v13 = *(__int64 (__fastcall **)(const char *, const char *, char **))(extlang + 48)) == nullptr
    || !*(_QWORD *)(extlang + 80)
    || !*(_QWORD *)(extlang + 56)
    || !*(_QWORD *)(extlang + 104)
    || !*(_QWORD *)(extlang + 88) )
  {
    sub_3573A0(a3);
    return 0;
  }
  if ( (*(_BYTE *)(extlang + 8) & 2) != 0 )
  {
    make_script_ns();
    v13 = *(__int64 (__fastcall **)(const char *, const char *, char **))(*(_QWORD *)(a1 + 88) + 48LL);
  }
  v14 = haystack;
  if ( *(_QWORD *)(a2 + 8) )
    v14 = *(const char **)a2;
  v15 = v13(v14, haystack, a3);
  if ( (_BYTE)v15 )
  {
    v16 = *(_QWORD *)(a1 + 88);
    dest = nullptr;
    v63 = 0;
    if ( (*(_BYTE *)(v16 + 8) & 2) == 0 )
    {
      v21 = nullptr;
      if ( !"PLUGIN_ENTRY" )
        goto LABEL_26;
      v24 = 13;
      v21 = nullptr;
      v22 = 0;
      v23 = 12;
LABEL_37:
      v58 = v22;
      v55 = v23;
      dest = (void *)qvector_reserve(&dest, v21, v24, 1);
      v22 = v58;
      v21 = dest;
      v23 = v55;
LABEL_25:
      *(_QWORD *)&v63 = v24;
      v21[v23] = 0;
      qmemcpy((char *)dest + v22, "PLUGIN_ENTRY", 12);
      v21 = dest;
      v16 = *(_QWORD *)(a1 + 88);
LABEL_26:
      v54 = a1 + 96;
      v15 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, _QWORD, char **))(v16 + 56))(a1 + 96, v21, 0, 0, a3);
      if ( !(_BYTE)v15 )
      {
LABEL_29:
        v15 = 0;
        goto LABEL_30;
      }
      if ( *(_BYTE *)(a1 + 96) != 5 )
      {
        sub_3573A0(a3);
        goto LABEL_29;
      }
      v26 = *(_QWORD *)(a1 + 88);
      v64[0] = 2;
      v66 = 0;
      v65 = 0;
      if ( (*(unsigned __int8 (__fastcall **)(char *, __int64, const char *))(v26 + 88))(v64, v54, &byte_22CD811) )
      {
        sub_3573A0((char **)a4);
        v27 = haystack;
        if ( *(_QWORD *)(a4 + 8) )
          v27 = *(const char **)a4;
        v28 = haystack;
        if ( *(_QWORD *)(v7 + 8) )
          v28 = *(const char **)v7;
        if ( (int *)qword_2CA1F78 != &dword_2CA1F68 )
        {
          v61 = a3;
          v59 = v15;
          v29 = v27;
          v60 = v7;
          v30 = qword_2CA1F78;
          while ( 1 )
          {
            v31 = haystack;
            if ( *(_QWORD *)(v30 + 64) )
              v31 = *(const char **)(v30 + 56);
            if ( !strcmp(v31, v29) )
            {
              v32 = *(_QWORD *)(v30 + 40);
              v33 = haystack;
              if ( v32 )
                v33 = *(const char **)(v30 + 32);
              if ( strcmp(v33, v28) )
                break;
            }
            v30 = std::_Rb_tree_increment();
            if ( (int *)v30 == &dword_2CA1F68 )
            {
              v15 = v59;
              v7 = v60;
              a3 = v61;
              goto LABEL_56;
            }
          }
          v48 = v32;
          v49 = v30;
          v15 = v59;
          v7 = v60;
          a3 = v61;
          v50 = haystack;
          if ( v48 )
            v50 = *(const char **)(v49 + 32);
          if ( v50 )
          {
            qbasename(v50);
            sub_3573A0(v61);
            v15 = 0;
            goto LABEL_70;
          }
        }
      }
LABEL_56:
      v67[0] = 2;
      v34 = (__int64 (__fastcall **)())&unk_2B03360;
      memset(v68, 0, 24);
      while ( 1 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(char *, __int64, __int64 (__fastcall *)()))(*(_QWORD *)(a1 + 88) + 88LL))(
               v67,
               v54,
               v34[1]) )
        {
          v43 = *(_BYTE *)v34;
          if ( v67[0] != *(_BYTE *)v34 )
            goto LABEL_78;
          v44 = (_DWORD *)((char *)v34[2] + a1);
          if ( v43 == 2 )
          {
            *v44 = v68[0];
            goto LABEL_61;
          }
          if ( v43 == 7 )
          {
            v45 = *(_QWORD *)&v68[0];
            if ( *((_QWORD *)&v68[0] + 1) < *(_QWORD *)&v68[1] && *((_QWORD *)&v68[0] + 1) && *(_QWORD *)&v68[0] )
            {
              src = (_DWORD *)((char *)v34[2] + a1);
              v52 = qrealloc(*(_QWORD *)&v68[0]);
              v44 = src;
              v45 = v52;
              if ( v52 )
              {
                memset(v68, 0, 24);
LABEL_76:
                *(_QWORD *)v44 = v45;
                goto LABEL_61;
              }
              v45 = *(_QWORD *)&v68[0];
            }
            memset(v68, 0, 24);
            if ( !v45 && ((_BYTE)v34[3] & 1) != 0 )
            {
LABEL_78:
              sub_3573A0(a3);
              v15 = 0;
LABEL_62:
              v36 = *(_DWORD *)(a1 + 4);
              v37 = v36;
              BYTE1(v37) = BYTE1(v36) | 0x80;
              *(_DWORD *)(a1 + 4) = v37;
              if ( (v36 & 0x20) != 0 )
              {
                v46 = *a3;
                if ( (unsigned __int64)a3[2] <= 0x30 )
                {
                  v51 = qvector_reserve(a3, v46, 49, 1);
                  *a3 = (char *)v51;
                  v46 = (char *)v51;
                }
                si128 = _mm_load_si128((const __m128i *)&xmmword_2383A00);
                a3[1] = (_BYTE *)(&dword_30 + 1);
                v15 = 0;
                *(__m128i *)v46 = si128;
                *((__m128i *)v46 + 1) = _mm_load_si128((const __m128i *)&xmmword_2383A10);
                *((__m128i *)v46 + 2) = _mm_load_si128((const __m128i *)&xmmword_2383A20);
                (*a3)[48] = 0;
              }
              else if ( *(_QWORD *)(v7 + 8)
                     && (v38 = *(const char **)v7) != nullptr
                     && (v39 = strlen(*(const char **)v7), (v40 = v39) != 0) )
              {
                v41 = *(void **)(a1 + 64);
                v42 = v39 + 1;
                if ( *(_QWORD *)(a1 + 80) < v39 + 1 )
                {
                  v53 = qvector_reserve(a1 + 64, *(_QWORD *)(a1 + 64), v42, 1);
                  *(_QWORD *)(a1 + 64) = v53;
                  v41 = (void *)v53;
                }
                *(_QWORD *)(a1 + 72) = v42;
                memmove(v41, v38, v40);
                *(_BYTE *)(*(_QWORD *)(a1 + 64) + v40) = 0;
              }
              else
              {
                *(_QWORD *)(a1 + 72) = 0;
              }
              free_idcv(v67);
LABEL_70:
              free_idcv(v64);
LABEL_30:
              if ( dest )
              {
                *(_QWORD *)&v63 = 0;
                qfree(dest);
              }
              return v15;
            }
            goto LABEL_76;
          }
        }
        else
        {
          v35 = *((_DWORD *)v34 + 6);
          if ( (v35 & 1) != 0 || (*(_BYTE *)(a1 + 5) & 1) == 0 && (v35 & 2) != 0 )
            goto LABEL_78;
        }
LABEL_61:
        v34 += 4;
        if ( v34 == &off_2B03460 )
          goto LABEL_62;
      }
    }
    v17 = haystack;
    if ( haystack )
    {
      v18 = strlen(haystack);
      dest = (void *)qvector_reserve(&dest, 0, v18 + 1, 1);
      *(_QWORD *)&v63 = v18 + 1;
      *((_BYTE *)dest + v18) = 0;
      memmove(dest, haystack, v18);
      v17 = (const char *)dest;
      if ( (_QWORD)v63 )
      {
        v19 = v63 - 1;
        v20 = v63 + 1;
      }
      else
      {
        v19 = 0;
        v20 = 2;
      }
      if ( *((_QWORD *)&v63 + 1) >= v20 )
      {
LABEL_21:
        *(_QWORD *)&v63 = v20;
        v17[v19] = 46;
        *((_BYTE *)dest + v19 + 1) = 0;
        v21 = dest;
        if ( !"PLUGIN_ENTRY" )
        {
          v16 = *(_QWORD *)(a1 + 88);
          goto LABEL_26;
        }
        if ( (_QWORD)v63 )
        {
          v22 = v63 - 1;
          v23 = v63 + 11;
          v24 = v63 + 12;
        }
        else
        {
          v22 = 0;
          v24 = 13;
          v23 = 12;
        }
        if ( *((_QWORD *)&v63 + 1) >= v24 )
          goto LABEL_25;
        goto LABEL_37;
      }
    }
    else
    {
      v20 = 2;
      v19 = 0;
    }
    v56 = v19;
    dest = (void *)qvector_reserve(&dest, v17, v20, 1);
    v19 = v56;
    v17 = (const char *)dest;
    goto LABEL_21;
  }
  return v15;
}

