__int64 __fastcall sub_14EB580(__int64 a1, __int64 a2)
{
  unsigned int v3; // r15d
  char v4; // r14
  unsigned int v5; // r13d
  _QWORD *v7; // rax
  __int64 v8; // r13
  int v9; // eax
  __int64 v10; // rax
  void **v11; // r12
  unsigned __int64 v12; // rax
  void **v13; // r13
  void **v14; // rbx
  void **v15; // rdi
  void **v16; // rdi
  void **v17; // rbx
  void **v18; // r13
  __m128i v19; // xmm0
  __int64 v20; // rdx
  _QWORD *v21; // rax
  __int64 v22; // r14
  int v23; // eax
  __int64 v24; // r13
  __int64 v25; // rbx
  void *v26; // rdi
  void **v27; // rdi
  void **v28; // rdi
  void **v29; // rbx
  void **v30; // r13
  int v31; // [rsp+0h] [rbp-C8h]
  unsigned int v32; // [rsp+4h] [rbp-C4h]
  unsigned int v33; // [rsp+8h] [rbp-C0h]
  unsigned int v34; // [rsp+Ch] [rbp-BCh]
  __m128i v35; // [rsp+10h] [rbp-B8h] BYREF
  char v36; // [rsp+20h] [rbp-A8h]
  unsigned int v37; // [rsp+24h] [rbp-A4h]
  char v38; // [rsp+28h] [rbp-A0h]
  unsigned int v39; // [rsp+2Ch] [rbp-9Ch]
  char v40; // [rsp+30h] [rbp-98h]
  int v41; // [rsp+34h] [rbp-94h]
  char v42; // [rsp+38h] [rbp-90h]
  char v43; // [rsp+3Ch] [rbp-8Ch]
  void *v44; // [rsp+40h] [rbp-88h] BYREF
  unsigned __int64 v45; // [rsp+48h] [rbp-80h]
  __int64 v46; // [rsp+50h] [rbp-78h]
  void *v47; // [rsp+60h] [rbp-68h]
  _BYTE v48[16]; // [rsp+70h] [rbp-58h] BYREF
  __int16 v49; // [rsp+80h] [rbp-48h]

  v3 = *(_DWORD *)(a2 + 88);
  LODWORD(v44) = 8;
  if ( !(unsigned __int8)sub_14E53D0(a2, &v44, 1) )
  {
    v7 = *(_QWORD **)(a2 + 80);
    v8 = v7[6];
    v9 = sub_C07A10(*(_QWORD *)(a2 + 16), *(_DWORD *)(a2 + 92), v7[11], v7[7], v7[8], nullptr, nullptr);
    sub_FC70B0((__int64)&v44, v8, v9, 15);
    v10 = sub_14DC730(&v44, v3);
    sub_14DC730(v10, 8);
    if ( (_BYTE)v49 )
    {
      sub_FC7790(v46, (__int64 *)&v44, SHIBYTE(v49));
      v46 = 0;
      v49 = 0;
    }
    if ( v47 != v48 )
      operator delete(v47);
    v11 = (void **)v44;
    if ( !v44 )
      goto LABEL_8;
    v12 = v45;
    if ( !v45 )
      goto LABEL_8;
    if ( (unsigned __int64)v44 >= v45 && (unsigned __int64)v44 <= v45 + 14848 )
      goto LABEL_53;
    v13 = *((void ***)v44 + 66);
    v14 = &v13[8 * (unsigned __int64)*((unsigned int *)v44 + 134)];
    if ( v13 != v14 )
    {
      do
      {
        while ( 1 )
        {
          v14 -= 8;
          v15 = (void **)v14[3];
          if ( v15 == v14 + 5 )
            break;
          operator delete(v15);
          if ( v13 == v14 )
            goto LABEL_24;
        }
      }
      while ( v13 != v14 );
LABEL_24:
      v14 = (void **)v11[66];
    }
    if ( v14 != v11 + 68 )
      free(v14);
    v16 = (void **)v11[52];
    if ( v16 != v11 + 54 )
      free(v16);
    v17 = v11 + 48;
    v18 = v11 + 8;
    do
    {
      while ( *v17 != v17 + 2 )
      {
        operator delete(*v17);
        v17 -= 4;
        if ( v18 == v17 )
          goto LABEL_32;
      }
      v17 -= 4;
    }
    while ( v18 != v17 );
    goto LABEL_32;
  }
  if ( v3 == 22 )
  {
    v4 = 0;
    v5 = 5;
    if ( *(_DWORD *)a2 == 1 )
      goto LABEL_12;
    goto LABEL_36;
  }
  if ( v3 <= 0x16 )
  {
    if ( v3 != 21 )
      return sub_14EBAA0();
    v4 = 2;
    v5 = 4;
    if ( *(_DWORD *)a2 == 1 )
    {
LABEL_12:
      v31 = 3;
      goto LABEL_7;
    }
LABEL_36:
    v31 = 4;
    goto LABEL_7;
  }
  if ( v3 == 23 )
  {
    v4 = 1;
    v5 = 6;
    if ( *(_DWORD *)a2 != 1 )
    {
      v31 = 2;
      goto LABEL_7;
    }
    goto LABEL_12;
  }
  if ( v3 == 24 )
  {
    v4 = 3;
    v5 = 7;
    v31 = *(_DWORD *)a2 == 1;
LABEL_7:
    sub_14E8550(&v35, a2, v3, v5);
    if ( !v43 || (unsigned __int8)sub_14E5150(a2, 9u, 17, 0xAu) )
      goto LABEL_8;
    if ( v35.m128i_i8[8] )
    {
      v32 = 1;
      v19 = _mm_cvtsi32_si128(v35.m128i_u32[1]);
      if ( v36 )
        v32 = v35.m128i_u32[3];
      v33 = 0;
      if ( v38 )
        v33 = v37;
      v34 = -1;
      if ( v40 )
        v34 = v39;
      if ( v42 )
        v31 = v41;
      *(_DWORD *)(a1 + 4) = v35.m128i_i32[0];
      *(_BYTE *)a1 = v4;
      *(_BYTE *)(a1 + 28) = 1;
      *(_DWORD *)(a1 + 24) = v31;
      *(__m128i *)(a1 + 8) = _mm_unpacklo_epi64(
                               _mm_unpacklo_epi32(v19, _mm_cvtsi32_si128(v32)),
                               _mm_unpacklo_epi32(_mm_cvtsi32_si128(v33), _mm_cvtsi32_si128(v34)));
      return a1;
    }
    v21 = *(_QWORD **)(a2 + 80);
    v22 = v21[6];
    v23 = sub_C07A10(*(_QWORD *)(a2 + 16), *(_DWORD *)(a2 + 92), v21[11], v21[7], v21[8], nullptr, nullptr);
    sub_FC70B0((__int64)&v44, v22, v23, 1692);
    sub_14DC730(&v44, v5);
    if ( (_BYTE)v49 )
    {
      sub_FC7790(v46, (__int64 *)&v44, SHIBYTE(v49));
      v46 = 0;
      v49 = 0;
    }
    if ( v47 != v48 )
      operator delete(v47);
    v11 = (void **)v44;
    if ( !v44 || (v12 = v45) == 0 )
    {
LABEL_8:
      *(_BYTE *)(a1 + 28) = 0;
      return a1;
    }
    if ( (unsigned __int64)v44 >= v45 && (unsigned __int64)v44 <= v45 + 14848 )
    {
LABEL_53:
      v20 = *(unsigned int *)(v12 + 14976);
      *(_DWORD *)(v12 + 14976) = v20 + 1;
      *(_QWORD *)(v12 + 8 * v20 + 14848) = v11;
      goto LABEL_8;
    }
    v24 = *((_QWORD *)v44 + 66);
    v25 = v24 + ((unsigned __int64)*((unsigned int *)v44 + 134) << 6);
    while ( v24 != v25 )
    {
      while ( 1 )
      {
        v25 -= 64;
        v26 = *(void **)(v25 + 24);
        if ( v26 == (void *)(v25 + 40) )
          break;
        operator delete(v26);
        if ( v24 == v25 )
          goto LABEL_65;
      }
    }
LABEL_65:
    v27 = (void **)v11[66];
    if ( v27 != v11 + 68 )
      free(v27);
    v28 = (void **)v11[52];
    if ( v28 != v11 + 54 )
      free(v28);
    v29 = v11 + 48;
    v30 = v11 + 8;
    do
    {
      while ( *v29 != v29 + 2 )
      {
        operator delete(*v29);
        v29 -= 4;
        if ( v30 == v29 )
          goto LABEL_32;
      }
      v29 -= 4;
    }
    while ( v29 != v30 );
LABEL_32:
    operator delete(v11, 0x3A0u);
    goto LABEL_8;
  }
  return sub_14EBAA0();
}
