__int64 __fastcall sub_CD2680(__int64 a1, unsigned int *a2, __int64 *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rdi
  bool v8; // zf
  __int64 result; // rax
  __int64 v10; // rdi
  __int64 (*v11)(); // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbp
  __int64 v15; // rax
  _QWORD *v16; // rdi
  int v17; // r12d
  __int64 (__fastcall *v18)(__int64); // rax
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // rdi
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  char v27; // bp
  __m128i v28; // xmm0
  _DWORD *v29; // rax
  int v30; // edx
  __int64 v31; // rdx
  __int64 v32; // rax
  unsigned int *v33; // r13
  char *v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // r12
  __int64 v38; // rsi
  int v39; // eax
  __int64 v40; // r12
  char *v41; // rdi
  __int64 v42; // r10
  __int64 v43; // r11
  __int64 v44; // rsi
  __int64 v45; // rdi
  __int64 v46; // rsi
  __int64 v47; // rdi
  __int64 v48; // rsi
  __int64 v49; // rdi
  char *v50; // rbp
  char *v51; // r12
  __int64 v52; // rsi
  __int64 v53; // rdi
  __int64 v54; // r10
  __int64 v55; // r11
  char **exception; // rbx
  __int64 v57; // rdx
  unsigned int *v58; // [rsp+8h] [rbp-110h]
  char *v59; // [rsp+28h] [rbp-F0h]
  __int64 v60; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v61; // [rsp+38h] [rbp-E0h]
  __int64 v62; // [rsp+40h] [rbp-D8h] BYREF
  void *ptr; // [rsp+48h] [rbp-D0h]
  __int64 v64; // [rsp+50h] [rbp-C8h]
  _BYTE v65[192]; // [rsp+58h] [rbp-C0h] BYREF

  v6 = *a3;
  if ( *a3 )
  {
    v7 = a3[1];
    v8 = (*(_DWORD *)(v6 + 8))-- == 1;
    if ( v8 )
      sub_15D7BC0(v7, v6);
  }
  *a3 = 0;
  result = *(unsigned int *)(a1 + 632);
  if ( *(_DWORD *)(a1 + 552) >= (unsigned int)result
    || (result = *(unsigned int *)(a1 + 636), *(_DWORD *)(a1 + 556) >= (unsigned int)result) )
  {
    if ( !a2 )
    {
LABEL_24:
      *a3 = (__int64)a2;
      return result;
    }
LABEL_23:
    ++a2[2];
    goto LABEL_24;
  }
  if ( *((_WORD *)a2 + 2) )
    goto LABEL_23;
  v10 = *(_QWORD *)(a1 + 8);
  v11 = *(__int64 (**)())(*(_QWORD *)v10 + 32LL);
  if ( v11 != sub_753BA0 )
  {
    v6 = (__int64)a2;
    result = ((__int64 (__fastcall *)(__int64, unsigned int *))v11)(v10, a2);
    if ( !(_BYTE)result )
    {
      v44 = *a3;
      v45 = a3[1];
      ++a2[2];
      if ( v44 )
      {
        v8 = (*(_DWORD *)(v44 + 8))-- == 1;
        if ( v8 )
          result = sub_15D7BC0(v45, v44);
      }
      goto LABEL_24;
    }
  }
  if ( *(_QWORD *)(a1 + 624) < (unsigned __int64)Z3_get_estimated_alloc_size_0(v10, v6) )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_163D96(&v62, off_1C7E178, v57);
    *exception = (char *)off_1C63670;
    sub_2333C0(exception + 1, &v62);
    sub_233E40((__int64)&v62);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
  }
  sub_EE4F40(*(_QWORD *)a1);
  v12 = *(_QWORD *)(a1 + 536);
  if ( !v12
    || (v13 = *a2, (unsigned int)v13 >= *(_DWORD *)(v12 - 4))
    || (v14 = v12 + 16 * v13, (v15 = *(_QWORD *)(v14 + 8)) == 0)
    || ((v16 = *(_QWORD **)(a1 + 8),
         v17 = *(_DWORD *)(v15 + 8),
         v18 = *(__int64 (__fastcall **)(__int64))(*v16 + 56LL),
         v18 != sub_CD0230)
      ? (v20 = ((__int64 (*)(void))v18)())
      : (v19 = v16[8]) == 0
      ? (v20 = 0)
      : (v20 = *(_DWORD *)(v19 - 4)),
        v17 != v20) )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, __int64 *))(**(_QWORD **)(a1 + 8) + 24LL))(
               *(_QWORD *)(a1 + 8),
               a2,
               a3);
    v27 = result;
    if ( (_BYTE)result )
      return result;
    v28 = _mm_loadl_epi64((const __m128i *)(a1 + 552));
    *(_QWORD *)(a1 + 552) = _mm_add_epi32(_mm_loadl_epi64((const __m128i *)&qword_18B6000), v28).m128i_u64[0];
    if ( !*((_WORD *)a2 + 2) )
    {
      v29 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL);
      if ( v29 )
      {
        if ( !*v29 )
        {
          v30 = v29[1];
          if ( v30 == 6 )
          {
            sub_CD3780(a1, (_DWORD)a2, (_DWORD)a3, v24, v25, v26);
            result = (unsigned int)(*(_DWORD *)(a1 + 552) - 1);
            goto LABEL_34;
          }
          if ( v30 == 5 )
          {
            sub_CD0EC0(a1, (__int64)a2, a3);
            result = (unsigned int)(*(_DWORD *)(a1 + 552) - 1);
            goto LABEL_34;
          }
          if ( v29[1] == 4 )
          {
            sub_CD2CC0(a1, (_DWORD)a2, (_DWORD)a3, v24, v25, v26);
            result = (unsigned int)(*(_DWORD *)(a1 + 552) - 1);
LABEL_34:
            *(_DWORD *)(a1 + 552) = result;
            return result;
          }
        }
      }
    }
    v31 = a2[6];
    if ( (_DWORD)v31 )
    {
      v32 = *(_QWORD *)a1;
      v33 = a2;
      ptr = v65;
      v58 = &a2[2 * v31];
      v62 = v32;
      v64 = 0x1000000000LL;
      while ( 1 )
      {
        v37 = *((_QWORD *)v33 + 4);
        v60 = 0;
        v61 = v32;
        sub_CD2680(a1, v37, &v60);
        v38 = v60;
        v27 |= v37 != v60;
        if ( v60 )
          ++*(_DWORD *)(v60 + 8);
        v39 = v64;
        if ( (unsigned int)v64 < HIDWORD(v64) )
        {
          v34 = (char *)ptr;
        }
        else
        {
          v40 = (unsigned int)(2 * HIDWORD(v64));
          v34 = (char *)sub_186B270(8 * v40);
          v39 = v64;
          v41 = (char *)ptr;
          if ( (_DWORD)v64 )
          {
            if ( (unsigned int)(v64 - 1) <= 2 || v34 == (char *)ptr + 8 )
            {
              v54 = 0;
              v55 = 8LL * (unsigned int)v64;
              do
              {
                *(_QWORD *)&v34[v54] = *(_QWORD *)&v41[v54];
                v54 += 8;
              }
              while ( v54 != v55 );
            }
            else
            {
              v42 = 0;
              v43 = 16LL * ((unsigned int)v64 >> 1);
              do
              {
                *(__m128i *)&v34[v42] = _mm_loadu_si128((const __m128i *)&v41[v42]);
                v42 += 16;
              }
              while ( v42 != v43 );
              if ( (v39 & 1) != 0 )
                *(_QWORD *)&v34[8 * (v39 & 0xFFFFFFFE)] = *(_QWORD *)&v41[8 * (v39 & 0xFFFFFFFE)];
            }
          }
          if ( v41 && v41 != v65 )
          {
            v59 = v34;
            sub_186B220(v41);
            v39 = v64;
            v34 = v59;
          }
          ptr = v34;
          HIDWORD(v64) = v40;
        }
        *(_QWORD *)&v34[8 * v39] = v38;
        v35 = v60;
        LODWORD(v64) = v39 + 1;
        if ( v60 )
        {
          v36 = v61;
          v8 = (*(_DWORD *)(v60 + 8))-- == 1;
          if ( v8 )
            sub_15D7BC0(v36, v35);
        }
        v33 += 2;
        if ( v58 == v33 )
          break;
        v32 = *(_QWORD *)a1;
      }
      if ( v27 )
      {
        sub_1447B20(a1 + 616, *((_QWORD *)a2 + 2), (unsigned int)v64, ptr, a3);
      }
      else
      {
        v48 = *a3;
        ++a2[2];
        if ( v48 )
        {
          v49 = a3[1];
          v8 = (*(_DWORD *)(v48 + 8))-- == 1;
          if ( v8 )
            sub_15D7BC0(v49, v48);
        }
        *a3 = (__int64)a2;
      }
      v50 = (char *)ptr;
      v51 = (char *)ptr + 8 * (unsigned int)v64;
      if ( ptr < v51 )
      {
        do
        {
          v52 = *(_QWORD *)v50;
          if ( *(_QWORD *)v50 )
          {
            v53 = v62;
            v8 = (*(_DWORD *)(v52 + 8))-- == 1;
            if ( v8 )
              sub_15D7BC0(v53, v52);
          }
          v50 += 8;
        }
        while ( v50 < v51 );
        v50 = (char *)ptr;
      }
      if ( v50 != v65 && v50 )
        sub_186B220(v50);
      result = (unsigned int)(*(_DWORD *)(a1 + 552) - 1);
    }
    else
    {
      v46 = *a3;
      ++a2[2];
      if ( v46 && (v47 = a3[1], v8 = *(_DWORD *)(v46 + 8) == 1, --*(_DWORD *)(v46 + 8), v8) )
      {
        sub_15D7BC0(v47, v46);
        result = (unsigned int)(*(_DWORD *)(a1 + 552) - 1);
      }
      else
      {
        result = (unsigned int)_mm_cvtsi128_si32(v28);
      }
      *a3 = (__int64)a2;
    }
    goto LABEL_34;
  }
  result = *(_QWORD *)(v14 + 8);
  v21 = *(_QWORD *)result;
  if ( *(_QWORD *)result )
    ++*(_DWORD *)(v21 + 8);
  v22 = *a3;
  if ( *a3 )
  {
    v23 = a3[1];
    v8 = (*(_DWORD *)(v22 + 8))-- == 1;
    if ( v8 )
      result = sub_15D7BC0(v23, v22);
  }
  *a3 = v21;
  return result;
}

