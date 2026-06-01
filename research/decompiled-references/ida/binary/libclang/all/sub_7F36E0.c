__int64 __fastcall sub_7F36E0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned int v8; // r12d
  __int64 *v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // r14
  __int64 v12; // r9
  __int64 v14; // rbx
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  _QWORD *v17; // rdx
  __int64 v18; // r12
  __int64 v19; // rcx
  _DWORD *v20; // rdx
  __int64 v21; // rdx
  __int64 *v22; // r12
  __int32 *v23; // rbx
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // rax
  __int32 v27; // r14d
  __int64 v28; // rdx
  unsigned __int64 v29; // rdx
  const __m128i *v30; // r14
  __int64 v31; // rax
  __int64 v32; // rsi
  __m128i *v33; // rax
  __int64 v34; // rdi
  int v35; // eax
  char *v36; // r14
  __int64 v37; // [rsp+38h] [rbp-B0h]
  __int64 v38; // [rsp+40h] [rbp-A8h]
  __int64 v39; // [rsp+48h] [rbp-A0h]
  __m128i v40; // [rsp+50h] [rbp-98h] BYREF
  __m128i v41; // [rsp+60h] [rbp-88h] BYREF
  __int64 v42; // [rsp+70h] [rbp-78h]
  __int64 v43[2]; // [rsp+80h] [rbp-68h] BYREF
  __int32 v44; // [rsp+90h] [rbp-58h]

  v6 = *(_QWORD *)(a2 + 104);
  if ( !v6 )
  {
    v14 = *(_QWORD *)(a2 + 96);
    a4 = 0;
    v15 = *(_QWORD *)(v14 + 88);
    v16 = v15 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v15 & 1) != 0 )
    {
      if ( !v16 )
        goto LABEL_4;
    }
    else
    {
      if ( v16 <= 3 )
      {
        if ( !v16 )
          goto LABEL_4;
        goto LABEL_26;
      }
      if ( (v15 & 2) == 0 )
        goto LABEL_4;
      v17 = (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
      v18 = v17[2275];
      if ( !v18 )
      {
        *(_QWORD *)(v14 + 88) = v14 & 0xFFFFFFFFFFFFFFFALL | 1;
        if ( (v14 & 0xFFFFFFFFFFFFFFFALL) == 0 )
        {
LABEL_34:
          v6 = *(_QWORD *)(a2 + 104);
          goto LABEL_2;
        }
        goto LABEL_25;
      }
      v19 = v17[274];
      v17[284] += 24LL;
      v16 = (v19 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v17[275] >= v16 + 24 && v19 )
        v17[274] = v16 + 24;
      else
        v16 = sub_7DAE50((__int64)(v17 + 274), 24, 3);
      *(_QWORD *)v16 = v18;
      *(_DWORD *)(v16 + 8) = 0;
      v15 = v16 | 5;
      *(_QWORD *)(v16 + 16) = v14;
      *(_QWORD *)(v14 + 88) = v16 | 5;
      LOBYTE(v16) = v16 & 0xFA | 4;
    }
    if ( (v16 & 4) != 0 )
    {
      v20 = (_DWORD *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v20 )
      {
        v34 = *(_QWORD *)v20;
        v35 = *(_DWORD *)(*(_QWORD *)v20 + 12LL);
        if ( v20[2] != v35 )
        {
          v20[2] = v35;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v34 + 144LL))(v34, v14);
          goto LABEL_34;
        }
      }
    }
LABEL_25:
    a4 = *(_QWORD *)(a2 + 104);
LABEL_26:
    v6 = a4;
  }
LABEL_2:
  if ( v6 > 7 )
  {
    v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    if ( a2 == *(_QWORD *)v7 )
    {
      v21 = *(unsigned int *)(v7 + 16);
      v22 = *(__int64 **)(v7 + 8);
      v23 = *(__int32 **)(v7 + 24);
      v24 = (__int64)&v22[v21];
      v25 = (__int64)&v23[v21];
      if ( v22 != (__int64 *)v24 && v23 != (__int32 *)v25 )
      {
        do
        {
          v26 = *v22;
          v39 = v24;
          v38 = v25;
          v28 = *(_QWORD *)a1;
          v41.m128i_i32[0] = *v23;
          v27 = v41.m128i_i32[0];
          v40.m128i_i32[0] = 1043;
          v40.m128i_i64[1] = v26;
          v37 = v26;
          sub_7DE380(
            a1,
            v28 + 24,
            v42,
            a4,
            v25,
            v24,
            (__int128)_mm_load_si128(&v40),
            (__int128)_mm_load_si128(&v41),
            v42);
          a4 = *(unsigned int *)(a1 + 20);
          v44 = v27;
          LODWORD(v43[0]) = 1043;
          v29 = *(_QWORD *)(a1 + 8);
          v30 = (const __m128i *)v43;
          v43[1] = v37;
          v31 = *(unsigned int *)(a1 + 16);
          v25 = v38;
          v24 = v39;
          v32 = v31 + 1;
          if ( a4 < v31 + 1 )
          {
            if ( (unsigned __int64)v43 < v29 )
            {
              sub_25D6060(a1 + 8, a1 + 24, v32, 40);
              v29 = *(_QWORD *)(a1 + 8);
              v31 = *(unsigned int *)(a1 + 16);
              v24 = v39;
              v25 = v38;
            }
            else if ( (unsigned __int64)v43 < v29 + 40 * v31 )
            {
              v36 = (char *)v43 - v29;
              sub_25D6060(a1 + 8, a1 + 24, v32, 40);
              v29 = *(_QWORD *)(a1 + 8);
              v31 = *(unsigned int *)(a1 + 16);
              v25 = v38;
              v24 = v39;
              v30 = (const __m128i *)&v36[v29];
            }
            else
            {
              sub_25D6060(a1 + 8, a1 + 24, v32, 40);
              v29 = *(_QWORD *)(a1 + 8);
              v31 = *(unsigned int *)(a1 + 16);
              v25 = v38;
              v24 = v39;
            }
          }
          ++v23;
          ++v22;
          v33 = (__m128i *)(v29 + 40 * v31);
          *v33 = _mm_loadu_si128(v30);
          v33[1] = _mm_loadu_si128(v30 + 1);
          v33[2].m128i_i64[0] = v30[2].m128i_i64[0];
        }
        while ( v23 != (__int32 *)v25 && v22 != (__int64 *)v24 );
      }
    }
  }
LABEL_4:
  v8 = sub_7E1600((__int64 *)a1, a2 + 48);
  if ( !(_BYTE)v8 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v9 = nullptr;
    v10 = sub_79A2B0(a2);
    v11 = *v10 + 8LL * *((unsigned int *)v10 + 2);
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v9 = (__int64 *)*sub_79A2B0(a2);
    if ( (__int64 *)v11 != v9 )
    {
      while ( 1 )
      {
        v12 = *(_QWORD *)a1;
        v43[0] = *v9;
        if ( !(unsigned __int8)sub_7F2380(a1, v43[0], v43[0], v43, (__int64 *)a1, v12) )
          break;
        if ( (__int64 *)v11 == ++v9 )
          return v8;
      }
      return 0;
    }
  }
  return v8;
}

