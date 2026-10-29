void __fastcall sub_7CBE80(__int64 a1, __int64 a2, char a3)
{
  char v3; // r14
  __int64 v6; // rax
  void **p_ptr; // r8
  unsigned __int64 v8; // rbp
  unsigned __int8 v9; // al
  __int64 v10; // rdx
  __int64 v11; // rsi
  unsigned __int64 v12; // rcx
  __int64 v13; // r15
  int v14; // r14d
  int v15; // r15d
  __int64 v16; // rdi
  _WORD *v17; // rdx
  unsigned __int64 v18; // rax
  char v19; // al
  char v20; // dl
  __int64 v21; // rdi
  _BYTE *v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // r14
  __int64 v26; // rdi
  int v27; // r15d
  int v28; // r14d
  __int64 v29; // rdi
  char v30; // al
  char *v31; // rsi
  unsigned __int64 v32; // rdx
  _QWORD *v33; // rax
  __int64 v34; // rdi
  _WORD *v35; // rdx
  __int64 v36; // rdi
  _WORD *v37; // rdx
  unsigned __int64 *v38; // rax
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rax
  __int64 v41; // rdi
  __int64 v42; // rdx
  unsigned __int64 v43; // rdx
  __int64 v44; // rcx
  char v45; // dl
  char *v46; // rsi
  char *v47; // rax
  bool (__fastcall *v48)(__int64); // rax
  Elf64_Rela *v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rax
  char v53; // dl
  __int64 v54; // rax
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // r9
  char *v57; // rax
  char *v58; // rsi
  unsigned int v59; // ecx
  unsigned int v60; // eax
  __int64 v61; // rdx
  _QWORD *v62; // rax
  __int64 v63; // rdx
  char v64; // [rsp+14h] [rbp-5Ch]
  void *ptr; // [rsp+18h] [rbp-58h] BYREF
  __int64 v66; // [rsp+20h] [rbp-50h]
  _BYTE v67[72]; // [rsp+28h] [rbp-48h] BYREF

  if ( *(char *)(a1 + 11) >= 0 )
  {
    v3 = a3;
    if ( a3 )
      *(_DWORD *)(a1 + 32) += *(unsigned __int8 *)(a1 + 8);
    ptr = v67;
    v66 = 0x200000000LL;
    v6 = sub_79C190(a2);
    p_ptr = &ptr;
    if ( v6 )
    {
      v64 = v3;
      v8 = v6;
      while ( 1 )
      {
        v9 = *(_BYTE *)(v8 + 28) & 0x7F;
        if ( v9 == 48 || (*(_BYTE *)(v8 + 29) & 2) != 0 )
          goto LABEL_36;
        v10 = v9;
        if ( (unsigned int)v9 - 32 <= 5 )
        {
          if ( (unsigned int)sub_781200(v8) == 1 && (*(_BYTE *)(a2 + 8) & 0x7Fu) - 58 > 1 )
            goto LABEL_36;
          v10 = *(_BYTE *)(v8 + 28) & 0x7F;
          v9 = *(_BYTE *)(v8 + 28) & 0x7F;
        }
        v11 = (unsigned int)v66;
        if ( (unsigned int)(v10 - 62) <= 2 )
          break;
        v12 = (unsigned int)(v10 - 24);
        if ( (unsigned int)v12 <= 0x1A )
        {
          v13 = *(_QWORD *)(v8 + 48);
          goto LABEL_14;
        }
        if ( (_DWORD)v66 )
          goto LABEL_16;
LABEL_17:
        if ( (unsigned int)(v10 - 56) <= 4 )
        {
          if ( (*(_BYTE *)(v8 + 74) & 8) == 0 )
          {
            v54 = (unsigned int)v66;
            v55 = (unsigned int)v66 + 1LL;
            if ( HIDWORD(v66) < v55 )
            {
              sub_25D6060(&ptr, v67, v55, 8);
              v54 = (unsigned int)v66;
            }
            *((_QWORD *)ptr + v54) = v8;
            LODWORD(v66) = v66 + 1;
            goto LABEL_36;
          }
          goto LABEL_19;
        }
LABEL_50:
        if ( v9 == 86 )
        {
          v27 = 0;
          v28 = *(_DWORD *)(a1 + 32) - *(unsigned __int8 *)(a1 + 8);
          *(_DWORD *)(a1 + 32) = v28;
          if ( v28 )
          {
            do
            {
              v36 = *(_QWORD *)a1;
              v37 = *(_WORD **)(*(_QWORD *)a1 + 32LL);
              if ( *(_QWORD *)(*(_QWORD *)a1 + 24LL) - (_QWORD)v37 > 1u )
              {
                *v37 = 8224;
                *(_QWORD *)(v36 + 32) += 2LL;
              }
              else
              {
                sub_26240F0(v36, "  ", 2);
              }
              ++v27;
            }
            while ( v28 != v27 );
          }
          v29 = *(_QWORD *)a1;
          v30 = (*(_BYTE *)(v8 + 29) >> 5) & 3;
          if ( v30 == 2 )
          {
            v33 = *(_QWORD **)(v29 + 32);
            v32 = 7;
            v31 = "private";
            if ( *(_QWORD *)(v29 + 24) - (_QWORD)v33 >= 7u )
              goto LABEL_56;
          }
          else
          {
            v31 = "protected";
            v32 = 9;
            if ( !v30 )
            {
              v31 = "public";
              v32 = 6;
            }
            v33 = *(_QWORD **)(v29 + 32);
            if ( *(_QWORD *)(v29 + 24) - (_QWORD)v33 >= v32 )
            {
LABEL_56:
              if ( (unsigned int)v32 >= 8 )
              {
                v56 = (unsigned __int64)(v33 + 1) & 0xFFFFFFFFFFFFFFF8LL;
                *v33 = *(_QWORD *)v31;
                *(_QWORD *)((char *)v33 + v32 - 8) = *(_QWORD *)&v31[v32 - 8];
                v57 = (char *)v33 - v56;
                v58 = (char *)(v31 - v57);
                if ( (((_DWORD)v32 + (_DWORD)v57) & 0xFFFFFFF8) >= 8 )
                {
                  v59 = (v32 + (_DWORD)v57) & 0xFFFFFFF8;
                  v60 = 0;
                  do
                  {
                    p_ptr = (void **)v60;
                    v60 += 8;
                    *(void **)((char *)p_ptr + v56) = *(void **)((char *)p_ptr + (_QWORD)v58);
                  }
                  while ( v60 < v59 );
                }
              }
              else
              {
                *(_DWORD *)v33 = *(_DWORD *)v31;
                *(_DWORD *)((char *)v33 + (unsigned int)v32 - 4) = *(_DWORD *)&v31[(unsigned int)v32 - 4];
              }
              *(_QWORD *)(v29 + 32) += v32;
              goto LABEL_59;
            }
          }
          sub_26240F0(v29, v31, v32);
LABEL_59:
          v34 = *(_QWORD *)a1;
          v35 = *(_WORD **)(*(_QWORD *)a1 + 32LL);
          if ( *(_QWORD *)(*(_QWORD *)a1 + 24LL) - (_QWORD)v35 <= 1u )
          {
            sub_26240F0(v34, ":\n", 2);
          }
          else
          {
            *v35 = 2618;
            *(_QWORD *)(v34 + 32) += 2LL;
          }
          *(_DWORD *)(a1 + 32) += *(unsigned __int8 *)(a1 + 8);
          goto LABEL_36;
        }
LABEL_19:
        v14 = *(_DWORD *)(a1 + 32);
        v15 = 0;
        if ( v14 )
        {
          do
          {
            while ( 1 )
            {
              v16 = *(_QWORD *)a1;
              v17 = *(_WORD **)(*(_QWORD *)a1 + 32LL);
              if ( *(_QWORD *)(*(_QWORD *)a1 + 24LL) - (_QWORD)v17 <= 1u )
                break;
              ++v15;
              *v17 = 8224;
              *(_QWORD *)(v16 + 32) += 2LL;
              if ( v14 == v15 )
                goto LABEL_24;
            }
            ++v15;
            sub_26240F0(v16, "  ", 2);
          }
          while ( v14 != v15 );
        }
LABEL_24:
        sub_7C5C80(a1, v8);
        v18 = *(_BYTE *)(v8 + 28) & 0x7F;
        if ( (_BYTE)v18 == 16 )
        {
          v48 = *(bool (__fastcall **)(__int64))(*(_QWORD *)v8 + 72LL);
          if ( v48 == sub_5F7BA0 )
          {
            if ( (*(_BYTE *)(v8 + 112) & 1) != 0 || *(_QWORD *)(v8 + 112) )
              goto LABEL_32;
            goto LABEL_98;
          }
          if ( v48(v8) )
            goto LABEL_27;
          v18 = *(_BYTE *)(v8 + 28) & 0x7F;
          v43 = (unsigned __int8)v18;
          if ( (unsigned int)(unsigned __int8)v18 - 32 > 5 )
          {
LABEL_151:
            if ( (_BYTE)v18 == 69 )
            {
              v52 = *(_QWORD *)(v8 + 48);
              v53 = *(_BYTE *)(v52 + 83);
              if ( (v53 & 8) != 0 )
              {
                if ( (*(_BYTE *)(v52 + 83) & 0x40) != 0 )
                  goto LABEL_154;
                goto LABEL_98;
              }
              if ( (*(_BYTE *)(v52 + 128) & 1) != 0 )
              {
LABEL_154:
                if ( *(char *)(a1 + 11) >= 0 )
                  goto LABEL_35;
                goto LABEL_32;
              }
              if ( *(_QWORD *)(v52 + 128) || (v53 & 0x40) != 0 )
              {
                if ( *(char *)(a1 + 11) < 0 )
                  goto LABEL_32;
LABEL_163:
                if ( (*(_BYTE *)(v52 + 128) & 1) == 0 && !*(_QWORD *)(v52 + 128) )
                  goto LABEL_135;
                goto LABEL_35;
              }
LABEL_98:
              v44 = *(_QWORD *)a1;
              v45 = 59;
              v46 = ";";
LABEL_99:
              v47 = *(char **)(v44 + 32);
              if ( *(char **)(v44 + 24) == v47 )
              {
                sub_26240F0(v44, v46, 1);
              }
              else
              {
                *v47 = v45;
                ++*(_QWORD *)(v44 + 32);
              }
              goto LABEL_27;
            }
            if ( (unsigned __int8)v18 > 0x16u )
            {
              if ( (_BYTE)v18 != 23 )
              {
                v44 = *(_QWORD *)a1;
                v45 = 59;
                v46 = ";";
                v21 = *(_QWORD *)a1;
                if ( (_BYTE)v18 == 31 )
                {
                  if ( *(_QWORD *)(v8 + 8) <= 7u )
                    goto LABEL_33;
                  v45 = 44;
                  v46 = ",";
                }
                goto LABEL_99;
              }
LABEL_27:
              if ( *(char *)(a1 + 11) < 0 )
                goto LABEL_32;
              if ( (*(_BYTE *)(v8 + 28) & 0x7Fu) - 32 <= 5 )
              {
                v19 = *(_BYTE *)(v8 + 83);
                v20 = v19 & 8;
                goto LABEL_30;
              }
              if ( (*(_BYTE *)(v8 + 28) & 0x7F) != 0x45 )
                goto LABEL_32;
              v52 = *(_QWORD *)(v8 + 48);
              v53 = *(_BYTE *)(v52 + 83);
              if ( (v53 & 8) != 0 )
              {
LABEL_135:
                if ( (v53 & 0x40) != 0 )
                  goto LABEL_35;
                goto LABEL_32;
              }
              goto LABEL_163;
            }
LABEL_112:
            v49 = &stru_4C0010;
            if ( !_bittest64((const __int64 *)&v49, v43) )
            {
              v50 = 11665408;
              if ( !_bittest64(&v50, v18) )
                goto LABEL_98;
            }
            goto LABEL_27;
          }
        }
        else
        {
          if ( (unsigned __int8)v18 <= 0x10u )
          {
            if ( (((_BYTE)v18 + 115) & 0x7Fu) <= 2 )
              goto LABEL_27;
            v43 = (unsigned __int8)v18;
            goto LABEL_112;
          }
          if ( (((_BYTE)v18 + 104) & 0x7Fu) <= 1 )
            goto LABEL_27;
          v43 = (unsigned __int8)v18;
          if ( (unsigned int)(unsigned __int8)v18 - 32 > 5 )
            goto LABEL_151;
        }
        v19 = *(_BYTE *)(v8 + 83);
        v20 = v19 & 8;
        if ( (v19 & 8) != 0 )
          goto LABEL_96;
        if ( (*(_BYTE *)(v8 + 128) & 1) != 0 )
        {
          if ( (v19 & 2) != 0 )
            goto LABEL_98;
        }
        else
        {
          if ( !*(_QWORD *)(v8 + 128) )
          {
LABEL_96:
            if ( (v19 & 0x40) != 0 && (v19 & 2) == 0 )
            {
              if ( *(char *)(a1 + 11) < 0 )
                goto LABEL_32;
LABEL_30:
              if ( v20 || (*(_BYTE *)(v8 + 128) & 1) == 0 && !*(_QWORD *)(v8 + 128) )
                goto LABEL_31;
              goto LABEL_35;
            }
            goto LABEL_98;
          }
          if ( (v19 & 2) != 0 )
            goto LABEL_98;
        }
        if ( *(char *)(a1 + 11) < 0 )
          goto LABEL_32;
        if ( (*(_BYTE *)(v8 + 128) & 1) == 0 && !*(_QWORD *)(v8 + 128) )
        {
LABEL_31:
          if ( (v19 & 0x40) != 0 )
            goto LABEL_35;
LABEL_32:
          v21 = *(_QWORD *)a1;
LABEL_33:
          v22 = *(_BYTE **)(v21 + 32);
          if ( *(_BYTE **)(v21 + 24) == v22 )
          {
            sub_26240F0(v21, "\n", 1);
          }
          else
          {
            *v22 = 10;
            ++*(_QWORD *)(v21 + 32);
          }
        }
LABEL_35:
        if ( (*(_BYTE *)(v8 + 29) & 1) == 0 )
          goto LABEL_36;
        v38 = sub_79A2B0(v8);
        v39 = *v38;
        v40 = *v38 + 8LL * *((unsigned int *)v38 + 2);
        if ( v39 < v40 )
        {
          while ( *(_WORD *)(*(_QWORD *)v39 + 32LL) != 287 )
          {
            v39 += 8LL;
            if ( v40 == v39 )
              goto LABEL_36;
          }
        }
        else
        {
          if ( v39 == v40 )
            goto LABEL_36;
          while ( *(_WORD *)(*(_QWORD *)v40 + 32LL) != 287 )
          {
            v40 += 8LL;
            if ( v39 == v40 )
              goto LABEL_36;
          }
        }
        if ( v39 != v40 )
        {
          v41 = *(_QWORD *)a1;
          v42 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
          if ( (unsigned __int64)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) - v42) <= 0x1E )
          {
            sub_26240F0(v41, "#pragma omp end declare target\n", 31);
          }
          else
          {
            *(__m128i *)v42 = _mm_load_si128((const __m128i *)&xmmword_3C7E960);
            *(__m128i *)(v42 + 15) = _mm_load_si128((const __m128i *)&xmmword_3C7E970);
            *(_QWORD *)(v41 + 32) += 31LL;
          }
        }
LABEL_36:
        v23 = *(_QWORD *)(v8 + 8);
        v8 = v23 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v23 <= 7 )
        {
          v3 = v64;
          goto LABEL_38;
        }
      }
      v12 = *(_QWORD *)(v8 + 80) & 0xFFFFFFFFFFFFFFF8LL;
      v10 = *(_QWORD *)(v8 + 80) & 4LL;
      if ( (*(_QWORD *)(v8 + 80) & 4) != 0 )
        v13 = *(_QWORD *)(v12 + 8);
      else
        v13 = *(_QWORD *)v12;
