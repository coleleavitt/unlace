__int64 __fastcall sub_4E7A40(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, __int64 *a5)
{
  unsigned int v7; // r13d
  __int64 *v8; // rbx
  int v9; // ebp
  unsigned int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rdi
  __m128i v15; // xmm0
  __int64 v16; // rax
  signed __int32 v17; // ecx
  __m128i v18; // xmm0
  __int64 v19; // r15
  __int64 v20; // rbp
  __int64 v21; // r14
  char v22; // dl
  __int64 v23; // rax
  unsigned __int64 (__fastcall *v24)(__int64, int); // rax
  unsigned __int64 v25; // rdx
  void *v26; // rbx
  __m128i v27; // xmm0
  __m128i si128; // xmm0
  char v29; // al
  __int64 v30; // rbp
  __int64 v31; // r14
  __int64 *v32; // rax
  __int64 *v33; // r14
  __int64 v34; // rax
  size_t n[2]; // [rsp+0h] [rbp-B8h] BYREF
  unsigned int v36; // [rsp+18h] [rbp-A0h]
  unsigned int v37; // [rsp+1Ch] [rbp-9Ch]
  unsigned __int64 v38; // [rsp+28h] [rbp-90h] BYREF
  void *ptr; // [rsp+30h] [rbp-88h] BYREF
  __m128i v40; // [rsp+38h] [rbp-80h]
  char v41; // [rsp+48h] [rbp-70h]
  void *v42; // [rsp+50h] [rbp-68h] BYREF
  __m128i v43; // [rsp+58h] [rbp-60h] BYREF
  char v44; // [rsp+68h] [rbp-50h]
  unsigned __int64 v45; // [rsp+78h] [rbp-40h]

  v7 = *(_DWORD *)(a3 + 12);
  v45 = __readfsqword(0x28u);
  v8 = a5;
  if ( a5 )
  {
    v9 = calc_frame_offset(a5, v7, a4, a3);
LABEL_3:
    *a2 = v9;
    return 1;
  }
  if ( *(_BYTE *)(*(_QWORD *)(qword_2CA1698 + 1480) + 648LL) )
  {
    v12 = 0x10000;
    v13 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) + 8LL) - 1);
    if ( (unsigned int)v13 <= 7 )
    {
      v12 = dword_238A060[v13];
      if ( v12 != 0x10000 )
        v12 |= *(unsigned __int16 *)(a3 + 6);
    }
    v14 = *(_QWORD *)(a1 + 168);
    v40 = 0;
    v15 = _mm_cvtsi32_si128(*(_DWORD *)(a4 + 8));
    v36 = v12;
    n[0] = v14;
    v37 = _mm_cvtsi128_si32(v15);
    ptr = nullptr;
    v41 = 0;
    v38 = _mm_unpacklo_epi32(v15, _mm_cvtsi32_si128(v12)).m128i_u64[0];
    v16 = sub_4E2610(v14, (unsigned int *)&v38);
    v17 = v36;
    v18 = _mm_cvtsi32_si128(v37);
    v19 = v16;
    if ( v16 == v14 + 8 )
    {
      v24 = *(unsigned __int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 16LL);
      if ( v24 == sub_4DC6B0 )
      {
        v25 = v18.m128i_i64[0] | 0xFFFFFFFF00000000LL;
      }
      else
      {
        LODWORD(n[0]) = v36;
        v34 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))v24)(a1, (unsigned int)_mm_cvtsi128_si32(v18), 0);
        v17 = v36;
        v25 = v34;
      }
      sub_4E7970((__int64)&v42, a1, v25, v17, -1, 0);
      v26 = v42;
      v42 = nullptr;
      v27 = _mm_loadu_si128(&v43);
      v43 = 0;
      if ( ptr )
      {
        *(__m128i *)n = v27;
        v40.m128i_i64[0] = 0;
        qfree(ptr);
        si128 = _mm_load_si128((const __m128i *)n);
        v29 = v44;
        ptr = v26;
        v41 = v44;
        v40 = si128;
        if ( v42 )
        {
          v43.m128i_i64[0] = 0;
          qfree(v42);
          v29 = v41;
        }
      }
      else
      {
        v29 = v44;
        ptr = v26;
        v40 = v27;
        v41 = v44;
      }
      v8 = (__int64 *)ptr;
      if ( v29 == 2 )
      {
        *(_DWORD *)(a1 + 72) = *(_DWORD *)(a4 + 8);
        goto LABEL_12;
      }
    }
    else
    {
      v20 = **(_QWORD **)(a1 + 160) + 48LL * *(_QWORD *)(v16 + 40);
      v21 = *(_QWORD *)(v20 + 8);
      if ( v21 )
      {
        n[0] = 16 * v21;
        v8 = (__int64 *)qalloc_or_throw(16 * v21, (const char *)&v38, 16 * v21, v36, *(double *)v18.m128i_i64);
        memcpy(v8, *(const void **)v20, 16 * v21);
        if ( ptr )
        {
          v40.m128i_i64[0] = 0;
          qfree(ptr);
        }
      }
      v22 = *(_BYTE *)(v20 + 24);
      ptr = v8;
      v23 = *(unsigned int *)(v19 + 48);
      v41 = v22;
      v40 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v21, (__m128i)(unsigned __int64)v21);
      if ( (unsigned __int8)(v22 - 10) <= 1u )
      {
        if ( !(_DWORD)v23 )
          goto LABEL_12;
      }
      else
      {
        if ( (unsigned __int8)(v22 - 12) > 1u )
          goto LABEL_12;
        if ( !(_DWORD)v23 )
        {
LABEL_23:
          v30 = *v8;
          if ( v21 == 1 || (v31 = 2 * v21, v32 = v8 + 2, v31 == 2) )
          {
LABEL_27:
            v9 = -(v7 + v30);
            if ( v8 )
            {
              v40.m128i_i64[0] = 0;
              qfree(v8);
            }
            goto LABEL_3;
          }
          while ( v30 == *v32 )
          {
            v32 += 2;
            if ( &v8[v31] == v32 )
              goto LABEL_27;
          }
          goto LABEL_12;
        }
      }
      v33 = &v8[2 * v21];
      if ( v33 != v8 )
      {
        if ( (((_BYTE)v33 - (_BYTE)v8) & 0x10) == 0 || (*v8 += v23, v8 += 2, v8 != v33) )
        {
          do
          {
            *v8 += v23;
            v8[2] += v23;
            v8 += 4;
          }
          while ( v8 != v33 );
        }
      }
      sub_4DE040((__int64)&ptr);
      v29 = v41;
      v8 = (__int64 *)ptr;
    }
    if ( (unsigned __int8)(v29 - 12) <= 1u )
    {
      v21 = v40.m128i_i64[0];
      goto LABEL_23;
    }
LABEL_12:
    if ( v8 )
    {
      v40.m128i_i64[0] = 0;
      qfree(v8);
    }
  }
  return 0;
}

