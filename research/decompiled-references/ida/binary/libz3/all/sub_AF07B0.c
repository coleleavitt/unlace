__int64 __fastcall sub_AF07B0(_QWORD *a1, unsigned int a2, int a3, unsigned int a4, __int64 a5)
{
  char **exception; // rbp
  __int64 v6; // rdx
  char **v7; // r13
  __int64 v8; // rdx
  char **v9; // r13
  __int64 v10; // rdx
  char **v11; // r13
  __int64 v12; // rdx
  _DWORD *i; // rbx
  unsigned int v16; // ebp
  _QWORD *v17; // rax
  unsigned int v18; // ecx
  size_t v19; // rsi
  unsigned int v20; // r14d
  unsigned int *v21; // rax
  unsigned int v22; // eax
  __int64 v23; // rax
  __int64 v24; // r14
  _QWORD *v25; // rbp
  unsigned int *v26; // rdx
  unsigned int *v27; // r11
  __int64 v28; // rcx
  unsigned int *v29; // r14
  unsigned int v30; // r8d
  __int64 v31; // rsi
  unsigned int v32; // r10d
  _BYTE *v33; // r14
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned int v36; // r8d
  unsigned int v37; // esi
  unsigned int v38; // r8d
  size_t v39; // rsi
  unsigned int *v40; // rax
  __int64 v41; // rcx
  unsigned int v42; // r13d
  _DWORD *v43; // r15
  __int64 v44; // rax
  __int64 v45; // rdx
  char *v46; // r13
  __int64 j; // r15
  __int64 v48; // r15
  unsigned int v49; // r14d
  __int64 k; // rcx
  _DWORD *v51; // r10
  _QWORD *v52; // rdx
  __int64 v53; // rax
  _DWORD *v54; // rsi
  unsigned int v56; // ecx
  size_t v57; // rsi
  unsigned int *v58; // rax
  __int64 v59; // rax
  _QWORD *v60; // rax
  unsigned int v61; // ecx
  size_t v62; // rsi
  unsigned int *v63; // rax
  _DWORD *v64; // rdx
  __int64 v65; // rax
  _DWORD *v66; // rsi
  _QWORD *v67; // rax
  _QWORD *v68; // rdx
  unsigned __int8 v70; // [rsp+8h] [rbp-90h]
  unsigned __int8 v71; // [rsp+8h] [rbp-90h]
  unsigned int v73; // [rsp+10h] [rbp-88h]
  _DWORD *v74; // [rsp+10h] [rbp-88h]
  _DWORD *v75; // [rsp+10h] [rbp-88h]
  unsigned int v76; // [rsp+10h] [rbp-88h]
  unsigned __int8 v77; // [rsp+10h] [rbp-88h]
  __int64 v78; // [rsp+18h] [rbp-80h]
  unsigned int v79; // [rsp+18h] [rbp-80h]
  unsigned __int8 v80; // [rsp+18h] [rbp-80h]
  unsigned int *v81; // [rsp+20h] [rbp-78h]
  unsigned __int8 v82; // [rsp+20h] [rbp-78h]
  unsigned __int8 v83; // [rsp+20h] [rbp-78h]
  unsigned int *v84; // [rsp+20h] [rbp-78h]
  unsigned int v85; // [rsp+28h] [rbp-70h]
  unsigned int v86; // [rsp+28h] [rbp-70h]
  unsigned int v87; // [rsp+2Ch] [rbp-6Ch]
  unsigned int v88; // [rsp+30h] [rbp-68h]
  unsigned int *v89; // [rsp+30h] [rbp-68h]
  unsigned int *v90; // [rsp+38h] [rbp-60h]
  __int64 v91[11]; // [rsp+40h] [rbp-58h] BYREF

  i = (_DWORD *)a1[3];
  if ( i )
  {
    v16 = *(i - 1);
    if ( v16 )
    {
      v17 = (_QWORD *)sub_186B270(0xAu);
      *v17 = 2;
      for ( i = v17 + 1; ; i = v21 + 2 )
      {
        v22 = *(i - 2);
        if ( v22 >= v16 )
          break;
        v18 = (3 * v22 + 1) >> 1;
        v19 = v18 + 8;
        v20 = v18;
        if ( v22 + 8 >= (unsigned int)v19 || v22 >= v18 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_140FB4(v91, "Overflow encountered when expanding vector", v6);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v91);
          sub_233E40((__int64)v91);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v21 = (unsigned int *)sub_186B300(i - 2, v19);
        *v21 = v20;
      }
      *(i - 1) = v16;
      memset(i, 0, v16);
    }
    else
    {
      i = nullptr;
    }
  }
  v23 = sub_186B270(0x20u);
  v24 = a2;
  *(_QWORD *)(v23 + 12) = -1;
  v25 = (_QWORD *)(v23 + 8);
  v73 = 0;
  *(_DWORD *)(v23 + 8) = v24;
  *(_QWORD *)v23 = 0x100000002LL;
  *((_BYTE *)i + v24) = 1;
  do
  {
    v78 = 12LL * v73;
    v26 = *(unsigned int **)(a1[6] + 8LL * *(unsigned int *)((char *)v25 + v78));
    if ( v26 )
    {
      v27 = &v26[*(v26 - 1)];
      if ( v26 != v27 )
      {
        while ( 1 )
        {
          v28 = *v26;
          v29 = (unsigned int *)(a1[5] + 32 * v28);
          v30 = *((unsigned __int8 *)v29 + 24);
          if ( !(_BYTE)v30 )
            goto LABEL_13;
          v31 = v29[1];
          v32 = v29[1];
          if ( (int)(v29[2] + *(_DWORD *)(a1[3] + 4LL * *v29) - *(_DWORD *)(a1[3] + 4 * v31)) > 0 || v29[3] >= a4 )
            goto LABEL_13;
          if ( (_DWORD)v31 == a3 )
          {
            v41 = *((_QWORD *)v29 + 2);
            v42 = 0;
            if ( v41 )
            {
              while ( v42 < *(_DWORD *)(v41 - 4) )
              {
                while ( 1 )
                {
                  v43 = (_DWORD *)(v41 + 4LL * v42);
                  v44 = *(_QWORD *)(a5 + 544);
                  if ( !v44 )
                  {
                    v77 = v30;
                    v68 = (_QWORD *)sub_186B270(0x10u);
                    *v68 = 2;
                    v64 = v68 + 1;
                    v30 = v77;
                    *(_QWORD *)(a5 + 544) = v64;
                    v66 = v64;
                    v41 = *((_QWORD *)v29 + 2);
                    goto LABEL_55;
                  }
                  v45 = *(unsigned int *)(v44 - 4);
                  if ( (_DWORD)v45 == *(_DWORD *)(v44 - 8) )
                    break;
                  ++v42;
                  *(_DWORD *)(v44 + 4 * v45) = *v43;
                  ++*(_DWORD *)(v44 - 4);
                  if ( v42 >= *(_DWORD *)(v41 - 4) )
                    goto LABEL_36;
                }
                v61 = (unsigned int)(3 * v45 + 1) >> 1;
                v62 = 4 * v61 + 8;
                if ( 4 * (int)v45 + 8 >= (unsigned int)v62 || (unsigned int)v45 >= v61 )
                {
                  v9 = (char **)__cxa_allocate_exception(0x28u);
                  sub_140FB4(v91, "Overflow encountered when expanding vector", v10);
                  *v9 = (char *)off_1C63128;
                  sub_2333C0(v9 + 1, v91);
                  sub_233E40((__int64)v91);
                  __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v83 = v30;
                v76 = (unsigned int)(3 * v45 + 1) >> 1;
                v63 = (unsigned int *)sub_186B300((void *)(v44 - 8), v62);
                v64 = v63 + 2;
                v30 = v83;
                *v63 = v76;
                v65 = v63[1];
                *(_QWORD *)(a5 + 544) = v64;
                v41 = *((_QWORD *)v29 + 2);
                v66 = &v64[v65];
LABEL_55:
                *v66 = *v43;
                ++*(v64 - 1);
                if ( !v41 )
                  break;
                ++v42;
              }
            }
LABEL_36:
            v46 = (char *)v25 + v78;
            for ( j = *(unsigned int *)((char *)v25 + v78 + 8); (_DWORD)j != -1; j = *((unsigned int *)v46 + 2) )
            {
              v48 = a1[5] + 32 * j;
              v49 = 0;
              for ( k = *(_QWORD *)(v48 + 16); k; ++*((_DWORD *)v52 - 1) )
              {
                if ( v49 >= *(_DWORD *)(k - 4) )
                  break;
                v51 = (_DWORD *)(k + 4LL * v49);
                v52 = *(_QWORD **)(a5 + 544);
                if ( v52 )
                {
                  v53 = *((unsigned int *)v52 - 1);
                  v54 = (_DWORD *)v52 + v53;
                  if ( (_DWORD)v53 == *((_DWORD *)v52 - 2) )
                  {
                    v56 = (unsigned int)(3 * v53 + 1) >> 1;
                    v57 = 4 * v56 + 8;
                    if ( 4 * (int)v53 + 8 >= (unsigned int)v57 || (unsigned int)v53 >= v56 )
                    {
                      v7 = (char **)__cxa_allocate_exception(0x28u);
                      sub_140FB4(v91, "Overflow encountered when expanding vector", v8);
                      *v7 = (char *)off_1C63128;
                      sub_2333C0(v7 + 1, v91);
                      sub_233E40((__int64)v91);
                      __cxa_throw(
                        v7,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v82 = v30;
                    v79 = (unsigned int)(3 * v53 + 1) >> 1;
                    v74 = v51;
                    v58 = (unsigned int *)sub_186B300(v52 - 1, v57);
                    v52 = v58 + 2;
                    v51 = v74;
                    v30 = v82;
                    *v58 = v79;
                    v59 = v58[1];
                    *(_QWORD *)(a5 + 544) = v52;
                    k = *(_QWORD *)(v48 + 16);
                    v54 = (_DWORD *)v52 + v59;
                  }
                }
                else
                {
                  v80 = v30;
                  v75 = (_DWORD *)(k + 4LL * v49);
                  v60 = (_QWORD *)sub_186B270(0x10u);
                  v52 = v60 + 1;
                  v51 = v75;
                  v30 = v80;
                  v54 = v60 + 1;
                  *v60 = 2;
                  *(_QWORD *)(a5 + 544) = v60 + 1;
                  k = *(_QWORD *)(v48 + 16);
                }
                ++v49;
                *v54 = *v51;
              }
              v46 = (char *)v25 + 12 * *((unsigned int *)v46 + 1);
            }
            if ( i )
            {
              v70 = v30;
              sub_186B220(i - 2);
              v30 = v70;
            }
            if ( !v25 )
              return v30;
            goto LABEL_46;
          }
          v33 = (char *)i + v31;
          if ( *((_BYTE *)i + v31) )
          {
LABEL_13:
            if ( v27 == ++v26 )
              goto LABEL_23;
          }
          else
          {
            if ( v25 )
            {
              v34 = *((unsigned int *)v25 - 1);
              if ( (_DWORD)v34 == *((_DWORD *)v25 - 2) )
              {
                v36 = 3 * v34 + 1;
                v37 = v36 & 0xFFFFFFFE;
                v38 = v36 >> 1;
                v39 = 4 * (v38 + v37) + 8;
                if ( 12 * (int)v34 + 8 >= (unsigned int)v39 || (unsigned int)v34 >= v38 )
                {
                  v11 = (char **)__cxa_allocate_exception(0x28u);
                  sub_140FB4(v91, "Overflow encountered when expanding vector", v12);
                  *v11 = (char *)off_1C63128;
                  sub_2333C0(v11 + 1, v91);
                  sub_233E40((__int64)v91);
                  __cxa_throw(v11, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v90 = v26;
                v88 = v38;
                v87 = v32;
                v85 = *v26;
                v81 = v27;
                v40 = (unsigned int *)sub_186B300(v25 - 1, v39);
                v25 = v40 + 2;
                v27 = v81;
                LODWORD(v28) = v85;
                v32 = v87;
                *v40 = v88;
                v26 = v90;
                v35 = (__int64)&v40[3 * v40[1] + 2];
              }
              else
              {
                v35 = (__int64)v25 + 12 * v34;
              }
            }
            else
            {
              v89 = v26;
              v86 = *v26;
              v84 = v27;
              v67 = (_QWORD *)sub_186B270(0x20u);
              v25 = v67 + 1;
              *v67 = 2;
              v27 = v84;
              LODWORD(v28) = v86;
              v32 = v31;
              v35 = (__int64)(v67 + 1);
              v26 = v89;
            }
            ++v26;
            *(_DWORD *)(v35 + 8) = v28;
            *v33 = 1;
            *(_QWORD *)v35 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v32), _mm_cvtsi32_si128(v73)).m128i_u64[0];
            ++*((_DWORD *)v25 - 1);
            if ( v27 == v26 )
            {
LABEL_23:
              ++v73;
              if ( v25 )
                goto LABEL_24;
              if ( i )
                sub_186B220(i - 2);
              return 0;
            }
          }
        }
      }
    }
    ++v73;
LABEL_24:
    ;
  }
  while ( v73 < *((_DWORD *)v25 - 1) );
  if ( i )
    sub_186B220(i - 2);
  LOBYTE(v30) = 0;
LABEL_46:
  v71 = v30;
  sub_186B220(v25 - 1);
  return v71;
}

