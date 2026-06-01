void __fastcall sub_AD5C60(__int64 a1)
{
  char *v1; // r14
  __int64 v2; // r12
  __int64 *v3; // r15
  __int64 v4; // rax
  unsigned __int64 *v5; // rbx
  unsigned __int64 *v6; // rbp
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  __int64 (__fastcall *v9)(_QWORD *, unsigned __int64, int); // rax
  __int64 v10; // r14
  _DWORD *v11; // rax
  void *v12; // rdi
  unsigned __int64 *v13; // rax
  __int64 v14; // rbp
  __int64 v15; // rbx
  _DWORD *v16; // rdx
  __int64 v17; // rax
  _QWORD *v18; // r9
  int v19; // edi
  unsigned int v20; // ecx
  _QWORD *v21; // rsi
  __int64 v22; // rcx
  _QWORD *v23; // r8
  _QWORD *i; // rax
  _DWORD *v25; // rcx
  __int64 v26; // rdi
  bool v27; // zf
  _QWORD *v28; // rdi
  int v29; // ecx
  __int64 v30; // rsi
  _QWORD *v31; // rax
  _QWORD *v32; // rdx
  unsigned int v33; // ebp
  size_t v34; // rbx
  _OWORD *v35; // rdx
  _OWORD *v36; // rcx
  _OWORD *v37; // rax
  _QWORD *v38; // rdi
  int v39; // ecx
  __int64 v40; // rsi
  _QWORD *v41; // rax
  _QWORD *v42; // rdx
  unsigned int v43; // ebp
  size_t v44; // rbx
  _OWORD *v45; // rdx
  _OWORD *v46; // rcx
  _OWORD *v47; // rax
  _QWORD *v48; // rbx
  _QWORD *v49; // rbp
  __int64 v50; // rsi
  __int64 v51; // rdi
  _DWORD *v52; // rcx
  _QWORD *v53; // rcx
  __int64 v54; // rdi
  unsigned int v55; // esi
  int v56; // eax
  unsigned int v57; // eax
  char v58; // al
  __int64 v59; // rax
  __m128i *v60; // rcx
  char *v61; // rsi
  __int64 v62; // rsi
  __int64 v63; // rax
  unsigned int v64; // r10d
  __int64 v65; // rsi
  void *v66; // r11
  __int64 v67; // r9
  __int64 v68; // rdi
  __int64 v69; // rdx
  __m128i *v70; // rbp
  const __m128i *v71; // r12
  char *v72; // r8
  __int64 v73; // r11
  __m128i *v74; // r14
  __int64 v75; // rcx
  const __m128i *v76; // rbx
  __int64 v77; // rdx
  __m128i *v78; // rsi
  __m128i *v79; // rdx
  size_t v80; // rsi
  size_t v81; // rsi
  char *v82; // [rsp+0h] [rbp-98h]
  _QWORD *v83; // [rsp+10h] [rbp-88h]
  char *v84; // [rsp+18h] [rbp-80h]
  _DWORD *v85; // [rsp+18h] [rbp-80h]
  char *v86; // [rsp+18h] [rbp-80h]
  _DWORD *v87; // [rsp+18h] [rbp-80h]
  unsigned int v88; // [rsp+20h] [rbp-78h]
  __m128i *v89; // [rsp+20h] [rbp-78h]
  _DWORD *v90; // [rsp+28h] [rbp-70h]
  unsigned __int64 v91[8]; // [rsp+58h] [rbp-40h] BYREF

  v1 = *(char **)(a1 + 72);
  if ( v1 )
  {
    v82 = &v1[8 * *((unsigned int *)v1 - 1)];
    if ( v1 != v82 )
    {
      v2 = a1;
      v83 = (_QWORD *)(a1 + 312);
      while ( 1 )
      {
        if ( *(_QWORD *)(*(_QWORD *)v1 + 8LL) )
          goto LABEL_4;
        v3 = *(__int64 **)(*(_QWORD *)v1 + 56LL);
        v4 = *(_QWORD *)(v2 + 312);
        if ( v4 )
        {
          *(_DWORD *)(v4 - 4) = 0;
          v5 = (unsigned __int64 *)v3[1];
          v6 = &v5[2 * *((unsigned int *)v3 + 4)];
          if ( v6 == v5 )
            goto LABEL_45;
        }
        else
        {
          v5 = (unsigned __int64 *)v3[1];
          v6 = &v5[2 * *((unsigned int *)v3 + 4)];
          if ( v5 == v6 )
            goto LABEL_45;
        }
        while ( *v5 <= 1 )
        {
          v5 += 2;
          if ( v5 == v6 )
            goto LABEL_31;
        }
        if ( v5 != v6 )
        {
          v84 = v1;
          v7 = *v5;
          while ( 1 )
          {
            v8 = *(_QWORD *)v2;
            v91[0] = v7;
            v9 = *(__int64 (__fastcall **)(_QWORD *, unsigned __int64, int))(v8 + 16);
            if ( v9 == sub_AD0270 )
              v10 = sub_AC8870(v2, v7);
            else
              v10 = v9((_QWORD *)v2, v7, 1);
            if ( !v10 )
              goto LABEL_24;
            if ( !(unsigned __int8)sub_15D26C0(*(_QWORD *)(v2 + 8), v10) )
            {
              v11 = *(_DWORD **)(sub_15D1F10(v10) + 24);
              if ( !v11 || *(_DWORD *)(v2 + 56) != *v11 || v11[1] )
                break;
            }
LABEL_25:
            v13 = v5 + 2;
            if ( v5 + 2 != v6 )
            {
              while ( 1 )
              {
                v7 = *v13;
                v5 = v13;
                if ( *v13 > 1 )
                  break;
                v13 += 2;
                if ( v6 == v13 )
                  goto LABEL_30;
              }
              if ( v13 != v6 )
                continue;
            }
LABEL_30:
            v1 = v84;
            v4 = *(_QWORD *)(v2 + 312);
            goto LABEL_31;
          }
          if ( !*(_WORD *)(v10 + 4) && *(_DWORD *)(v10 + 24) )
          {
            v12 = *(void **)(v2 + 336);
            if ( v12 )
              memset(v12, 0, 4LL * *(unsigned int *)(v2 + 332));
            *(_DWORD *)(v2 + 328) = 0;
            sub_AD5620(v2, v2 + 320, (_DWORD *)v10);
          }
LABEL_24:
          sub_AC8490(v83, v91);
          goto LABEL_25;
        }
LABEL_31:
        if ( !v4 || v4 + 8LL * *(unsigned int *)(v4 - 4) == v4 )
          goto LABEL_45;
        v14 = v4;
        v15 = v4 + 8LL * *(unsigned int *)(v4 - 4);
        do
        {
          v16 = *(_DWORD **)v14;
          v17 = *((unsigned int *)v3 + 4);
          v18 = (_QWORD *)v3[1];
          v19 = *(_DWORD *)(*(_QWORD *)v14 + 12LL);
          v20 = v17 - 1;
          v17 *= 16;
          v21 = (_QWORD *)((char *)v18 + v17);
          v22 = 16LL * (v19 & v20);
          v23 = &v18[(unsigned __int64)v22 / 8];
          if ( v22 == v17 )
          {
LABEL_87:
            if ( v18 != v23 )
            {
              for ( i = (_QWORD *)v3[1]; v23 != i; i += 2 )
              {
                v52 = (_DWORD *)*i;
                if ( *i > 1u )
                {
                  if ( v52[3] == v19 && v16 == v52 )
                    goto LABEL_96;
                }
                else if ( !v52 )
                {
                  break;
                }
              }
            }
LABEL_41:
            v26 = *v3;
            goto LABEL_42;
          }
          i = &v18[(unsigned __int64)v22 / 8];
          while ( 1 )
          {
            v25 = (_DWORD *)*i;
            if ( *i > 1u )
              break;
            if ( !v25 )
              goto LABEL_41;
LABEL_38:
            i += 2;
            if ( v21 == i )
              goto LABEL_87;
          }
          if ( v25[3] != v19 || v16 != v25 )
            goto LABEL_38;
LABEL_96:
          v53 = i + 2;
          v54 = *((unsigned int *)v3 + 5);
          if ( v21 == i + 2 )
            v53 = (_QWORD *)v3[1];
          v55 = v54 - 1;
          if ( !*v53 )
          {
            *i = 0;
            v26 = *v3;
            *((_DWORD *)v3 + 5) = v55;
            goto LABEL_42;
          }
          *i = 1;
          v56 = *((_DWORD *)v3 + 6);
          *((_DWORD *)v3 + 5) = v55;
          v57 = v56 + 1;
          *((_DWORD *)v3 + 6) = v57;
          if ( v55 >= v57 )
            goto LABEL_41;
          if ( v57 <= 0x40 )
            goto LABEL_41;
          v85 = v16;
          v58 = sub_186AF10(v54);
          v16 = v85;
          if ( v58 )
            goto LABEL_41;
          v90 = v85;
          v88 = *((_DWORD *)v3 + 4);
          v86 = (char *)(16LL * v88);
          v59 = sub_186B270((size_t)v86);
          v16 = v90;
          v60 = (__m128i *)v59;
          v61 = &v86[v59];
          if ( v88 )
          {
            do
            {
              *(_QWORD *)v59 = 0;
              v59 += 16;
              *(_DWORD *)(v59 - 8) = 0;
            }
            while ( (char *)v59 != v61 );
          }
          v62 = *((unsigned int *)v3 + 4);
          v63 = v3[1];
          v64 = v62 - 1;
          v65 = 16 * v62;
          v66 = (void *)(v63 + v65);
          v67 = v65;
          if ( v63 != v63 + v65 )
          {
            v68 = v14;
            v69 = v2;
            v70 = &v60[(unsigned __int64)v65 / 0x10];
            v71 = (const __m128i *)(v63 + v65);
            v72 = v1;
            v73 = v69;
            v74 = v60;
            v75 = v15;
            v76 = (const __m128i *)v3[1];
            do
            {
              if ( v76->m128i_i64[0] > 1uLL )
              {
                v77 = 16LL * (*(_DWORD *)(v76->m128i_i64[0] + 12) & v64);
                v78 = &v74[(unsigned __int64)v77 / 0x10];
                if ( v67 == v77 )
                {
LABEL_120:
                  if ( v74 == v78 )
                  {
LABEL_129:
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v79 = v74;
                  while ( v79->m128i_i64[0] )
                  {
                    if ( v78 == ++v79 )
                      goto LABEL_129;
                  }
                }
                else
                {
                  v79 = &v74[(unsigned __int64)v77 / 0x10];
                  while ( v79->m128i_i64[0] )
                  {
                    if ( v70 == ++v79 )
                      goto LABEL_120;
                  }
                }
                *v79 = _mm_loadu_si128(v76);
              }
              ++v76;
            }
            while ( v71 != v76 );
            v2 = v73;
            v16 = v90;
            v66 = (void *)v3[1];
            v15 = v75;
            v60 = v74;
            v14 = v68;
            v1 = v72;
          }
          if ( v66 )
          {
            v89 = v60;
            v87 = v16;
            sub_186B220(v66);
            v60 = v89;
            v16 = v87;
          }
          v3[1] = (__int64)v60;
          v26 = *v3;
          *((_DWORD *)v3 + 6) = 0;
LABEL_42:
          v27 = v16[2]-- == 1;
          if ( v27 )
            sub_15D7BC0(v26, v16);
          v14 += 8;
        }
        while ( v15 != v14 );
LABEL_45:
        if ( *(_DWORD *)(v2 + 212) || *(_DWORD *)(v2 + 216) )
        {
          v28 = *(_QWORD **)(v2 + 200);
          v29 = 0;
          v30 = *(unsigned int *)(v2 + 208);
          v31 = v28;
          v32 = &v28[2 * v30];
          if ( v28 != v32 )
          {
            do
            {
              while ( *v31 )
              {
                *v31 = 0;
                v31 += 2;
                if ( v32 == v31 )
                  goto LABEL_52;
              }
              v31 += 2;
              ++v29;
            }
            while ( v32 != v31 );
LABEL_52:
            if ( (unsigned int)v30 > 0x10 && 3 * (int)v30 < (unsigned int)(4 * v29) )
            {
              if ( v28 )
              {
                sub_186B220(v28);
                v33 = *(_DWORD *)(v2 + 208);
                *(_QWORD *)(v2 + 200) = 0;
                v33 >>= 1;
                *(_DWORD *)(v2 + 208) = v33;
                v34 = v33;
                v35 = (_OWORD *)sub_186B270(v34 * 16);
                if ( v33 )
                  goto LABEL_56;
              }
              else
              {
                *(_QWORD *)(v2 + 200) = 0;
                v80 = (unsigned int)v30 >> 1;
                *(_DWORD *)(v2 + 208) = v80;
                v34 = v80;
                v35 = (_OWORD *)sub_186B270(16 * v80);
LABEL_56:
                v36 = &v35[v34];
                v37 = v35;
                if ( ((v34 * 16) & 0x10) == 0 || (v37 = v35 + 1, *v35 = 0, v36 != v35 + 1) )
                {
                  do
                  {
                    *v37 = 0;
                    v37 += 2;
                    *(v37 - 1) = 0;
                  }
                  while ( v36 != v37 );
                }
              }
              *(_QWORD *)(v2 + 200) = v35;
            }
          }
          *(_QWORD *)(v2 + 212) = 0;
        }
        if ( *(_DWORD *)(v2 + 236) || *(_DWORD *)(v2 + 240) )
        {
          v38 = *(_QWORD **)(v2 + 224);
          v39 = 0;
          v40 = *(unsigned int *)(v2 + 232);
          v41 = v38;
          v42 = &v38[2 * v40];
          if ( v38 != v42 )
          {
            do
            {
              while ( *v41 )
              {
                *v41 = 0;
                v41 += 2;
                if ( v42 == v41 )
                  goto LABEL_68;
              }
              v41 += 2;
              ++v39;
            }
            while ( v42 != v41 );
LABEL_68:
            if ( (unsigned int)v40 > 0x10 && 3 * (int)v40 < (unsigned int)(4 * v39) )
            {
              if ( v38 )
              {
                sub_186B220(v38);
                v43 = *(_DWORD *)(v2 + 232);
                *(_QWORD *)(v2 + 224) = 0;
                v43 >>= 1;
                *(_DWORD *)(v2 + 232) = v43;
                v44 = v43;
                v45 = (_OWORD *)sub_186B270(v44 * 16);
                if ( v43 )
                  goto LABEL_72;
              }
              else
              {
                *(_QWORD *)(v2 + 224) = 0;
                v81 = (unsigned int)v40 >> 1;
                *(_DWORD *)(v2 + 232) = v81;
                v44 = v81;
                v45 = (_OWORD *)sub_186B270(16 * v81);
LABEL_72:
                v46 = &v45[v44];
                v47 = v45;
                if ( ((v44 * 16) & 0x10) == 0 || (v47 = v45 + 1, *v45 = 0, v46 != v45 + 1) )
                {
                  do
                  {
                    *v47 = 0;
                    v47 += 2;
                    *(v47 - 1) = 0;
                  }
                  while ( v46 != v47 );
                }
              }
              *(_QWORD *)(v2 + 224) = v45;
            }
          }
          *(_QWORD *)(v2 + 236) = 0;
        }
        v48 = *(_QWORD **)(v2 + 256);
        if ( !v48 )
          goto LABEL_4;
        v49 = &v48[*((unsigned int *)v48 - 1)];
        if ( v48 >= v49 )
          goto LABEL_85;
        do
        {
          while ( 1 )
          {
            v50 = *v48;
            if ( *v48 )
            {
              v51 = *(_QWORD *)(v2 + 248);
              v27 = (*(_DWORD *)(v50 + 8))-- == 1;
              if ( v27 )
                break;
            }
            if ( ++v48 >= v49 )
              goto LABEL_84;
          }
          sub_15D7BC0(v51, v50);
          ++v48;
        }
        while ( v48 < v49 );
LABEL_84:
        v48 = *(_QWORD **)(v2 + 256);
        if ( v48 )
        {
LABEL_85:
          *((_DWORD *)v48 - 1) = 0;
          v1 += 8;
          if ( v82 == v1 )
            return;
        }
        else
        {
LABEL_4:
          v1 += 8;
          if ( v82 == v1 )
            return;
        }
      }
    }
  }
}

