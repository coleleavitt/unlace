__int64 __fastcall sub_9AC3F0(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  __int64 v4; // r13
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // ecx
  __int64 *v9; // rsi
  __int64 v10; // r8
  unsigned __int64 v11; // r15
  _QWORD *v12; // rdx
  int v13; // eax
  __int64 v14; // rbp
  __int64 v15; // rax
  unsigned __int64 *v16; // r13
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r15
  unsigned __int64 v20; // r14
  const char *v21; // rcx
  unsigned __int16 *v22; // r8
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned __int16 *v25; // r9
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rax
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned int *v42; // rcx
  size_t v43; // rbp
  __int64 v44; // rax
  unsigned __int64 v45; // rax
  unsigned int *v46; // rdx
  size_t v47; // rax
  const char *v48; // rdx
  __int64 v49; // rdi
  void (*v50)(); // rax
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v56; // r14
  unsigned int v57; // eax
  __int64 v58; // rcx
  unsigned int v59; // edi
  unsigned __int64 v60; // rsi
  __int64 v61; // r9
  size_t v62; // rax
  int v63; // esi
  int v64; // r9d
  __int64 v65; // r8
  int v66; // r15d
  unsigned __int64 v67; // r11
  int v68; // edi
  int v69; // edi
  bool v70; // zf
  __int64 v71; // r14
  __int64 v72; // rax
  unsigned __int64 v73; // rax
  unsigned int *v74; // rsi
  size_t v75; // rax
  const char *v76; // rsi
  __int64 v77; // rdi
  void (*v78)(); // r8
  int v79; // esi
  __int64 v80; // [rsp-8h] [rbp-90h]
  const char *v81; // [rsp+0h] [rbp-88h]
  size_t v82; // [rsp+8h] [rbp-80h]
  const char *v83; // [rsp+10h] [rbp-78h]
  void **v84; // [rsp+18h] [rbp-70h]
  unsigned __int64 *v85; // [rsp+20h] [rbp-68h]
  __int64 v86; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v87; // [rsp+38h] [rbp-50h] BYREF
  __m128 v88[4]; // [rsp+40h] [rbp-48h] BYREF

  v2 = *a2;
  v3 = *a1;
  v86 = v2;
  if ( !v2 )
    return 0;
  v4 = *(_QWORD *)(v3 + 8);
  v5 = *(_QWORD *)v3;
  v6 = *(unsigned int *)(v4 + 16);
  v7 = *(_QWORD *)v4;
  if ( (_DWORD)v6 )
  {
    v8 = (v6 - 1) & (((unsigned int)v2 >> 9) ^ ((unsigned int)v2 >> 4));
    v9 = (__int64 *)(v7 + 16LL * v8);
    v10 = *v9;
    if ( v2 == *v9 )
    {
LABEL_4:
      sub_9A6D70(v88, v9, (_QWORD *)(16 * v6 + v7), *(_QWORD *)(v3 + 8), 1);
      v11 = v88[0].m128_u64[0];
      goto LABEL_5;
    }
    v63 = 1;
    if ( v10 != -4096 )
    {
      do
      {
        v64 = v63 + 1;
        v8 = (v6 - 1) & (v63 + v8);
        v9 = (__int64 *)(v7 + 16LL * v8);
        v65 = *v9;
        if ( v2 == *v9 )
          goto LABEL_4;
        v63 = v64;
      }
      while ( v65 != -4096 );
    }
  }
  sub_9A6D70(
    v88,
    (_QWORD *)(v7 + 16LL * (unsigned int)v6),
    (_QWORD *)(v7 + 16LL * (unsigned int)v6),
    *(_QWORD *)(v3 + 8),
    1);
  v11 = v88[0].m128_u64[0];
LABEL_5:
  v12 = (_QWORD *)(*(_QWORD *)v4 + 16LL * *(unsigned int *)(v4 + 16));
  sub_9A6D70(v88, v12, v12, v4, 1);
  if ( v11 == v88[0].m128_u64[0] )
    v84 = sub_9AB220(v4, v2, v5);
  else
    v84 = *(void ***)(v11 + 8);
  v13 = *((_DWORD *)v84 + 12);
  if ( v13 != 1 )
  {
    if ( v13 != 2 && *((_DWORD *)v84 + 2) )
    {
      v14 = *(_QWORD *)(v3 + 16);
      v15 = *(unsigned int *)(v14 + 8);
      if ( v15 + 1 > (unsigned __int64)*(unsigned int *)(v14 + 12) )
      {
        sub_22134E0(*(_QWORD *)(v3 + 16), v14 + 16, v15 + 1, 8);
        v15 = *(unsigned int *)(v14 + 8);
      }
      *(_QWORD *)(*(_QWORD *)v14 + 8 * v15) = v84;
      v16 = (unsigned __int64 *)*v84;
      ++*(_DWORD *)(v14 + 8);
      v17 = *((unsigned int *)v84 + 2);
      *((_DWORD *)v84 + 12) = 1;
      v85 = &v16[v17];
      while ( v85 != v16 )
      {
        v18 = *(_QWORD *)(v3 + 24);
        v19 = *(_QWORD *)v3;
        v20 = *v16;
        v21 = (const char *)&v87;
        v22 = *(unsigned __int16 **)v18;
        v23 = *(_QWORD *)(v18 + 8);
        v88[0].m128_u64[0] = *(_QWORD *)v3 + 544LL;
        v87 = v20;
        v24 = 2 * v23;
        v25 = &v22[v23];
        v26 = (2 * v23) >> 3;
        v88[0].m128_u64[1] = (unsigned __int64)&v87;
        v27 = v24 >> 1;
        if ( v26 <= 0 )
          goto LABEL_71;
        v27 = *(_QWORD *)(v19 + 544);
        v21 = (const char *)&v22[4 * v26];
        do
        {
          v38 = *(_QWORD *)(*(_QWORD *)(v27 + 8LL * *v22) + 8LL);
          if ( (v38 & 2) != 0 || (v39 = v38 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          {
            v28 = 0;
LABEL_16:
            if ( v20 == v28 )
              goto LABEL_38;
            goto LABEL_17;
          }
          if ( *(_BYTE *)v39 == 12 )
          {
            v28 = *(_QWORD *)(v39 + 64);
            goto LABEL_16;
          }
          v28 = 0;
          if ( *(_BYTE *)v39 != 4 )
            goto LABEL_16;
          if ( v20 == *(_QWORD *)(v39 + 16) )
            goto LABEL_38;
LABEL_17:
          v29 = *(_QWORD *)(*(_QWORD *)(v27 + 8LL * v22[1]) + 8LL);
          if ( (v29 & 2) != 0 || (v30 = v29 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          {
            v31 = 0;
LABEL_21:
            if ( v20 == v31 )
              goto LABEL_63;
            goto LABEL_22;
          }
          if ( *(_BYTE *)v30 == 12 )
          {
            v31 = *(_QWORD *)(v30 + 64);
            goto LABEL_21;
          }
          v31 = 0;
          if ( *(_BYTE *)v30 != 4 )
            goto LABEL_21;
          if ( v20 == *(_QWORD *)(v30 + 16) )
          {
LABEL_63:
            ++v22;
            goto LABEL_38;
          }
LABEL_22:
          v32 = *(_QWORD *)(*(_QWORD *)(v27 + 8LL * v22[2]) + 8LL);
          if ( (v32 & 2) != 0 || (v33 = v32 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          {
            v34 = 0;
LABEL_26:
            if ( v20 == v34 )
              goto LABEL_59;
            goto LABEL_27;
          }
          if ( *(_BYTE *)v33 == 12 )
          {
            v34 = *(_QWORD *)(v33 + 64);
            goto LABEL_26;
          }
          v34 = 0;
          if ( *(_BYTE *)v33 != 4 )
            goto LABEL_26;
          if ( v20 == *(_QWORD *)(v33 + 16) )
          {
LABEL_59:
            v22 += 2;
            goto LABEL_38;
          }
LABEL_27:
          v35 = *(_QWORD *)(*(_QWORD *)(v27 + 8LL * v22[3]) + 8LL);
          if ( (v35 & 2) != 0 || (v36 = v35 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          {
            v37 = 0;
LABEL_31:
            if ( v20 == v37 )
              goto LABEL_55;
            goto LABEL_32;
          }
          if ( *(_BYTE *)v36 == 12 )
          {
            v37 = *(_QWORD *)(v36 + 64);
            goto LABEL_31;
          }
          v37 = 0;
          if ( *(_BYTE *)v36 != 4 )
            goto LABEL_31;
          if ( v20 == *(_QWORD *)(v36 + 16) )
          {
LABEL_55:
            v22 += 3;
            goto LABEL_38;
          }
LABEL_32:
          v22 += 4;
        }
        while ( v21 != (const char *)v22 );
        v27 = v25 - v22;
LABEL_71:
        if ( v27 == 2 )
          goto LABEL_78;
        if ( v27 != 3 )
        {
          if ( v27 == 1 )
            goto LABEL_74;
          goto LABEL_47;
        }
        if ( sub_9A4250(v88, *v22) )
          goto LABEL_38;
        ++v22;
LABEL_78:
        if ( sub_9A4250(v88, *v22) )
          goto LABEL_38;
        ++v22;
LABEL_74:
        if ( sub_9A4250(v88, *v22) )
        {
LABEL_38:
          if ( v25 != v22 )
          {
            v40 = *(_QWORD *)(**(_QWORD **)(v3 + 32) + 40LL);
            if ( (v40 & 7) != 0 || (v41 = v40 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
            {
              v62 = j__strlen(&byte_22CD811);
              v21 = &byte_22CD811;
              v43 = v62;
            }
            else
            {
              v42 = *(unsigned int **)(v41 + 16);
              v43 = *v42;
              v21 = (const char *)(v42 + 4);
            }
            v44 = *(_QWORD *)(v20 + 40);
            if ( (v44 & 7) != 0 || (v45 = v44 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
            {
              v83 = v21;
              v47 = j__strlen(&byte_22CD811);
              v48 = &byte_22CD811;
              v21 = v83;
            }
            else
            {
              v46 = *(unsigned int **)(v45 + 16);
              v47 = *v46;
              v48 = (const char *)(v46 + 4);
            }
            v49 = *(_QWORD *)(v19 + 320);
            v82 = v47;
            v81 = v48;
            v27 = (__int64)nullsub_362;
            v50 = *(void (**)())(*(_QWORD *)v49 + 128LL);
            if ( v50 != nullsub_362 )
            {
              ((void (__fastcall *)(__int64, _QWORD, _QWORD, const char *, size_t, _QWORD, const char *, size_t))v50)(
                v49,
                **(_QWORD **)(v3 + 40),
                *(_QWORD *)(*(_QWORD *)(v3 + 40) + 8LL),
                v21,
                v43,
                **(unsigned int **)(v3 + 48),
                v81,
                v82);
              v27 = v80;
            }
          }
        }
LABEL_47:
        v51 = *(_QWORD *)(v3 + 56);
        v88[0].m128_u64[0] = v20;
        if ( !*(_QWORD *)(v51 + 16) )
          std::__throw_bad_function_call();
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __m128 *, __int64, const char *))(v51 + 24))(
               v51,
               v88,
               v27,
               v21) )
        {
          v56 = *(_QWORD *)(v3 + 8);
          v57 = *(_DWORD *)(v56 + 40);
          v58 = v56 + 24;
          if ( v57 )
          {
            v52 = v86;
            v53 = *(_QWORD *)(v56 + 24);
            v59 = (v57 - 1) & (((unsigned int)v86 >> 9) ^ ((unsigned int)v86 >> 4));
            v60 = v53 + 16LL * v59;
            v61 = *(_QWORD *)v60;
            if ( *(_QWORD *)v60 == v86 )
            {
LABEL_67:
              sub_9A6DE0(v88, (_QWORD *)v60, (_QWORD *)(v53 + 16LL * v57), v58, 1);
              goto LABEL_49;
            }
            v66 = 1;
            v67 = 0;
            if ( v61 != -4096 )
            {
              while ( 1 )
              {
                if ( v61 == -8192 && !v67 )
                  v67 = v60;
                v59 = (v57 - 1) & (v66 + v59);
                v60 = v53 + 16LL * v59;
                v61 = *(_QWORD *)v60;
                if ( v86 == *(_QWORD *)v60 )
                  goto LABEL_67;
                if ( v61 == -4096 )
                {
                  if ( v67 )
                    v60 = v67;
                  break;
                }
                ++v66;
              }
            }
            v68 = *(_DWORD *)(v56 + 32);
            v54 = 3 * v57;
            v88[0].m128_u64[0] = v60;
            v69 = v68 + 1;
            if ( 4 * v69 < (unsigned int)v54 )
            {
              v54 = v57 - *(_DWORD *)(v56 + 36) - v69;
              if ( (unsigned int)v54 > v57 >> 3 )
              {
LABEL_89:
                v70 = *(_QWORD *)v60 == -4096;
                *(_DWORD *)(v56 + 32) = v69;
                if ( !v70 )
                  --*(_DWORD *)(v56 + 36);
                *(_QWORD *)v60 = v52;
                *(_BYTE *)(v60 + 8) = 1;
                sub_9A6DE0(v88, (_QWORD *)v60, (_QWORD *)(v53 + 16LL * v57), v58, 1);
                v71 = v86;
                v72 = *(_QWORD *)(v86 + 40);
                if ( (v72 & 7) != 0 || (v73 = v72 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
                {
                  v75 = j__strlen(&byte_22CD811);
                  v76 = &byte_22CD811;
                }
                else
                {
                  v74 = *(unsigned int **)(v73 + 16);
                  v75 = *v74;
                  v76 = (const char *)(v74 + 4);
                }
                v77 = *(_QWORD *)(*(_QWORD *)v3 + 320LL);
                v78 = *(void (**)())(*(_QWORD *)v77 + 136LL);
                if ( v78 != nullsub_363 )
                  ((void (__fastcall *)(__int64, const char *, size_t, _QWORD))v78)(
                    v77,
                    v76,
                    v75,
                    *(unsigned int *)(v71 + 24));
                goto LABEL_49;
              }
              v79 = v57;
LABEL_99:
              sub_9AB7C0(v56 + 24, v79, v52, v58, v53, v54);
              sub_9A6AE0((__int64 *)(v56 + 24), &v86, v88);
              v52 = v86;
              v53 = *(_QWORD *)(v56 + 24);
              v57 = *(_DWORD *)(v56 + 40);
              v69 = *(_DWORD *)(v56 + 32) + 1;
              v60 = v88[0].m128_u64[0];
              v58 = v56 + 24;
              goto LABEL_89;
            }
          }
          else
          {
            v88[0].m128_u64[0] = 0;
          }
          v79 = 2 * v57;
          goto LABEL_99;
        }
LABEL_49:
        ++v16;
      }
      *((_DWORD *)v84 + 12) = 2;
    }
    return 0;
  }
  return 1;
}

