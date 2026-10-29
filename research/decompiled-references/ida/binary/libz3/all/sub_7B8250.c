_QWORD *__fastcall sub_7B8250(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _QWORD *a5)
{
  char **exception; // rbp
  __int64 v6; // rdx
  __int64 v7; // rdx
  int v10; // eax
  __int64 v11; // rax
  _QWORD *v12; // r15
  unsigned int *v13; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // r13
  unsigned int *v17; // r14
  unsigned int *v18; // r13
  unsigned __int64 i; // xmm0_8
  __int64 v20; // rax
  unsigned __int64 *v21; // rdx
  unsigned int v22; // r12d
  size_t v23; // rdi
  __int64 v24; // rax
  _QWORD *v25; // rdi
  _DWORD *v26; // rcx
  __int64 v27; // r8
  unsigned __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // rax
  _QWORD *v31; // r12
  __int64 v32; // rsi
  unsigned __int64 v33; // rax
  __int64 v34; // r13
  __int64 v35; // r13
  _QWORD *result; // rax
  int v37; // ebx
  unsigned int v38; // eax
  unsigned int *v39; // r14
  unsigned __int64 j; // xmm0_8
  unsigned int *v41; // rax
  __int64 v42; // rax
  unsigned __int64 *v43; // rdx
  unsigned int v44; // r8d
  size_t v45; // rdi
  unsigned int v46; // r13d
  __int64 v47; // rax
  _QWORD *v48; // rdi
  _DWORD *v49; // r15
  __int64 v50; // rcx
  unsigned __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rax
  _QWORD *v56; // rax
  unsigned __int64 v57; // [rsp+8h] [rbp-70h]
  unsigned __int64 v58; // [rsp+10h] [rbp-68h]
  unsigned int *v59; // [rsp+18h] [rbp-60h]
  __int64 v60[11]; // [rsp+20h] [rbp-58h] BYREF

  v10 = *(_DWORD *)(a2 + 8);
  if ( v10 )
  {
    if ( v10 != 1 )
    {
      sub_1872CE0("");
      sub_1873130(114, 3457);
    }
    v11 = sub_81AF20(a2);
    v12 = (_QWORD *)*a5;
    v59 = (unsigned int *)v11;
    v13 = (unsigned int *)v11;
    v14 = a4 * (unsigned __int64)*(unsigned int *)(v11 + 60);
    if ( v12 )
    {
      *((_DWORD *)v12 - 1) = 0;
      v15 = v13[8];
      a5[1] = v14;
      v16 = 2 * v15;
      if ( v16 * 4 )
      {
        v17 = v13 + 19;
        v18 = &v13[v16 + 19];
        for ( i = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a4 * v13[19]), _mm_cvtsi32_si128(v13[20])).m128i_u64[0];
              ;
              i = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a4 * *v17), _mm_cvtsi32_si128(v17[1])).m128i_u64[0] )
        {
          v20 = *((unsigned int *)v12 - 1);
          v21 = &v12[v20];
          if ( (_DWORD)v20 == *((_DWORD *)v12 - 2) )
          {
            v22 = (unsigned int)(3 * v20 + 1) >> 1;
            v23 = 8 * v22 + 8;
            if ( 8 * (int)v20 + 8 >= (unsigned int)v23 || (unsigned int)v20 >= v22 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_113C8C(v60, "Overflow encountered when expanding vector", v7);
LABEL_40:
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v60);
              sub_233E40((__int64)v60);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v57 = i;
            v24 = sub_186B270(v23);
            v25 = (_QWORD *)*a5;
            i = v57;
            v26 = (_DWORD *)v24;
            v12 = (_QWORD *)(v24 + 8);
            if ( *a5 )
            {
              v27 = *((unsigned int *)v25 - 1);
              *(_DWORD *)(v24 + 4) = v27;
              v28 = 0;
              v29 = 8 * v27;
              if ( v29 )
              {
                do
                {
                  *(_QWORD *)&v26[v28 / 4 + 2] = v25[v28 / 8];
                  v28 += 8LL;
                }
                while ( v28 != v29 );
              }
              v58 = (unsigned __int64)v26;
              v57 = i;
              sub_186B220(v25 - 1);
              v26 = (_DWORD *)v58;
              i = v57;
              v21 = &v12[*(unsigned int *)(v58 + 4)];
            }
            else
            {
              *(_DWORD *)(v24 + 4) = 0;
              v21 = (unsigned __int64 *)(v24 + 8);
            }
            *a5 = v12;
            *v26 = v22;
          }
LABEL_6:
          v17 += 2;
          *v21 = i;
          ++*((_DWORD *)v12 - 1);
          if ( v17 == v18 )
            break;
        }
      }
    }
    else
    {
      a5[1] = v14;
      v53 = 2LL * v59[8];
      v18 = &v59[v53 + 19];
      if ( v53 * 4 )
      {
        v17 = v59 + 19;
        v57 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a4 * v59[19]), _mm_cvtsi32_si128(v59[20])).m128i_u64[0];
        v54 = (_QWORD *)sub_186B270(0x18u);
        i = v57;
        v12 = v54 + 1;
        *v54 = 2;
        *a5 = v54 + 1;
        v21 = v54 + 1;
        goto LABEL_6;
      }
    }
  }
  else
  {
    v30 = sub_828140(a2);
    v31 = (_QWORD *)*a5;
    v59 = (unsigned int *)v30;
    v32 = v30;
    v33 = a4 * (unsigned __int64)*(unsigned int *)(v30 + 60);
    if ( v31 )
    {
      *((_DWORD *)v31 - 1) = 0;
      v34 = *(unsigned int *)(v32 + 32);
      a5[1] = v33;
      v35 = 4 * v34;
      if ( v35 )
      {
        v38 = *(_DWORD *)(v32 + 64);
        v39 = (unsigned int *)(v32 + 64);
        v57 = v32 + 64 + v35;
        LODWORD(v58) = v38;
        for ( j = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a4), _mm_cvtsi32_si128(v38)).m128i_u64[0];
              ;
              j = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a4), _mm_cvtsi32_si128(*v39)).m128i_u64[0] )
        {
          v42 = *((unsigned int *)v31 - 1);
          v43 = &v31[v42];
          if ( (_DWORD)v42 == *((_DWORD *)v31 - 2) )
          {
            v44 = (unsigned int)(3 * v42 + 1) >> 1;
            v45 = 8 * v44 + 8;
            v46 = v44;
            if ( 8 * (int)v42 + 8 >= (unsigned int)v45 || (unsigned int)v42 >= v44 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_113C8C(v60, "Overflow encountered when expanding vector", v6);
              goto LABEL_40;
            }
            v58 = j;
            v47 = sub_186B270(v45);
            v48 = (_QWORD *)*a5;
            j = v58;
            v49 = (_DWORD *)v47;
            v31 = (_QWORD *)(v47 + 8);
            if ( *a5 )
            {
              v50 = *((unsigned int *)v48 - 1);
              *(_DWORD *)(v47 + 4) = v50;
              v51 = 0;
              v52 = 8 * v50;
              if ( v52 )
              {
                do
                {
                  *(_QWORD *)&v49[v51 / 4 + 2] = v48[v51 / 8];
                  v51 += 8LL;
                }
                while ( v52 != v51 );
              }
              v58 = j;
              sub_186B220(v48 - 1);
              j = v58;
              v43 = &v31[v49[1]];
            }
            else
            {
              *(_DWORD *)(v47 + 4) = 0;
              v43 = (unsigned __int64 *)(v47 + 8);
            }
            *a5 = v31;
            *v49 = v46;
          }
LABEL_23:
          v41 = (unsigned int *)v57;
          ++v39;
          *v43 = j;
          ++*((_DWORD *)v31 - 1);
          if ( v39 == v41 )
            break;
        }
      }
    }
    else
    {
      a5[1] = v33;
      v55 = v59[8];
      v57 = (unsigned __int64)&v59[v55 + 16];
      if ( v55 * 4 )
      {
        v39 = v59 + 16;
        v58 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a4), _mm_cvtsi32_si128(v59[16])).m128i_u64[0];
        v56 = (_QWORD *)sub_186B270(0x18u);
        j = v58;
        v31 = v56 + 1;
        *v56 = 2;
        *a5 = v56 + 1;
        v43 = v56 + 1;
        goto LABEL_23;
      }
    }
  }
  result = (_QWORD *)v59[4];
  if ( (_DWORD)result != -2 )
  {
    v37 = v59[15] * a4;
    HIDWORD(v60[0]) = (unsigned int)result ^ 1;
    LODWORD(v60[0]) = v37;
    return sub_7B8130(a5, v60);
  }
  return result;
}

