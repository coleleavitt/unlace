__int64 __fastcall sub_528610(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int8 a5,
        __int64 a6,
        __m128 a7)
{
  char **exception; // r13
  char **v8; // r13
  __int64 v11; // rdx
  _DWORD *v12; // rcx
  __int64 v13; // r11
  int v14; // edi
  __int64 v15; // r8
  _DWORD *v16; // rbx
  __int64 v17; // rax
  _DWORD *v18; // r9
  _DWORD *i; // rax
  size_t v20; // rsi
  unsigned int v21; // r13d
  __int64 v22; // rax
  __int64 v23; // r13
  unsigned int *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // r14
  __int64 v27; // rax
  _DWORD *v28; // rdi
  _DWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned int *v32; // rax
  __int64 v33; // rax
  int v34; // edx
  __int64 v35; // rdi
  __int64 v36; // rax
  unsigned int v37; // edx
  unsigned int *v38; // rax
  __int64 v39; // rax
  __int64 result; // rax
  unsigned int *v41; // r14
  unsigned int *v42; // r12
  unsigned int v43; // r13d
  _QWORD *v44; // rax
  __m128i v45; // xmm0
  __int64 v46; // rax
  unsigned int *v47; // rax
  unsigned int v48; // r14d
  unsigned int v49; // edx
  __int64 v50; // rcx
  __m128i v51; // xmm0
  __int64 v52; // rsi
  unsigned __int64 v53; // rax
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // [rsp+8h] [rbp-A8h]
  _DWORD *v57; // [rsp+10h] [rbp-A0h]
  unsigned int v59; // [rsp+1Ch] [rbp-94h]
  unsigned int v62; // [rsp+2Ch] [rbp-84h]
  __int64 v63; // [rsp+30h] [rbp-80h]
  unsigned int ptra; // [rsp+40h] [rbp-70h]
  unsigned int *ptr; // [rsp+40h] [rbp-70h]
  unsigned int ptrb; // [rsp+40h] [rbp-70h]
  unsigned int *v68; // [rsp+48h] [rbp-68h]
  __int64 v69[10]; // [rsp+60h] [rbp-50h] BYREF

  v11 = *((unsigned int *)a1 + 8);
  v12 = (_DWORD *)a1[3];
  v13 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL);
  v14 = v11 - 1;
  v15 = *(unsigned int *)(v13 + 12);
  v16 = &v12[4 * v11];
  v17 = 4LL * ((unsigned int)v15 & ((_DWORD)v11 - 1));
  v18 = &v12[v17];
  if ( v17 == 4 * v11 )
  {
LABEL_9:
    if ( v12 != v18 )
    {
      for ( i = v12; v18 != i; i += 4 )
      {
        v20 = *(_QWORD *)i;
        if ( *(_QWORD *)i > 1u )
        {
          if ( *(_DWORD *)(v20 + 12) == (_DWORD)v15 && v13 == v20 )
            goto LABEL_17;
        }
        else if ( !v20 )
        {
          break;
        }
      }
    }
LABEL_87:
    BUG();
  }
  i = &v12[v17];
  while ( 1 )
  {
    while ( 1 )
    {
      v20 = *(_QWORD *)i;
      if ( *(_QWORD *)i > 1u )
        break;
      if ( !v20 )
        goto LABEL_87;
      i += 4;
      if ( v16 == i )
        goto LABEL_9;
    }
    if ( *(_DWORD *)(v20 + 12) == (_DWORD)v15 && v13 == v20 )
      break;
    i += 4;
    if ( v16 == i )
      goto LABEL_9;
  }
LABEL_17:
  v21 = *(_DWORD *)(a2 + 68);
  v59 = i[2];
  if ( !v21 )
  {
    v68 = nullptr;
    v24 = nullptr;
    goto LABEL_60;
  }
  v22 = v21;
  v68 = nullptr;
  v23 = 0;
  v24 = nullptr;
  v63 = v22;
