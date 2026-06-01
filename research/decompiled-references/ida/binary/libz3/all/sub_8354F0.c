__int64 __fastcall sub_8354F0(__int64 a1)
{
  char **exception; // rbx
  __int64 result; // rax
  char *v4; // r8
  int v5; // esi
  char *v6; // rdx
  unsigned int v7; // edi
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdi
  __int64 v16; // rax
  unsigned int v17; // edx
  int v18; // r14d
  unsigned int v19; // ecx
  int v20; // r13d
  int v21; // r12d
  __int64 v22; // rbp
  unsigned int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  unsigned int v27; // esi
  _QWORD *v28; // rdx
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rbp
  __int64 v32; // rax
  _QWORD *v33; // rdx
  __int64 v34; // rbx
  unsigned int v35; // eax
  __int64 v36; // rsi
  int v37; // eax
  __int64 *v38; // rsi
  unsigned int v39; // ecx
  unsigned int v40; // ebp
  size_t v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rdi
  _DWORD *v44; // rcx
  __int64 v45; // r9
  unsigned __int64 v46; // rax
  __int64 v47; // r9
  _QWORD *v48; // rax
  unsigned int v49; // r12d
  size_t v50; // rsi
  unsigned int *v51; // rax
  __int64 v52; // rsi
  _QWORD *v53; // rdx
  unsigned int v54; // [rsp+4h] [rbp-94h]
  __int64 *v55; // [rsp+8h] [rbp-90h]
  unsigned int v56; // [rsp+18h] [rbp-80h]
  unsigned int v57; // [rsp+18h] [rbp-80h]
  _QWORD *v58; // [rsp+20h] [rbp-78h]
  _DWORD *v59; // [rsp+28h] [rbp-70h]
  _BYTE v60[84]; // [rsp+3Ch] [rbp-5Ch] BYREF

  result = sub_834630(a1);
  if ( !(_BYTE)result )
  {
    sub_834F70(a1);
    v55 = (__int64 *)(a1 + 112);
    if ( !*(_DWORD *)(a1 + 140) && !*(_DWORD *)(a1 + 144) )
    {
LABEL_18:
      v14 = *(_QWORD *)(a1 + 24);
      v15 = *(_QWORD *)(a1 + 88);
      v16 = *(_QWORD *)(a1 + 352);
      v17 = 214013 * *(_DWORD *)(v14 + 2356) + 2531011;
      if ( v15 )
      {
        v18 = *(_DWORD *)(v15 - 4);
        if ( v16 )
        {
          v19 = *(_DWORD *)(v16 - 4);
          *(_DWORD *)(v14 + 2356) = v17;
          v54 = v19;
          v20 = HIWORD(v17) & 0x7FFF;
          if ( v18 > 0 )
          {
LABEL_21:
            v21 = v18 + v20;
            while ( 1 )
            {
              v22 = v20 % v18;
              v23 = v20 % v18;
              if ( !(unsigned __int8)sub_15D2CB0(*(_QWORD *)(a1 + 72), **(_QWORD **)(v15 + 8 * v22))
                && (unsigned __int8)sub_79AAE0(*(_QWORD *)(a1 + 80), *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v22)) )
              {
                if ( !(unsigned __int8)sub_FFAE60(*(_QWORD *)(a1 + 496)) )
                  sub_852640(a1, (unsigned int)v22, v24, v25, v26);
                if ( (unsigned __int8)sub_FFAE60(*(_QWORD *)(a1 + 496)) )
                {
                  *(_DWORD *)&v60[8] = 0;
                  *(_QWORD *)v60 = (unsigned int)(v20 % v18);
                  sub_834950(v55, (unsigned int *)v60, &v60[4]);
                  v27 = *(_DWORD *)(*(_QWORD *)&v60[4] + 4LL);
                  if ( v23 != v27
                    && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * v27) + 64LL) != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v22) + 64LL) )
                  {
                    v28 = *(_QWORD **)(a1 + 352);
                    if ( v28 )
                    {
                      v29 = *((unsigned int *)v28 - 1);
                      if ( (_DWORD)v29 == *((_DWORD *)v28 - 2) )
                      {
                        v40 = (unsigned int)(3 * v29 + 1) >> 1;
                        v41 = 8 * v40 + 8;
                        if ( 8 * (int)v29 + 8 >= (unsigned int)v41 || (unsigned int)v29 >= v40 )
                          goto LABEL_61;
                        v56 = *(_DWORD *)(*(_QWORD *)&v60[4] + 4LL);
                        v42 = sub_186B270(v41);
                        v43 = *(_QWORD *)(a1 + 352);
                        v27 = v56;
                        v44 = (_DWORD *)v42;
                        v28 = (_QWORD *)(v42 + 8);
                        if ( v43 )
                        {
                          v45 = *(unsigned int *)(v43 - 4);
                          *(_DWORD *)(v42 + 4) = v45;
                          v46 = 0;
                          v47 = 8 * v45;
                          if ( v47 )
                          {
                            do
                            {
                              *(_QWORD *)&v44[v46 / 4 + 2] = *(_QWORD *)(v43 + v46);
                              v46 += 8LL;
                            }
                            while ( v47 != v46 );
                          }
                          v59 = v44;
                          v58 = v28;
                          sub_186B220((void *)(v43 - 8));
                          v44 = v59;
                          v28 = v58;
                          v30 = &v58[v59[1]];
                        }
                        else
                        {
                          *(_DWORD *)(v42 + 4) = 0;
                          v30 = (_QWORD *)(v42 + 8);
                        }
                        *(_QWORD *)(a1 + 352) = v28;
                        *v44 = v40;
                      }
                      else
                      {
                        v30 = &v28[v29];
                      }
                    }
                    else
                    {
                      v57 = *(_DWORD *)(*(_QWORD *)&v60[4] + 4LL);
                      v48 = (_QWORD *)sub_186B270(0x18u);
                      v27 = v57;
                      v28 = v48 + 1;
                      *v48 = 2;
                      *(_QWORD *)(a1 + 352) = v48 + 1;
                      v30 = v48 + 1;
                    }
                    *v30 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v23), _mm_cvtsi32_si128(v27)).m128i_u64[0];
                    ++*((_DWORD *)v28 - 1);
                  }
                }
              }
              if ( ++v20 == v21 )
                break;
              v15 = *(_QWORD *)(a1 + 88);
            }
            v16 = *(_QWORD *)(a1 + 352);
            if ( !v16 )
              return sub_834630(a1);
          }
