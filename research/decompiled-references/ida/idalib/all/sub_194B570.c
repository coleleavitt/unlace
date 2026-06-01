unsigned __int64 __fastcall sub_194B570(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        const __m128i *a4,
        __int64 a5,
        double a6,
        __m128 a7)
{
  int v8; // r15d
  unsigned __int64 v9; // rbp
  char *v11; // r14
  char *v12; // r12
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int32 v18; // r12d
  unsigned __int8 v19; // bp
  __int64 v20; // r15
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // r15
  __int64 v27; // r13
  __int64 v28; // rdx
  __int64 v29; // r12
  __m128i *v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  unsigned __int64 v36; // rax
  __int64 v37; // rdx
  const __m128i *v38; // rax
  int v39; // ecx
  __int64 v40; // rsi
  __int64 v41; // rax
  char *v43; // [rsp+10h] [rbp-1B0h]
  __int64 v45; // [rsp+28h] [rbp-198h] BYREF
  const __m128i *v46; // [rsp+30h] [rbp-190h]
  __int64 v47; // [rsp+40h] [rbp-180h] BYREF
  __m128i v48; // [rsp+48h] [rbp-178h] BYREF
  __int64 v49; // [rsp+58h] [rbp-168h]
  __int64 v50; // [rsp+60h] [rbp-160h]
  void *ptr; // [rsp+68h] [rbp-158h] BYREF
  __int64 v52; // [rsp+70h] [rbp-150h]
  _BYTE v53[256]; // [rsp+78h] [rbp-148h] BYREF
  __int64 v54; // [rsp+178h] [rbp-48h]

  v46 = a4;
  v45 = a3;
  ptr = v53;
  v52 = 0x800000000LL;
  v54 = 0;
  v54 = a4[1].m128i_i64[1];
  v8 = *(_DWORD *)(a3 + 20);
  if ( (unsigned __int8)sub_194AFD0(a1, &v45, 0, &v45, v8, (__int64)&ptr, a6, a7, 0) )
    goto LABEL_2;
  v11 = (char *)ptr;
  v12 = (char *)ptr + 32 * (unsigned int)v52;
  if ( v8 && ptr != v12 )
  {
    v13 = (unsigned int)(v8 - 1);
    v14 = 32;
    v43 = (char *)ptr + 32 * v13 + 32;
    do
    {
      v15 = v46->m128i_i64[(unsigned __int64)v14 / 8];
      v16 = 3 * v14 - 48;
      v48 = _mm_loadu_si128((const __m128i *)(v45 + v16));
      v17 = *(_QWORD *)(v45 + v16 + 16);
      v50 = v15;
      v49 = v17;
      if ( !sub_F1DBF0((__int64)&v48, (__int64)v11) )
        break;
      v11 += 32;
      if ( v11 == v43 )
        break;
      v14 += 8;
    }
    while ( v12 != v11 );
  }
  v47 = sub_19013C0(a1, a5, v46[1].m128i_u32[1], *(_QWORD *)(a3 + 40), v46[1].m128i_i32[0], 0, 0, 0);
  if ( sub_F22B30(&v47) )
    goto LABEL_2;
  v18 = v46[1].m128i_u32[0];
  v19 = *(_WORD *)(a3 + 18) >> 3;
  v20 = *(_QWORD *)(a5 + 8);
  v48.m128i_i64[0] = v47;
  v21 = (_QWORD *)sub_F22F70(&v48);
  if ( v21 )
  {
    v9 = sub_AB7A80(*(_QWORD **)(*a1 + 248), v19, v21, (const __m128i *)ptr, v52);
  }
  else
  {
    v36 = sub_1CDD580(*a1, v48.m128i_i64[0], v18, &ptr);
    if ( (v36 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      goto LABEL_2;
    v9 = sub_A76250(*(_QWORD *)(*a1 + 248), v19, v20, v36, 0);
  }
  v26 = v9 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (v9 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
LABEL_2:
    v9 = 0;
    goto LABEL_3;
  }
  v27 = sub_15AB9E0(a5, *(_QWORD **)(*a1 + 248), v22, v23, v24, v25);
  v29 = v28;
  if ( *(_BYTE *)(*(_QWORD *)v26 + 16LL) == 24 )
  {
    sub_18CD120(a2, *(_QWORD *)(*(_QWORD *)v26 + 40LL));
    v31 = 0;
    *v30 = _mm_loadu_si128(v46 + 1);
    v32 = (unsigned int)(v52 - 1);
    if ( (_DWORD)v52 )
    {
      while ( 1 )
      {
        v30[1].m128i_i64[v31] = *((_QWORD *)ptr + 4 * v31 + 3);
        if ( v32 == v31 )
          break;
        ++v31;
      }
    }
    v33 = 16;
    if ( (unsigned __int8)(*(_WORD *)(v9 + 18) >> 3) == 6 )
      v33 = 16LL * (*(_QWORD *)(v9 + 32) != 0);
    v34 = sub_1EA6140(a2, v9, v33, 8);
    if ( (unsigned __int8)(*(_WORD *)(v34 + 18) >> 3) != 6 || *(_QWORD *)(v34 + 32) )
    {
      *(_DWORD *)v35 = v46->m128i_i32[0];
      if ( (unsigned __int8)(*(_WORD *)(v34 + 18) >> 3) != 6 || *(_QWORD *)(v34 + 32) )
        *(_QWORD *)(v35 + 8) = v29;
    }
  }
  else
  {
    sub_1EA6140(a2, v9, (unsigned int)(8 * *(_DWORD *)(v9 + 20) + 32), 8);
    v38 = v46;
    *(_DWORD *)v37 = v46->m128i_i32[0];
    if ( !v27 )
      v29 = 0;
    *(_QWORD *)(v37 + 8) = v29;
    *(_DWORD *)(v37 + 20) = v38[1].m128i_i32[1];
    *(_DWORD *)(v37 + 16) = v38[1].m128i_i32[0];
    *(_DWORD *)(v37 + 24) = v38[1].m128i_i32[2];
    v39 = v52;
    v40 = (unsigned int)(v52 - 1);
    *(_DWORD *)(v37 + 28) = v38[1].m128i_i32[3];
    v41 = 0;
    if ( v39 )
    {
      while ( 1 )
      {
        *(_QWORD *)(v37 + 8 * v41 + 32) = *((_QWORD *)ptr + 4 * v41 + 3);
        if ( v41 == v40 )
          break;
        ++v41;
      }
    }
  }
LABEL_3:
  if ( ptr != v53 )
    free(ptr);
  return v9;
}
