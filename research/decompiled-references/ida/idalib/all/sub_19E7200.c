char __fastcall sub_19E7200(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  _QWORD *v9; // r13
  __int64 v10; // rax
  __int64 v11; // r11
  __int64 v12; // rdx
  unsigned __int64 *v13; // r15
  char v14; // cl
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  char v22; // al
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // r8
  unsigned int v25; // edi
  char result; // al
  __int64 v27; // rax
  __int64 v28; // rbp
  __int64 v29; // rdx
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  unsigned __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // r12
  __int64 v39; // rcx
  unsigned __int64 v40; // rbp
  __int64 v41; // rdx
  __int64 v42; // rax
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // rcx
  unsigned __int64 *v47; // [rsp+8h] [rbp-60h]
  unsigned __int8 v48; // [rsp+10h] [rbp-58h]
  unsigned __int64 v50; // [rsp+20h] [rbp-48h]
  __int64 v51; // [rsp+20h] [rbp-48h]
  __int64 v52; // [rsp+28h] [rbp-40h]

  v7 = a1 & 0xFFFFFFFFFFFFFFF0LL;
  v8 = a2;
  v9 = (_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
  v10 = *(_QWORD *)&byte_8[a1 & 0xFFFFFFFFFFFFFFF0LL];
  v11 = *(_QWORD *)(a3 + 248);
  v12 = 0;
  v48 = a1;
  if ( (v10 & 8) != 0 )
    v12 = *(__int64 *)((char *)&qword_18 + (v10 & 0xFFFFFFFFFFFFFFF0LL));
  v13 = (unsigned __int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v14 = a1 | v10;
  v15 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v47 = (unsigned __int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v16 = v12 | v14 & 7;
  v17 = v16;
  v18 = *(_QWORD *)(v15 + 8) & 7LL;
  if ( v18 | (*(__int64 *)(v15 + 8) >> 3) & 1 )
  {
    v52 = v11;
    v15 = sub_F64F00(a2, a2, v18, v16, a5);
    v11 = v52;
  }
  v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v19 + 16) == 13 && ((*(_WORD *)(v19 + 18) >> 3) & 0x1FF) == 0x1B3 )
    v17 &= ~8uLL;
  v20 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL];
  v21 = 0;
  if ( (v20 & 8) != 0 )
    v21 = *(__int64 *)((char *)&qword_18 + (v20 & 0xFFFFFFFFFFFFFFF0LL));
  v22 = a2 | v20;
  v23 = (unsigned int)v17 >> 9;
  v24 = v21 | v22 & 7;
  v25 = ((unsigned int)v21 | v22 & 7) >> 9;
  if ( (_DWORD)v23 != v25 )
  {
    v50 = v21 | v22 & 7;
    result = sub_F56A30(v25, v23, v11);
    v24 = v50;
    if ( !result )
      return result;
  }
  if ( ((v24 >> 4) & 3) != ((v17 >> 4) & 3) && (v24 & 0x30) != 0 && (v17 & 0x30) != 0 )
    return 0;
  if ( HIDWORD(v17) != HIDWORD(v24) )
    return 0;
  if ( ((v24 >> 6) & 7) != ((v17 >> 6) & 7) )
    return 0;
  v51 = (unsigned __int8)v17 & (unsigned __int8)~(_BYTE)v24 & 7;
  if ( ((unsigned __int8)v17 & (unsigned __int8)~(_BYTE)v24 & 7) != 0 )
    return 0;
  if ( (v17 & 8) != 0 )
  {
    v24 &= 8u;
    if ( !(_DWORD)v24 )
      return 0;
  }
  if ( v7 )
  {
    v27 = *(_QWORD *)v7;
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v7 + 16LL) - 43 <= 1 )
    {
      while ( 1 )
      {
        v28 = *(_QWORD *)(v27 + 32);
        if ( (*(_BYTE *)(v27 + 18) & 0x10) == 0 )
          break;
        while ( 1 )
        {
          v27 = *(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL);
          v29 = (unsigned int)*(unsigned __int8 *)(v27 + 16) - 43;
          if ( (unsigned int)v29 <= 1 )
            break;
          v30 = sub_F63050(v27, v23, v29, v16);
          v28 = *(_QWORD *)(v30 + 32);
          if ( (*(_BYTE *)(v30 + 18) & 0x10) == 0 )
            goto LABEL_29;
        }
      }
LABEL_29:
      v48 = v28;
      v9 = (_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL);
    }
  }
  v31 = *v13;
  if ( v13 && (unsigned int)*(unsigned __int8 *)(v31 + 16) - 43 <= 1 )
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(v31 + 32);
      if ( (*(_BYTE *)(v31 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v32 = v8 & 0xFFFFFFFFFFFFFFF0LL;
        v31 = *(_QWORD *)v32;
        v33 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v32 + 16LL) - 43;
        if ( (unsigned int)v33 <= 1 )
          break;
        v34 = sub_F63050(v31, v23, v33, v16);
        v8 = *(_QWORD *)(v34 + 32);
        if ( (*(_BYTE *)(v34 + 18) & 0x10) == 0 )
          goto LABEL_35;
      }
    }
