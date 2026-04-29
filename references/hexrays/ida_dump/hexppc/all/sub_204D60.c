__int64 __fastcall sub_204D60(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __m128i *a4,
        unsigned __int8 a5,
        unsigned __int8 a6,
        __int64 *a7)
{
  _QWORD *exception; // rdi
  _QWORD *v8; // rax
  __int64 v12; // r15
  unsigned int v13; // r14d
  unsigned int v14; // eax
  unsigned int v15; // r11d
  __int64 v16; // rax
  __m128i v17; // xmm0
  __m128 v18; // xmm1
  unsigned __int64 *v19; // rsi
  __int64 v20; // rdi
  char tinfo_property; // r13
  int v22; // eax
  _DWORD *v23; // rdx
  char v25; // al
  __int64 v26; // rcx
  _QWORD *v27; // rdx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rcx
  unsigned __int64 v34; // rax
  char v35; // cl
  unsigned __int64 v36; // rax
  char v37; // dl
  unsigned __int64 v38; // rdx
  _BYTE *v39; // rdx
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rdi
  __int64 v44; // rax
  __m128i v45; // xmm1
  signed __int64 v46; // [rsp+10h] [rbp-A0h]
  int v49; // [rsp+28h] [rbp-88h]
  signed __int64 v50; // [rsp+30h] [rbp-80h] BYREF
  __m128 *v51; // [rsp+38h] [rbp-78h] BYREF
  __m128 v52; // [rsp+40h] [rbp-70h] BYREF
  signed __int64 v53; // [rsp+50h] [rbp-60h]
  int v54; // [rsp+58h] [rbp-58h]
  __m128i v55; // [rsp+60h] [rbp-50h]
  int v56; // [rsp+70h] [rbp-40h]
  unsigned __int8 v57; // [rsp+74h] [rbp-3Ch]
  unsigned __int64 v58; // [rsp+78h] [rbp-38h]

  v49 = a2;
  v58 = __readfsqword(0x28u);
  v8 = *(_QWORD **)(a3 + 8);
  if ( a2 >= v8[55] )
  {
    if ( !under_debugger )
      sub_37EEE0(51940);
    BUG();
  }
  v12 = v8[54] + 104 * a2;
  v13 = sub_1F8220(v8[187], a1, *(_QWORD *)(a3 + 32));
  v14 = sub_1FD470(*(_QWORD *)(a3 + 8), a1, (int *)v12, v13, &v50);
  v15 = v14;
  if ( v14 != 1 )
  {
    if ( v14 != 2 )
      goto LABEL_4;
    if ( *(_BYTE *)a1 == 5 )
    {
      if ( (unsigned __int8)sub_225010(*(_QWORD *)(a3 + 8), v12) )
      {
        v40 = *(_QWORD *)(a3 + 8);
        if ( a6 || *(_BYTE *)(v40 + 320) || (*(_BYTE *)(v12 + 24) & 2) != 0 )
        {
          if ( (unsigned __int8)sub_2254A0(v12, v40, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL), v13) )
          {
            v41 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
            if ( *(_DWORD *)v12 == 1 )
              v42 = *(_QWORD *)(v12 + 8);
            else
              v42 = -1;
            v43 = *(_QWORD *)(a3 + 8);
            v50 = v41 - v42;
            sub_1F0930(v43, -1, v12);
            *(_DWORD *)(v12 + 24) |= 0x400u;
LABEL_4:
            if ( !a4 )
              goto LABEL_14;
            goto LABEL_5;
          }
        }
      }
    }
    return 2;
  }
  if ( *(_BYTE *)a1 == 5 )
  {
    if ( v50 < 0 )
    {
      v31 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
      v32 = *(_QWORD *)(a3 + 8);
      v33 = *(int *)(v32 + 116);
      v34 = *(_QWORD *)(v32 + 136);
      if ( v31 >= v34 && v33 && v33 + v34 - 1 >= v31 )
        return 2;
    }
  }
  else if ( a5 != 1
         && *(_BYTE *)a1 == 1
         && (*(_DWORD *)(a1 + 4) & (*(_DWORD *)(a1 + 4) - 1)) == 0
         && *(_DWORD *)v12 == 4
         && (**(_DWORD **)(a3 + 8) & 0x40000) == 0 )
  {
    sub_120000((__int64)&v52, (unsigned __int8 *)a1);
    sub_121860(a1, *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 4) / 2 + *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 4) / 2);
    if ( !(unsigned int)sub_204D60(*(_QWORD *)(a1 + 8), a2, a3, (_DWORD)a4, 0, a6, 0)
      || !(unsigned int)sub_204D60(*(_DWORD *)(a1 + 8) + 16, a2, a3, (_DWORD)a4, 0, a6, 0) )
    {
      sub_119360((__int64)&v52);
      return 0;
    }
    sub_118FD0((char *)a1, (char *)&v52);
    sub_119360((__int64)&v52);
    v15 = 1;
  }
  if ( !a6 )
    return v15;
  if ( !a4 )
  {
    *(_DWORD *)(v12 + 24) &= ~0x80000u;
    return 0;
  }
