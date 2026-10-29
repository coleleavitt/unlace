__int64 __fastcall sub_1BD3980(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 *v8; // rsi
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 *v12; // rcx
  __int64 *v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // r10
  int v16; // r13d
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rdx
  bool v27; // zf
  __int64 v28; // rdx
  __int64 v29; // r11
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // r8
  __int64 v32; // rbp
  __int64 v33; // rbx
  __int64 v34; // r15
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rdi
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // [rsp+8h] [rbp-80h]
  __int64 *v40; // [rsp+8h] [rbp-80h]
  __int64 v41; // [rsp+8h] [rbp-80h]
  __int64 v42; // [rsp+8h] [rbp-80h]
  unsigned __int8 v43; // [rsp+8h] [rbp-80h]
  __int64 *v44; // [rsp+10h] [rbp-78h]
  __int64 v45; // [rsp+10h] [rbp-78h]
  __int64 v46; // [rsp+10h] [rbp-78h]
  char v47; // [rsp+2Dh] [rbp-5Bh] BYREF
  char v48; // [rsp+2Eh] [rbp-5Ah] BYREF
  char v49; // [rsp+2Fh] [rbp-59h] BYREF
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __m128i si128; // [rsp+38h] [rbp-50h]
  _BYTE v52[64]; // [rsp+48h] [rbp-40h] BYREF

  v6 = a3;
  v7 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v7 + 16) != 11 )
  {
    v21 = *(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v21 + 16) != 11 )
      return 0;
    v7 = sub_F63050(v7, a2, v21, a4);
    if ( !v7 )
      return 0;
  }
  v8 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v9 = *(_QWORD *)(v7 + 32);
  v10 = *v8;
  if ( *(_BYTE *)(*v8 + 16) != 11 )
  {
    v18 = *(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v18 + 16) != 11 )
      return 0;
    v10 = sub_F63050(*v8, v8, v18, a4);
    if ( !v10 )
      return 0;
  }
  v11 = *(_QWORD *)(v10 + 32);
  v12 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
  v13 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
  v14 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v14 + 16) == 26 )
  {
    v15 = *v12;
    if ( *(_BYTE *)(*v12 + 16) == 26 )
      goto LABEL_5;
    goto LABEL_16;
  }
  v39 = *(_QWORD *)(v10 + 32) & 0xFFFFFFFFFFFFFFF0LL;
  v19 = sub_1BC7360(*v13, (__int64)v8, (__int64)v13, (__int64)v12);
  v12 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
  v13 = (__int64 *)v39;
  v14 = v19;
  v15 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v15 + 16) != 26 )
  {
LABEL_16:
    v44 = v12;
    v40 = v13;
    v20 = sub_1BC7360(v15, (__int64)v8, (__int64)v13, (__int64)v12);
    v12 = v44;
    v13 = v40;
    v15 = v20;
  }
  if ( !v14 || !v15 )
    return 0;
