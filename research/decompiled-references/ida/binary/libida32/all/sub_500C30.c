__int64 __fastcall sub_500C30(__int64 a1, __int64 a2, signed int a3, unsigned __int32 a4, unsigned __int8 a5)
{
  __int64 v6; // r14
  unsigned int v10; // ebx
  unsigned __int64 v11; // r8
  __int64 v12; // r8
  __int64 *v13; // r15
  __int64 v14; // rdi
  unsigned int *v15; // rdx
  char merge_state; // al
  const __m128i *v17; // rdx
  unsigned int *v18; // rax
  __int32 v19; // eax
  __m128i v20; // xmm0
  unsigned int *v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v25; // rax
  unsigned int *v26; // rax
  unsigned int *v27; // rcx
  unsigned int v28; // r10d
  __int64 v29; // rdi
  unsigned int *v30; // rcx
  __int64 v31; // rax
  char *v32; // r9
  __int64 v33; // rax
  int v34; // ebp
  unsigned int *v35; // rsi
  unsigned int v36; // eax
  __int64 v37; // rax
  const __m128i *v38; // [rsp+0h] [rbp-78h]
  unsigned __int32 v39; // [rsp+0h] [rbp-78h]
  unsigned int v40; // [rsp+Ch] [rbp-6Ch]
  unsigned int *src; // [rsp+10h] [rbp-68h]
  unsigned int *srca; // [rsp+10h] [rbp-68h]
  unsigned int *srcc; // [rsp+10h] [rbp-68h]
  char *srcb; // [rsp+10h] [rbp-68h]
  unsigned int v45; // [rsp+18h] [rbp-60h]
  __m128i v46; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v47; // [rsp+38h] [rbp-40h]

  v6 = a5;
  v10 = a2;
  v47 = __readfsqword(0x28u);
  if ( (get_merge_state(a1, a2) & 2) != 0 )
  {
LABEL_2:
    if ( !*(_BYTE *)(a1 + 144) )
    {
      if ( !under_debugger )
        interr(1336);
      BUG();
    }
    v11 = a3 - *(_DWORD *)(*(_QWORD *)(a1 + 8) + 68LL);
    if ( v11 >= *(_QWORD *)(a1 + 40) )
      sub_4FC970();
    v12 = v11 << 6;
    *(_DWORD *)(*(_QWORD *)(a1 + 32) + v12 + 56) = a3;
    v14 = v12 + *(_QWORD *)(a1 + 32);
    v13 = (__int64 *)v14;
    v15 = sub_4FED00((unsigned int **)v14, a2);
    if ( v15 == (unsigned int *)(*v13 + 17 * v13[1]) )
      return 4294967294LL;
    if ( (unsigned int)a2 < *v15 )
      return 4294967294LL;
    if ( (unsigned int)a2 >= v15[1] )
      return 4294967294LL;
    v38 = (const __m128i *)v15;
    if ( !v15 )
      return 4294967294LL;
    merge_state = get_merge_state(v14, (unsigned int)a2);
    v17 = v38;
    if ( (merge_state & 2) == 0 )
    {
      if ( (_BYTE)v6 == 2 )
        goto LABEL_15;
      if ( v38->m128i_i8[12] == 2 && v38->m128i_i32[0] == (_DWORD)a2 )
        return 1;
    }
    if ( (_BYTE)v6 == 3 && a4 == -1 )
    {
      v18 = sub_4EE820(*(_QWORD *)(*(_QWORD *)a1 + 1480LL) + 1552LL, (unsigned int)a2);
      v17 = v38;
      if ( v18 )
        a4 = v18[a3 - *(_DWORD *)(*(_QWORD *)(a1 + 8) + 68LL) + 8];
    }
LABEL_15:
    v19 = v17->m128i_i32[2];
    v46 = _mm_loadu_si128(v17);
    v20 = _mm_loadl_epi64(v17);
    v39 = v19;
    v40 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v20, 229));
    if ( (_DWORD)a2 == _mm_cvtsi128_si32(v20) )
    {
      v35 = sub_4FED00((unsigned int **)v14, a2);
      if ( v35 != (unsigned int *)(*(_QWORD *)v14 + 17LL * *(_QWORD *)(v14 + 8)) && v10 >= *v35 )
      {
        v36 = v35[1];
        if ( v10 == *v35 && v10 < v36 && v40 == v36 )
        {
          sub_4FD360(*(unsigned int *)(v14 + 56), v35, a4, v6);
          v35[2] = a4;
          *((_BYTE *)v35 + 12) = v6;
          *((_BYTE *)v35 + 16) = 1;
          *(_QWORD *)v35 = v20.m128i_i64[0];
          goto LABEL_39;
        }
      }
    }
    else
    {
      v45 = v17->m128i_u32[1];
      v21 = sub_4FED00((unsigned int **)v14, a2);
      if ( v21 != (unsigned int *)(*(_QWORD *)v14 + 17LL * *(_QWORD *)(v14 + 8)) )
      {
        v22 = *v21;
        if ( v10 >= (unsigned int)v22 )
        {
          src = v21;
          v23 = v21[1];
          if ( v10 != (_DWORD)v22 && v10 < (unsigned int)v23 )
          {
            sub_4FD960(*(unsigned int *)(v14 + 56), v22, v23, v10);
            src[1] = v10;
            *((_BYTE *)src + 16) = 1;
            if ( v10 < v40 )
            {
              v27 = sub_4FED00((unsigned int **)v14, v10);
              if ( v27 == (unsigned int *)(*(_QWORD *)v14 + 17LL * *(_QWORD *)(v14 + 8)) || v10 < *v27 && *v27 >= v28 )
              {
                v29 = *(unsigned int *)(v14 + 56);
                srca = v27;
                v46.m128i_i32[0] = v10;
                v46.m128i_i32[2] = a4;
                v46.m128i_i8[12] = v6;
                sub_4FCEA0(v29, (unsigned int *)&v46, 183);
                v30 = srca;
                v31 = v13[1];
                v32 = (char *)srca - *v13;
                if ( v13[2] < (unsigned __int64)(v31 + 1) )
                {
                  srcb = (char *)srca - *v13;
                  v37 = qvector_reserve(v13, *v13, v31 + 1, 17);
                  v32 = srcb;
                  *v13 = v37;
                  v30 = (unsigned int *)&srcb[v37];
                  v31 = v13[1];
                }
                srcc = v30;
                memmove((char *)v30 + 17, v30, 17 * v31 - (_QWORD)v32);
                *(_QWORD *)srcc = 0;
                srcc[2] = 0;
                *((_BYTE *)srcc + 12) = 0;
                *((_BYTE *)srcc + 16) = 0;
                v13[3] = (__int64)srcc;
                ++v13[1];
                srcc[2] = a4;
                *((_BYTE *)srcc + 12) = v6;
                *(_QWORD *)srcc = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v10), _mm_cvtsi32_si128(v45)).m128i_u64[0];
                *(_BYTE *)(v13[3] + 16) = 1;
LABEL_39:
                if ( a4 == v39 )
                  return 1;
                v33 = *(_QWORD *)(a1 + 8);
                if ( !*(_DWORD *)(v33 + 4) )
                {
                  if ( (unsigned __int8)getinf_flag(3, 2) )
                  {
LABEL_44:
                    sub_396090(0x30u, v10, v40, (unsigned int)a3, a4, v39, v6);
                    return 1;
                  }
                  v33 = *(_QWORD *)(a1 + 8);
                }
                if ( (*(_BYTE *)(v33 + 9) & 0x40) != 0 || (v34 = sel2para(v39), v34 != (unsigned int)sel2para(a4)) )
                  auto_mark_range(v10, v40, 40);
                goto LABEL_44;
              }
            }
          }
        }
      }
    }
    return 4294967294LL;
  }
  if ( !(unsigned __int8)is_mapped((unsigned int)a2) )
    return 1;
  v25 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(v25 + 8) & 1) == 0 )
    return 1;
  if ( a3 < *(_DWORD *)(v25 + 68) || a3 > *(_DWORD *)(v25 + 72) || *(_DWORD *)(v25 + 80) == a3 )
    return 0xFFFFFFFFLL;
  if ( (get_flags_ex((unsigned int)a2, 4) & 0x600) != 0x200 )
  {
    if ( a5 == 3 && (_DWORD)a2 )
    {
      v26 = sub_4EE820(*(_QWORD *)(*(_QWORD *)a1 + 1480LL) + 1552LL, (unsigned int)(a2 - 1));
      if ( v26 && v26[1] == (_DWORD)a2 )
        return 1;
    }
    else if ( a5 != 4 )
    {
      goto LABEL_2;
    }
    v6 = 3;
    goto LABEL_2;
  }
  return 0;
}