LABEL_5:
  v16 = *(_QWORD *)(a3 + 16);
  v17 = _mm_loadu_si128((const __m128i *)(a3 + 24));
  v18 = _mm_loadh_ps((const double *)(a3 + 8));
  v51 = &v52;
  LODWORD(v16) = *(_DWORD *)(v16 + 72);
  v54 = v49;
  v19 = (unsigned __int64 *)a4->m128i_i64[0];
  v46 = v50;
  v56 = v16;
  v53 = v50;
  v57 = a5;
  v52 = v18;
  v55 = v17;
  if ( !v19 )
  {
    v44 = qalloc(80);
    v45 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v44, (__m128i)(unsigned __int64)v44);
    if ( !v44 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)(v44 + 16) = 0;
    *(_OWORD *)(v44 + 32) = 0;
    *(_OWORD *)(v44 + 48) = 0;
    *(_QWORD *)v44 = v44 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(_OWORD *)(v44 + 64) = 0;
    *(__m128i *)(v44 + 8) = v45;
    a4->m128i_i64[0] = v44;
    *(_QWORD *)v44 = v44 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v44 & 3LL;
    *(__m128i *)(a4->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a4->m128i_u64[0], (__m128i)a4->m128i_u64[0]);
    *(_QWORD *)a4->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a4->m128i_i64[0] |= 2uLL;
    v19 = (unsigned __int64 *)a4->m128i_i64[0];
    goto LABEL_7;
  }
  if ( !a4->m128i_i64[1] )
  {
LABEL_7:
    sub_204BF0(a4, v19, 1, (const __m128i **)&v51);
    goto LABEL_8;
  }
  v35 = 1;
  v36 = *v19 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v36 & 2) != 0 )
  {
    v37 = 1;
LABEL_60:
    sub_204BF0(a4, v19, v37, (const __m128i **)&v51);
    goto LABEL_8;
  }
  while ( 1 )
  {
    v38 = *(_QWORD *)(v36 + 24);
    if ( a1 < v38 )
    {
      v39 = *(_BYTE **)(v36 + 8);
      v35 = 1;
      goto LABEL_64;
    }
    if ( v38 >= a1 )
      break;
    v39 = *(_BYTE **)(v36 + 16);
    v35 = 0;
LABEL_64:
    if ( (*v39 & 2) != 0 )
      goto LABEL_65;
    v36 = (unsigned __int64)v39;
  }
  if ( !v36 )
  {
LABEL_65:
    v37 = v35;
    v19 = (unsigned __int64 *)v36;
    goto LABEL_60;
  }
LABEL_8:
  if ( a7 )
  {
    v20 = *a7;
    if ( (unsigned __int8)*a7 )
    {
      if ( (v20 & 0xE) != 0 || (v20 & 0x30) == 0 )
      {
        v52.m128_u64[0] = 0;
        v52.m128_u64[0] = get_tinfo_property(v20, 9);
        tinfo_property = get_tinfo_property(v52.m128_u64[0], 2);
        clear_tinfo_t(&v52);
        if ( (tinfo_property & 0x3F) != 0x30 && !v46 && *(_DWORD *)(v12 + 88) == *(_DWORD *)(a1 + 4) )
        {
          v25 = get_tinfo_property(*(_QWORD *)(v12 + 80), 2);
          if ( (v25 & 0xE) == 0 && (v25 & 0x30) != 0 && *(_DWORD *)v12 == 1 )
          {
            v26 = *(_QWORD *)(a3 + 8);
            v27 = *(_QWORD **)(v26 + 816);
            if ( v27 )
            {
              v28 = *v27 & 0xFFFFFFFFFFFFFFFCLL;
              if ( !v28 )
                goto LABEL_83;
              if ( (*(_BYTE *)v28 & 2) == 0 )
              {
                v29 = *(_QWORD *)(v12 + 8);
                do
                {
                  v30 = *(_QWORD *)(v28 + 24);
                  if ( v29 >= v30 )
                  {
                    if ( v30 >= v29 )
                    {
                      if ( v27 != (_QWORD *)v28 )
LABEL_83:
                        sub_1EBC70(v12, *(_QWORD *)(v26 + 1504), a7, 0);
                      break;
                    }
                    v28 = *(_QWORD *)(v28 + 16);
                  }
                  else
                  {
                    v28 = *(_QWORD *)(v28 + 8);
                  }
                }
                while ( (*(_BYTE *)v28 & 2) == 0 );
              }
            }
          }
        }
      }
    }
  }
LABEL_14:
  *(_DWORD *)(v12 + 24) &= ~0x80000u;
  if ( a6 )
    return 0;
  if ( !v50 || !(unsigned __int8)sub_2048C0(a3, a1, a5, v50, v12) )
  {
    v22 = **(_DWORD **)(a3 + 8);
    if ( !a5 && (v22 & 0x40000) == 0 )
    {
      if ( (unsigned __int8)sub_203A20(a3, a1, v12) )
        goto LABEL_19;
      v22 = **(_DWORD **)(a3 + 8);
    }
    if ( (v22 & 0x8020000) != 0 )
      return 3;
    return 0;
  }
LABEL_19:
  v23 = *(_DWORD **)(a3 + 8);
  if ( (*v23 & 0x20000) != 0 )
    return 3;
  v15 = 4;
  *v23 |= 0x8000000u;
  return v15;
}
