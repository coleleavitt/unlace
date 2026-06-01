void __fastcall sub_203FEC0(__int64 a1, _DWORD *a2)
{
  char v4; // dl
  _QWORD *v5; // rcx
  __int64 v6; // r8
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rsi
  unsigned int v13; // esi
  int v14; // r10d
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r15
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  void **v25; // rbx
  void *v26; // rsi
  _QWORD *v27; // r12
  void **v28; // rax
  _BYTE *v29; // rdi
  void *v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  size_t v35; // rdx
  __int64 v36; // rdi
  char *v37; // r15
  const __m128i *v38; // rax
  unsigned __int64 v39; // rsi
  const __m128i *v40; // rcx
  char *v41; // rax
  char *v42; // rdi
  int v43; // eax
  int v44; // [rsp+8h] [rbp-120h]
  char *v45; // [rsp+8h] [rbp-120h]
  int v46; // [rsp+8h] [rbp-120h]
  __int64 v47; // [rsp+10h] [rbp-118h]
  void *v48[2]; // [rsp+20h] [rbp-108h] BYREF
  _BYTE v49[16]; // [rsp+30h] [rbp-F8h] BYREF
  __int64 (__fastcall **v50)(); // [rsp+40h] [rbp-E8h] BYREF
  int v51; // [rsp+48h] [rbp-E0h]
  __int128 v52; // [rsp+50h] [rbp-D8h]
  __int64 v53; // [rsp+60h] [rbp-C8h]
  char v54; // [rsp+68h] [rbp-C0h]
  int v55; // [rsp+6Ch] [rbp-BCh]
  void **v56; // [rsp+70h] [rbp-B8h]
  __int64 (__fastcall **v57)(); // [rsp+80h] [rbp-A8h] BYREF
  int v58; // [rsp+88h] [rbp-A0h]
  __int128 v59; // [rsp+90h] [rbp-98h]
  __int64 v60; // [rsp+A0h] [rbp-88h]
  char v61; // [rsp+A8h] [rbp-80h]
  int v62; // [rsp+ACh] [rbp-7Ch]
  __int64 v63; // [rsp+B0h] [rbp-78h]
  __int64 v64; // [rsp+B8h] [rbp-70h]
  _BYTE *v65; // [rsp+C8h] [rbp-60h]
  __m128i si128; // [rsp+D0h] [rbp-58h]
  _BYTE v67[72]; // [rsp+E0h] [rbp-48h] BYREF

  v4 = *(_BYTE *)(a1 + 236);
  if ( !v4 )
    goto LABEL_10;
  v5 = *(_QWORD **)(a1 + 216);
  v6 = *(unsigned int *)(a1 + 228);
  v7 = &v5[v6];
  if ( v5 != v7 )
  {
    v8 = v5;
    if ( a2 == (_DWORD *)*v5 )
    {
LABEL_30:
      v4 = 0;
      v10 = &v5[*(unsigned int *)(a1 + 228)];
      goto LABEL_12;
    }
    while ( v7 != ++v8 )
    {
      if ( a2 == (_DWORD *)*v8 )
        goto LABEL_30;
    }
  }
  if ( (unsigned int)v6 < *(_DWORD *)(a1 + 224) )
  {
    *(_DWORD *)(a1 + 228) = v6 + 1;
    *v7 = a2;
    v9 = *(_QWORD *)(a1 + 216);
    v8 = (_QWORD *)(v9 + 8 * v6);
  }
  else
  {
LABEL_10:
    v8 = (_QWORD *)sub_2236760(a1 + 216, a2);
    v9 = *(_QWORD *)(a1 + 216);
    if ( !*(_BYTE *)(a1 + 236) )
    {
      v10 = (_QWORD *)(v9 + 8LL * *(unsigned int *)(a1 + 224));
      goto LABEL_12;
    }
  }
  v10 = (_QWORD *)(v9 + 8LL * *(unsigned int *)(a1 + 228));
LABEL_12:
  if ( v10 != v8 && *v8 >= 0xFFFFFFFFFFFFFFFELL )
  {
    v11 = v8 + 1;
    do
    {
      v12 = v11;
      if ( v11 == v10 )
        break;
      ++v11;
    }
    while ( *v12 >= 0xFFFFFFFFFFFFFFFELL );
  }
  if ( v4 )
  {
    v48[0] = v49;
    v48[1] = nullptr;
    v49[0] = 0;
    v50 = &off_2BEBE68;
    v51 = 0;
    v54 = 0;
    v55 = 1;
    v53 = 0;
    v52 = 0;
    v56 = v48;
    sub_227B8B0(&v50, 0, 0, 0);
    v13 = *(_DWORD *)(a1 + 48);
    v14 = *(_DWORD *)(a1 + 32) + 1;
    *(_DWORD *)(a1 + 32) = v14;
    if ( *(_DWORD *)(a1 + 52) <= v13 )
    {
      v44 = v14;
      v47 = sub_2237400(a1 + 40, a1 + 56, 0, 40, &v57);
      v36 = v47 + 40LL * *(unsigned int *)(a1 + 48);
      *(_DWORD *)v36 = v44;
      sub_202F730((_QWORD *)(v36 + 8), &byte_22F0C30);
      v17 = *(_QWORD *)(a1 + 40);
      v37 = (char *)(v17 + 40LL * *(unsigned int *)(a1 + 48));
      if ( (char *)v17 != v37 )
      {
        v38 = (const __m128i *)(v17 + 24);
        v39 = v47 + 8 * ((40 * (unsigned __int64)*(unsigned int *)(a1 + 48) - 40) >> 3) + 40;
        v16 = v47;
        do
        {
          while ( 1 )
          {
            *(_DWORD *)v16 = v38[-2].m128i_i32[2];
            *(_QWORD *)(v16 + 8) = v16 + 24;
            v40 = (const __m128i *)v38[-1].m128i_i64[0];
            if ( v40 == v38 )
              break;
            *(_QWORD *)(v16 + 8) = v40;
            v16 += 40;
            *(_QWORD *)(v16 - 16) = v38->m128i_i64[0];
            v17 = v38[-1].m128i_i64[1];
            *(_QWORD *)(v16 - 24) = v17;
            v38[-1].m128i_i64[0] = (__int64)v38;
            v38 = (const __m128i *)((char *)v38 + 40);
            v38[-3].m128i_i64[0] = 0;
            v38[-3].m128i_i8[8] = 0;
            if ( v39 == v16 )
              goto LABEL_44;
          }
          v16 += 40;
          *(__m128i *)(v16 - 16) = _mm_loadu_si128(v38);
          v17 = v38[-1].m128i_i64[1];
          *(_QWORD *)(v16 - 24) = v17;
          v38[-1].m128i_i64[0] = (__int64)v38;
          v38 = (const __m128i *)((char *)v38 + 40);
          v38[-3].m128i_i64[0] = 0;
          v38[-3].m128i_i8[8] = 0;
        }
        while ( v16 != v39 );
LABEL_44:
        v37 = *(char **)(a1 + 40);
        v41 = &v37[40 * *(unsigned int *)(a1 + 48)];
        if ( v41 != v37 )
        {
          do
          {
            while ( 1 )
            {
              v41 -= 40;
              v42 = *((char **)v41 + 1);
              v17 = (__int64)(v41 + 24);
              if ( v42 == v41 + 24 )
                break;
              v45 = v41;
              operator delete(v42);
              v41 = v45;
              if ( v45 == v37 )
                goto LABEL_47;
            }
          }
          while ( v41 != v37 );
LABEL_47:
          v37 = *(char **)(a1 + 40);
        }
      }
      v43 = (int)v57;
      if ( (char *)(a1 + 56) != v37 )
      {
        v46 = (int)v57;
        free(v37);
        v43 = v46;
      }
      v20 = *(unsigned int *)(a1 + 48);
      *(_DWORD *)(a1 + 52) = v43;
      *(_QWORD *)(a1 + 40) = v47;
      *(_DWORD *)(a1 + 48) = v20 + 1;
    }
    else
    {
      v15 = *(_QWORD *)(a1 + 40) + 40LL * v13;
      *(_DWORD *)v15 = v14;
      sub_202F730((_QWORD *)(v15 + 8), &byte_22F0C30);
      v20 = *(unsigned int *)(a1 + 48);
      *(_DWORD *)(a1 + 48) = v20 + 1;
    }
    v59 = 0;
    v58 = 0;
    v57 = &off_2C75A88;
    v65 = v67;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8870);
    v61 = 0;
    v62 = 1;
    v60 = 0;
    v63 = 0;
    v64 = 0;
    v67[8] = 0;
    sub_202EDF0((__int64)&v57, (__int64)&v50, v16, v17, v18, v19);
    sub_20399E0((__int64)&v57, (__int64)a2, (__int64 *)a1);
    v24 = *(unsigned __int8 *)a2;
    if ( (unsigned int)(v24 - 5) > 0x20 || (_BYTE)v24 == 7 )
    {
      sub_20322F0((__int64)&v57, (__int64)a2, v24, v21, v22, v23);
    }
    else
    {
      sub_995540((__int64)&v57, " = ");
      sub_203F7C0((__int64)&v57, a2, (__int64 *)a1);
      sub_20322F0((__int64)&v57, (__int64)a2, v31, v32, v33, v34);
    }
    v25 = v56;
    v26 = *v56;
    v27 = (_QWORD *)(*(_QWORD *)(a1 + 40) + 40 * v20);
    v28 = v56 + 2;
    v29 = (_BYTE *)v27[1];
    if ( *v56 == v56 + 2 )
    {
      v35 = (size_t)v56[1];
      if ( v35 )
      {
        if ( v35 == 1 )
          *v29 = *((_BYTE *)v56 + 16);
        else
          memcpy(v29, v26, v35);
        v35 = (size_t)v25[1];
        v29 = (_BYTE *)v27[1];
      }
      v27[2] = v35;
      v29[v35] = 0;
      v29 = *v25;
      goto LABEL_28;
    }
    if ( v29 == (_BYTE *)(v27 + 3) )
    {
      v27[1] = v26;
      v27[2] = v25[1];
      v27[3] = v25[2];
    }
    else
    {
      v27[1] = v26;
      v30 = (void *)v27[3];
      v27[2] = v25[1];
      v27[3] = v25[2];
      if ( v29 )
      {
        *v25 = v29;
        v25[2] = v30;
        goto LABEL_28;
      }
    }
    *v25 = v28;
    v29 = v28;
LABEL_28:
    v25[1] = nullptr;
    *v29 = 0;
    --*(_DWORD *)(a1 + 32);
    v50 = &off_2BEBE68;
    sub_227B7A0(&v50);
    if ( v48[0] != v49 )
      operator delete(v48[0]);
  }
}
