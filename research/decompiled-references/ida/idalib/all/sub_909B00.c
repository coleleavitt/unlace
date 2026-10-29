unsigned __int64 __fastcall sub_909B00(__int64 a1, const __m128i *a2, unsigned __int64 a3)
{
  __int64 v5; // rax
  int v6; // ecx
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rax
  __int8 *v11; // rax
  unsigned int v12; // ecx
  int v13; // r13d
  __int64 v14; // rax
  __int64 (__fastcall *v15)(_QWORD, _QWORD, _QWORD, const __m128i *, unsigned __int64, _QWORD, _QWORD, _QWORD, _QWORD); // r10
  unsigned __int64 result; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdi
  unsigned int *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdi
  unsigned __int64 v23; // rsi
  __int64 v24; // r9
  size_t v25; // r13
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 (__fastcall *v28)(__int64, __int64, __int64, const __m128i *, unsigned __int64); // rax
  __int64 v29; // rsi
  __int64 v30; // [rsp+0h] [rbp-68h] BYREF
  __int64 v31; // [rsp+8h] [rbp-60h]
  __int64 v32; // [rsp+10h] [rbp-58h]
  __int64 v33; // [rsp+18h] [rbp-50h]
  __int64 v34; // [rsp+20h] [rbp-48h]
  unsigned __int64 v35; // [rsp+28h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  if ( a3 <= 6 )
  {
    v26 = a1 + 3160;
    if ( *(_DWORD *)(a1 + 260) <= 6u )
      sub_959400(v26, a3, *(unsigned int *)(a1 + 252));
    else
      sub_9594C0(v26, a3);
    return 1;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 968);
    v6 = *(_DWORD *)(a1 + 3260);
    v8 = a1 + 952;
    v9 = *(_QWORD *)(a1 + 3200);
    *(_DWORD *)(a1 + 1024) = 0;
    *(_QWORD *)(a1 + 976) = v5;
    v10 = *(_QWORD *)(a1 + 952);
    *(_QWORD *)(a1 + 3448) = v9;
    *(_QWORD *)(a1 + 960) = v10;
    *(_DWORD *)(a1 + 3456) = *(_DWORD *)(a1 + 304);
    v11 = &a2->m128i_i8[-*(_QWORD *)(a1 + 3224)];
    if ( v6 + 384 < (unsigned int)v11 )
    {
      v12 = (_DWORD)v11 - v6 - 384;
      if ( v12 > 0xC0 )
        v12 = 192;
      *(_DWORD *)(a1 + 3260) = (_DWORD)v11 - v12;
    }
    v13 = 1;
    if ( *(_DWORD *)(a1 + 3244) >= *(_DWORD *)(a1 + 3240) )
    {
      v14 = *(_QWORD *)(a1 + 3464);
      v13 = 0;
      if ( v14 )
        v13 = (*(_DWORD *)(v14 + 140) != 0) + 2;
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 3208) + 5616LL) = *(_DWORD *)(v9 + 5616);
    *(_DWORD *)(*(_QWORD *)(a1 + 3208) + 5620LL) = *(_DWORD *)(*(_QWORD *)(a1 + 3200) + 5620LL);
    *(_DWORD *)(*(_QWORD *)(a1 + 3208) + 5624LL) = *(_DWORD *)(*(_QWORD *)(a1 + 3200) + 5624LL);
    v15 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, const __m128i *, unsigned __int64, _QWORD, _QWORD, _QWORD, _QWORD))(a1 + 424);
    if ( *(_QWORD *)(a1 + 3168) < *(_QWORD *)(a1 + 3184) )
    {
      result = -41;
      if ( v15 )
        return result;
      v25 = sub_959540(
              (int)a1 + 3160,
              (int)a1 + 3216,
              v8,
              (unsigned int)*(_QWORD *)(a1 + 3208) + 5616,
              *(_DWORD *)(a1 + 376),
              (_DWORD)a2,
              a3);
LABEL_25:
      memcpy(*(void **)(a1 + 976), &a2->m128i_i8[a3 - v25], v25);
      *(_QWORD *)(a1 + 976) += v25;
      return 0;
    }
    if ( *(_DWORD *)(a1 + 328) != 1 )
    {
      if ( !v15 )
      {
LABEL_32:
        v27 = *(int *)(a1 + 260);
        if ( (unsigned int)(v27 - 3) <= 2 && *(_DWORD *)(a1 + 376) == 1 )
          v28 = (__int64 (__fastcall *)(__int64, __int64, __int64, const __m128i *, unsigned __int64))*(&off_2BFCB60[3 * v13 - 3] + (int)v27);
        else
          v28 = (__int64 (__fastcall *)(__int64, __int64, __int64, const __m128i *, unsigned __int64))*(&funcs_909E9D[10 * v13] + v27);
        v29 = *(_QWORD *)(a1 + 3208);
        *(_QWORD *)(a1 + 3504) = 0;
        v25 = v28(a1 + 3216, v8, v29 + 5616, a2, a3);
        goto LABEL_25;
      }
      result = v15(
                 *(_QWORD *)(a1 + 416),
                 *(_QWORD *)(a1 + 5240),
                 *(_QWORD *)(a1 + 5248),
                 a2,
                 a3,
                 0,
                 0,
                 *(unsigned int *)(a1 + 276),
                 (unsigned int)(1 << *(_DWORD *)(a1 + 236)));
      v17 = *(_QWORD *)(a1 + 5248);
      if ( v17 < result || !result )
        goto LABEL_30;
      v18 = *(_QWORD *)(a1 + 5240);
      v19 = 16 * result;
      if ( !(*(_DWORD *)(v18 + 16 * result - 16 + 8) | *(_DWORD *)(v18 + 16 * result - 16)) )
      {
        if ( result <= 0xFFFFFFFFFFFFFF88LL )
        {
          v30 = 0;
          v31 = 0;
          goto LABEL_18;
        }
        goto LABEL_31;
      }
      if ( v17 == result )
      {
LABEL_30:
        result = -106;
      }
      else
      {
        ++result;
        *(_OWORD *)(v18 + v19) = 0;
        if ( result <= 0xFFFFFFFFFFFFFF88LL )
        {
          v30 = 0;
          v18 = *(_QWORD *)(a1 + 5240);
          v31 = 0;
          if ( !result )
          {
LABEL_40:
            result = sub_9095A0(a1, (unsigned int *)&v30, v18, result, a2, a3, *(_DWORD *)(a1 + 440));
            if ( result <= 0xFFFFFFFFFFFFFF88LL )
            {
              *(_QWORD *)(a1 + 3504) = 0;
              return 0;
            }
            return result;
          }
LABEL_18:
          v20 = (unsigned int *)(v18 + 4);
          v21 = 0;
          v22 = 0;
          v23 = 0;
          do
          {
            v24 = *v20;
            ++v23;
            v20 += 4;
            v22 += v24;
            v21 += *(v20 - 3);
          }
          while ( v23 < result );
          if ( a3 < v21 + v22 )
            return -107;
          goto LABEL_40;
        }
      }
LABEL_31:
      if ( !*(_DWORD *)(a1 + 412) )
        return result;
      goto LABEL_32;
    }
    v30 = 0;
    result = -41;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    v34 = 0;
    if ( !v15 )
    {
      v30 = *(_QWORD *)(a1 + 3144);
      v34 = *(_QWORD *)(a1 + 3152);
      result = ((__int64 (__fastcall *)(__int64, __int64 *, __int64, const __m128i *, unsigned __int64))sub_9586E0)(
                 a1 + 1032,
                 &v30,
                 a1 + 328,
                 a2,
                 a3);
      if ( result <= 0xFFFFFFFFFFFFFF88LL )
      {
        v25 = sub_959540(
                (unsigned int)&v30,
                (int)a1 + 3216,
                v8,
                (unsigned int)*(_QWORD *)(a1 + 3208) + 5616,
                *(_DWORD *)(a1 + 376),
                (_DWORD)a2,
                a3);
        goto LABEL_25;
      }
    }
  }
  return result;
}