LABEL_19:
  v25 = 16 * v11;
  v18 = &v12[(unsigned __int64)v25 / 4];
  v26 = *(_QWORD *)((*(_QWORD *)(a2 + 8 * v23 + 80) & 0xFFFFFFFFFFFFFFF8LL) + 16);
  v20 = *(unsigned int *)(v26 + 12);
  v27 = 16LL * ((unsigned int)v20 & v14);
  v28 = &v12[(unsigned __int64)v27 / 4];
  if ( v27 != v25 )
  {
    v29 = &v12[(unsigned __int64)v27 / 4];
    do
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)v29;
        if ( *(_QWORD *)v29 <= 1u )
          break;
        if ( *(_DWORD *)(v11 + 12) == (_DWORD)v20 && v26 == v11 )
          goto LABEL_35;
        v29 += 4;
        if ( v18 == v29 )
          goto LABEL_27;
      }
      if ( !v11 )
        goto LABEL_90;
      v29 += 4;
    }
    while ( v18 != v29 );
  }
LABEL_27:
  if ( v28 == v12 )
LABEL_90:
    BUG();
  v11 = (__int64)v68;
  while ( 1 )
  {
    v30 = *(_QWORD *)v12;
    if ( *(_QWORD *)v12 > 1u )
      break;
    if ( !v30 )
      goto LABEL_90;
LABEL_31:
    v12 += 4;
    if ( v28 == v12 )
      goto LABEL_90;
  }
  if ( *(_DWORD *)(v30 + 12) != (_DWORD)v20 || v26 != v30 )
    goto LABEL_31;
  v29 = v12;
LABEL_35:
  v15 = (unsigned int)v29[2];
  if ( v24 )
  {
    v31 = *(v24 - 1);
    if ( (_DWORD)v31 == *(v24 - 2) )
    {
      v37 = (unsigned int)(3 * v31 + 1) >> 1;
      v20 = 4 * v37 + 8;
      if ( 4 * (int)v31 + 8 >= (unsigned int)v20 || (unsigned int)v31 >= v37 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v69, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v69);
        sub_233E40((__int64)v69);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v62 = (unsigned int)(3 * v31 + 1) >> 1;
      ptra = v15;
      v38 = (unsigned int *)sub_186B300(v24 - 2, v20);
      v11 = v62;
      v24 = v38 + 2;
      v15 = ptra;
      *v38 = v62;
      v32 = &v38[v38[1] + 2];
    }
    else
    {
      v32 = &v24[v31];
    }
  }
  else
  {
    ptrb = v29[2];
    v44 = (_QWORD *)sub_186B270(0x10u);
    v15 = ptrb;
    *v44 = 2;
    v24 = (unsigned int *)(v44 + 1);
    v32 = (unsigned int *)(v44 + 1);
  }
  *v32 = v15;
  ++*(v24 - 1);
  if ( a3 && !(unsigned __int8)sub_64B180(*a1, v20, v11, v12, v15, v18) )
  {
    v33 = *(unsigned int *)(a3 + 8);
    v20 = *(unsigned int *)(v26 + 12);
    v12 = *(_DWORD **)a3;
    v34 = v33 - 1;
    v33 *= 16;
    v18 = (_DWORD *)(*(_QWORD *)a3 + v33);
    v11 = 16LL * ((unsigned int)v20 & v34);
    v35 = *(_QWORD *)a3 + v11;
    if ( v11 != v33 )
    {
      v36 = *(_QWORD *)a3 + v11;
      do
      {
        v11 = *(_QWORD *)v36;
        if ( *(_QWORD *)v36 > 1u )
        {
          if ( *(_DWORD *)(v11 + 12) == (_DWORD)v20 && v26 == v11 )
          {
            v45 = _mm_cvtsi32_si128(*(_DWORD *)(v36 + 8));
            if ( !v68 )
              goto LABEL_83;
            goto LABEL_74;
          }
        }
        else if ( !v11 )
        {
          goto LABEL_47;
        }
        v36 += 16;
      }
      while ( v18 != (_DWORD *)v36 );
    }
    if ( v12 != (_DWORD *)v35 )
    {
      v11 = (__int64)v68;
      while ( 1 )
      {
        v39 = *(_QWORD *)v12;
        if ( *(_QWORD *)v12 > 1u )
        {
          if ( *(_DWORD *)(v39 + 12) == (_DWORD)v20 && v26 == v39 )
          {
            v45 = _mm_cvtsi32_si128(v12[2]);
            if ( !v68 )
            {
LABEL_83:
              v55 = (_QWORD *)sub_186B270(0x18u);
              *v55 = 2;
              v47 = (unsigned int *)(v55 + 1);
              v45 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v45));
              v68 = v47;
              goto LABEL_76;
            }
LABEL_74:
            v46 = *(v68 - 1);
            if ( (_DWORD)v46 == *(v68 - 2) )
            {
              v48 = (unsigned int)(3 * v46 + 1) >> 1;
              v49 = 8 * v48 + 8;
              if ( 8 * (int)v46 + 8 >= v49 || (unsigned int)v46 >= v48 )
              {
                v8 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v69, "Overflow encountered when expanding vector");
                *v8 = (char *)off_1C63128;
                sub_2333C0(v8 + 1, v69);
                sub_233E40((__int64)v69);
                __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v50 = sub_186B270(v49);
              v51 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v45));
              v52 = *(v68 - 1);
              v53 = 0;
              *(_DWORD *)(v50 + 4) = v52;
              v20 = 8 * v52;
              if ( v20 )
              {
                do
                {
                  *(_QWORD *)(v50 + v53 + 8) = *(_QWORD *)&v68[v53 / 4];
                  v53 += 8LL;
                }
                while ( v20 != v53 );
              }
              v56 = v50 + 8;
              v57 = (_DWORD *)v50;
              sub_186B220(v68 - 2);
              v12 = v57;
              v18 = (_DWORD *)v56;
              v45 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v51));
              v54 = (unsigned int)v57[1];
              *v57 = v48;
              v68 = (unsigned int *)v56;
              v47 = (unsigned int *)(v56 + 8 * v54);
            }
            else
            {
              v47 = &v68[2 * v46];
            }
