__int64 __fastcall sub_C316B0(__int64 a1, char a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v11; // rbx
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rbp
  __int64 v16; // rdi
  unsigned int v17; // r14d
  unsigned __int64 v18; // rdi
  __m128i v19; // xmm0
  unsigned int v20; // ebp
  __int64 v21; // rdi
  __int64 v22; // rax
  const __m128i *v23; // r8
  __int64 v24; // rbx
  __m128i *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r9
  __m128i *v28; // rdx
  __m128i *v29; // rax
  const __m128i *v30; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 *v35; // r10
  bool v36; // al
  bool v37; // di
  bool v38; // r8
  unsigned int v39; // r9d
  unsigned __int64 v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // [rsp+10h] [rbp-158h]
  __int64 v45; // [rsp+20h] [rbp-148h]
  __m128i v48; // [rsp+30h] [rbp-138h] BYREF
  __int64 v49; // [rsp+40h] [rbp-128h]
  void *ptr[2]; // [rsp+48h] [rbp-120h] BYREF
  _BYTE v51[72]; // [rsp+58h] [rbp-110h] BYREF
  __m128i v52; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v53; // [rsp+B0h] [rbp-B8h]
  int v54; // [rsp+B8h] [rbp-B0h]
  __int64 *v55; // [rsp+C0h] [rbp-A8h]
  __int64 v56; // [rsp+C8h] [rbp-A0h]
  void *v57[2]; // [rsp+D0h] [rbp-98h] BYREF
  _BYTE v58[64]; // [rsp+E0h] [rbp-88h] BYREF
  __int16 v59; // [rsp+120h] [rbp-48h]

  v7 = *(unsigned int *)(a1 + 272);
  v8 = *(_QWORD *)(a1 + 264);
  if ( a3 < (unsigned int)v7 )
  {
    v9 = (unsigned int)(v7 - 1);
    v10 = v9 - ((unsigned int)v7 + ~a3);
    v11 = 32 * v9;
    v12 = 32 * v10;
    while ( 1 )
    {
      v14 = v8 + v11;
      v15 = *(_QWORD *)(v8 + v11);
      if ( (v15 & 6) == 0 )
        goto LABEL_3;
      if ( a2 )
        break;
      v52.m128i_i8[4] &= ~1u;
      v52.m128i_i32[0] = 0;
      sub_A2BFE0(*(_QWORD *)v14 & 0xFFFFFFFFFFFFFFF8LL, (__int64)&v52);
      if ( v52.m128i_i32[0] > 1u )
        sub_A2BBA0(v52.m128i_i32);
      v8 = *(_QWORD *)(a1 + 264);
      v13 = v11 - 32;
      if ( v12 == v11 )
      {
LABEL_35:
        LODWORD(v7) = *(_DWORD *)(a1 + 272);
        v20 = 1;
        goto LABEL_13;
      }
LABEL_4:
      v11 = v13;
    }
    v16 = *(_QWORD *)(v14 + 8);
    v17 = 0;
    if ( v16 )
    {
      if ( (v16 & 3) != 0 )
      {
        if ( (*(_QWORD *)(v14 + 8) & 3LL) == 1 )
        {
          v40 = v16 & 0xFFFFFFFFFFFFFFFCLL;
          if ( v40 )
            v17 = sub_BDCD00(v40, v8, v7, a4, a5);
        }
      }
      else
      {
        v18 = v16 & 0xFFFFFFFFFFFFFFFCLL;
        if ( v18 )
          v17 = *(_DWORD *)(v18 + 24);
      }
    }
    v19 = _mm_loadu_si128((const __m128i *)(v14 + 8));
    v44 = *(_QWORD *)(v14 + 24);
    if ( **(_BYTE **)(a1 + 24) )
    {
      LODWORD(v7) = *(_DWORD *)(a1 + 272);
      v20 = 0;
      goto LABEL_13;
    }
    LOBYTE(v54) = v54 | 1;
    v57[0] = v58;
    v59 &= 0xFDu;
    v56 = 0;
    v57[1] = (void *)0x800000000LL;
    v52 = v19;
    v53 = 0;
    v48 = v19;
    v32 = sub_A2B5D0(&v48);
    v48.m128i_i32[0] = 0;
    v33 = 0;
    v48.m128i_i64[1] = 0;
    v34 = v32;
    v35 = (__int64 *)(v32 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (v32 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    {
      v49 = 0;
      v36 = 0;
      v37 = 0;
      v38 = 0;
      v39 = 0;
      goto LABEL_38;
    }
    v41 = *v35;
    if ( (unsigned int)*(unsigned __int8 *)(*v35 + 16) - 43 <= 1 )
      goto LABEL_48;
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v41 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 > 1 )
    {
      v36 = 0;
      v37 = 0;
      v38 = 0;
      v35 = nullptr;
      v39 = 0;
    }
    else
    {
      v45 = v34;
      v41 = sub_F3F310(*v35, v8, v34, 0);
      if ( v41 )
      {
LABEL_48:
        while ( 1 )
        {
          v34 = *(_QWORD *)(v41 + 32);
          if ( (*(_BYTE *)(v41 + 18) & 0x10) == 0 )
            break;
          while ( 1 )
          {
            v41 = *(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFF0LL);
            v42 = (unsigned int)*(unsigned __int8 *)(v41 + 16) - 43;
            if ( (unsigned int)v42 <= 1 )
              break;
            v43 = sub_F3F310(v41, v8, v42, v33);
            v34 = *(_QWORD *)(v43 + 32);
            if ( (*(_BYTE *)(v43 + 18) & 0x10) == 0 )
              goto LABEL_51;
          }
        }
LABEL_51:
        v35 = (__int64 *)v48.m128i_i64[1];
        LOBYTE(v33) = v48.m128i_i8[0] & 1;
        v36 = (v48.m128i_i8[0] & 8) != 0;
        v38 = (v48.m128i_i8[0] & 2) != 0;
        v37 = (v48.m128i_i8[0] & 4) != 0;
        v39 = (unsigned __int32)v48.m128i_i32[0] >> 4;
        goto LABEL_52;
      }
      v35 = (__int64 *)v48.m128i_i64[1];
      v34 = v45;
      LOBYTE(v33) = v48.m128i_i8[0] & 1;
      v36 = (v48.m128i_i8[0] & 8) != 0;
      v38 = (v48.m128i_i8[0] & 2) != 0;
      v37 = (v48.m128i_i8[0] & 4) != 0;
      v39 = (unsigned __int32)v48.m128i_i32[0] >> 4;
    }
LABEL_52:
    v49 = v34;
LABEL_38:
    ptr[0] = v51;
    ptr[1] = (void *)0x800000000LL;
    v55 = v35;
    v54 = (4 * v37) & 0xF | (2 * v38) & 3 | v33 & 1 | (8 * v36) & 0xF | (16 * v39);
    v56 = v49;
    sub_C00390((char ***)v57, (char ***)ptr);
    if ( ptr[0] != v51 )
      free(ptr[0]);
    v59 &= 0xFEu;
    v20 = sub_C2F360(
            a1,
            ((unsigned __int64)v17 << 32) | v17,
            (__int64)&v52,
            (_DWORD *)(v15 & 0xFFFFFFFFFFFFFFF8LL),
            v44);
    if ( v57[0] != v58 )
      free(v57[0]);
    v8 = *(_QWORD *)(a1 + 264);
    if ( !(_BYTE)v20 )
    {
      LODWORD(v7) = *(_DWORD *)(a1 + 272);
      goto LABEL_13;
    }
LABEL_3:
    v13 = v11 - 32;
    if ( v12 == v11 )
      goto LABEL_35;
    goto LABEL_4;
  }
  v20 = 1;
LABEL_13:
  v21 = 32LL * (unsigned int)v7;
  v22 = 32LL * a3;
  v23 = (const __m128i *)(v8 + v21);
  v24 = v21 - v22;
  v25 = (__m128i *)(v8 + v22);
  v26 = (v21 - v22) >> 7;
  v27 = v24 >> 5;
  if ( v26 > 0 )
  {
    if ( (v25->m128i_i8[0] & 6) != 0 )
    {
      v28 = v25;
    }
    else
    {
      v28 = v25 + 2;
      if ( (v25[2].m128i_i8[0] & 6) == 0 )
      {
        v28 = v25 + 4;
        v29 = &v25[8 * v26];
        if ( (v25[4].m128i_i8[0] & 6) == 0 )
        {
          while ( 1 )
          {
            if ( (v25[6].m128i_i8[0] & 6) != 0 )
            {
              v28 = v25 + 6;
              goto LABEL_25;
            }
            v28 = v25 + 8;
            if ( v29 == &v25[8] )
            {
              v27 = ((char *)v23 - (char *)v28) >> 5;
              goto LABEL_58;
            }
            if ( (v25[8].m128i_i8[0] & 6) != 0 )
              goto LABEL_25;
            if ( (v25[10].m128i_i8[0] & 6) != 0 )
            {
              v28 = v25 + 10;
              goto LABEL_25;
            }
            if ( (v25[12].m128i_i8[0] & 6) != 0 )
              break;
            v25 += 8;
          }
          v28 = v25 + 12;
        }
      }
    }
    goto LABEL_25;
  }
  v28 = v25;
LABEL_58:
  if ( v27 == 2 )
  {
LABEL_67:
    if ( (v28->m128i_i8[0] & 6) == 0 )
    {
      v28 += 2;
LABEL_61:
      if ( (v28->m128i_i8[0] & 6) == 0 )
        goto LABEL_31;
      goto LABEL_25;
    }
    goto LABEL_25;
  }
  if ( v27 != 3 )
  {
    if ( v27 != 1 )
      goto LABEL_31;
    goto LABEL_61;
  }
  if ( (v28->m128i_i8[0] & 6) == 0 )
  {
    v28 += 2;
    goto LABEL_67;
  }
LABEL_25:
  if ( v23 != v28 )
  {
    v30 = v28 + 2;
    v21 = (__int64)v28->m128i_i64 - v8;
    if ( v23 != &v28[2] )
    {
      do
      {
        if ( (v30->m128i_i8[0] & 6) == 0 )
        {
          v28 += 2;
          v28[-2] = _mm_loadu_si128(v30);
          v28[-1] = _mm_loadu_si128(v30 + 1);
        }
        v30 += 2;
      }
      while ( v23 != v30 );
      v21 = (__int64)v28->m128i_i64 - *(_QWORD *)(a1 + 264);
    }
  }
LABEL_31:
  *(_DWORD *)(a1 + 272) = v21 >> 5;
  return v20;
}