LABEL_14:
      if ( (_DWORD)v66 )
      {
        if ( (v13 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
          goto LABEL_16;
        while ( 1 )
        {
LABEL_47:
          v25 = v13 & 0xFFFFFFFFFFFFFFF0LL;
          if ( (unsigned __int8)sub_B08A50(*(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL), v11, v10, v12, p_ptr) )
          {
LABEL_128:
            if ( (v13 & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
            {
              v51 = *(_QWORD *)v25;
              if ( *(_BYTE *)(*(_QWORD *)v25 + 16LL) == 24 )
              {
                v61 = 0;
                if ( (*(_BYTE *)(v51 + 19) & 8) != 0 )
                  v61 = *(_QWORD *)(v51 + 48);
                v62 = ptr;
                if ( *(_QWORD *)ptr == v61 )
                {
                  v63 = (unsigned int)v66;
                  if ( HIDWORD(v66) < (unsigned __int64)(unsigned int)v66 + 1 )
                  {
                    sub_25D6060(&ptr, v67, (unsigned int)v66 + 1LL, 8);
                    v62 = ptr;
                    v63 = (unsigned int)v66;
                  }
                  v62[v63] = v8;
                  LODWORD(v66) = v66 + 1;
                  goto LABEL_36;
                }
              }
            }
            if ( !(_DWORD)v66 )
            {
              LODWORD(v10) = *(_BYTE *)(v8 + 28) & 0x7F;
              v9 = *(_BYTE *)(v8 + 28) & 0x7F;
              goto LABEL_17;
            }
LABEL_16:
            sub_7CBD80((_DWORD *)a1, (__int64)&ptr);
            LODWORD(v10) = *(_BYTE *)(v8 + 28) & 0x7F;
            v9 = *(_BYTE *)(v8 + 28) & 0x7F;
            goto LABEL_17;
          }
          v26 = *(_QWORD *)v25;
          v10 = *(unsigned __int8 *)(*(_QWORD *)v25 + 16LL);
          v24 = *(_QWORD *)v25;
          if ( (_BYTE)v10 == 41 )
            goto LABEL_46;
          v12 = *(_QWORD *)(*(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v12 + 16) == 41 )
          {
            v24 = sub_B0D320(v26);
            if ( v24 )
              goto LABEL_46;
            v26 = *(_QWORD *)v25;
            v10 = *(unsigned __int8 *)(*(_QWORD *)v25 + 16LL);
            v24 = *(_QWORD *)v25;
          }
          if ( (_BYTE)v10 == 33 )
            goto LABEL_46;
          v12 = *(_QWORD *)(*(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v12 + 16) == 33 )
          {
            v24 = sub_B0D320(v26);
            if ( v24 )
              goto LABEL_46;
            v26 = *(_QWORD *)v25;
            v10 = *(unsigned __int8 *)(*(_QWORD *)v25 + 16LL);
            v24 = *(_QWORD *)v25;
          }
          if ( (_BYTE)v10 == 11 )
            goto LABEL_46;
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 11 )
          {
            v24 = sub_B0D320(v26);
            if ( v24 )
              goto LABEL_46;
            v26 = *(_QWORD *)v25;
            v10 = *(unsigned __int8 *)(*(_QWORD *)v25 + 16LL);
            v24 = *(_QWORD *)v25;
          }
          v12 = (unsigned int)(v10 - 2);
          if ( (unsigned __int8)(v10 - 2) > 4u )
            break;
          v13 = *(_QWORD *)(v26 + 32);
        }
        v10 = (unsigned int)(v10 - 25);
        if ( (unsigned __int8)v10 > 1u )
        {
          if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 <= 1 )
          {
            v24 = sub_B0D320(v26);
            if ( v24 )
              goto LABEL_182;
            v26 = *(_QWORD *)v25;
          }
          v10 = *(unsigned __int8 *)(v26 + 16);
          v24 = v26;
          if ( (_DWORD)v10 == 56 || (_DWORD)v10 == 57 )
            goto LABEL_46;
          if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 56 <= 1 )
          {
            v24 = sub_B0D320(v26);
            if ( v24 )
              goto LABEL_46;
            v26 = *(_QWORD *)v25;
          }
          v10 = *(unsigned __int8 *)(v26 + 16);
          v24 = v26;
          if ( (_DWORD)v10 == 42 || (_DWORD)v10 == 43 )
          {
LABEL_198:
            while ( (*(_BYTE *)(v24 + 18) & 0x10) != 0 )
            {
              v24 = *(_QWORD *)(*(_QWORD *)(v24 + 32) & 0xFFFFFFFFFFFFFFF0LL);
              v10 = (unsigned int)*(unsigned __int8 *)(v24 + 16) - 42;
              if ( (unsigned int)v10 > 1 )
                v24 = sub_B0D320(v24);
            }
            goto LABEL_46;
          }
          if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 42 <= 1 )
          {
            v24 = sub_B0D320(v26);
            if ( v24 )
              goto LABEL_198;
            v26 = *(_QWORD *)v25;
          }
          v24 = v26;
          if ( *(_BYTE *)(v26 + 16) != 16 )
          {
            if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 16 )
              goto LABEL_125;
            v24 = sub_B0D320(v26);
            if ( !v24 )
            {
              v26 = *(_QWORD *)v25;
LABEL_125:
              v24 = v26;
              if ( *(_BYTE *)(v26 + 16) != 39 )
              {
                if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 39 )
                  goto LABEL_128;
                v24 = sub_B0D320(v26);
                if ( !v24 )
                  goto LABEL_128;
              }
LABEL_46:
              v13 = *(_QWORD *)(v24 + 32);
              goto LABEL_47;
            }
          }
        }
LABEL_182:
        v13 = *(_QWORD *)(v24 + 24);
        goto LABEL_47;
      }
      goto LABEL_50;
    }
LABEL_38:
    if ( (_DWORD)v66 )
    {
      sub_7CBD80((_DWORD *)a1, (__int64)&ptr);
      if ( !v3 )
      {
LABEL_41:
        if ( ptr != v67 )
          free(ptr);
        return;
      }
    }
    else if ( !v3 )
    {
      goto LABEL_41;
    }
    *(_DWORD *)(a1 + 32) -= *(unsigned __int8 *)(a1 + 8);
    goto LABEL_41;
  }
}