LABEL_76:
            a7 = (__m128)_mm_unpacklo_epi32(v45, _mm_cvtsi32_si128(v23));
            *(_QWORD *)v47 = a7.m128_u64[0];
            ++*(v68 - 1);
            break;
          }
        }
        else if ( !v39 )
        {
LABEL_59:
          if ( ++v23 == v63 )
            goto LABEL_60;
LABEL_48:
          v11 = *((unsigned int *)a1 + 8);
          v12 = (_DWORD *)a1[3];
          v14 = v11 - 1;
          goto LABEL_19;
        }
        v12 += 4;
        if ( (_DWORD *)v35 == v12 )
          goto LABEL_59;
      }
    }
  }
LABEL_47:
  if ( ++v23 != v63 )
    goto LABEL_48;
LABEL_60:
  if ( !a3 || (result = sub_64B180(*a1, v20, v11, v12, v15, v18), (_BYTE)result) )
  {
    result = sub_524F50((__int64)a1, a2, v59, v24, a4, a5, a7, a6);
    if ( v68 )
      goto LABEL_65;
  }
  else if ( v68 )
  {
    v41 = v68;
    ptr = &v68[2 * *(v68 - 1)];
    if ( ptr != v68 )
    {
      do
      {
        v42 = &v24[v41[1]];
        v43 = *v42;
        *v42 = *v41;
        sub_524F50((__int64)a1, a2, v59, v24, a4, a5, a7, a6);
        v41 += 2;
        *v42 = v43;
      }
      while ( v41 != ptr );
    }
LABEL_65:
    result = sub_186B220(v68 - 2);
  }
  if ( v24 )
    return sub_186B220(v24 - 2);
  return result;
}

