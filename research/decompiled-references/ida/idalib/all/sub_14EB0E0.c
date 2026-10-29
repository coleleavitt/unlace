__int64 __fastcall sub_14EB0E0(__int64 a1, __int64 a2)
{
  unsigned int v3; // r12d
  __int64 v4; // rax
  unsigned int v5; // r14d
  char v6; // r13
  _QWORD *v8; // rax
  __int64 v9; // r13
  int v10; // eax
  __int64 v11; // rax
  void **v12; // r12
  unsigned __int64 v13; // rax
  void **v14; // r13
  void **v15; // rbx
  void **v16; // rdi
  void **v17; // rdi
  void **v18; // rbx
  void **v19; // r13
  __int32 v20; // eax
  __m128i v21; // xmm0
  __int64 v22; // rdx
  _QWORD *v23; // rax
  __int64 v24; // r12
  int v25; // eax
  __int64 v26; // r13
  __int64 v27; // rbx
  void *v28; // rdi
  void **v29; // rdi
  void **v30; // rdi
  void **v31; // rbx
  void **v32; // r13
  unsigned int v33; // [rsp+4h] [rbp-C4h]
  unsigned int v34; // [rsp+8h] [rbp-C0h]
  unsigned int v35; // [rsp+Ch] [rbp-BCh]
  __m128i v36; // [rsp+10h] [rbp-B8h] BYREF
  char v37; // [rsp+20h] [rbp-A8h]
  unsigned int v38; // [rsp+24h] [rbp-A4h]
  char v39; // [rsp+28h] [rbp-A0h]
  unsigned int v40; // [rsp+2Ch] [rbp-9Ch]
  char v41; // [rsp+30h] [rbp-98h]
  char v42; // [rsp+34h] [rbp-94h]
  void *v43; // [rsp+40h] [rbp-88h] BYREF
  unsigned __int64 v44; // [rsp+48h] [rbp-80h]
  __int64 v45; // [rsp+50h] [rbp-78h]
  void *v46; // [rsp+60h] [rbp-68h]
  _BYTE v47[16]; // [rsp+70h] [rbp-58h] BYREF
  __int16 v48; // [rsp+80h] [rbp-48h]

  v3 = *(_DWORD *)(a2 + 88);
  LODWORD(v43) = 8;
  if ( !(unsigned __int8)sub_14E53D0(a2, &v43, 1) )
  {
    v8 = *(_QWORD **)(a2 + 80);
    v9 = v8[6];
    v10 = sub_C07A10(*(_QWORD *)(a2 + 16), *(_DWORD *)(a2 + 92), v8[11], v8[7], v8[8], nullptr, nullptr);
    sub_FC70B0((__int64)&v43, v9, v10, 15);
    v11 = sub_14DC730(&v43, v3);
    sub_14DC730(v11, 8);
    if ( (_BYTE)v48 )
    {
      sub_FC7790(v45, (__int64 *)&v43, SHIBYTE(v48));
      v45 = 0;
      v48 = 0;
    }
    if ( v46 != v47 )
      operator delete(v46);
    v12 = (void **)v43;
    if ( !v43 )
      goto LABEL_6;
    v13 = v44;
    if ( !v44 )
      goto LABEL_6;
    if ( (unsigned __int64)v43 >= v44 && (unsigned __int64)v43 <= v44 + 14848 )
    {
LABEL_42:
      v22 = *(unsigned int *)(v13 + 14976);
      *(_DWORD *)(v13 + 14976) = v22 + 1;
      *(_QWORD *)(v13 + 8 * v22 + 14848) = v12;
      goto LABEL_6;
    }
    v14 = *((void ***)v43 + 66);
    v15 = &v14[8 * (unsigned __int64)*((unsigned int *)v43 + 134)];
    if ( v14 != v15 )
    {
      do
      {
        while ( 1 )
        {
          v15 -= 8;
          v16 = (void **)v15[3];
          if ( v16 == v15 + 5 )
            break;
          operator delete(v16);
          if ( v14 == v15 )
            goto LABEL_19;
        }
      }
      while ( v14 != v15 );
LABEL_19:
      v15 = (void **)v12[66];
    }
    if ( v15 != v12 + 68 )
      free(v15);
    v17 = (void **)v12[52];
    if ( v17 != v12 + 54 )
      free(v17);
    v18 = v12 + 48;
    v19 = v12 + 8;
    do
    {
      while ( *v18 != v18 + 2 )
      {
        operator delete(*v18);
        v18 -= 4;
        if ( v19 == v18 )
          goto LABEL_27;
      }
      v18 -= 4;
    }
    while ( v19 != v18 );
LABEL_27:
    operator delete(v12, 0x3A0u);
LABEL_6:
    *(_BYTE *)(a1 + 24) = 0;
    return a1;
  }
  v4 = v3 - 21;
  v33 = 2;
  v5 = dword_2618890[v4];
  v6 = byte_261888C[v4];
  if ( *(_DWORD *)a2 != 1 && v6 != 1 )
    v33 = 4;
  sub_14E9130(&v36, a2, v3, v5);
  if ( !v42 || (unsigned __int8)sub_14E5150(a2, 9u, 17, 0xAu) )
    goto LABEL_6;
  if ( !v36.m128i_i8[8] )
  {
    v23 = *(_QWORD **)(a2 + 80);
    v24 = v23[6];
    v25 = sub_C07A10(*(_QWORD *)(a2 + 16), *(_DWORD *)(a2 + 92), v23[11], v23[7], v23[8], nullptr, nullptr);
    sub_FC70B0((__int64)&v43, v24, v25, 1692);
    sub_14DC730(&v43, v5);
    if ( (_BYTE)v48 )
    {
      sub_FC7790(v45, (__int64 *)&v43, SHIBYTE(v48));
      v45 = 0;
      v48 = 0;
    }
    if ( v46 != v47 )
      operator delete(v46);
    v12 = (void **)v43;
    if ( !v43 )
      goto LABEL_6;
    v13 = v44;
    if ( !v44 )
      goto LABEL_6;
    if ( (unsigned __int64)v43 >= v44 && (unsigned __int64)v43 <= v44 + 14848 )
      goto LABEL_42;
    v26 = *((_QWORD *)v43 + 66);
    v27 = v26 + ((unsigned __int64)*((unsigned int *)v43 + 134) << 6);
    while ( v26 != v27 )
    {
      while ( 1 )
      {
        v27 -= 64;
        v28 = *(void **)(v27 + 24);
        if ( v28 == (void *)(v27 + 40) )
          break;
        operator delete(v28);
        if ( v26 == v27 )
          goto LABEL_54;
      }
    }
LABEL_54:
    v29 = (void **)v12[66];
    if ( v29 != v12 + 68 )
      free(v29);
    v30 = (void **)v12[52];
    if ( v30 != v12 + 54 )
      free(v30);
    v31 = v12 + 48;
    v32 = v12 + 8;
    do
    {
      while ( *v31 != v31 + 2 )
      {
        operator delete(*v31);
        v31 -= 4;
        if ( v32 == v31 )
          goto LABEL_27;
      }
      v31 -= 4;
    }
    while ( v31 != v32 );
    goto LABEL_27;
  }
  v20 = v36.m128i_i32[0];
  v34 = 0;
  v21 = _mm_cvtsi32_si128(v36.m128i_u32[1]);
  if ( v37 )
    v34 = v36.m128i_u32[3];
  v35 = 0;
  if ( v39 )
    v35 = v38;
  if ( v41 )
    v33 = v40;
  *(_BYTE *)a1 = v6;
  *(_DWORD *)(a1 + 4) = v20;
  *(_BYTE *)(a1 + 24) = 1;
  *(__m128i *)(a1 + 8) = _mm_unpacklo_epi64(
                           _mm_unpacklo_epi32(v21, _mm_cvtsi32_si128(v34)),
                           _mm_unpacklo_epi32(_mm_cvtsi32_si128(v35), _mm_cvtsi32_si128(v33)));
  return a1;
}
