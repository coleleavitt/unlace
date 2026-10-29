unsigned __int64 __fastcall sub_196D5A0(__int64 *a1, __int64 a2, __int64 a3, const __m128i *a4, double a5, __m128 a6)
{
  __int64 v8; // rdx
  void *v9; // rax
  int v10; // r8d
  int v11; // r15d
  __int64 v12; // rax
  unsigned __int64 v13; // r13
  char *v15; // r14
  char *v16; // r13
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r15
  unsigned __int32 v23; // r13d
  unsigned __int8 v24; // bp
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int64 v30; // r15
  __int64 v31; // r12
  __int64 v32; // rdx
  __int64 v33; // rbp
  __m128i *v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdx
  unsigned __int64 v40; // rax
  __int64 v41; // rdx
  const __m128i *v42; // rax
  int v43; // ecx
  __int64 v44; // rsi
  __int64 v45; // rax
  char *v46; // [rsp+0h] [rbp-1E8h]
  __int64 v48; // [rsp+28h] [rbp-1C0h] BYREF
  __int64 v49; // [rsp+30h] [rbp-1B8h] BYREF
  const __m128i *v50; // [rsp+38h] [rbp-1B0h]
  __m128i v51; // [rsp+40h] [rbp-1A8h] BYREF
  __int64 v52; // [rsp+50h] [rbp-198h]
  __int64 v53; // [rsp+58h] [rbp-190h]
  __int128 v54; // [rsp+60h] [rbp-188h] BYREF
  void *v55[2]; // [rsp+70h] [rbp-178h]
  __int128 v56; // [rsp+80h] [rbp-168h]
  void *ptr; // [rsp+90h] [rbp-158h] BYREF
  __int64 v58; // [rsp+98h] [rbp-150h]
  _QWORD v59[41]; // [rsp+A0h] [rbp-148h] BYREF

  v8 = 0;
  v9 = (void *)a4->m128i_i64[1];
  if ( v9 )
  {
    if ( (*(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      v9 = (void *)sub_1969B50((__int64)a1, *(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF8LL, v9, 0, 0);
      if ( !v9 )
        return 0;
    }
    else
    {
      v9 = nullptr;
    }
  }
  v54 = 0;
  *(_OWORD *)v55 = 0;
  v56 = 0;
  sub_15AB8B0((__int64)&v54, (__int64)v9, v8);
  v10 = *(_DWORD *)(a3 + 20);
  v50 = a4;
  ptr = v59;
  v11 = v10;
  v58 = 0x800000000LL;
  v12 = a4[1].m128i_i64[1];
  v13 = 0;
  v49 = a3;
  v59[32] = v12;
  if ( !(unsigned __int8)sub_196BA00(a1, &v49, 0.0, a6, 0, &v49, v10, (__int64)&ptr) )
  {
    v15 = (char *)ptr;
    v16 = (char *)ptr + 32 * (unsigned int)v58;
    if ( v11 && ptr != v16 )
    {
      v17 = (unsigned int)(v11 - 1);
      v18 = 32;
      v46 = (char *)ptr + 32 * v17 + 32;
      do
      {
        v19 = v50->m128i_i64[(unsigned __int64)v18 / 8];
        v20 = 3 * v18 - 48;
        v51 = _mm_loadu_si128((const __m128i *)(v49 + v20));
        v21 = *(_QWORD *)(v49 + v20 + 16);
        v53 = v19;
        v52 = v21;
        if ( !sub_F1DBF0((__int64)&v51, (__int64)v15) )
          break;
        v15 += 32;
        if ( v15 == v46 )
          break;
        v18 += 8;
      }
      while ( v16 != v15 );
    }
    v48 = sub_18BC950(a1, (__int64)&v54, v50[1].m128i_u32[1], *(_QWORD *)(a3 + 40), v50[1].m128i_i32[0], 0, 0, 0);
    if ( sub_F22B30(&v48) )
      goto LABEL_18;
    v22 = *((_QWORD *)&v54 + 1);
    v23 = v50[1].m128i_u32[0];
    v24 = *(_WORD *)(a3 + 18) >> 3;
    v51.m128i_i64[0] = v48;
    v25 = (_QWORD *)sub_F22F70(&v51);
    if ( v25 )
    {
      v13 = sub_AB7A80(*(_QWORD **)(*a1 + 248), v24, v25, (const __m128i *)ptr, v58);
    }
    else
    {
      v40 = sub_1CDD580(*a1, v51.m128i_i64[0], v23, &ptr);
      if ( (v40 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      {
LABEL_18:
        v13 = 0;
        goto LABEL_5;
      }
      v13 = sub_A76250(*(_QWORD *)(*a1 + 248), v24, v22, v40, 0);
    }
    v30 = v13 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (v13 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v31 = sub_15AB9E0((__int64)&v54, *(_QWORD **)(*a1 + 248), v26, v27, v28, v29);
      v33 = v32;
      if ( *(_BYTE *)(*(_QWORD *)v30 + 16LL) == 24 )
      {
        sub_1EA6140(
          a2,
          *(_QWORD *)(*(_QWORD *)v30 + 40LL),
          (unsigned int)(8 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v30 + 40LL) + 20LL) + 16),
          8);
        v35 = 0;
        *v34 = _mm_loadu_si128(v50 + 1);
        v36 = (unsigned int)(v58 - 1);
        if ( (_DWORD)v58 )
        {
          while ( 1 )
          {
            v34[1].m128i_i64[v35] = *((_QWORD *)ptr + 4 * v35 + 3);
            if ( v36 == v35 )
              break;
            ++v35;
          }
        }
        v37 = 16;
        if ( (unsigned __int8)(*(_WORD *)(v13 + 18) >> 3) == 6 )
          v37 = 16LL * (*(_QWORD *)(v13 + 32) != 0);
        v38 = sub_1EA6140(a2, v13, v37, 8);
        if ( (unsigned __int8)(*(_WORD *)(v38 + 18) >> 3) != 6 || *(_QWORD *)(v38 + 32) )
        {
          *(_DWORD *)v39 = v50->m128i_i32[0];
          if ( (unsigned __int8)(*(_WORD *)(v38 + 18) >> 3) != 6 || *(_QWORD *)(v38 + 32) )
            *(_QWORD *)(v39 + 8) = v33;
        }
      }
      else
      {
        sub_1EA6140(a2, v13, (unsigned int)(8 * *(_DWORD *)(v13 + 20) + 32), 8);
        v42 = v50;
        *(_DWORD *)v41 = v50->m128i_i32[0];
        if ( !v31 )
          v33 = 0;
        *(_QWORD *)(v41 + 8) = v33;
        *(_DWORD *)(v41 + 20) = v42[1].m128i_i32[1];
        *(_DWORD *)(v41 + 16) = v42[1].m128i_i32[0];
        *(_DWORD *)(v41 + 24) = v42[1].m128i_i32[2];
        v43 = v58;
        v44 = (unsigned int)(v58 - 1);
        *(_DWORD *)(v41 + 28) = v42[1].m128i_i32[3];
        v45 = 0;
        if ( v43 )
        {
          while ( 1 )
          {
            *(_QWORD *)(v41 + 8 * v45 + 32) = *((_QWORD *)ptr + 4 * v45 + 3);
            if ( v44 == v45 )
              break;
            ++v45;
          }
        }
      }
      goto LABEL_5;
    }
    goto LABEL_18;
  }
LABEL_5:
  if ( ptr != v59 )
    free(ptr);
  if ( HIDWORD(v55[1]) )
    free(v55[0]);
  return v13;
}
