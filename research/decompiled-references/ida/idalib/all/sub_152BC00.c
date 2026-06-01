void __fastcall sub_152BC00(__int64 a1, __int64 *a2, __int64 a3, int *a4)
{
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __int16 v9; // ax
  __int64 v10; // rsi
  int v11; // ecx
  __int64 v12; // r13
  __int64 v13; // r12
  __int16 v14; // dx
  __int64 v15; // rax
  int v16; // r12d
  unsigned __int64 v17; // rdx
  __m128i *v18; // rcx
  const __m128i *v19; // rax
  int v20; // r12d
  __int64 v21; // rcx
  void *v22; // r12
  char *v23; // rax
  __int64 v24; // rbp
  char *v25; // rdx
  void *v26; // rax
  __int64 v27; // rcx
  void *v28; // r8
  void *v29; // rax
  __int16 v30; // ax
  int v31; // edx
  __int64 v32; // rax
  int v33; // edx
  __int64 v34; // rsi
  __int64 v35; // [rsp+8h] [rbp-240h]
  _BYTE *v36; // [rsp+8h] [rbp-240h]
  int v37; // [rsp+10h] [rbp-238h] BYREF
  __int64 v38; // [rsp+18h] [rbp-230h]
  __int16 v39; // [rsp+20h] [rbp-228h]
  _BYTE v40[80]; // [rsp+30h] [rbp-218h] BYREF
  void *src; // [rsp+80h] [rbp-1C8h] BYREF
  __int64 v42; // [rsp+88h] [rbp-1C0h]
  _BYTE v43[440]; // [rsp+90h] [rbp-1B8h] BYREF

  sub_14634E0(a2, &v37);
  a2[26] += 40;
  v7 = a2[16];
  v8 = (v7 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( a2[17] >= v8 + 40 && v7 )
    a2[16] = v8 + 40;
  else
    v8 = sub_986170((__int64)(a2 + 16), 40, 40, 4, v5, v6);
  *(_QWORD *)(v8 + 32) = 0;
  *(_OWORD *)(v8 + 16) = 0;
  v9 = v39;
  *(_QWORD *)v8 = a1 + 40;
  if ( v9 != 5 )
  {
LABEL_5:
    if ( v9 != 22 )
    {
      v10 = a2[6];
      v11 = 1842;
LABEL_7:
      sub_FC70B0((__int64)&src, v10, v37, v11);
      sub_AEA040((__int64)&src);
      return;
    }
    if ( *(_QWORD *)(v8 + 16) )
    {
      sub_FC70B0((__int64)&src, a2[6], v37, 1848);
      sub_AEA040((__int64)&src);
      v10 = a2[6];
      v11 = 2050;
      goto LABEL_7;
    }
    *(_DWORD *)(v8 + 8) = 2;
    goto LABEL_22;
  }
  v12 = v38;
  v13 = *(_QWORD *)(v38 + 16);
  if ( (unsigned int)*(_QWORD *)v13 == 4 )
  {
    if ( *(_DWORD *)(v13 + 16) == 1752397168 )
    {
      if ( sub_141A630(5u) )
        goto LABEL_70;
LABEL_46:
      if ( *(_DWORD *)(v13 + 16) == 1752397168 )
      {
        *(_DWORD *)(v8 + 8) = 0;
        goto LABEL_48;
      }
LABEL_17:
      sub_FC70B0((__int64)&src, a2[6], v37, 1846);
      sub_13D35F0((__int64)v40, (__int64)&v37, a2[11], a2[7], nullptr);
      sub_AEC220((unsigned __int8 **)&src, *(_BYTE **)v40, *(signed __int64 *)&v40[8]);
      if ( *(_BYTE **)v40 != &v40[16] )
        operator delete(*(void **)v40);
      sub_AEA040((__int64)&src);
      return;
    }
  }
  else if ( (unsigned int)*(_QWORD *)v13 == 3 && *(_WORD *)(v13 + 16) == 28528 && *(_BYTE *)(v13 + 18) == 112 )
  {
    if ( !sub_141A630(5u) )
      goto LABEL_63;
LABEL_70:
    BUG();
  }
  *(_QWORD *)(v8 + 16) = v38;
  sub_14634E0(a2, &v37);
  if ( v39 != 26 )
  {
    sub_FC70B0((__int64)&src, a2[6], v37, 1841);
    sub_AE9DF0((unsigned __int8 **)&src, v12, 5u);
    sub_AEA040((__int64)&src);
    return;
  }
  sub_14634E0(a2, &v37);
  v9 = v39;
  if ( v39 != 5 )
    goto LABEL_5;
  if ( sub_141A630(5u) )
    goto LABEL_70;
  v13 = *(_QWORD *)(v38 + 16);
  if ( (unsigned int)*(_QWORD *)v13 == 4 )
    goto LABEL_46;
  if ( (unsigned int)*(_QWORD *)v13 != 3 )
    goto LABEL_17;
LABEL_63:
  if ( *(_WORD *)(v13 + 16) != 28528 || *(_BYTE *)(v13 + 18) != 112 )
    goto LABEL_17;
  *(_DWORD *)(v8 + 8) = 1;
LABEL_48:
  sub_14634E0(a2, &v37);
  v31 = *(_DWORD *)(v8 + 8);
  v30 = v39;
  if ( !v31 )
  {
    if ( v39 != 2 )
      goto LABEL_50;
LABEL_55:
    v32 = operator new[](0x18u);
    v33 = *a4;
    *(_QWORD *)(v32 + 8) = v8;
    *(_DWORD *)v32 = v33;
    *(_DWORD *)(v32 + 4) = v33;
    *(_DWORD *)(v32 + 16) = 454;
    sub_14368B0((__int64)a2, (char *)v32, 1, 0, 1u, 0);
    return;
  }
  if ( v31 != 2 )
  {
LABEL_53:
    if ( v30 != 2 )
    {
      sub_FC70B0((__int64)&src, a2[6], v37, 2202);
      sub_1520A40((unsigned __int8 **)&src, (__int64)"clang attribute");
      sub_AEA040((__int64)&src);
    }
    goto LABEL_55;
  }
LABEL_50:
  if ( v39 != 22 )
  {
    sub_FC70B0((__int64)&src, a2[6], v37, 14);
    sub_AE9DF0((unsigned __int8 **)&src, 22, 4u);
    sub_AEA040((__int64)&src);
    return;
  }
LABEL_22:
  sub_14634E0(a2, &v37);
  v14 = v39;
  src = v43;
  v42 = 0x1000000000LL;
  if ( v39 == 2 )
  {
    v20 = v37;
LABEL_67:
    v34 = a2[6];
LABEL_68:
    sub_FC70B0((__int64)v40, v34, v20, 1838);
    sub_AEA040((__int64)v40);
  }
  else
  {
    v15 = 0;
    v16 = 1;
    while ( 1 )
    {
      if ( v14 == 22 )
      {
        ++v16;
      }
      else if ( v14 == 23 && !--v16 )
      {
        v20 = v37;
        if ( !(_DWORD)v15 )
          goto LABEL_67;
        sub_14634E0(a2, &v37);
        *(_QWORD *)&v40[12] = 0x100000000LL;
        *(_DWORD *)v40 = v20;
        *(_QWORD *)&v40[4] = 0;
        sub_141B840((__int64)&src, (const __m128i *)v40);
        v21 = (unsigned int)v42;
        v22 = src;
        v23 = (char *)src;
        v24 = 24LL * (unsigned int)v42;
        v25 = (char *)src + v24;
        if ( (char *)src + v24 != src )
        {
          do
          {
            *((_WORD *)v23 + 9) |= 0x800u;
            v23 += 24;
          }
          while ( v25 != v23 );
        }
        v35 = v21;
        v26 = (void *)sub_15290A0(a2 + 16, v24, 3u);
        v27 = v35;
        v28 = v26;
        if ( v24 )
        {
          v29 = memmove(v26, v22, v24);
          v27 = v35;
          v28 = v29;
        }
        *(_QWORD *)(v8 + 24) = v28;
        *(_QWORD *)(v8 + 32) = v27;
        if ( src != v43 )
          free(src);
        v30 = v39;
        goto LABEL_53;
      }
      v17 = v15 + 1;
      v18 = (__m128i *)((char *)src + 24 * v15);
      v19 = (const __m128i *)&v37;
      if ( v17 > HIDWORD(v42) )
      {
        v36 = src;
        if ( src > &v37 || v18 <= (__m128i *)&v37 )
        {
          sub_2237220(&src, v43, v17, 24);
          v18 = (__m128i *)((char *)src + 24 * (unsigned int)v42);
          v19 = (const __m128i *)&v37;
        }
        else
        {
          sub_2237220(&src, v43, v17, 24);
          v19 = (const __m128i *)((char *)src + (char *)&v37 - v36);
          v18 = (__m128i *)((char *)src + 24 * (unsigned int)v42);
        }
      }
      *v18 = _mm_loadu_si128(v19);
      v18[1].m128i_i64[0] = v19[1].m128i_i64[0];
      LODWORD(v42) = v42 + 1;
      sub_14634E0(a2, &v37);
      v14 = v39;
      if ( v39 == 2 )
        break;
      v15 = (unsigned int)v42;
    }
    v20 = v37;
    v34 = a2[6];
    if ( !(_DWORD)v42 )
      goto LABEL_68;
    sub_FC70B0((__int64)v40, v34, v37, 14);
    sub_AE9DF0((unsigned __int8 **)v40, 23, 4u);
    sub_AEA040((__int64)v40);
  }
  if ( src != v43 )
    free(src);
}
