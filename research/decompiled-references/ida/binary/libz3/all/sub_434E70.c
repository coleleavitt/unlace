__int64 __fastcall sub_434E70(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        __int64 a17)
{
  char **exception; // r13
  __int64 v18; // rdx
  __int64 v19; // rax
  _OWORD *v20; // rax
  _OWORD *v21; // rbx
  _OWORD *v22; // rax
  _OWORD *v23; // rbp
  _QWORD *v24; // r13
  __int64 v25; // rax
  __m128 *v26; // rax
  __m128 v27; // xmm0
  __int64 *v28; // rdi
  __int64 v29; // rax
  size_t v31; // rdi
  __int64 v32; // rax
  _QWORD *v33; // r15
  __int64 v34; // rcx
  __int64 v35; // rax
  _QWORD *v36; // rdx
  _QWORD *v37; // rdi
  _QWORD *i; // rax
  __int64 v39; // rsi
  __int64 v40; // rsi
  __int64 v41; // rsi
  __int64 v42; // rsi
  __int64 v43; // rax
  void *v44; // rdi
  void *v45; // rdi
  __int64 *v46; // r14
  __int64 *v47; // r12
  __int64 v48; // rsi
  __int64 v49; // rdi
  unsigned int v51; // edi
  _QWORD *v52; // rax
  __int64 v54; // [rsp+10h] [rbp-C8h] BYREF
  _QWORD *v55; // [rsp+18h] [rbp-C0h]
  _DWORD *v56; // [rsp+20h] [rbp-B8h]
  unsigned int v57; // [rsp+2Ch] [rbp-ACh]
  __int64 v58[9]; // [rsp+30h] [rbp-A8h] BYREF
  int v59; // [rsp+78h] [rbp-60h]
  _OWORD *v60; // [rsp+80h] [rbp-58h]
  __int64 v61; // [rsp+88h] [rbp-50h]
  int v62; // [rsp+90h] [rbp-48h]

  v19 = a1[1];
  v58[4] = (__int64)a1;
  v54 = v19;
  v58[6] = 0;
  v20 = (_OWORD *)sub_186B270(0x80u);
  v58[7] = (__int64)v20;
  v21 = v20;
  *v20 = 0;
  v20[1] = 0;
  v20[2] = 0;
  v20[3] = 0;
  v20[4] = 0;
  v20[5] = 0;
  v20[6] = 0;
  v20[7] = 0;
  v59 = 0;
  v58[8] = 8;
  v22 = (_OWORD *)sub_186B270(0x80u);
  v60 = v22;
  v23 = v22;
  v24 = (_QWORD *)a1[16];
  *v22 = 0;
  v22[1] = 0;
  v22[2] = 0;
  v22[3] = 0;
  v22[4] = 0;
  v22[5] = 0;
  v22[6] = 0;
  v22[7] = 0;
  v62 = 0;
  v61 = 8;
  if ( v24 )
  {
    v25 = *((unsigned int *)v24 - 1);
    if ( (_DWORD)v25 == *((_DWORD *)v24 - 2) )
    {
      v57 = (unsigned int)(3 * v25 + 1) >> 1;
      v31 = 72 * v57 + 8;
      if ( 72 * (int)v25 + 8 >= (unsigned int)v31 || (unsigned int)v25 >= (unsigned int)(3 * v25 + 1) >> 1 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_D0F44(v58, "Overflow encountered when expanding vector", v18);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v58);
        sub_233E40((__int64)v58);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v32 = sub_186B270(v31);
      v56 = (_DWORD *)v32;
      v24 = (_QWORD *)(v32 + 8);
      v33 = (_QWORD *)a1[16];
      if ( v33 )
      {
        v34 = v32;
        v35 = *((unsigned int *)v33 - 1);
        v36 = v24;
        *(_DWORD *)(v34 + 4) = v35;
        v37 = &v33[9 * v35];
        for ( i = v33; v37 != i; *((_DWORD *)v36 - 2) = *((_DWORD *)i - 2) )
        {
          v39 = *i;
          i += 9;
          v36 += 9;
          *(v36 - 9) = v39;
          *(v36 - 8) = *(i - 8);
          v40 = *(i - 7);
          *(i - 7) = 0;
          *(v36 - 7) = v40;
          *((_DWORD *)v36 - 10) = *((_DWORD *)i - 10);
          v41 = *(i - 6);
          *(i - 6) = 0;
          *(v36 - 6) = v41;
          *((_DWORD *)v36 - 9) = *((_DWORD *)i - 9);
          *((_DWORD *)v36 - 8) = *((_DWORD *)i - 8);
          *((_DWORD *)v36 - 4) = *((_DWORD *)i - 4);
          v42 = *(i - 3);
          *(i - 3) = 0;
          *(v36 - 3) = v42;
          *((_DWORD *)v36 - 3) = *((_DWORD *)i - 3);
        }
        v43 = *((unsigned int *)v33 - 1);
        if ( (_DWORD)v43 )
        {
          v55 = &v33[9 * v43];
          do
          {
            v44 = (void *)v33[6];
            if ( v44 )
              sub_186B220(v44);
            v45 = (void *)v33[3];
            if ( v45 )
              sub_186B220(v45);
            v46 = (__int64 *)v33[2];
            if ( v46 )
            {
              v47 = &v46[*((unsigned int *)v46 - 1)];
              if ( v46 >= v47 )
                goto LABEL_24;
              do
              {
                while ( 1 )
                {
                  v48 = *v46;
                  if ( *v46 )
                  {
                    v49 = v33[1];
                    if ( (*(_DWORD *)(v48 + 8))-- == 1 )
                      break;
                  }
                  if ( ++v46 >= v47 )
                    goto LABEL_23;
                }
                sub_15D7BC0(v49, v48);
                ++v46;
              }
              while ( v46 < v47 );
LABEL_23:
              v46 = (__int64 *)v33[2];
              if ( v46 )
LABEL_24:
                sub_186B220(v46 - 1);
            }
            v33 += 9;
          }
          while ( v33 != v55 );
          v33 = (_QWORD *)a1[16];
        }
        sub_186B220(v33 - 1);
        v26 = (__m128 *)&v24[9 * (unsigned int)v56[1]];
      }
      else
      {
        *(_DWORD *)(v32 + 4) = 0;
        v26 = (__m128 *)(v32 + 8);
      }
      v51 = v57;
      a1[16] = v24;
      *v56 = v51;
    }
    else
    {
      v26 = (__m128 *)&v24[9 * v25];
    }
  }
  else
  {
    v52 = (_QWORD *)sub_186B270(0x98u);
    v24 = v52 + 1;
    *v52 = 2;
    a1[16] = v52 + 1;
    v26 = (__m128 *)(v52 + 1);
  }
  v26[1].m128_u64[1] = (unsigned __int64)v21;
  v26[1].m128_u64[0] = 0;
  v26[2].m128_i32[2] = 0;
  v27 = _mm_loadh_ps((const double *)&v54);
  v26[2].m128_u64[0] = 8;
  *v26 = v27;
  v28 = (__int64 *)a1[12];
  v26[3].m128_u64[0] = (unsigned __int64)v23;
  v26[3].m128_u64[1] = 8;
  v26[4].m128_i32[0] = 0;
  v29 = *v28;
  ++*((_DWORD *)v24 - 1);
  return (*(__int64 (__fastcall **)(__int64 *))(v29 + 192))(v28);
}