LABEL_5:
  if ( (v13[1] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v13[1] | (unsigned __int8)v11) & 7) == (v12[1]
                                                                                                & 0xFFFFFFFFFFFFFFF8LL
                                                                                                | ((unsigned __int8)v12[1]
                                                                                                 | (unsigned __int8)v9)
                                                                                                & 7) )
    return 1;
  v16 = *(unsigned __int16 *)(v14 + 22);
  if ( *(_WORD *)(v15 + 22) != (_WORD)v16
    || (unsigned __int8)BYTE3(*(_QWORD *)(v15 + 16)) >> 7 != (unsigned __int8)BYTE3(*(_QWORD *)(v14 + 16)) >> 7
    || *(_WORD *)(v15 + 20) >> 2 != *(_WORD *)(v14 + 20) >> 2 )
  {
    return 0;
  }
  v22 = *(_QWORD *)(v14 + 24);
  v23 = *(_QWORD *)(v15 + 24);
  v47 = 0;
  v24 = v23 & 7;
  v25 = v22 & 7;
  if ( (*(_QWORD *)&byte_8[v22 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | v25
      | *(_QWORD *)&byte_8[v22 & 0xFFFFFFFFFFFFFFF0LL] & 7LL) != (*(_QWORD *)&byte_8[v23 & 0xFFFFFFFFFFFFFFF0LL]
                                                                & 0xFFFFFFFFFFFFFFF8LL
                                                                | v24
                                                                | *(_QWORD *)&byte_8[v23 & 0xFFFFFFFFFFFFFFF0LL] & 7LL) )
  {
    v26 = *(_QWORD *)(a1 + 232);
    ptr = (void *)v23;
    v41 = v22 & 7;
    v27 = (*(_BYTE *)(v26 + 1) & 8) == 0;
    v28 = *(_QWORD *)&byte_8[v22 & 0xFFFFFFFFFFFFFFF0LL];
    if ( v27 )
    {
      v29 = v28 & 7;
      v30 = v23;
      v31 = v23 & 7;
    }
    else
    {
      v29 = v28 & 7;
      v30 = v23;
      v31 = v23 & 7;
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) == 48 )
        goto LABEL_29;
    }
    if ( !((v28 >> 3) & 1 | (v22 >> 3) & 1 | v29 | v25) )
    {
      if ( v24 | (v23 >> 3) & 1
        || (v41 = *(_QWORD *)&byte_8[v23 & 0xFFFFFFFFFFFFFFF0LL] & 7LL
                | (*(__int64 *)&byte_8[v23 & 0xFFFFFFFFFFFFFFF0LL] >> 3) & 1) != 0 )
      {
        v46 = v15;
        v38 = sub_6D5440(&ptr);
        v15 = v46;
        v41 = 0;
        ptr = (void *)v38;
        v28 = *(_QWORD *)&byte_8[v22 & 0xFFFFFFFFFFFFFFF0LL];
        v30 = v38;
        v31 = v38 & 7;
        v29 = v28 & 7;
      }
      else
      {
        v31 = 0;
        v29 = 0;
      }
    }
LABEL_29:
    if ( (v41 | v29 | v28 & 0xFFFFFFFFFFFFFFF8LL) == (*(_QWORD *)&byte_8[v30 & 0xFFFFFFFFFFFFFFF0LL] | v31)
      || (v42 = v15, (unsigned __int8)sub_1BD2CB0(a1, v22, (__int64)ptr, a4, &v47)) && (v15 = v42, !v47) )
    {
      v16 = *(unsigned __int16 *)(v14 + 22);
      goto LABEL_33;
    }
    return 0;
  }
LABEL_33:
  if ( v16 )
  {
    v45 = v6;
    v32 = v14;
    v33 = 0;
    v34 = v15;
    while ( 1 )
    {
      v47 = 0;
      v35 = *(_QWORD *)(v34 + 8 * v33 + 48);
      v36 = *(_QWORD *)(v32 + 8 * v33 + 48);
      if ( (*(_QWORD *)&byte_8[v36 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)v36 | (unsigned __int8)*(_QWORD *)&byte_8[v36 & 0xFFFFFFFFFFFFFFF0LL]) & 7) != (*(_QWORD *)&byte_8[v35 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v35 | (unsigned __int8)*(_QWORD *)&byte_8[v35 & 0xFFFFFFFFFFFFFFF0LL]) & 7)
        && (!(unsigned __int8)sub_1BD2CB0(a1, v35, v36, a4, &v47) || v47) )
      {
        return 0;
      }
      if ( v16 == (_DWORD)++v33 )
      {
        v14 = v32;
        v6 = v45;
        v15 = v34;
        break;
      }
    }
  }
  v37 = *(_QWORD *)(a1 + 248);
  ptr = v52;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8870);
  result = sub_A641E0(v37, v15, v14, &v48, &v49, (__int64)&ptr);
  if ( (_BYTE)result )
    *a4 = v6;
  if ( ptr != v52 )
  {
    v43 = result;
    free(ptr);
    return v43;
  }
  return result;
}
