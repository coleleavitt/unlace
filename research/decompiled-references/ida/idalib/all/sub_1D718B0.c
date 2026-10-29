__int64 __fastcall sub_1D718B0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 a6,
        double a7,
        double a8,
        __m128i a9,
        __int64 *a10,
        _BYTE *a11)
{
  __int64 v12; // rdi
  __int64 v17; // rax
  __int64 v18; // r15
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // eax
  __int64 result; // rax
  __int64 v26; // rax
  __int64 v27; // rsi
  _QWORD *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdi
  char v31; // r15
  __int64 *v32; // rax
  _QWORD *v33; // r10
  unsigned __int64 v34; // rax
  __int64 v35; // r10
  unsigned __int64 v36; // rax
  __m128i v37; // xmm0
  __m128i v38; // xmm1
  __int64 v39; // rbx
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rbx
  unsigned __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned int v46; // eax
  __int64 v47; // rax
  unsigned __int64 v48; // r12
  __int64 v49; // rbx
  __int64 v51; // [rsp+10h] [rbp-88h]
  __int64 v52; // [rsp+18h] [rbp-80h]
  __int64 v53; // [rsp+20h] [rbp-78h]
  __int64 v54; // [rsp+20h] [rbp-78h]
  __int64 v55; // [rsp+28h] [rbp-70h]
  __int64 v56; // [rsp+30h] [rbp-68h] BYREF
  __int64 v57; // [rsp+38h] [rbp-60h] BYREF
  __m128i v58; // [rsp+40h] [rbp-58h] BYREF
  __int64 v59; // [rsp+50h] [rbp-48h]

  v12 = a3;
  v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v17 + 16) == 29 )
    v12 = *(_QWORD *)(v17 + 32);
  v18 = sub_1D374C0(v12);
  v56 = *(_QWORD *)(v18 + 32);
  v19 = sub_F22BD0(&v56, 0);
  if ( !v19 || (LOBYTE(v24) = sub_BBDBD0(v19), v21 = v24, result = 0, !(_BYTE)v21) )
  {
    v26 = *(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v26 + 16) != 49 )
      v26 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL), 0, v20, v21);
    v27 = *(unsigned int *)(v26 + 20);
    v28 = (_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL);
    v52 = v26 + 48;
    v29 = *(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL);
    v51 = v27;
    if ( *(_BYTE *)(v29 + 16) == 24 )
      goto LABEL_8;
    v27 = *(_QWORD *)(*(_QWORD *)(v29 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v21 = *(unsigned __int8 *)(v27 + 16);
    if ( (_BYTE)v21 == 24 )
    {
      v29 = sub_F63050(v29, v27, v28, v21);
      v28 = (_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL);
      if ( v29 )
      {
LABEL_8:
        v30 = a4;
        v31 = 1;
        v53 = *(_QWORD *)(v29 + 32);
        goto LABEL_9;
      }
      v36 = *(_QWORD *)(*(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
      v27 = *(_QWORD *)v36;
      v21 = *(unsigned __int8 *)(*(_QWORD *)v36 + 16LL);
    }
    if ( (_BYTE)v21 == 29 )
    {
      v30 = *(_QWORD *)(v27 + 32);
      v31 = 1;
      v53 = 0;
      v28 = (_QWORD *)(v30 & 0xFFFFFFFFFFFFFFF0LL);
    }
    else
    {
      v53 = 0;
      v30 = a4;
      v31 = 0;
    }
LABEL_9:
    if ( *(_BYTE *)(*(_QWORD *)(v28[1] & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 49 )
    {
      v42 = sub_1D374C0(v30);
      v58.m128i_i64[0] = *(_QWORD *)(v42 + 32);
      v43 = sub_F22BD0(v58.m128i_i64, 0);
      if ( !v43 || (LOBYTE(v46) = sub_BBDBD0(v43), v44 = v46, result = 0, !(_BYTE)v44) )
      {
        v47 = *(_QWORD *)(*(_QWORD *)(v42 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v47 + 16) != 49 )
          v47 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v42 + 8) & 0xFFFFFFFFFFFFFFF0LL), 0, v44, v45);
        v48 = *(unsigned int *)(v47 + 20);
        v49 = v47 + 48;
        result = sub_1D3C070(a1, v56, v58.m128i_i64[0], a5, v47 + 48, v48, a6, a10, a11);
        if ( !(_DWORD)result )
          return sub_1D70940(a1, a2, v52, v51, v49, v48, a7, a8, a9, a5, a10, 0, a6, 0);
      }
    }
    else
    {
      v32 = (__int64 *)(*(_QWORD *)(*v28 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(*v32 + 16) == 48
        && (v33 = sub_F60F10(*v32, v27, (__int64)v28, v21, v22, v23), (*((_BYTE *)v33 + 28) & 0x7Fu) - 60 <= 1) )
      {
        v55 = (__int64)v33;
        v34 = sub_BBF290((__int64)v33);
        sub_F22AA0((unsigned __int64 *)&v57, v34);
        v35 = v55;
        if ( v31 )
        {
          v39 = *(_QWORD *)(a1 + 248);
          v40 = sub_BBF290(v55);
          sub_F22AA0((unsigned __int64 *)&v58, v40);
          v41 = sub_A80CA0(v39, v53, 0, v58.m128i_i64[0]);
          v35 = v55;
          v57 = v41;
        }
        v54 = v35;
        result = sub_1D3C070(
                   a1,
                   v56,
                   v57,
                   a5,
                   *(_QWORD *)(v35 + 168) + 8LL,
                   **(unsigned int **)(v35 + 168),
                   a6,
                   a10,
                   a11);
        if ( !(_DWORD)result )
          return sub_1D70940(
                   a1,
                   a2,
                   v52,
                   v51,
                   *(_QWORD *)(v54 + 168) + 8LL,
                   **(unsigned int **)(v54 + 168),
                   a7,
                   a8,
                   a9,
                   a5,
                   a10,
                   1,
                   a6,
                   0);
      }
      else
      {
        sub_F1D250((__int64)&v58, a3, 0, 0);
        v37 = _mm_load_si128(&v58);
        *(_QWORD *)(a5 + 200) = v59;
        *(__m128i *)(a5 + 184) = v37;
        sub_F1D250((__int64)&v58, a4, 0, 0);
        v38 = _mm_load_si128(&v58);
        *(_QWORD *)(a5 + 224) = v59;
        *(__m128i *)(a5 + 208) = v38;
        return 10;
      }
    }
  }
  return result;
}
