__int64 __fastcall sub_B897C0(_QWORD *a1, unsigned int a2, int a3, unsigned int a4, _DWORD **a5, unsigned __int8 a6)
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
  unsigned int *v18; // r8
  unsigned int *v19; // r14
  unsigned int v20; // ebx
  unsigned int *v21; // r13
  unsigned int v22; // ebp
  __int64 v23; // rdx
  void *v24; // rdi
  int v25; // eax
  int v26; // eax
  __int64 v27; // rdx
  void *v28; // rdi
  int *v29; // rdx
  unsigned int v30; // r12d
  _BYTE *v31; // rbp
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // edi
  unsigned int v35; // edx
  size_t v36; // rsi
  unsigned int *v37; // rax
  _DWORD *v39; // r12
  __int64 i; // rax
  _DWORD *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r14
  _QWORD *v44; // rdx
  __int64 v45; // rax
  _DWORD *v46; // rcx
  unsigned int v47; // ebx
  size_t v48; // rsi
  unsigned int *v49; // rax
  __int64 v50; // rax
  _DWORD *v51; // rax
  __int64 v52; // rdx
  _DWORD *v53; // rdx
  _DWORD *v54; // rax
  __int64 v55; // rdx
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  unsigned int v58; // ebx
  unsigned int v59; // ecx
  unsigned int *v60; // rdx
  __int64 v61; // rdx
  _QWORD *v62; // rax
  char **exception; // rbp
  char **v64; // rbp
  char **v65; // rbp
  char **v66; // rbp
  unsigned int *v67; // [rsp+8h] [rbp-C0h]
  _DWORD *s; // [rsp+10h] [rbp-B8h]
  _DWORD *v69; // [rsp+18h] [rbp-B0h]
  void *v70; // [rsp+20h] [rbp-A8h]
  void *v71; // [rsp+20h] [rbp-A8h]
  void *v72; // [rsp+20h] [rbp-A8h]
  void *v73; // [rsp+20h] [rbp-A8h]
  __int64 v74; // [rsp+28h] [rbp-A0h]
  _BYTE v76[5]; // [rsp+37h] [rbp-91h]
  __int64 v79; // [rsp+48h] [rbp-80h]
  _QWORD v80[2]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v81[2]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v82[11]; // [rsp+70h] [rbp-58h] BYREF

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
          sub_B75C60(v82, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v82);
          sub_233E40((__int64)v82);
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
  v69 = (_DWORD *)(v17 + 8);
  *((_BYTE *)s + v7) = 1;
  v80[0] = 0;
  v80[1] = 0;
  v81[0] = 1;
  v81[1] = 0;
  v76[4] = 0;
  *(_DWORD *)v76 = a6 ^ 1;
  do
  {
    v79 = 3LL * *(unsigned int *)&v76[1];
    v18 = *(unsigned int **)(a1[6] + 8LL * (unsigned int)v69[v79]);
    if ( v18 )
    {
      v67 = &v18[*(v18 - 1)];
      if ( v18 != v67 )
      {
        v19 = *(unsigned int **)(a1[6] + 8LL * (unsigned int)v69[3 * *(unsigned int *)&v76[1]]);
        while ( 1 )
        {
          v20 = *v19;
          v21 = (unsigned int *)(a1[5] + 56LL * *v19);
          v22 = *((unsigned __int8 *)v21 + 52);
          if ( !(_BYTE)v22 )
            goto LABEL_15;
          v23 = a1[3] + 32LL * *v21;
          v24 = qword_1C7F2C0;
          if ( (*(_BYTE *)(v23 + 4) & 1) != 0 )
          {
            v74 = a1[3] + 32LL * *v21;
            v70 = qword_1C7F2C0;
            sub_182C690(qword_1C7F2C0, v80, v23);
            v23 = v74;
            v24 = v70;
          }
          else
          {
            v25 = *(_DWORD *)v23;
            BYTE4(v80[0]) &= ~1u;
            LODWORD(v80[0]) = v25;
          }
          if ( (*(_BYTE *)(v23 + 20) & 1) != 0 )
          {
            sub_182C690(v24, v81, v23 + 16);
          }
          else
          {
            v26 = *(_DWORD *)(v23 + 16);
            BYTE4(v81[0]) &= ~1u;
            LODWORD(v81[0]) = v26;
          }
          v27 = a1[3] + 32LL * v21[1];
          if ( (v81[0] & 0x100000000LL) != 0
            || LODWORD(v81[0]) != 1
            || (*(_BYTE *)(v27 + 20) & 1) != 0
            || *(_DWORD *)(v27 + 16) != 1 )
          {
            sub_1852000(qword_1C7F2C0, v80, v27);
          }
          else
          {
            v71 = qword_1C7F2C0;
            sub_1832A70(qword_1C7F2C0, v80, v27);
            sub_182CBA0(v71, v81);
            BYTE4(v81[0]) &= ~1u;
            LODWORD(v81[0]) = 1;
          }
          v28 = qword_1C7F2C0;
          if ( v21[2] )
          {
            v29 = (int *)(v21 + 2);
            if ( LODWORD(v80[0]) )
            {
              if ( (v81[0] & 0x100000000LL) != 0 || LODWORD(v81[0]) != 1 || (v21[7] & 1) != 0 || v21[6] != 1 )
              {
                sub_1851D20(qword_1C7F2C0, v80, v29, v80);
              }
              else
              {
                v73 = qword_1C7F2C0;
                sub_1831A80(qword_1C7F2C0, v80, v29, v80);
                sub_182CBA0(v73, v81);
                BYTE4(v81[0]) &= ~1u;
                LODWORD(v81[0]) = 1;
              }
            }
            else
            {
              sub_27B950((__int64)qword_1C7F2C0, (__int64)v80, v29);
            }
          }
          else
          {
            if ( (v80[0] & 0x100000000LL) != 0 )
            {
              v72 = qword_1C7F2C0;
              sub_182C690(qword_1C7F2C0, v80, v80);
              v28 = v72;
            }
            else
            {
              BYTE4(v80[0]) &= ~1u;
            }
            if ( (v81[0] & 0x100000000LL) != 0 )
              sub_182C690(v28, v81, v81);
            else
              BYTE4(v81[0]) &= ~1u;
          }
          if ( LODWORD(v80[0]) && (!v76[0] || SLODWORD(v80[0]) >= 0) || v21[10] >= a4 )
            goto LABEL_15;
          v30 = v21[1];
          if ( a3 == v30 )
          {
            if ( v21[11] != -2 )
            {
              v51 = *a5;
              if ( *a5 )
              {
                v52 = (unsigned int)*(v51 - 1);
                if ( (_DWORD)v52 == *(v51 - 2) )
                {
                  v58 = (unsigned int)(3 * v52 + 1) >> 1;
                  v59 = 4 * v58 + 8;
                  if ( 4 * (int)v52 + 8 >= v59 || (unsigned int)v52 >= v58 )
                  {
                    v66 = (char **)__cxa_allocate_exception(0x28u);
                    sub_B75C60(v82, "Overflow encountered when expanding vector");
                    *v66 = (char *)off_1C63128;
                    sub_2333C0(v66 + 1, v82);
                    sub_233E40((__int64)v82);
                    __cxa_throw(v66, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v60 = (unsigned int *)sub_186B300(v51 - 2, v59);
                  v51 = v60 + 2;
                  *v60 = v58;
                  v61 = v60[1];
                  *a5 = v51;
                  v53 = &v51[v61];
                }
                else
                {
                  v53 = &v51[v52];
                }
              }
              else
              {
                v62 = (_QWORD *)sub_186B270(0x10u);
                *v62 = 2;
                v51 = v62 + 1;
                v53 = v51;
                *a5 = v51;
              }
              *v53 = v21[11];
              ++*(v51 - 1);
              v54 = a5[1];
              if ( !v54 || (v55 = (unsigned int)*(v54 - 1), (_DWORD)v55 == *(v54 - 2)) )
              {
                sub_2FD3F0(a5 + 1);
                v54 = a5[1];
                v55 = (unsigned int)*(v54 - 1);
              }
              v54[v55] = v21[12];
              ++*(v54 - 1);
            }
            v39 = &v69[v79];
            for ( i = (unsigned int)v69[v79 + 2]; (_DWORD)i != -1; i = (unsigned int)v39[2] )
            {
              v43 = a1[5] + 56 * i;
              if ( *(_DWORD *)(v43 + 44) != -2 )
              {
                v44 = *a5;
                if ( *a5 )
                {
                  v45 = *((unsigned int *)v44 - 1);
                  v46 = (_DWORD *)v44 + v45;
                  if ( (_DWORD)v45 == *((_DWORD *)v44 - 2) )
                  {
                    v47 = (unsigned int)(3 * v45 + 1) >> 1;
                    v48 = 4 * v47 + 8;
                    if ( 4 * (int)v45 + 8 >= (unsigned int)v48 || (unsigned int)v45 >= v47 )
                    {
                      v65 = (char **)__cxa_allocate_exception(0x28u);
                      sub_B75C60(v82, "Overflow encountered when expanding vector");
                      *v65 = (char *)off_1C63128;
                      sub_2333C0(v65 + 1, v82);
                      sub_233E40((__int64)v82);
                      __cxa_throw(
                        v65,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v49 = (unsigned int *)sub_186B300(v44 - 1, v48);
                    v44 = v49 + 2;
                    *v49 = v47;
                    v50 = v49[1];
                    *a5 = v44;
                    v46 = (_DWORD *)v44 + v50;
                  }
                }
                else
                {
                  v57 = (_QWORD *)sub_186B270(0x10u);
                  *v57 = 2;
                  v44 = v57 + 1;
                  *a5 = v57 + 1;
                  v46 = v57 + 1;
                }
                *v46 = *(_DWORD *)(v43 + 44);
                ++*((_DWORD *)v44 - 1);
                v41 = a5[1];
                if ( !v41 || (v42 = (unsigned int)*(v41 - 1), (_DWORD)v42 == *(v41 - 2)) )
                {
                  sub_2FD3F0(a5 + 1);
                  v41 = a5[1];
                  v42 = (unsigned int)*(v41 - 1);
                }
                v41[v42] = *(_DWORD *)(v43 + 48);
                ++*(v41 - 1);
              }
              v39 = &v69[3 * v39[1]];
            }
            sub_25A130((char *)v80);
            if ( s )
              sub_186B220(s - 2);
            if ( !v69 )
              return v22;
            goto LABEL_82;
          }
          v31 = (char *)s + v30;
          if ( *v31 )
          {
LABEL_15:
            if ( v67 == ++v19 )
              goto LABEL_37;
          }
          else
          {
            if ( v69 )
            {
              v32 = (unsigned int)*(v69 - 1);
              if ( (_DWORD)v32 == *(v69 - 2) )
              {
                v34 = 3 * v32;
                v35 = (unsigned int)(3 * v32 + 1) >> 1;
                v36 = 4 * (v35 + ((3 * (_DWORD)v32 + 1) & 0xFFFFFFFE)) + 8;
                if ( 12 * (int)v32 + 8 >= (unsigned int)v36 || (unsigned int)v32 >= v35 )
                {
                  v64 = (char **)__cxa_allocate_exception(0x28u);
                  sub_B75C60(v82, "Overflow encountered when expanding vector");
                  *v64 = (char *)off_1C63128;
                  sub_2333C0(v64 + 1, v82);
                  sub_233E40((__int64)v82);
                  __cxa_throw(v64, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v37 = (unsigned int *)sub_186B300(v69 - 2, v36);
                v69 = v37 + 2;
                *v37 = (unsigned int)(v34 + 1) >> 1;
                v33 = (__int64)&v37[3 * v37[1] + 2];
              }
              else
              {
                v33 = (__int64)&v69[3 * v32];
              }
            }
            else
            {
              v56 = (_QWORD *)sub_186B270(0x20u);
              *v56 = 2;
              v33 = (__int64)(v56 + 1);
              v69 = (_DWORD *)v33;
            }
            *(_DWORD *)(v33 + 8) = v20;
            ++v19;
            *v31 = 1;
            *(_QWORD *)v33 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v30), _mm_cvtsi32_si128(*(unsigned int *)&v76[1])).m128i_u64[0];
            ++*(v69 - 1);
            if ( v67 == v19 )
            {
LABEL_37:
              ++*(_DWORD *)&v76[1];
              if ( v69 )
                goto LABEL_38;
              sub_25A130((char *)v80);
              if ( s )
                sub_186B220(s - 2);
              return 0;
            }
          }
        }
      }
    }
    ++*(_DWORD *)&v76[1];
LABEL_38:
    ;
  }
  while ( *(_DWORD *)&v76[1] < *(v69 - 1) );
  sub_25A130((char *)v80);
  if ( s )
    sub_186B220(s - 2);
  v22 = 0;
LABEL_82:
  sub_186B220(v69 - 2);
  return v22;
}

