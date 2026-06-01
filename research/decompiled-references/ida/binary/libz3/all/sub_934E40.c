__int64 __fastcall sub_934E40(_QWORD *a1)
{
  __int64 v2; // r11
  __int64 v3; // rdx
  unsigned int *v4; // r11
  _QWORD *v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // r9
  unsigned int v8; // ebx
  __int64 result; // rax
  __int64 v10; // r10
  unsigned int *v11; // r14
  unsigned int v12; // esi
  __int64 i; // rdx
  int v14; // ecx
  _DWORD *v15; // r8
  _QWORD *v16; // rsi
  _QWORD *v17; // r8
  unsigned int *v18; // r10
  __int64 v19; // r13
  __int64 v20; // r15
  unsigned int v21; // edx
  unsigned int *v22; // rbx
  _DWORD *v23; // r9
  unsigned int *v24; // rbp
  int v25; // ecx
  unsigned int *v26; // rbx
  __int64 v27; // r11
  __int64 v28; // r14
  _QWORD *v29; // rax
  int v30; // eax
  unsigned int v31; // r13d
  int v32; // r15d
  __m128i *v33; // r12
  __m128i v34; // xmm0
  int v35; // edx
  _QWORD *v36; // rdx
  __int64 v37; // rax
  unsigned int v38; // r8d
  unsigned int v39; // esi
  unsigned int v40; // r8d
  size_t v41; // rsi
  _DWORD *v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // rax
  char **exception; // rbx
  __int16 v46; // [rsp+6h] [rbp-B2h]
  __int64 v47; // [rsp+8h] [rbp-B0h]
  __int64 v48; // [rsp+10h] [rbp-A8h]
  _DWORD *v49; // [rsp+18h] [rbp-A0h]
  __int64 v50; // [rsp+20h] [rbp-98h]
  int v51; // [rsp+28h] [rbp-90h]
  int v52; // [rsp+2Ch] [rbp-8Ch]
  unsigned int v53; // [rsp+30h] [rbp-88h]
  unsigned int v54; // [rsp+34h] [rbp-84h]
  _QWORD *v55; // [rsp+38h] [rbp-80h]
  _QWORD *v56; // [rsp+40h] [rbp-78h]
  __int64 v57; // [rsp+48h] [rbp-70h]
  __int64 v58; // [rsp+50h] [rbp-68h]
  unsigned int *v59; // [rsp+58h] [rbp-60h]
  __int64 v60[11]; // [rsp+60h] [rbp-58h] BYREF

  v2 = a1[23];
  if ( v2 )
  {
    v3 = 16LL * (unsigned int)(*(_DWORD *)(v2 - 4) - 1);
    v51 = *(_DWORD *)(v2 - 4) - 1;
  }
  else
  {
    v51 = -1;
    v3 = 0xFFFFFFFF0LL;
  }
  v4 = (unsigned int *)(v3 + v2);
  v5 = (_QWORD *)a1[24];
  v6 = *v4;
  v7 = v5[v4[1]];
  v8 = v4[1];
  result = a1[34];
  if ( v7 && (v10 = 16LL * *(unsigned int *)(v7 - 4)) != 0 )
  {
    v11 = (unsigned int *)a1[34];
    v12 = 0;
    for ( i = 0; i != v10; i += 16 )
    {
      if ( *(_DWORD *)(v7 + i) != -1 && (_DWORD)v6 != v12 )
      {
        v14 = v4[2] + *(_DWORD *)(v7 + i + 4);
        v15 = (_DWORD *)(i + v5[(unsigned int)v6]);
        if ( *v15 == -1 || v14 < v15[1] )
        {
          *v11 = v12;
          v11 += 2;
          *(v11 - 1) = v14;
        }
      }
      ++v12;
    }
  }
  else
  {
    v11 = (unsigned int *)a1[34];
  }
  if ( v5 )
  {
    v16 = &v5[*((unsigned int *)v5 - 1)];
    if ( v5 != v16 )
    {
      v17 = a1;
      v18 = v11;
      v19 = 0;
      v20 = 16 * v6;
      v21 = v8;
      v22 = (unsigned int *)result;
      do
      {
        while ( 1 )
        {
          if ( v21 != (_DWORD)v19 )
          {
            v23 = (_DWORD *)(v20 + *v5);
            if ( *v23 != -1 && v18 != v22 )
              break;
          }
          ++v5;
          ++v19;
          if ( v5 == v16 )
            return result;
        }
        v59 = v22;
        v24 = v22;
        v25 = v19;
        v26 = v18;
        v53 = v19;
        v27 = 8 * v19;
        v28 = (__int64)v17;
        v46 = v19;
        v54 = v21;
        v55 = v5;
        v56 = v16;
        v57 = v20;
        v58 = v19;
        do
        {
          v31 = *v24;
          if ( *v24 != v25 )
          {
            v32 = v24[1] + v23[1];
            v33 = (__m128i *)(*(_QWORD *)(*(_QWORD *)(v28 + 192) + v27) + 16LL * v31);
            v34 = _mm_loadl_epi64(v33);
            result = (unsigned int)_mm_cvtsi128_si32(v34);
            v35 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v34, 229));
            if ( (_DWORD)result == -1 || v32 < v35 )
            {
              v36 = *(_QWORD **)(v28 + 208);
              if ( v36 )
              {
                v37 = *((unsigned int *)v36 - 1);
                if ( (_DWORD)v37 == *((_DWORD *)v36 - 2) )
                {
                  v38 = 3 * v37 + 1;
                  v39 = v38 & 0xFFFFFFFE;
                  v40 = v38 >> 1;
                  v41 = 4 * (v40 + v39) + 8;
                  if ( 12 * (int)v37 + 8 >= (unsigned int)v41 || (unsigned int)v37 >= v40 )
                  {
                    exception = (char **)__cxa_allocate_exception(0x28u);
                    sub_91CD50(v60, "Overflow encountered when expanding vector");
                    *exception = (char *)off_1C63128;
                    sub_2333C0(exception + 1, v60);
                    sub_233E40((__int64)v60);
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v52 = v25;
                  v50 = v27;
                  v49 = v23;
                  LODWORD(v47) = v40;
                  v48 = v34.m128i_i64[0];
                  v42 = (_DWORD *)sub_186B300(v36 - 1, v41);
                  v23 = v49;
                  v36 = v42 + 2;
                  v34.m128i_i64[0] = v48;
                  v27 = v50;
                  *v42 = v47;
                  v43 = (unsigned int)v42[1];
                  *(_QWORD *)(v28 + 208) = v36;
                  v25 = v52;
                  v29 = (_QWORD *)((char *)v36 + 12 * v43);
                }
                else
                {
                  v29 = (_QWORD *)((char *)v36 + 12 * v37);
                }
              }
              else
              {
                LODWORD(v50) = v25;
                v49 = (_DWORD *)v27;
                v48 = (__int64)v23;
                v47 = v34.m128i_i64[0];
                v44 = (_QWORD *)sub_186B270(0x20u);
                v34.m128i_i64[0] = v47;
                v23 = (_DWORD *)v48;
                v36 = v44 + 1;
                *v44 = 2;
                v27 = (__int64)v49;
                *(_QWORD *)(v28 + 208) = v44 + 1;
                v25 = v50;
                v29 = v44 + 1;
              }
              *((_WORD *)v29 + 1) = v31;
              *(_QWORD *)((char *)v29 + 4) = v34.m128i_i64[0];
              *(_WORD *)v29 = v46;
              v30 = v51;
              ++*((_DWORD *)v36 - 1);
              v33->m128i_i32[0] = v30;
              result = v33->m128i_i64[1];
              v33->m128i_i32[1] = v32;
              if ( result )
              {
                result = *(unsigned int *)(result - 4);
                if ( (_DWORD)result )
                {
                  LODWORD(v49) = v25;
                  v48 = v27;
                  v47 = (__int64)v23;
                  result = sub_934D60(v28, v53, v31);
                  v25 = (int)v49;
                  v27 = v48;
                  v23 = (_DWORD *)v47;
                }
              }
            }
          }
          v24 += 2;
        }
        while ( v24 != v26 );
        v18 = v26;
        v17 = (_QWORD *)v28;
        v16 = v56;
        v21 = v54;
        v5 = v55 + 1;
        v20 = v57;
        v22 = v59;
        v19 = v58 + 1;
      }
      while ( v55 + 1 != v56 );
    }
  }
  return result;
}

