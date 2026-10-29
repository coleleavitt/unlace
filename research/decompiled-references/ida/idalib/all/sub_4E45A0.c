__int64 __fastcall sub_4E45A0(__int64 *a1, __int64 a2)
{
  unsigned int v3; // ebp
  char v4; // r12
  void *v6; // rdi
  __int64 v7; // rdx
  __m128i v8; // xmm0
  void **v9; // r15
  unsigned int v10; // eax
  unsigned __int64 v11; // r9
  char v12; // r8
  void **v13; // r10
  char v14; // r11
  unsigned __int64 v15; // r14
  __int64 v16; // r15
  _BYTE *v17; // rsi
  unsigned __int64 v18; // r9
  __int64 v19; // r14
  unsigned __int64 v20; // r15
  _BYTE *v21; // rsi
  __int64 v22; // r14
  char *v23; // rax
  size_t v24; // rbx
  __int64 v25; // rbp
  size_t v26; // r12
  _BYTE *v27; // rsi
  size_t v28; // r14
  _BYTE *v29; // rsi
  __int64 v30; // r14
  unsigned __int64 v31; // r15
  _BYTE *v32; // rsi
  __m128i v33; // xmm0
  void *v34; // rdx
  __m128i v35; // xmm1
  _BYTE *v36; // rax
  char *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  char v43; // [rsp+0h] [rbp-98h]
  unsigned __int64 v44; // [rsp+0h] [rbp-98h]
  char v45; // [rsp+0h] [rbp-98h]
  void **v46; // [rsp+8h] [rbp-90h]
  void **v47; // [rsp+8h] [rbp-90h]
  char v48; // [rsp+8h] [rbp-90h]
  void **v49; // [rsp+8h] [rbp-90h]
  void **v50; // [rsp+8h] [rbp-90h]
  void **v51; // [rsp+10h] [rbp-88h]
  void **v52; // [rsp+10h] [rbp-88h]
  unsigned __int64 v53; // [rsp+18h] [rbp-80h]
  void *v54; // [rsp+20h] [rbp-78h] BYREF
  __m128i v55; // [rsp+28h] [rbp-70h] BYREF
  void *v56; // [rsp+40h] [rbp-58h] BYREF
  __int128 v57; // [rsp+48h] [rbp-50h]
  unsigned __int64 v58; // [rsp+58h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  if ( (debug & 2) != 0 )
    sub_3879F0();
  v3 = 0;
  v4 = sub_4E1AC0(a1);
  if ( v4 )
  {
    v54 = nullptr;
    v55 = 0;
    v3 = sub_4E3DE0(a1, (__int64)&v54);
    if ( !v3 )
    {
LABEL_36:
      v6 = v54;
LABEL_37:
      if ( v6 )
      {
        v55.m128i_i64[0] = 0;
        qfree(v6);
      }
      return v3;
    }
    if ( *((_BYTE *)a1 + 92) )
    {
      v6 = v54;
      if ( a2 )
      {
        v6 = *(void **)a2;
        v7 = *(_QWORD *)(a2 + 16);
        *(_QWORD *)a2 = v54;
        v8 = _mm_loadu_si128(&v55);
        v54 = v6;
        v55.m128i_i64[1] = v7;
        *(__m128i *)(a2 + 8) = v8;
      }
      goto LABEL_37;
    }
    v9 = &v56;
    v57 = 0;
    v56 = nullptr;
    v10 = sub_4E4000(a1, (__int64)&v56);
    if ( !v10 )
    {
      v3 = 0;
LABEL_34:
      if ( v56 )
      {
        *(_QWORD *)&v57 = 0;
        qfree(v56);
      }
      goto LABEL_36;
    }
    v11 = v57;
    v12 = 0;
    if ( (unsigned __int64)v57 <= 1 && (*(_BYTE *)(a1[2] + 25) & 1) == 0 )
    {
      if ( a2 )
      {
        v33 = _mm_loadu_si128((const __m128i *)(a2 + 8));
        v34 = v54;
        v35 = _mm_loadu_si128(&v55);
        v54 = *(void **)a2;
        *(_QWORD *)a2 = v34;
        *(__m128i *)(a2 + 8) = v35;
        v55 = v33;
      }
      goto LABEL_34;
    }
    if ( !a2 )
    {
LABEL_33:
      v3 = 2;
      goto LABEL_34;
    }
    *(_QWORD *)(a2 + 8) = 0;
    v13 = &v54;
    if ( (*(_BYTE *)(a1[2] + 25) & 1) == 0 )
    {
      v11 = v55.m128i_i64[0];
      v13 = &v56;
      v3 = v10;
      v9 = &v54;
    }
    if ( v11 )
    {
      v28 = v11 - 1;
      if ( v11 != 1 )
      {
        v29 = *(_BYTE **)a2;
        if ( *(_QWORD *)(a2 + 16) < v11 )
        {
          v52 = v13;
          v44 = v11;
          v41 = qvector_reserve(a2, v29, v11, 1);
          v13 = v52;
          v11 = v44;
          *(_QWORD *)a2 = v41;
          v29 = (_BYTE *)v41;
        }
        *(_QWORD *)(a2 + 8) = v11;
        v29[v28] = 0;
        v46 = v13;
        memcpy(*(void **)a2, *v9, v28);
        v30 = *(_QWORD *)(a2 + 8);
        v12 = 0;
        v13 = v46;
        if ( (*(_BYTE *)(*a1 + 1075) & 0x10) != 0 || (unsigned __int64)v9[1] <= 1 )
        {
          v14 = 0;
        }
        else
        {
          v31 = 2;
          if ( v30 )
            v31 = v30-- + 1;
          v32 = *(_BYTE **)a2;
          if ( *(_QWORD *)(a2 + 16) < v31 )
          {
            v40 = qvector_reserve(a2, v32, v31, 1);
            *(_QWORD *)a2 = v40;
            v13 = v46;
            v32 = (_BYTE *)v40;
            v12 = 0;
          }
          *(_QWORD *)(a2 + 8) = v31;
          v14 = v4;
          v32[v30] = 32;
          *(_BYTE *)(*(_QWORD *)a2 + v30 + 1) = 0;
          v30 = *(_QWORD *)(a2 + 8);
        }
        if ( v30 )
        {
          v11 = v30 - 1;
          v16 = v30 + 4;
          v15 = v30 + 5;
        }
        else
        {
          v11 = 0;
          v15 = 6;
          v16 = 5;
        }
LABEL_17:
        v17 = *(_BYTE **)a2;
        if ( *(_QWORD *)(a2 + 16) >= v15 )
          goto LABEL_18;
        goto LABEL_63;
      }
    }
    else if ( (*(_BYTE *)(*a1 + 1075) & 0x10) == 0 )
    {
      v14 = 0;
      v15 = 6;
      v16 = 5;
      goto LABEL_17;
    }
    v17 = *(_BYTE **)a2;
    if ( *(_QWORD *)(a2 + 16) > 5u )
    {
      *(_QWORD *)(a2 + 8) = 6;
      v17[5] = 0;
      v36 = *(_BYTE **)a2;
      *(_DWORD *)v36 = (_DWORD)"xt_seg";
      v36[4] = 9;
      goto LABEL_24;
    }
    v14 = 0;
    v15 = 6;
    v16 = 5;
    v11 = 0;
LABEL_63:
    v53 = v11;
    v51 = v13;
    v48 = v14;
    v38 = qvector_reserve(a2, v17, v15, 1);
    *(_QWORD *)a2 = v38;
    v11 = v53;
    v17 = (_BYTE *)v38;
    v13 = v51;
    v14 = v48;
    v12 = 0;
LABEL_18:
    *(_QWORD *)(a2 + 8) = v15;
    v17[v16] = 0;
    v18 = *(_QWORD *)a2 + v11;
    *(_DWORD *)v18 = (_DWORD)"xt_seg";
    *(_BYTE *)(v18 + 4) = 9;
    if ( v14 )
    {
      v19 = *(_QWORD *)(a2 + 8);
      v20 = 2;
      if ( v19 )
        v20 = v19-- + 1;
      v21 = *(_BYTE **)a2;
      if ( *(_QWORD *)(a2 + 16) < v20 )
      {
        v49 = v13;
        v39 = qvector_reserve(a2, v21, v20, 1);
        *(_QWORD *)a2 = v39;
        v13 = v49;
        v21 = (_BYTE *)v39;
        v12 = 0;
      }
      *(_QWORD *)(a2 + 8) = v20;
      v21[v19] = 32;
      *(_BYTE *)(*(_QWORD *)a2 + v19 + 1) = 0;
    }
LABEL_24:
    v22 = *a1;
    if ( v3 == 2 && *(_BYTE *)(v22 + 1328) && *(_BYTE *)(v22 + 1329) )
    {
      v47 = v13;
      sub_35A910((__int64 *)a2);
      v13 = v47;
      v37 = (char *)v47[1];
      if ( !v37 || (v24 = (size_t)(v37 - 1), v37 == (_BYTE *)&dword_0 + 1) )
      {
LABEL_32:
        sub_35A910((__int64 *)a2);
        goto LABEL_33;
      }
      v12 = v4;
    }
    else
    {
      v23 = (char *)v13[1];
      if ( !v23 )
        goto LABEL_33;
      v24 = (size_t)(v23 - 1);
      if ( v23 == (_BYTE *)&dword_0 + 1 )
        goto LABEL_33;
    }
    v25 = *(_QWORD *)(a2 + 8);
    v26 = v24;
    if ( v25 )
    {
      --v25;
      v26 = v24 + v25;
    }
    v27 = *(_BYTE **)a2;
    if ( *(_QWORD *)(a2 + 16) < v26 + 1 )
    {
      v50 = v13;
      v45 = v12;
      v42 = qvector_reserve(a2, v27, v26 + 1, 1);
      *(_QWORD *)a2 = v42;
      v13 = v50;
      v27 = (_BYTE *)v42;
      v12 = v45;
    }
    *(_QWORD *)(a2 + 8) = v26 + 1;
    v27[v26] = 0;
    v43 = v12;
    memcpy((void *)(v25 + *(_QWORD *)a2), *v13, v24);
    if ( !v43 )
      goto LABEL_33;
    goto LABEL_32;
  }
  return v3;
}