LABEL_35:
    v47 = (unsigned __int64 *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
    v31 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
  }
  v35 = *v9;
  if ( *(_BYTE *)(*v9 + 16LL) == 42 && *(_BYTE *)(v31 + 16) == 42 )
  {
    v45 = *(_QWORD *)(v35 + 32);
    v46 = *(_QWORD *)&byte_8[v45 & 0xFFFFFFFFFFFFFFF0LL];
    v48 = v46 & 0xF8 | (v46 | v45) & 7;
    v23 = v46 & 0xFFFFFFFFFFFFFFF0LL;
    v9 = (_QWORD *)(v46 & 0xFFFFFFFFFFFFFFF0LL);
    v8 = *(_QWORD *)&byte_8[*(_QWORD *)(v31 + 32) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
       | ((unsigned __int8)*(_QWORD *)&byte_8[*(_QWORD *)(v31 + 32) & 0xFFFFFFFFFFFFFFF0LL]
        | (unsigned __int8)*(_QWORD *)(v31 + 32))
       & 7;
    v35 = *(_QWORD *)(v46 & 0xFFFFFFFFFFFFFFF0LL);
    v47 = (unsigned __int64 *)(*(_QWORD *)&byte_8[*(_QWORD *)(v31 + 32) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
    v31 = *v47;
  }
  v36 = v35 & 0xFFFFFFFFFFFFFFF0LL;
  if ( v36 != (v31 & 0xFFFFFFFFFFFFFFF0LL) )
  {
    v23 = a4;
    result = sub_183BD10(a3, a4, v36, v31 & 0xFFFFFFFFFFFFFFF0LL, v24, a6);
    if ( !result )
      return result;
    v31 = *v47;
  }
  v37 = v9[1];
  v38 = *(_QWORD *)(a3 + 248);
  v39 = 0;
  if ( (v37 & 8) != 0 )
    v39 = *(__int64 *)((char *)&qword_18 + (v37 & 0xFFFFFFFFFFFFFFF0LL));
  v40 = v39 | ((unsigned __int8)v37 | v48) & 7;
  v41 = *(_QWORD *)(v31 + 8) & 7LL;
  if ( v41 | (*(__int64 *)(v31 + 8) >> 3) & 1 )
    v31 = sub_F64F00(v8, v23, v41, v41 | (*(__int64 *)(v31 + 8) >> 3) & 1, v24);
  v42 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v31 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v42 + 16) == 13 && ((*(_WORD *)(v42 + 18) >> 3) & 0x1FF) == 0x1B3 )
    v40 &= ~8uLL;
  v43 = v47[1];
  if ( (v43 & 8) != 0 )
    v51 = *(__int64 *)((char *)&qword_18 + (v43 & 0xFFFFFFFFFFFFFFF0LL));
  v44 = v51 | ((unsigned __int8)v43 | (unsigned __int8)v8) & 7;
  if ( (unsigned int)v40 >> 9 == (unsigned int)v44 >> 9
    || (result = sub_F56A30((unsigned int)v44 >> 9, (unsigned int)v40 >> 9, v38)) != 0 )
  {
    return (((v44 >> 4) & 3) == ((v40 >> 4) & 3) || (v44 & 0x30) == 0 || (v40 & 0x30) == 0)
        && HIDWORD(v40) == HIDWORD(v44)
        && ((v44 >> 6) & 7) == ((v40 >> 6) & 7)
        && ((unsigned __int8)v40 & (unsigned __int8)~(_BYTE)v44 & 7) == 0
        && ((v40 & 8) == 0 || (v44 & 8) != 0);
  }
  return result;
}
