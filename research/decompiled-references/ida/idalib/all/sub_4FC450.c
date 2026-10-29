__int64 __fastcall sub_4FC450(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 v8; // r13
  __int64 *v9; // rbx
  __int64 v10; // r15
  Elf64_Sym *v12; // r8
  __int64 v13; // rdx
  __int64 *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r15
  __int64 v19; // r9
  __int64 v20; // r14
  int v21; // edx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r9
  __int64 (__fastcall *v25)(__int64, __int64); // rax
  int v26; // eax
  int v27; // edx
  void *v28; // rbx
  __m128i v29; // xmm0
  char v30; // al
  __m128i si128; // xmm0
  __int64 v32; // rdi
  __int64 *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // [rsp+0h] [rbp-C0h]
  __int64 v36; // [rsp+8h] [rbp-B8h]
  size_t n[2]; // [rsp+10h] [rbp-B0h] BYREF
  unsigned int v38; // [rsp+24h] [rbp-9Ch]
  __int64 v39; // [rsp+28h] [rbp-98h]
  __int64 v40; // [rsp+30h] [rbp-90h] BYREF
  int v41; // [rsp+38h] [rbp-88h]
  void *ptr; // [rsp+40h] [rbp-80h] BYREF
  __m128i v43; // [rsp+48h] [rbp-78h]
  char v44; // [rsp+58h] [rbp-68h]
  void *v45; // [rsp+60h] [rbp-60h] BYREF
  __m128i v46; // [rsp+68h] [rbp-58h] BYREF
  char v47; // [rsp+78h] [rbp-48h]
  unsigned __int64 v48; // [rsp+88h] [rbp-38h]

  v39 = a1;
  v8 = *(_QWORD *)(a3 + 16);
  v48 = __readfsqword(0x28u);
  v9 = a5;
  if ( a5 )
  {
    v10 = calc_frame_offset(a5, v8, a4, a3);
LABEL_3:
    *a2 = v10;
    return 1;
  }
  if ( *(_BYTE *)(*(_QWORD *)(qword_2CCB598 + 1672) + 656LL) )
  {
    v12 = &stru_10000;
    v13 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v39 + 8) + 32LL) + 24LL) - 1);
    if ( (unsigned int)v13 <= 7 )
    {
      LODWORD(v12) = dword_23AE1C0[v13];
      if ( (_DWORD)v12 != (_DWORD)&stru_10000 )
        LODWORD(v12) = *(unsigned __int16 *)(a3 + 6) | (unsigned int)v12;
    }
    v14 = &v40;
    v35 = *(_QWORD *)(*(_QWORD *)(v39 + 8) + 32LL);
    v15 = *(_QWORD *)(v39 + 200);
    v40 = *(_QWORD *)(a4 + 16);
    v36 = v40;
    v41 = (int)v12;
    v38 = (unsigned int)v12;
    n[0] = v15;
    ptr = nullptr;
    v44 = 0;
    v43 = 0;
    v16 = sub_4F90B0(v15, &v40);
    v17 = v38;
    v18 = v16;
    v19 = v36;
    if ( v16 == n[0] + 8 )
    {
      v24 = *(_QWORD *)(v35 + 16) & v36;
      v25 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v39 + 16LL);
      if ( v25 == sub_4F3C60 )
      {
        v26 = *(_DWORD *)(v35 + 16) & v36;
        v27 = -1;
      }
      else
      {
        LODWORD(n[0]) = v38;
        v26 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64))v25)(v39, v24, 0, v35);
        LODWORD(v17) = v38;
      }
      sub_5001E0((unsigned int)&v45, v39, v26, v27, v17, -1, 0);
      v28 = v45;
      v45 = nullptr;
      v29 = _mm_loadu_si128(&v46);
      v46 = 0;
      if ( ptr )
      {
        *(__m128i *)n = v29;
        v43.m128i_i64[0] = 0;
        qfree(ptr);
        v30 = v47;
        ptr = v28;
        si128 = _mm_load_si128((const __m128i *)n);
        v44 = v47;
        v43 = si128;
        if ( v45 )
        {
          v46.m128i_i64[0] = 0;
          qfree(v45);
          v30 = v44;
        }
      }
      else
      {
        v30 = v47;
        ptr = v28;
        v43 = v29;
        v44 = v47;
      }
      v9 = (__int64 *)ptr;
      if ( v30 == 2 )
      {
        *(_QWORD *)(v39 + 72) = *(_QWORD *)(a4 + 16);
        goto LABEL_12;
      }
    }
    else
    {
      v20 = *(_QWORD *)(**(_QWORD **)(v39 + 192) + 48LL * *(_QWORD *)(v16 + 48) + 8);
      v39 = **(_QWORD **)(v39 + 192) + 48LL * *(_QWORD *)(v16 + 48);
      if ( v20 )
      {
        n[0] = 24 * v20;
        v9 = (__int64 *)qalloc_or_throw(24 * v20);
        v14 = *(__int64 **)v39;
        memcpy(v9, *(const void **)v39, 24 * v20);
        if ( ptr )
        {
          v43.m128i_i64[0] = 0;
          qfree(ptr);
        }
      }
      ptr = v9;
      v21 = *(unsigned __int8 *)(v39 + 24);
      v43 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v20, (__m128i)(unsigned __int64)v20);
      v22 = *(_QWORD *)(v18 + 56);
      v23 = (unsigned int)(v21 - 10);
      v44 = v21;
      if ( (unsigned __int8)(v21 - 10) <= 1u )
      {
        if ( !v22 )
          goto LABEL_12;
      }
      else
      {
        if ( (unsigned __int8)(v21 - 12) > 1u )
          goto LABEL_12;
        if ( !v22 )
        {
LABEL_23:
          v32 = *v9;
          if ( v20 == 1 || (v33 = v9 + 3, 24 * v20 == 24) )
          {
LABEL_27:
            v10 = -(v8 + v32);
            if ( v9 )
            {
              v43.m128i_i64[0] = 0;
              qfree(v9);
            }
            goto LABEL_3;
          }
          while ( v32 == *v33 )
          {
            v33 += 3;
            if ( &v9[3 * v20] == v33 )
              goto LABEL_27;
          }
          goto LABEL_12;
        }
      }
      v34 = (__int64)&v9[3 * v20];
      if ( (__int64 *)v34 != v9 )
      {
        v23 = (24 * (_BYTE)v20) & 8;
        if ( ((24 * (_BYTE)v20) & 8) == 0 || (*v9 += v22, v9 += 3, (__int64 *)v34 != v9) )
        {
          do
          {
            *v9 += v22;
            v9[3] += v22;
            v9 += 6;
          }
          while ( (__int64 *)v34 != v9 );
        }
      }
      sub_4FB280((__int64)&ptr, (__int64)v14, v34, v23, v17, v19);
      v30 = v44;
      v9 = (__int64 *)ptr;
    }
    if ( (unsigned __int8)(v30 - 12) <= 1u )
    {
      v20 = v43.m128i_i64[0];
      goto LABEL_23;
    }
LABEL_12:
    if ( v9 )
    {
      v43.m128i_i64[0] = 0;
      qfree(v9);
    }
  }
  return 0;
}
