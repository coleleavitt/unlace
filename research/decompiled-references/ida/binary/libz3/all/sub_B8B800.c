__int64 __fastcall sub_B8B800(_QWORD *a1, unsigned int a2, int a3, unsigned int a4, _DWORD **a5, char a6)
{
  __int64 v7; // r12
  _DWORD *v9; // rax
  unsigned int v10; // ebp
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  unsigned int v13; // r13d
  size_t v14; // rsi
  unsigned int *v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rax
  unsigned int *v18; // r9
  unsigned int *v19; // r14
  __int64 v20; // rbx
  unsigned int *v21; // r8
  unsigned int v22; // ebp
  unsigned int *v23; // r13
  __int64 v24; // r12
  void *v25; // rdi
  int v26; // edx
  int v27; // edx
  __int64 v28; // r12
  void *v29; // r12
  unsigned int v30; // eax
  unsigned int *v31; // rdx
  int v32; // eax
  unsigned int v33; // r12d
  _BYTE *v34; // rbp
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned int v37; // eax
  unsigned int v38; // edx
  unsigned int v39; // ecx
  unsigned int v40; // edx
  unsigned int v41; // ecx
  unsigned int *v42; // rax
  _DWORD *v44; // r14
  unsigned int i; // eax
  _DWORD *v46; // rax
  __int64 v47; // rdx
  unsigned __int64 v48; // r12
  _QWORD *v49; // rdx
  __int64 v50; // rax
  _DWORD *v51; // rcx
  unsigned int v52; // ebx
  size_t v53; // rsi
  unsigned int *v54; // rax
  __int64 v55; // rax
  _DWORD *v56; // rax
  __int64 v57; // rdx
  _DWORD *v58; // rdx
  _DWORD *v59; // rax
  __int64 v60; // rdx
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  unsigned int v63; // ebx
  unsigned int v64; // ecx
  unsigned int *v65; // rdx
  __int64 v66; // rdx
  _QWORD *v67; // rax
  char **v68; // rbp
  char **exception; // rbp
  char **v70; // rbp
  char **v71; // rbp
  unsigned int *v72; // [rsp+8h] [rbp-D0h]
  _DWORD *s; // [rsp+18h] [rbp-C0h]
  _DWORD *v74; // [rsp+20h] [rbp-B8h]
  void *v75; // [rsp+28h] [rbp-B0h]
  void *v76; // [rsp+28h] [rbp-B0h]
  unsigned int v77; // [rsp+28h] [rbp-B0h]
  char v78; // [rsp+33h] [rbp-A5h]
  unsigned int v80; // [rsp+38h] [rbp-A0h]
  __int64 v83; // [rsp+48h] [rbp-90h]
  __int64 v84[4]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v85[2]; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v86[2]; // [rsp+80h] [rbp-58h] BYREF
  int v87; // [rsp+90h] [rbp-48h]

  v7 = a2;
  v9 = (_DWORD *)a1[3];
  s = v9;
  if ( v9 )
  {
    v10 = *(v9 - 1);
    if ( v10 )
    {
      v11 = (_QWORD *)sub_186B270(0xAu);
      *v11 = 2;
      v12 = v11 + 1;
      s = v12;
      while ( 1 )
      {
        v16 = *((_DWORD *)v12 - 2);
        if ( v16 >= v10 )
          break;
        v13 = (3 * v16 + 1) >> 1;
        v14 = v13 + 8;
        if ( v16 + 8 >= (unsigned int)v14 || v16 >= v13 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_B75C60(v85, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v85);
          sub_233E40((__int64)v85);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v15 = (unsigned int *)sub_186B300(s - 2, v14);
        *v15 = v13;
        s = v15 + 2;
        v12 = v15 + 2;
      }
      *(s - 1) = v10;
      memset(s, 0, v10);
    }
    else
    {
      s = nullptr;
    }
  }
  v17 = sub_186B270(0x20u);
  *(_DWORD *)(v17 + 8) = v7;
  *(_QWORD *)(v17 + 12) = -1;
  *(_QWORD *)v17 = 0x100000002LL;
  v74 = (_DWORD *)(v17 + 8);
  *((_BYTE *)s + v7) = 1;
  v85[0] = 0;
  v85[1] = 0;
  v86[0] = 1;
  v86[1] = 0;
  v87 = 0;
  v80 = 0;
  v78 = a6 ^ 1;
  do
  {
    v83 = 3LL * v80;
    v18 = *(unsigned int **)(a1[6] + 8LL * (unsigned int)v74[v83]);
    if ( v18 )
    {
      v72 = &v18[*(v18 - 1)];
      if ( v18 != v72 )
      {
        v19 = *(unsigned int **)(a1[6] + 8LL * (unsigned int)v74[3 * v80]);
        while ( 1 )
        {
          v20 = *v19;
          v21 = (unsigned int *)(a1[5] + (v20 << 6));
          v22 = *((unsigned __int8 *)v21 + 60);
          v23 = v21;
          if ( !(_BYTE)v22 )
            goto LABEL_16;
          v24 = a1[3] + 40LL * *v21;
          v25 = qword_1C7F2C0;
          if ( (*(_BYTE *)(v24 + 4) & 1) != 0 )
          {
            v75 = qword_1C7F2C0;
            sub_182C690(qword_1C7F2C0, v85, a1[3] + 40LL * *v21);
            v25 = v75;
          }
          else
          {
            v26 = *(_DWORD *)v24;
            BYTE4(v85[0]) &= ~1u;
            LODWORD(v85[0]) = v26;
          }
          if ( (*(_BYTE *)(v24 + 20) & 1) != 0 )
          {
            sub_182C690(v25, v86, v24 + 16);
          }
          else
          {
            v27 = *(_DWORD *)(v24 + 16);
            BYTE4(v86[0]) &= ~1u;
            LODWORD(v86[0]) = v27;
          }
          v87 = *(_DWORD *)(v24 + 32);
          v28 = a1[3] + 40LL * v23[1];
          if ( (v86[0] & 0x100000000LL) != 0
            || LODWORD(v86[0]) != 1
            || (*(_BYTE *)(v28 + 20) & 1) != 0
            || *(_DWORD *)(v28 + 16) != 1 )
          {
            sub_1852000(qword_1C7F2C0, v85, a1[3] + 40LL * v23[1]);
          }
          else
          {
            v76 = qword_1C7F2C0;
            sub_1832A70(qword_1C7F2C0, v85, a1[3] + 40LL * v23[1]);
            sub_182CBA0(v76, v86);
            BYTE4(v86[0]) &= ~1u;
            LODWORD(v86[0]) = 1;
          }
          v87 -= *(_DWORD *)(v28 + 32);
          v29 = qword_1C7F2C0;
          v30 = v23[2];
          if ( v30 )
          {
            v31 = v23 + 2;
            if ( LODWORD(v85[0]) )
            {
              if ( (v86[0] & 0x100000000LL) != 0 || LODWORD(v86[0]) != 1 || (v23[7] & 1) != 0 || v23[6] != 1 )
              {
                sub_1851D20(qword_1C7F2C0, v85, v31, v85);
              }
              else
              {
                sub_1831A80(qword_1C7F2C0, v85, v31, v85);
                sub_182CBA0(v29, v86);
                BYTE4(v86[0]) &= ~1u;
                LODWORD(v86[0]) = 1;
              }
            }
            else
            {
              if ( (v23[3] & 1) != 0 )
              {
                sub_182C690(qword_1C7F2C0, v85, v31);
              }
              else
              {
                BYTE4(v85[0]) &= ~1u;
                LODWORD(v85[0]) = v30;
              }
              if ( (v23[7] & 1) != 0 )
              {
                sub_182C690(v29, v86, v23 + 6);
              }
              else
              {
                v37 = v23[6];
                BYTE4(v86[0]) &= ~1u;
                LODWORD(v86[0]) = v37;
              }
            }
          }
          else
          {
            if ( (v85[0] & 0x100000000LL) != 0 )
              sub_182C690(qword_1C7F2C0, v85, v85);
            else
              BYTE4(v85[0]) &= ~1u;
            if ( (v86[0] & 0x100000000LL) != 0 )
              sub_182C690(v29, v86, v86);
            else
              BYTE4(v86[0]) &= ~1u;
          }
          v32 = v87 + v23[10];
          v87 = v32;
          if ( LODWORD(v85[0]) )
          {
            if ( !v78 || SLODWORD(v85[0]) >= 0 )
              goto LABEL_16;
          }
          else if ( v32 && (v32 >= 0 || !v78) )
          {
            goto LABEL_16;
          }
          if ( v23[12] >= a4 )
            goto LABEL_16;
          v33 = v23[1];
          if ( a3 == v33 )
          {
            if ( v23[13] != -2 )
            {
              v56 = *a5;
              if ( *a5 )
              {
                v57 = (unsigned int)*(v56 - 1);
                if ( (_DWORD)v57 == *(v56 - 2) )
                {
                  v63 = (unsigned int)(3 * v57 + 1) >> 1;
                  v64 = 4 * v63 + 8;
                  if ( 4 * (int)v57 + 8 >= v64 || (unsigned int)v57 >= v63 )
                  {
                    v70 = (char **)__cxa_allocate_exception(0x28u);
                    sub_B75C60(v84, "Overflow encountered when expanding vector");
                    *v70 = (char *)off_1C63128;
                    sub_2333C0(v70 + 1, v84);
                    sub_233E40((__int64)v84);
                    __cxa_throw(v70, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v65 = (unsigned int *)sub_186B300(v56 - 2, v64);
                  v56 = v65 + 2;
                  *v65 = v63;
                  v66 = v65[1];
                  *a5 = v56;
                  v58 = &v56[v66];
                }
                else
                {
                  v58 = &v56[v57];
                }
              }
              else
              {
                v67 = (_QWORD *)sub_186B270(0x10u);
                *v67 = 2;
                v56 = v67 + 1;
                v58 = v56;
                *a5 = v56;
              }
              *v58 = v23[13];
              ++*(v56 - 1);
              v59 = a5[1];
              if ( !v59 || (v60 = (unsigned int)*(v59 - 1), (_DWORD)v60 == *(v59 - 2)) )
              {
                sub_2FD3F0(a5 + 1);
                v59 = a5[1];
                v60 = (unsigned int)*(v59 - 1);
              }
              v59[v60] = v23[14];
              ++*(v59 - 1);
            }
            v44 = &v74[v83];
            for ( i = v74[v83 + 2]; i != -1; i = v44[2] )
            {
              v48 = a1[5] + ((unsigned __int64)i << 6);
              if ( *(_DWORD *)(v48 + 52) != -2 )
              {
                v49 = *a5;
                if ( *a5 )
                {
                  v50 = *((unsigned int *)v49 - 1);
                  v51 = (_DWORD *)v49 + v50;
                  if ( (_DWORD)v50 == *((_DWORD *)v49 - 2) )
                  {
                    v52 = (unsigned int)(3 * v50 + 1) >> 1;
                    v53 = 4 * v52 + 8;
                    if ( 4 * (int)v50 + 8 >= (unsigned int)v53 || (unsigned int)v50 >= v52 )
                    {
                      v71 = (char **)__cxa_allocate_exception(0x28u);
                      sub_B75C60(v84, "Overflow encountered when expanding vector");
                      *v71 = (char *)off_1C63128;
                      sub_2333C0(v71 + 1, v84);
                      sub_233E40((__int64)v84);
                      __cxa_throw(
                        v71,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v54 = (unsigned int *)sub_186B300(v49 - 1, v53);
                    v49 = v54 + 2;
                    *v54 = v52;
                    v55 = v54[1];
                    *a5 = v49;
                    v51 = (_DWORD *)v49 + v55;
                  }
                }
                else
                {
                  v62 = (_QWORD *)sub_186B270(0x10u);
                  *v62 = 2;
                  v49 = v62 + 1;
                  *a5 = v62 + 1;
                  v51 = v62 + 1;
                }
                *v51 = *(_DWORD *)(v48 + 52);
                ++*((_DWORD *)v49 - 1);
                v46 = a5[1];
                if ( !v46 || (v47 = (unsigned int)*(v46 - 1), (_DWORD)v47 == *(v46 - 2)) )
                {
                  sub_2FD3F0(a5 + 1);
                  v46 = a5[1];
                  v47 = (unsigned int)*(v46 - 1);
                }
                v46[v47] = *(_DWORD *)(v48 + 56);
                ++*(v46 - 1);
              }
              v44 = &v74[3 * v44[1]];
            }
            sub_25A130((char *)v85);
            if ( s )
              sub_186B220(s - 2);
            if ( !v74 )
              return v22;
            goto LABEL_90;
          }
          v34 = (char *)s + v33;
          if ( *v34 )
          {
LABEL_16:
            if ( v72 == ++v19 )
              goto LABEL_40;
          }
          else
          {
            if ( v74 )
            {
              v35 = (unsigned int)*(v74 - 1);
              if ( (_DWORD)v35 == *(v74 - 2) )
              {
                v38 = 3 * v35 + 1;
                v39 = v38 & 0xFFFFFFFE;
                v40 = v38 >> 1;
                v41 = 4 * (v40 + v39) + 8;
                if ( 12 * (int)v35 + 8 >= v41 || (unsigned int)v35 >= v40 )
                {
                  v68 = (char **)__cxa_allocate_exception(0x28u);
                  sub_B75C60(v84, "Overflow encountered when expanding vector");
                  *v68 = (char *)off_1C63128;
                  sub_2333C0(v68 + 1, v84);
                  sub_233E40((__int64)v84);
                  __cxa_throw(v68, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v77 = v40;
                v42 = (unsigned int *)sub_186B300(v74 - 2, v41);
                v74 = v42 + 2;
                *v42 = v77;
                v36 = (__int64)&v42[3 * v42[1] + 2];
              }
              else
              {
                v36 = (__int64)&v74[3 * v35];
              }
            }
            else
            {
              v61 = (_QWORD *)sub_186B270(0x20u);
              *v61 = 2;
              v36 = (__int64)(v61 + 1);
              v74 = (_DWORD *)v36;
            }
            *(_DWORD *)(v36 + 8) = v20;
            ++v19;
            *v34 = 1;
            *(_QWORD *)v36 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v33), _mm_cvtsi32_si128(v80)).m128i_u64[0];
            ++*(v74 - 1);
            if ( v72 == v19 )
            {
LABEL_40:
              ++v80;
              if ( v74 )
                goto LABEL_41;
              sub_25A130((char *)v85);
              if ( s )
                sub_186B220(s - 2);
              return 0;
            }
          }
        }
      }
    }
    ++v80;
LABEL_41:
    ;
  }
  while ( v80 < *(v74 - 1) );
  sub_25A130((char *)v85);
  if ( s )
    sub_186B220(s - 2);
  v22 = 0;
LABEL_90:
  sub_186B220(v74 - 2);
  return v22;
}

