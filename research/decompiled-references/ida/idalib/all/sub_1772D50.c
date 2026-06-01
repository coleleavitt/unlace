unsigned __int64 __fastcall sub_1772D50(__int64 *a1, __int64 a2, unsigned __int64 a3, const __m128i *a4)
{
  __int64 v6; // rdx
  void *v7; // rax
  int v8; // r8d
  __int64 v9; // rax
  unsigned __int64 v10; // r13
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // r15
  char *v16; // r14
  __int64 v17; // r13
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r15
  unsigned __int32 v23; // r13d
  unsigned __int8 v24; // bp
  _QWORD *v25; // rax
  unsigned __int64 v26; // r15
  unsigned __int64 v27; // r12
  __int64 v28; // r14
  __int64 v29; // rdx
  __int64 v30; // rbp
  __m128i *v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rdx
  const __m128i *v38; // rax
  int v39; // ecx
  __int64 v40; // rsi
  __int64 v41; // rax
  unsigned __int64 v42; // rax
  int v43; // [rsp+8h] [rbp-1F0h]
  char *v44; // [rsp+8h] [rbp-1F0h]
  char *v45; // [rsp+10h] [rbp-1E8h]
  __int64 v47; // [rsp+38h] [rbp-1C0h] BYREF
  unsigned __int64 v48; // [rsp+40h] [rbp-1B8h] BYREF
  const __m128i *v49; // [rsp+48h] [rbp-1B0h]
  __m128i v50; // [rsp+50h] [rbp-1A8h] BYREF
  __int64 v51; // [rsp+60h] [rbp-198h]
  __int64 v52; // [rsp+68h] [rbp-190h]
  __int128 v53; // [rsp+70h] [rbp-188h] BYREF
  void *v54[2]; // [rsp+80h] [rbp-178h]
  __int128 v55; // [rsp+90h] [rbp-168h]
  void *ptr; // [rsp+A0h] [rbp-158h] BYREF
  __int64 v57; // [rsp+A8h] [rbp-150h]
  _QWORD v58[41]; // [rsp+B0h] [rbp-148h] BYREF

  v6 = 0;
  v7 = (void *)a4->m128i_i64[1];
  if ( v7 )
  {
    if ( (*(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      v7 = (void *)sub_176EE90(a1, *(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF8LL, v7, 0, 0);
      if ( !v7 )
        return 0;
    }
    else
    {
      v7 = nullptr;
    }
  }
  v53 = 0;
  *(_OWORD *)v54 = 0;
  v55 = 0;
  sub_15AB8B0((__int64)&v53, (__int64)v7, v6);
  v8 = *(_DWORD *)(a3 + 20);
  v49 = a4;
  ptr = v58;
  v57 = 0x800000000LL;
  v9 = a4[1].m128i_i64[1];
  v10 = 0;
  v48 = a3;
  v58[32] = v9;
  v43 = v8;
  v14 = sub_1770BB0(a1, &v48, 0, &v48, v8, (__int64)&ptr);
  if ( !v14 )
  {
    v16 = (char *)ptr;
    v45 = (char *)ptr + 32 * (unsigned int)v57;
    if ( v43 )
    {
      if ( ptr != (char *)ptr + 32 * (unsigned int)v57 )
      {
        v17 = 32;
        v44 = (char *)ptr + 32 * (unsigned int)(v43 - 1) + 32;
        do
        {
          v18 = v49->m128i_i64[(unsigned __int64)v17 / 8];
          v19 = 3 * v17 - 48;
          v50 = _mm_loadu_si128((const __m128i *)(v48 + v19));
          v20 = *(_QWORD *)(v48 + v19 + 16);
          v52 = v18;
          v51 = v20;
          if ( !sub_F1DBF0((__int64)&v50, (__int64)v16) )
            break;
          v16 += 32;
          if ( v16 == v44 )
            goto LABEL_19;
          v17 += 8;
        }
        while ( v45 != v16 );
      }
    }
    else
    {
      v44 = (char *)ptr;
LABEL_19:
      v14 = v45 == v44;
    }
    v21 = *a1;
    if ( !*(_DWORD *)(*a1 + 12632) && *((_QWORD *)&v53 + 1) == (*(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF8LL) && v14 )
    {
      v27 = v48;
      v10 = v48;
      v26 = v48 & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v47 = sub_1741620(a1, (__int64)&v53, v49[1].m128i_u32[1], *(_QWORD *)(a3 + 40), v49[1].m128i_i32[0], 0, 0, 0);
      if ( sub_F22B30(&v47) )
        goto LABEL_24;
      v22 = *((_QWORD *)&v53 + 1);
      v23 = v49[1].m128i_u32[0];
      v24 = *(_WORD *)(a3 + 18) >> 3;
      v50.m128i_i64[0] = v47;
      v25 = (_QWORD *)sub_F22F70(&v50);
      if ( v25 )
      {
        v10 = sub_AB7A80(*(_QWORD **)(*a1 + 248), v24, v25, (const __m128i *)ptr, v57);
      }
      else
      {
        v42 = sub_1CDD580(*a1, v50.m128i_i64[0], v23, &ptr);
        if ( (v42 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_24;
        v10 = sub_A76250(*(_QWORD *)(*a1 + 248), v24, v22, v42, 0);
      }
      v26 = v10 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      {
LABEL_24:
        v10 = 0;
        goto LABEL_5;
      }
      v21 = *a1;
      v27 = v10;
    }
    v28 = sub_15AB9E0((__int64)&v53, *(_QWORD **)(v21 + 248), v21, v11, v12, v13);
    v30 = v29;
    if ( *(_BYTE *)(*(_QWORD *)v26 + 16LL) == 24 )
    {
      sub_1EA6140(
        a2,
        *(_QWORD *)(*(_QWORD *)v26 + 40LL),
        (unsigned int)(8 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v26 + 40LL) + 20LL) + 16),
        8);
      v32 = 0;
      *v31 = _mm_loadu_si128(v49 + 1);
      v33 = (unsigned int)(v57 - 1);
      if ( (_DWORD)v57 )
      {
        while ( 1 )
        {
          v31[1].m128i_i64[v32] = *((_QWORD *)ptr + 4 * v32 + 3);
          if ( v33 == v32 )
            break;
          ++v32;
        }
      }
      v34 = 16;
      if ( (unsigned __int8)(*(_WORD *)(v27 + 18) >> 3) == 6 )
        v34 = 16LL * (*(_QWORD *)(v27 + 32) != 0);
      v35 = sub_1EA6140(a2, v10, v34, 8);
      if ( (unsigned __int8)(*(_WORD *)(v35 + 18) >> 3) != 6 || *(_QWORD *)(v35 + 32) )
      {
        *(_DWORD *)v36 = v49->m128i_i32[0];
        if ( (unsigned __int8)(*(_WORD *)(v35 + 18) >> 3) != 6 || *(_QWORD *)(v35 + 32) )
          *(_QWORD *)(v36 + 8) = v30;
      }
    }
    else
    {
      sub_1EA6140(a2, v10, (unsigned int)(8 * *(_DWORD *)(v27 + 20) + 32), 8);
      v38 = v49;
      *(_DWORD *)v37 = v49->m128i_i32[0];
      if ( !v28 )
        v30 = 0;
      *(_QWORD *)(v37 + 8) = v30;
      *(_DWORD *)(v37 + 20) = v38[1].m128i_i32[1];
      *(_DWORD *)(v37 + 16) = v38[1].m128i_i32[0];
      *(_DWORD *)(v37 + 24) = v38[1].m128i_i32[2];
      v39 = v57;
      v40 = (unsigned int)(v57 - 1);
      *(_DWORD *)(v37 + 28) = v38[1].m128i_i32[3];
      v41 = 0;
      if ( v39 )
      {
        while ( 1 )
        {
          *(_QWORD *)(v37 + 8 * v41 + 32) = *((_QWORD *)ptr + 4 * v41 + 3);
          if ( v40 == v41 )
            break;
          ++v41;
        }
      }
    }
  }
LABEL_5:
  if ( ptr != v58 )
    free(ptr);
  if ( HIDWORD(v54[1]) )
    free(v54[0]);
  return v10;
}
