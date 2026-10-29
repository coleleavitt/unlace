__int64 __fastcall sub_BC1AC0(__int64 a1)
{
  char **exception; // r13
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rcx
  unsigned int i; // r12d
  unsigned int v9; // edi
  unsigned int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 *v13; // rcx
  __int64 v14; // rbx
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // r15d
  __int64 v18; // rcx
  __m128i *v19; // r15
  __int64 v20; // rax
  __m128 *v21; // rax
  __m128 v22; // xmm0
  unsigned __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // edi
  __int64 v27; // rsi
  __int64 v28; // rbp
  __int64 v29; // rsi
  __int64 v30; // rdi
  unsigned int v31; // ecx
  __int64 v32; // rax
  __int64 *v33; // r14
  __int64 v34; // rdx
  __int64 v35; // rax
  __m128i *v36; // rcx
  const __m128i *v37; // rdi
  const __m128i *v38; // rax
  __m128i v39; // xmm0
  __int64 v40; // rax
  __int64 *v41; // rbp
  __int64 v42; // rsi
  __int64 v43; // rdi
  unsigned int *v44; // rdx
  unsigned int v45; // esi
  _QWORD *v46; // rax
  __int64 v47; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v48; // [rsp+8h] [rbp-70h]
  unsigned int *v49; // [rsp+10h] [rbp-68h]
  __int32 v50; // [rsp+18h] [rbp-60h]
  unsigned int v51; // [rsp+1Ch] [rbp-5Ch]
  __int64 v52[11]; // [rsp+20h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v4 = qword_1C7ED88;
  v5 = *(_QWORD *)(v3 + 8984);
  if ( qword_1C7ED88 != v5 )
    return 1;
  for ( i = 0; !*(_BYTE *)(v3 + 2416) && i < *(_DWORD *)(a1 + 368); i = v9 )
  {
    v9 = i + 1;
    if ( (unsigned __int8)sub_BC1930(a1, i) )
    {
      v10 = *(_DWORD *)(a1 + 368);
      if ( v9 < v10 )
      {
        v11 = *(_QWORD *)(a1 + 400);
        v12 = *(_QWORD *)(a1 + 384);
        v13 = (__int64 *)(v12 + 32LL * *(unsigned int *)(v11 + 4LL * (v10 - 1)));
        v14 = *v13;
        v47 = v13[1];
        if ( v14 )
          ++*(_DWORD *)(v14 + 8);
        v50 = *((_DWORD *)v13 + 4);
        v15 = v13[3];
        v16 = *(unsigned int *)(v11 + 4LL * i);
        v48 = v15;
        if ( (unsigned int)v16 >= *(_DWORD *)(a1 + 372) )
        {
          v28 = v12 + 32 * v16;
          v29 = v47;
          v30 = *(_QWORD *)v28;
          *(_QWORD *)v28 = v14;
          sub_BB0560(v30, v29);
          *(_DWORD *)(v28 + 16) = v50;
          *(_QWORD *)(v28 + 24) = v48;
        }
        else
        {
          if ( v12 )
            v17 = *(_DWORD *)(v12 - 4);
          else
            v17 = 0;
          LODWORD(v52[0]) = i;
          if ( !v11 )
          {
LABEL_23:
            sub_2FD3F0((unsigned int **)(a1 + 400));
            v11 = *(_QWORD *)(a1 + 400);
            v18 = *(unsigned int *)(v11 - 4);
            goto LABEL_20;
          }
          while ( 1 )
          {
            v18 = *(unsigned int *)(v11 - 4);
            if ( i < (unsigned int)v18 )
              break;
            if ( (_DWORD)v18 == *(_DWORD *)(v11 - 8) )
              goto LABEL_23;
LABEL_20:
            *(_DWORD *)(v11 + 4 * v18) = 0;
            ++*(_DWORD *)(v11 - 4);
          }
          if ( i < *(_DWORD *)(a1 + 372) )
          {
            sub_BB7E40((_QWORD *)(a1 + 408), (unsigned int *)v52);
            sub_BB7E40((_QWORD *)(a1 + 416), (unsigned int *)(4LL * i + *(_QWORD *)(a1 + 400)));
            v11 = *(_QWORD *)(a1 + 400);
          }
          *(_DWORD *)(v11 + 4LL * i) = v17;
          v19 = *(__m128i **)(a1 + 384);
          if ( v19 )
          {
            v20 = v19[-1].m128i_u32[3];
            if ( (_DWORD)v20 == v19[-1].m128i_i32[2] )
            {
              v51 = (unsigned int)(3 * v20 + 1) >> 1;
              v31 = 32 * v51 + 8;
              if ( 32 * (int)v20 + 8 >= v31 || (unsigned int)v20 >= (unsigned int)(3 * v20 + 1) >> 1 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_154526(v52, "Overflow encountered when expanding vector", v2);
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v52);
                sub_233E40((__int64)v52);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v32 = sub_186B270(v31);
              v33 = *(__int64 **)(a1 + 384);
              v49 = (unsigned int *)v32;
              v19 = (__m128i *)(v32 + 8);
              if ( v33 )
              {
                v34 = v32;
                v35 = *((unsigned int *)v33 - 1);
                v36 = v19;
                *(_DWORD *)(v34 + 4) = v35;
                v37 = (const __m128i *)&v33[4 * v35];
                v38 = (const __m128i *)v33;
                if ( v33 != (__int64 *)v37 )
                {
                  do
                  {
                    v39 = _mm_loadu_si128(v38);
                    v38->m128i_i64[0] = 0;
                    v38 += 2;
                    v36 += 2;
                    v36[-2] = v39;
                    v36[-1].m128i_i32[0] = v38[-1].m128i_i32[0];
                    v36[-1].m128i_i64[1] = v38[-1].m128i_i64[1];
                  }
                  while ( v37 != v38 );
                }
                v40 = *((unsigned int *)v33 - 1);
                v41 = &v33[4 * v40];
                if ( (_DWORD)v40 )
                {
                  do
                  {
                    v42 = v33[1];
                    v43 = *v33;
                    v33 += 4;
                    sub_BB0560(v43, v42);
                  }
                  while ( v41 != v33 );
                  v33 = *(__int64 **)(a1 + 384);
                }
                sub_186B220(v33 - 1);
                v21 = (__m128 *)&v19[2 * v49[1]];
              }
              else
              {
                *(_DWORD *)(v32 + 4) = 0;
                v21 = (__m128 *)(v32 + 8);
              }
              v44 = v49;
              v45 = v51;
              *(_QWORD *)(a1 + 384) = v19;
              *v44 = v45;
            }
            else
            {
              v21 = (__m128 *)&v19[2 * v20];
            }
          }
          else
          {
            v46 = (_QWORD *)sub_186B270(0x48u);
            v19 = (__m128i *)(v46 + 1);
            *v46 = 2;
            *(_QWORD *)(a1 + 384) = v46 + 1;
            v21 = (__m128 *)(v46 + 1);
          }
          v22 = _mm_loadh_ps((const double *)&v47);
          v21[1].m128_i32[0] = v50;
          v23 = v48;
          *v21 = v22;
          v21[1].m128_u64[1] = v23;
          ++v19[-1].m128i_i32[3];
        }
        sub_BB0560(0, v47);
        v10 = *(_DWORD *)(a1 + 368);
      }
      v24 = v10 - 1;
      v25 = *(_QWORD *)(a1 + 384);
      if ( v25 )
      {
        v26 = *(_DWORD *)(v25 - 4);
        v27 = v26 - 1;
        if ( (_DWORD)v27 == *(_DWORD *)(*(_QWORD *)(a1 + 400) + 4 * v24) && *(_DWORD *)(a1 + 372) < v26 )
        {
          sub_BB0560(*(_QWORD *)(32 * v27 + v25), *(_QWORD *)(32 * v27 + v25 + 8));
          --*(_DWORD *)(*(_QWORD *)(a1 + 384) - 4LL);
          LODWORD(v24) = *(_DWORD *)(a1 + 368) - 1;
        }
      }
      *(_DWORD *)(a1 + 368) = v24;
      v9 = i;
    }
    v3 = *(_QWORD *)(a1 + 16);
    v4 = qword_1C7ED88;
    v5 = *(_QWORD *)(v3 + 8984);
    if ( qword_1C7ED88 != v5 )
      return 1;
  }
  if ( *(_BYTE *)(a1 + 4170) || v4 != v5 )
    return 1;
  return *(unsigned __int8 *)(v3 + 2416);
}

