__int64 __fastcall sub_1D39840(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // rbx
  unsigned __int64 v10; // rcx
  __int64 v12; // rdi
  unsigned __int64 v13; // r12
  __int64 v14; // r13
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rax
  _QWORD *v21; // rax
  bool v22; // dl
  __int64 result; // rax
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // r8
  char v29; // al
  __int64 *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rsi
  __int64 v33; // r8
  __int64 v34; // rdi
  __int64 v35; // rax
  __m128i v36; // xmm0
  __int64 v37; // rax
  char v38; // al
  __m128i v39; // xmm2
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // r13
  __int64 v45; // rax
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // [rsp+0h] [rbp-88h]
  __int64 v49; // [rsp+0h] [rbp-88h]
  __int64 v50; // [rsp+0h] [rbp-88h]
  __int64 v51; // [rsp+0h] [rbp-88h]
  unsigned __int64 v52; // [rsp+8h] [rbp-80h]
  __int64 *v53; // [rsp+8h] [rbp-80h]
  __int64 v54; // [rsp+8h] [rbp-80h]
  __int64 v55; // [rsp+10h] [rbp-78h]
  unsigned __int64 v56; // [rsp+10h] [rbp-78h]
  __int64 *v57; // [rsp+10h] [rbp-78h]
  __int64 *v58; // [rsp+18h] [rbp-70h]
  char v59; // [rsp+27h] [rbp-61h] BYREF
  __int64 v60; // [rsp+28h] [rbp-60h] BYREF
  __m128i v61; // [rsp+30h] [rbp-58h] BYREF
  __int64 v62; // [rsp+40h] [rbp-48h]

  v9 = a3;
  v10 = a3 & 0xFFFFFFFFFFFFFFF0LL;
  v48 = *(_QWORD *)(a1 + 248);
  v60 = a9;
  if ( *(_QWORD *)(*(_QWORD *)&byte_8[a9 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
    return 0;
  v12 = *(_QWORD *)v10;
  v13 = a2;
  v14 = a7;
  v15 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v10 + 16LL) - 43;
  if ( (unsigned int)v15 <= 1 || (v12 = sub_1D379A0(v12, a2, v15, v10)) != 0 )
    v9 = sub_9B4870(v12, a2, v15, v10, a5);
  v16 = *(_QWORD *)(v60 & 0xFFFFFFFFFFFFFFF0LL);
  v17 = (unsigned int)*(unsigned __int8 *)(v16 + 16) - 43;
  if ( (unsigned int)v17 <= 1 || (v16 = sub_1D379A0(v16, a2, v17, v10)) != 0 )
    v60 = sub_9B4870(v16, a2, v17, v10, a5);
  v18 = *(_QWORD *)(a7 & 0xFFFFFFFFFFFFFFF0LL);
  v19 = (unsigned int)*(unsigned __int8 *)(v18 + 16) - 43;
  if ( (unsigned int)v19 > 1 )
  {
    v18 = sub_1D379A0(v18, a2, v19, v10);
    if ( !v18 )
    {
      v21 = (_QWORD *)(v60 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_14;
    }
  }
  v20 = sub_9B4870(v18, a2, v19, v10, a5);
  a2 = v60;
  v14 = v20;
  v21 = (_QWORD *)(v60 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v60 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 25 <= 1 )
  {
    v22 = sub_1BE5710(a1, v60, v9, nullptr, nullptr);
    result = 0;
    if ( v22 )
      return result;
    a2 = v60;
    v21 = (_QWORD *)(v60 & 0xFFFFFFFFFFFFFFF0LL);
  }
  v24 = v21[1];
  v25 = 0;
  if ( (v24 & 8) != 0 )
    v25 = *(__int64 *)((char *)&qword_18 + (v24 & 0xFFFFFFFFFFFFFFF0LL));
  v26 = *(_QWORD *)&byte_8[v9 & 0xFFFFFFFFFFFFFFF0LL];
  v27 = v25 | ((unsigned __int8)a2 | (unsigned __int8)v21[1]) & 7;
  v28 = ((unsigned __int8)v9 | (unsigned __int8)v26) & 7;
  if ( (v26 & 8) != 0 )
  {
    v28 |= *(__int64 *)((char *)&qword_18 + (v26 & 0xFFFFFFFFFFFFFFF0LL));
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 107LL) & 4) != 0 )
    {
      v41 = (v28 >> 6) & 7;
      if ( (_DWORD)v41 == 2 )
      {
        if ( (v25 & 0x1C0) != 0 )
          goto LABEL_13;
        goto LABEL_47;
      }
      if ( (_DWORD)v41 == 1 && (v28 & 1) != 0 )
LABEL_47:
        v27 = (int)((_DWORD)v41 << 6) | v25 & 0xFFFFFFFFFFFFFE3FLL | ((unsigned __int8)a2 | (unsigned __int8)v21[1]) & 7;
    }
  }
LABEL_13:
  if ( v27 != v28 )
  {
    if ( (unsigned int)v27 >> 9 != (unsigned int)v28 >> 9
      && (v56 = v28,
          v52 = v27,
          v38 = sub_F56A30((unsigned int)v28 >> 9, (unsigned int)v27 >> 9, *(_QWORD *)(a1 + 248)),
          v27 = v52,
          v28 = v56,
          !v38)
      || ((v28 >> 4) & 3) != ((v27 >> 4) & 3) && (v28 & 0x30) != 0 && (v27 & 0x30) != 0
      || HIDWORD(v27) != HIDWORD(v28)
      || ((v28 >> 6) & 7) != ((v27 >> 6) & 7)
      || ((unsigned __int8)v27 & (unsigned __int8)~(_BYTE)v28 & 7) != 0
      || (v27 & 8) != 0 && (v28 & 8) == 0 )
    {
      sub_F1D250((__int64)&v61, v9, 0, 0);
      v39 = _mm_load_si128(&v61);
      *(_QWORD *)(v13 + 200) = v62;
      *(__m128i *)(v13 + 184) = v39;
      sub_F1D250((__int64)&v61, a9, 0, 0);
      *(__m128i *)(v13 + 208) = _mm_load_si128(&v61);
      goto LABEL_30;
    }
    v54 = v28;
    a2 = sub_6D5440(&v60);
    v60 = sub_A70F20(v48, a2, v54);
    v21 = (_QWORD *)(v60 & 0xFFFFFFFFFFFFFFF0LL);
  }
LABEL_14:
  v59 = 0;
  v29 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v21 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (unsigned __int8)(v29 - 33) > 1u && v29 != 42
    || !sub_1BD41F0(a1, v60, v9, 0, &v59) && (a2 = v60, !sub_1BE5710(a1, v60, v9, nullptr, nullptr)) )
  {
    v30 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
    v31 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v31 + 16) == 42
      || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v31 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42
      && (v40 = sub_F63050(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL), a2, v31, v30),
          v30 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF0LL),
          (v31 = v40) != 0) )
    {
      v32 = *v30;
      if ( *(_BYTE *)(*v30 + 16) == 42
        || (v50 = v31, *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v32 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42)
        && (v53 = v30, v42 = sub_F63050(v32, v32, v31, v30), v30 = v53, v31 = v50, (v32 = v42) != 0) )
      {
        v33 = *(_QWORD *)(v60 & 0xFFFFFFFFFFFFFFF0LL);
        v34 = v33;
        if ( *(_BYTE *)(v33 + 16) != 42 )
        {
          v57 = v30;
          v51 = v31;
          v43 = sub_1D379D0(v33, v32, v31, (__int64)v30);
          v31 = v51;
          v33 = v43;
          v30 = v57;
          if ( !v43 )
            goto LABEL_27;
          v34 = *(_QWORD *)(v60 & 0xFFFFFFFFFFFFFFF0LL);
        }
        v58 = v30;
        v55 = v33;
        v49 = v31;
        v35 = sub_F68450(v34, v32, v31, (__int64)v30, v33);
        v30 = v58;
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v35 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) == 48 )
        {
          v9 = *(_QWORD *)(v32 + 32);
          v14 = *(_QWORD *)(v49 + 32);
          v60 = *(_QWORD *)(v55 + 32);
          v30 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
        }
      }
    }
