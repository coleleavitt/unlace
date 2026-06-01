__int64 __fastcall sub_AF0220(_QWORD *a1, unsigned int a2, unsigned int a3, unsigned int a4, __int64 a5, char a6)
{
  char **exception; // rbp
  __int64 v7; // rdx
  char **v8; // r13
  __int64 v9; // rdx
  char **v10; // r13
  __int64 v11; // rdx
  char **v12; // r13
  __int64 v13; // rdx
  __int64 v15; // r14
  _DWORD *i; // rbx
  unsigned int v17; // ebp
  _QWORD *v18; // rax
  unsigned int v19; // ecx
  size_t v20; // rsi
  unsigned int v21; // r13d
  unsigned int *v22; // rax
  unsigned int v23; // eax
  __int64 v24; // rax
  unsigned int v25; // r11d
  _QWORD *v26; // rbp
  char v27; // r9
  unsigned int *v28; // r13
  __int64 result; // rax
  unsigned int *v30; // r8
  __int64 v31; // rdx
  unsigned int *v32; // r14
  __int64 v33; // rsi
  unsigned int v34; // ecx
  _BYTE *v35; // r14
  __int64 v36; // rax
  unsigned int v37; // r10d
  unsigned int v38; // esi
  unsigned int v39; // r10d
  size_t v40; // rsi
  unsigned int *v41; // rax
  __int64 v42; // rcx
  unsigned int v43; // r13d
  _DWORD *v44; // r15
  __int64 v45; // rdx
  char *v46; // r13
  __int64 j; // r15
  __int64 v48; // r15
  unsigned int v49; // r14d
  __int64 k; // rsi
  _DWORD *v51; // rcx
  _QWORD *v52; // rdx
  __int64 v53; // rax
  _DWORD *v54; // rax
  unsigned int v55; // r9d
  size_t v56; // rsi
  unsigned int *v57; // rax
  __int64 v58; // rax
  _QWORD *v59; // rax
  unsigned int v60; // ecx
  size_t v61; // rsi
  unsigned int *v62; // rax
  _DWORD *v63; // rdx
  __int64 v64; // rax
  _DWORD *v65; // rsi
  _QWORD *v66; // rax
  _QWORD *v67; // rdx
  _DWORD *v70; // [rsp+10h] [rbp-88h]
  unsigned int v71; // [rsp+10h] [rbp-88h]
  __int64 v73; // [rsp+18h] [rbp-80h]
  unsigned int v74; // [rsp+18h] [rbp-80h]
  unsigned int *v75; // [rsp+20h] [rbp-78h]
  unsigned int *v76; // [rsp+20h] [rbp-78h]
  unsigned int v77; // [rsp+2Ch] [rbp-6Ch]
  unsigned int v78; // [rsp+2Ch] [rbp-6Ch]
  unsigned int v79; // [rsp+30h] [rbp-68h]
  unsigned int v80; // [rsp+34h] [rbp-64h]
  unsigned int v81; // [rsp+34h] [rbp-64h]
  unsigned int v82; // [rsp+38h] [rbp-60h]
  char v83; // [rsp+38h] [rbp-60h]
  char v84; // [rsp+3Fh] [rbp-59h]
  __int64 v85[11]; // [rsp+40h] [rbp-58h] BYREF

  v15 = a2;
  i = (_DWORD *)a1[3];
  if ( i )
  {
    v17 = *(i - 1);
    if ( v17 )
    {
      v18 = (_QWORD *)sub_186B270(0xAu);
      *v18 = 2;
      for ( i = v18 + 1; ; i = v22 + 2 )
      {
        v23 = *(i - 2);
        if ( v23 >= v17 )
          break;
        v19 = (3 * v23 + 1) >> 1;
        v20 = v19 + 8;
        v21 = v19;
        if ( v23 + 8 >= (unsigned int)v20 || v23 >= v19 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_140FB4(v85, "Overflow encountered when expanding vector", v7);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v85);
          sub_233E40((__int64)v85);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v22 = (unsigned int *)sub_186B300(i - 2, v20);
        *v22 = v21;
      }
      *(i - 1) = v17;
      memset(i, 0, v17);
    }
    else
    {
      i = nullptr;
    }
  }
  v24 = sub_186B270(0x20u);
  *(_DWORD *)(v24 + 8) = v15;
  v25 = 0;
  v26 = (_QWORD *)(v24 + 8);
  *(_QWORD *)(v24 + 12) = -1;
  *(_QWORD *)v24 = 0x100000002LL;
  *((_BYTE *)i + v15) = 1;
  v27 = a6 ^ 1;
  do
  {
    v73 = 12LL * v25;
    v28 = *(unsigned int **)(a1[6] + 8LL * *(unsigned int *)((char *)v26 + v73));
    if ( v28 )
    {
      result = *(v28 - 1);
      v30 = &v28[result];
      if ( v28 != v30 )
      {
        while ( 1 )
        {
          v31 = *v28;
          v32 = (unsigned int *)(a1[5] + 32 * v31);
          if ( !*((_BYTE *)v32 + 24) )
            goto LABEL_15;
          v33 = v32[1];
          v34 = v32[1];
          result = v32[2] + *(_DWORD *)(a1[3] + 4LL * *v32) - *(_DWORD *)(a1[3] + 4 * v33);
          if ( (_DWORD)result )
          {
            if ( !v27 || (int)result >= 0 )
              goto LABEL_15;
          }
          if ( v32[3] >= a4 )
            goto LABEL_15;
          result = a3;
          if ( (_DWORD)v33 == a3 )
          {
            v42 = *((_QWORD *)v32 + 2);
            v43 = 0;
            if ( v42 )
            {
              while ( v43 < *(_DWORD *)(v42 - 4) )
              {
                while ( 1 )
                {
                  v44 = (_DWORD *)(v42 + 4LL * v43);
                  result = *(_QWORD *)(a5 + 544);
                  if ( !result )
                  {
                    v67 = (_QWORD *)sub_186B270(0x10u);
                    *v67 = 2;
                    v63 = v67 + 1;
                    *(_QWORD *)(a5 + 544) = v63;
                    v65 = v63;
                    v42 = *((_QWORD *)v32 + 2);
                    goto LABEL_58;
                  }
                  v45 = *(unsigned int *)(result - 4);
                  if ( (_DWORD)v45 == *(_DWORD *)(result - 8) )
                    break;
                  ++v43;
                  *(_DWORD *)(result + 4 * v45) = *v44;
                  ++*(_DWORD *)(result - 4);
                  if ( v43 >= *(_DWORD *)(v42 - 4) )
                    goto LABEL_38;
                }
                v60 = (unsigned int)(3 * v45 + 1) >> 1;
                v61 = 4 * v60 + 8;
                if ( 4 * (int)v45 + 8 >= (unsigned int)v61 || (unsigned int)v45 >= v60 )
                {
                  v10 = (char **)__cxa_allocate_exception(0x28u);
                  sub_140FB4(v85, "Overflow encountered when expanding vector", v11);
                  *v10 = (char *)off_1C63128;
                  sub_2333C0(v10 + 1, v85);
                  sub_233E40((__int64)v85);
                  __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v71 = (unsigned int)(3 * v45 + 1) >> 1;
                v62 = (unsigned int *)sub_186B300((void *)(result - 8), v61);
                v63 = v62 + 2;
                *v62 = v71;
                v64 = v62[1];
                *(_QWORD *)(a5 + 544) = v63;
                v42 = *((_QWORD *)v32 + 2);
                v65 = &v63[v64];
LABEL_58:
                result = (unsigned int)*v44;
                *v65 = result;
                ++*(v63 - 1);
                if ( !v42 )
                  break;
                ++v43;
              }
            }
LABEL_38:
            v46 = (char *)v26 + v73;
            for ( j = *(unsigned int *)((char *)v26 + v73 + 8); (_DWORD)j != -1; j = *((unsigned int *)v46 + 2) )
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
                  if ( (_DWORD)v53 == *((_DWORD *)v52 - 2) )
                  {
                    v55 = (unsigned int)(3 * v53 + 1) >> 1;
                    v56 = 4 * v55 + 8;
                    if ( 4 * (int)v53 + 8 >= (unsigned int)v56 || (unsigned int)v53 >= v55 )
                    {
                      v12 = (char **)__cxa_allocate_exception(0x28u);
                      sub_140FB4(v85, "Overflow encountered when expanding vector", v13);
                      *v12 = (char *)off_1C63128;
                      sub_2333C0(v12 + 1, v85);
                      sub_233E40((__int64)v85);
                      __cxa_throw(
                        v12,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v74 = (unsigned int)(3 * v53 + 1) >> 1;
                    v70 = v51;
                    v57 = (unsigned int *)sub_186B300(v52 - 1, v56);
                    v52 = v57 + 2;
                    v51 = v70;
                    *v57 = v74;
                    v58 = v57[1];
                    *(_QWORD *)(a5 + 544) = v52;
                    k = *(_QWORD *)(v48 + 16);
                    v54 = (_DWORD *)v52 + v58;
                  }
                  else
                  {
                    v54 = (_DWORD *)v52 + v53;
                  }
                }
                else
                {
                  v59 = (_QWORD *)sub_186B270(0x10u);
                  v52 = v59 + 1;
                  v51 = (_DWORD *)(k + 4LL * v49);
                  *v59 = 2;
                  *(_QWORD *)(a5 + 544) = v59 + 1;
                  v54 = v59 + 1;
                  k = *(_QWORD *)(v48 + 16);
                }
                ++v49;
                *v54 = *v51;
              }
              result = 3LL * *((unsigned int *)v46 + 1);
              v46 = (char *)v26 + 12 * *((unsigned int *)v46 + 1);
            }
            if ( i )
              result = sub_186B220(i - 2);
            if ( !v26 )
              return result;
            return sub_186B220(v26 - 1);
          }
          v35 = (char *)i + v33;
          if ( *((_BYTE *)i + v33) )
          {
LABEL_15:
            if ( v30 == ++v28 )
              goto LABEL_25;
          }
          else
          {
            if ( v26 )
            {
              v36 = *((unsigned int *)v26 - 1);
              if ( (_DWORD)v36 == *((_DWORD *)v26 - 2) )
              {
                v37 = 3 * v36 + 1;
                v38 = v37 & 0xFFFFFFFE;
                v39 = v37 >> 1;
                v40 = 4 * (v39 + v38) + 8;
                if ( 12 * (int)v36 + 8 >= (unsigned int)v40 || (unsigned int)v36 >= v39 )
                {
                  v8 = (char **)__cxa_allocate_exception(0x28u);
                  sub_140FB4(v85, "Overflow encountered when expanding vector", v9);
                  *v8 = (char *)off_1C63128;
                  sub_2333C0(v8 + 1, v85);
                  sub_233E40((__int64)v85);
                  __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v84 = v27;
                v82 = v25;
                v80 = v39;
                v79 = v34;
                v77 = *v28;
                v75 = v30;
                v41 = (unsigned int *)sub_186B300(v26 - 1, v40);
                v26 = v41 + 2;
                v30 = v75;
                LODWORD(v31) = v77;
                v34 = v79;
                v25 = v82;
                v27 = v84;
                *v41 = v80;
                result = (__int64)&v41[3 * v41[1] + 2];
              }
              else
              {
                result = (__int64)v26 + 12 * v36;
              }
            }
            else
            {
              v83 = v27;
              v81 = v25;
              v78 = *v28;
              v76 = v30;
              v66 = (_QWORD *)sub_186B270(0x20u);
              v26 = v66 + 1;
              *v66 = 2;
              v30 = v76;
              LODWORD(v31) = v78;
              v34 = v33;
              result = (__int64)(v66 + 1);
              v25 = v81;
              v27 = v83;
            }
            ++v28;
            *(_DWORD *)(result + 8) = v31;
            *v35 = 1;
            *(_QWORD *)result = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v34), _mm_cvtsi32_si128(v25)).m128i_u64[0];
            ++*((_DWORD *)v26 - 1);
            if ( v30 == v28 )
            {
LABEL_25:
              ++v25;
              if ( v26 )
                goto LABEL_26;
              if ( i )
                return sub_186B220(i - 2);
              return result;
            }
          }
        }
      }
    }
    ++v25;
LABEL_26:
    ;
  }
  while ( v25 < *((_DWORD *)v26 - 1) );
  if ( i )
    sub_186B220(i - 2);
  return sub_186B220(v26 - 1);
}