LABEL_36:
          if ( v54 < *(_DWORD *)(v16 - 4) )
          {
            v31 = *(_QWORD *)(a1 + 80);
            v32 = sub_180C100(v31 + 2144, 24);
            v33 = *(_QWORD **)(v31 + 2128);
            v34 = v32;
            *(_QWORD *)v32 = off_1C55298;
            *(_QWORD *)(v32 + 8) = a1 + 352;
            *(_DWORD *)(v32 + 16) = v54;
            if ( v33 )
            {
              v35 = *((_DWORD *)v33 - 1);
              if ( v35 == *((_DWORD *)v33 - 2) )
              {
                v49 = (3 * v35 + 1) >> 1;
                v50 = 8 * v49 + 8;
                if ( 8 * v35 + 8 >= (unsigned int)v50 || v35 >= v49 )
                {
LABEL_61:
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0((__int64 *)&v60[4], "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, &v60[4]);
                  sub_233E40((__int64)&v60[4]);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v51 = (unsigned int *)sub_186B300(v33 - 1, v50);
                v52 = v51[1];
                v33 = v51 + 2;
                *(_QWORD *)(v31 + 2128) = v51 + 2;
                *v51 = v49;
                LODWORD(v51) = v52;
                v38 = &v33[v52];
                v37 = (_DWORD)v51 + 1;
              }
              else
              {
                v36 = v35;
                v37 = v35 + 1;
                v38 = &v33[v36];
              }
            }
            else
            {
              v53 = (_QWORD *)sub_186B270(0x18u);
              *v53 = 2;
              v37 = 1;
              v33 = v53 + 1;
              *(_QWORD *)(v31 + 2128) = v33;
              v38 = v33;
            }
            *v38 = v34;
            *((_DWORD *)v33 - 1) = v37;
          }
          return sub_834630(a1);
        }
        *(_DWORD *)(v14 + 2356) = v17;
        v20 = HIWORD(v17) & 0x7FFF;
        if ( v18 > 0 )
        {
          v54 = 0;
          goto LABEL_21;
        }
      }
      else
      {
        if ( v16 )
        {
          v39 = *(_DWORD *)(v16 - 4);
          *(_DWORD *)(v14 + 2356) = v17;
          v54 = v39;
          goto LABEL_36;
        }
        *(_DWORD *)(v14 + 2356) = v17;
      }
      return sub_834630(a1);
    }
    v4 = *(char **)(a1 + 128);
    v5 = 0;
    v6 = &v4[8 * *(unsigned int *)(a1 + 136)];
    v7 = *(_DWORD *)(a1 + 136);
    v8 = *(_QWORD *)(a1 + 128);
    if ( v4 == v6 )
      goto LABEL_17;
    do
    {
      while ( *(_DWORD *)(v8 + 4) != 0x80000000 )
      {
        *(_DWORD *)(v8 + 4) = 0x80000000;
        v8 += 8;
        if ( v6 == (char *)v8 )
          goto LABEL_9;
      }
      v8 += 8;
      ++v5;
    }
    while ( v6 != (char *)v8 );
LABEL_9:
    if ( v7 <= 0x10 || 3 * v7 >= 4 * v5 )
    {
LABEL_17:
      *(_QWORD *)(a1 + 140) = 0;
      goto LABEL_18;
    }
    if ( v4 )
    {
      sub_186B220(v4);
      v9 = *(_DWORD *)(a1 + 136);
      *(_QWORD *)(a1 + 128) = 0;
      v9 >>= 1;
      *(_DWORD *)(a1 + 136) = v9;
      v10 = v9;
      v11 = sub_186B270(8LL * v9);
      if ( !v9 )
      {
LABEL_16:
        *(_QWORD *)(a1 + 128) = v11;
        goto LABEL_17;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 128) = 0;
      *(_DWORD *)(a1 + 136) = v7 >> 1;
      v10 = v7 >> 1;
      v11 = sub_186B270(8 * v10);
    }
    v12 = v11 + 8 * v10;
    v13 = v11;
    if ( (v10 & 1) == 0 || (v13 = v11 + 8, *(_DWORD *)(v11 + 4) = 0x80000000, v11 + 8 != v12) )
    {
      do
      {
        *(_DWORD *)(v13 + 4) = 0x80000000;
        v13 += 16;
        *(_DWORD *)(v13 - 4) = 0x80000000;
      }
      while ( v13 != v12 );
    }
    goto LABEL_16;
  }
  return result;
}

