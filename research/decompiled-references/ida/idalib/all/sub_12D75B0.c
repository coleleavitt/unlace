__int64 __fastcall sub_12D75B0(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // rax
  unsigned int v6; // r13d
  unsigned __int64 v7; // rax
  int v8; // edx
  unsigned __int64 v9; // rbx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rdi
  int v14; // r15d
  _DWORD *v15; // rax
  unsigned int v16; // r13d
  __int64 v17; // r8
  _DWORD *v18; // rax
  unsigned int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // rcx
  const __m128i *v22; // rbx
  unsigned __int64 v23; // rbp
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  __m128i *v27; // rax
  _QWORD *v28; // rdi
  _QWORD *v29; // rsi
  __int64 v30; // rdx
  char v31; // dl
  char v32; // dl
  unsigned __int64 v33; // r9
  __int64 v34; // rax
  _QWORD *v35; // r10
  unsigned __int64 v36; // r8
  __int64 v37; // rax
  _QWORD *v38; // r9
  __int64 *v39; // rdi
  __int64 v40; // rcx
  _DWORD *v41; // rax
  _DWORD *v42; // rdx
  __int64 *v43; // rdi
  __int64 v44; // rcx
  _DWORD *v45; // rax
  _DWORD *v46; // rdx
  _QWORD *v47; // [rsp+0h] [rbp-A8h]
  _QWORD *v48; // [rsp+0h] [rbp-A8h]
  int v49; // [rsp+8h] [rbp-A0h]
  char v50; // [rsp+8h] [rbp-A0h]
  int v51; // [rsp+Ch] [rbp-9Ch]
  unsigned __int64 v52; // [rsp+30h] [rbp-78h] BYREF
  __int64 v53; // [rsp+38h] [rbp-70h]
  __int64 v54; // [rsp+40h] [rbp-68h]
  int v55; // [rsp+48h] [rbp-60h]
  int v56; // [rsp+4Ch] [rbp-5Ch]
  unsigned int v57; // [rsp+50h] [rbp-58h]
  __int64 v58; // [rsp+54h] [rbp-54h]
  unsigned int v59; // [rsp+5Ch] [rbp-4Ch]

  v4 = *a1;
  v5 = sub_13DCDE0(a2, a3, *a1, a1[1]);
  v6 = v5;
  v52 = v5;
  v7 = HIDWORD(v5);
  LODWORD(v53) = v8;
  if ( (int)v6 <= 0 )
    goto LABEL_3;
  v9 = v7;
  if ( (int)v7 <= 0 )
    goto LABEL_3;
  v11 = sub_1021680(v4, v6);
  if ( v11 )
  {
    if ( v11 != 3 )
      goto LABEL_3;
  }
  v12 = sub_1021680(v4, v9);
  if ( v12 )
  {
    if ( v12 != 3 )
      goto LABEL_3;
  }
  v13 = a1[2];
  if ( v13 )
  {
    if ( (unsigned __int8)sub_1419E50(v13, (v9 << 32) | v6) )
      goto LABEL_3;
  }
  if ( v6 < *(_DWORD *)(v4 + 476) || v6 >= *(_DWORD *)(v4 + 480) )
    v14 = sub_101D590(v4, v6);
  else
    v14 = *(_DWORD *)(v4 + 472);
  LOBYTE(v52) = 0;
  if ( (unsigned int)(v14 + 1) <= 1 )
    goto LABEL_43;
  if ( v14 >= 0 )
  {
    v15 = (_DWORD *)(*(_QWORD *)(v4 + 184) + 24LL * (unsigned int)v14);
    goto LABEL_16;
  }
  v36 = (unsigned int)(-2 - v14);
  v37 = *(_QWORD *)(*(_QWORD *)(v4 + 320) + 8LL * ((unsigned int)(-2 - v14) >> 6));
  if ( _bittest64(&v37, v36) )
  {
    v38 = (_QWORD *)(*(_QWORD *)(v4 + 272) + 8 * ((unsigned __int64)(int)v36 >> 5));
    if ( *v38 )
    {
      v15 = (_DWORD *)(*v38 + 24LL * ((-2 - (_BYTE)v14) & 0x1F));
      goto LABEL_16;
    }
    v43 = (__int64 *)(*(_QWORD *)(v4 + 288) & 0xFFFFFFFFFFFFFFF8LL);
    v44 = *v43;
    v43[10] += 768;
    v45 = (_DWORD *)((v44 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v43[1] >= (unsigned __int64)(v45 + 192) && v44 )
    {
      *v43 = (__int64)(v45 + 192);
    }
    else
    {
      v47 = v38;
      v45 = (_DWORD *)sub_986170((__int64)v43, 768, 768, 3, v36, (__int64)v38);
      v38 = v47;
      LOBYTE(v36) = -2 - v14;
    }
    *v38 = v45;
    v46 = v45 + 192;
    do
    {
      *v45 = 0;
      v45 += 6;
      *((_OWORD *)v45 - 1) = 0;
      *((_QWORD *)v45 - 1) = 0;
    }
    while ( v45 != v46 );
    v32 = v52;
    v15 = (_DWORD *)(*v38 + 24 * (v36 & 0x1F));
  }
  else
  {
    v15 = (_DWORD *)sub_101F930(v4, v36, &v52);
    v32 = v52;
  }
  if ( v32 )
    goto LABEL_43;
LABEL_16:
  if ( !v15 )
  {
LABEL_43:
    v16 = 0;
    v14 = 0;
    goto LABEL_18;
  }
  v16 = v6 - (*v15 & 0x7FFFFFFF);
LABEL_18:
  if ( (unsigned int)v9 < *(_DWORD *)(v4 + 476) || (unsigned int)v9 >= *(_DWORD *)(v4 + 480) )
    v17 = (unsigned int)sub_101D590(v4, v9);
  else
    v17 = *(unsigned int *)(v4 + 472);
  LOBYTE(v52) = 0;
  if ( (unsigned int)(v17 + 1) <= 1 )
    goto LABEL_40;
  if ( (int)v17 >= 0 )
  {
    v18 = (_DWORD *)(*(_QWORD *)(v4 + 184) + 24LL * (unsigned int)v17);
    goto LABEL_24;
  }
  v33 = (unsigned int)(-2 - v17);
  v34 = *(_QWORD *)(*(_QWORD *)(v4 + 320) + 8LL * ((unsigned int)(-2 - v17) >> 6));
  if ( _bittest64(&v34, v33) )
  {
    v35 = (_QWORD *)(*(_QWORD *)(v4 + 272) + 8 * ((unsigned __int64)(int)v33 >> 5));
    if ( *v35 )
    {
      v18 = (_DWORD *)(*v35 + 24LL * ((-2 - (_BYTE)v17) & 0x1F));
      goto LABEL_24;
    }
    v39 = (__int64 *)(*(_QWORD *)(v4 + 288) & 0xFFFFFFFFFFFFFFF8LL);
    v40 = *v39;
    v39[10] += 768;
    v41 = (_DWORD *)((v40 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v39[1] >= (unsigned __int64)(v41 + 192) && v40 )
    {
      *v39 = (__int64)(v41 + 192);
    }
    else
    {
      v51 = v17;
      v48 = v35;
      v50 = -2 - v17;
      v41 = (_DWORD *)sub_986170((__int64)v39, 768, 768, 3, v17, v33);
      LODWORD(v17) = v51;
      v35 = v48;
      LOBYTE(v33) = v50;
    }
    *v35 = v41;
    v42 = v41 + 192;
    do
    {
      *v41 = 0;
      v41 += 6;
      *((_OWORD *)v41 - 1) = 0;
      *((_QWORD *)v41 - 1) = 0;
    }
    while ( v41 != v42 );
    v31 = v52;
    v18 = (_DWORD *)(*v35 + 24 * (v33 & 0x1F));
  }
  else
  {
    v49 = v17;
    v18 = (_DWORD *)sub_101F930(v4, v33, &v52);
    v31 = v52;
    LODWORD(v17) = v49;
  }
  if ( v31 )
    goto LABEL_40;
LABEL_24:
  if ( !v18 )
  {
LABEL_40:
    v19 = 0;
    LODWORD(v17) = 0;
    goto LABEL_26;
  }
  v19 = v9 - (*v18 & 0x7FFFFFFF);
LABEL_26:
  if ( v14 != (_DWORD)v17 || v16 > v19 )
  {
LABEL_3:
    *((_BYTE *)a1 + 32) = 0;
    return 0;
  }
  v20 = v19 - v16;
  if ( v20 )
  {
    v21 = *((unsigned int *)a1 + 12);
    v59 = v20;
    v22 = (const __m128i *)&v52;
    v23 = a1[5];
    v55 = a2;
    v24 = v21 + 1;
    v53 = 0;
    v25 = 7 * v21;
    v26 = *((unsigned int *)a1 + 13);
    v54 = 0;
    v58 = 0;
    v27 = (__m128i *)(v23 + 8 * v25);
    LODWORD(v52) = 2;
    v56 = v14;
    v57 = v16;
    if ( v24 > v26 )
    {
      v28 = a1 + 5;
      v29 = a1 + 7;
      if ( v23 > (unsigned __int64)&v52 || v27 <= (__m128i *)&v52 )
      {
        sub_2237220(v28, v29, v24, 56);
        v27 = (__m128i *)(a1[5] + 56LL * *((unsigned int *)a1 + 12));
      }
      else
      {
        sub_2237220(v28, v29, v24, 56);
        v30 = a1[5];
        v22 = (const __m128i *)((char *)&v52 + v30 - v23);
        v27 = (__m128i *)(v30 + 56LL * *((unsigned int *)a1 + 12));
      }
    }
    *v27 = _mm_loadu_si128(v22);
    v27[1] = _mm_loadu_si128(v22 + 1);
    v27[2] = _mm_loadu_si128(v22 + 2);
    v27[3].m128i_i64[0] = v22[3].m128i_i64[0];
    ++*((_DWORD *)a1 + 12);
  }
  return 1;
}