LABEL_27:
    if ( *(_QWORD *)(*(_QWORD *)&byte_8[v60 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(v30[1] & 0xFFFFFFFFFFFFFFF0LL) )
    {
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v60 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) != 48 )
      {
LABEL_29:
        sub_F1D250((__int64)&v61, v9, 0, 0);
        v36 = _mm_load_si128(&v61);
        *(_QWORD *)(v13 + 200) = v62;
        *(__m128i *)(v13 + 184) = v36;
        sub_F1D250((__int64)&v61, a9, 0, 0);
        *(__m128i *)(v13 + 208) = _mm_load_si128(&v61);
LABEL_30:
        v37 = v62;
        *(_DWORD *)(v13 + 232) = HIDWORD(a8);
        *(_QWORD *)(v13 + 224) = v37;
        return (unsigned int)((_BYTE)a8 != 0) + 8;
      }
      v44 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL);
      v45 = sub_F6A860(*v44);
      if ( v45 )
      {
        v61.m128i_i64[0] = *(_QWORD *)(v45 + 32);
        if ( !sub_F22BD0(v61.m128i_i64, 0) )
          goto LABEL_29;
      }
      else if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v44 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 29 )
      {
        goto LABEL_29;
      }
      if ( !(unsigned __int8)sub_183BD10(a1, *(unsigned int *)(v13 + 16), v60, v9, v46, v47) )
        goto LABEL_29;
    }
  }
  return 0;
}
