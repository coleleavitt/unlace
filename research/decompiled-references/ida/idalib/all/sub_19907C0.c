unsigned __int64 __fastcall sub_19907C0(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        const __m128i *a4,
        double a5,
        __m128 a6)
{
  __int64 v8; // rdx
  void *v9; // rax
  unsigned __int64 v10; // r14
  int v11; // r8d
  __int64 v12; // rax
  int v13; // r13d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  char *v19; // r15
  char *v20; // r14
  char *v21; // rax
  __int64 v22; // r13
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r14
  unsigned __int32 v27; // r13d
  unsigned __int8 v28; // bp
  _QWORD *v29; // rax
  unsigned __int64 v30; // rbp
  unsigned __int64 v31; // r13
  __int64 v32; // r15
  __int64 v33; // rdx
  __int64 v34; // r12
  __m128i *v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  unsigned __int64 v41; // rax
  __int64 v42; // rdx
  const __m128i *v43; // rax
  int v44; // ecx
  __int64 v45; // rsi
  __int64 v46; // rax
  char *v47; // [rsp+0h] [rbp-1E8h]
  __int64 v49; // [rsp+28h] [rbp-1C0h] BYREF
  unsigned __int64 v50; // [rsp+30h] [rbp-1B8h] BYREF
  const __m128i *v51; // [rsp+38h] [rbp-1B0h]
  __m128i v52; // [rsp+40h] [rbp-1A8h] BYREF
  __int64 v53; // [rsp+50h] [rbp-198h]
  __int64 v54; // [rsp+58h] [rbp-190h]
  __int128 v55; // [rsp+60h] [rbp-188h] BYREF
  void *v56[2]; // [rsp+70h] [rbp-178h]
  __int128 v57; // [rsp+80h] [rbp-168h]
  void *ptr; // [rsp+90h] [rbp-158h] BYREF
  __int64 v59; // [rsp+98h] [rbp-150h]
  _QWORD v60[41]; // [rsp+A0h] [rbp-148h] BYREF

  v8 = 0;
  v9 = (void *)a4->m128i_i64[1];
  if ( v9 )
  {
    if ( (*(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      v10 = 0;
      v9 = (void *)sub_198CB00((__int64)a1, *(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF8LL, v9, 0, 0);
      if ( !v9 )
        return v10;
    }
    else
    {
      v9 = nullptr;
    }
  }
  v10 = 0;
  v55 = 0;
  *(_OWORD *)v56 = 0;
  v57 = 0;
  sub_15AB8B0((__int64)&v55, (__int64)v9, v8);
  v11 = *(_DWORD *)(a3 + 20);
  v51 = a4;
  ptr = v60;
  v59 = 0x800000000LL;
  v12 = a4[1].m128i_i64[1];
  v13 = v11;
  v50 = a3;
  v60[32] = v12;
  if ( !(unsigned __int8)sub_198E9B0(a1, &v50, 0.0, a6, 0, &v50, v11, (__int64)&ptr) )
  {
    v19 = (char *)ptr;
    v20 = (char *)ptr + 32 * (unsigned int)v59;
    if ( v13 )
    {
      if ( ptr != v20 )
      {
        v21 = (char *)ptr + 32 * (unsigned int)(v13 - 1) + 32;
        v22 = 32;
        v47 = v21;
        do
        {
          v23 = v51->m128i_i64[(unsigned __int64)v22 / 8];
          v24 = 3 * v22 - 48;
          v52 = _mm_loadu_si128((const __m128i *)(v50 + v24));
          v25 = *(_QWORD *)(v50 + v24 + 16);
          v54 = v23;
          v53 = v25;
          if ( !sub_F1DBF0((__int64)&v52, (__int64)v19) )
            break;
          v19 += 32;
          if ( v19 == v47 )
            goto LABEL_18;
          v22 += 8;
        }
        while ( v20 != v19 );
      }
    }
    else
    {
      v47 = (char *)ptr;
LABEL_18:
      if ( v20 == v47 && *((_QWORD *)&v55 + 1) == (*(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF8LL) )
      {
        v30 = v50;
        v10 = v50;
        v31 = v50 & 0xFFFFFFFFFFFFFFF0LL;
        goto LABEL_24;
      }
    }
    v49 = sub_18BCA80(a1, (__int64)&v55, v51[1].m128i_u32[1], *(_QWORD *)(a3 + 40), v51[1].m128i_i32[0], 0, 0, 0);
    if ( sub_F22B30(&v49) )
      goto LABEL_20;
    v26 = *((_QWORD *)&v55 + 1);
    v27 = v51[1].m128i_u32[0];
    v28 = *(_WORD *)(a3 + 18) >> 3;
    v52.m128i_i64[0] = v49;
    v29 = (_QWORD *)sub_F22F70(&v52);
    if ( v29 )
    {
      v10 = sub_AB7A80(*(_QWORD **)(*a1 + 248), v28, v29, (const __m128i *)ptr, v59);
    }
    else
    {
      v41 = sub_1CDD580(*a1, v52.m128i_i64[0], v27, &ptr);
      if ( (v41 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_20;
      v10 = sub_A76250(*(_QWORD *)(*a1 + 248), v28, v26, v41, 0);
    }
    v30 = v10;
    v31 = v10 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    {
LABEL_20:
      v10 = 0;
      goto LABEL_5;
    }
LABEL_24:
    v32 = sub_15AB9E0((__int64)&v55, *(_QWORD **)(*a1 + 248), v14, v15, v16, v17);
    v34 = v33;
    if ( *(_BYTE *)(*(_QWORD *)v31 + 16LL) == 24 )
    {
      sub_1EA6140(
        a2,
        *(_QWORD *)(*(_QWORD *)v31 + 40LL),
        (unsigned int)(8 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v31 + 40LL) + 20LL) + 16),
        8);
      v36 = 0;
      *v35 = _mm_loadu_si128(v51 + 1);
      v37 = (unsigned int)(v59 - 1);
      if ( (_DWORD)v59 )
      {
        while ( 1 )
        {
          v35[1].m128i_i64[v36] = *((_QWORD *)ptr + 4 * v36 + 3);
          if ( v37 == v36 )
            break;
          ++v36;
        }
      }
      v38 = 16;
      if ( (unsigned __int8)(*(_WORD *)(v30 + 18) >> 3) == 6 )
        v38 = 16LL * (*(_QWORD *)(v30 + 32) != 0);
      v39 = sub_1EA6140(a2, v10, v38, 8);
      if ( (unsigned __int8)(*(_WORD *)(v39 + 18) >> 3) != 6 || *(_QWORD *)(v39 + 32) )
      {
        *(_DWORD *)v40 = v51->m128i_i32[0];
        if ( (unsigned __int8)(*(_WORD *)(v39 + 18) >> 3) != 6 || *(_QWORD *)(v39 + 32) )
          *(_QWORD *)(v40 + 8) = v34;
      }
    }
    else
    {
      sub_1EA6140(a2, v10, (unsigned int)(8 * *(_DWORD *)(v30 + 20) + 32), 8);
      v43 = v51;
      *(_DWORD *)v42 = v51->m128i_i32[0];
      if ( !v32 )
        v34 = 0;
      *(_QWORD *)(v42 + 8) = v34;
      *(_DWORD *)(v42 + 20) = v43[1].m128i_i32[1];
      *(_DWORD *)(v42 + 16) = v43[1].m128i_i32[0];
      *(_DWORD *)(v42 + 24) = v43[1].m128i_i32[2];
      v44 = v59;
      v45 = (unsigned int)(v59 - 1);
      *(_DWORD *)(v42 + 28) = v43[1].m128i_i32[3];
      v46 = 0;
      if ( v44 )
      {
        while ( 1 )
        {
          *(_QWORD *)(v42 + 8 * v46 + 32) = *((_QWORD *)ptr + 4 * v46 + 3);
          if ( v45 == v46 )
            break;
          ++v46;
        }
      }
    }
  }
LABEL_5:
  if ( ptr != v60 )
    free(ptr);
  if ( HIDWORD(v56[1]) )
    free(v56[0]);
  return v10;
}
