unsigned __int64 __fastcall sub_17031A0(
        unsigned __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  __int64 *v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int16 v15; // ax
  __int64 *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 *v27; // r13
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rdx
  unsigned __int16 v36; // ax
  __int64 v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // r13
  __int64 *v40; // r14
  __int64 *v41; // r15
  __int64 v42; // rax
  __int64 v43; // rdi
  unsigned __int64 v44; // rdi
  unsigned __int8 v45; // al
  unsigned __int64 v46; // rax
  __int64 v47; // [rsp+10h] [rbp-60h] BYREF
  void *v48; // [rsp+18h] [rbp-58h] BYREF
  __int64 *v49; // [rsp+20h] [rbp-50h]

  if ( (*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v8 = a1;
  if ( (*(_WORD *)a1 & 0x1FF) != 0x4F || ((*(_WORD *)(a1 + 2) >> 3) & 0x7F) != 0xB )
    v8 = sub_BFBAE0(a1);
  v9 = *(_QWORD *)(v8 + 8);
  v10 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
  v11 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v11 + 16) == 20 )
    goto LABEL_7;
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v13 = *(unsigned __int8 *)(v12 + 16);
  if ( (_BYTE)v13 != 20 )
    goto LABEL_10;
  v11 = sub_F63050(*v10, a2, v11, v13);
  if ( v11 )
  {
LABEL_7:
    sub_15B8000((__int64)&v48, a2, v11);
    if ( (char *)v49 - (_BYTE *)v48 == 8 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)v48 + 28LL) & 0x7Fu) - 58 <= 9 )
      {
        v9 = *(_QWORD *)(*(_QWORD *)v48 + 48LL) & 0xFFFFFFFFFFFFFFF0LL;
        operator delete(v48);
        return v9;
      }
    }
    else if ( !v48 )
    {
      goto LABEL_9;
    }
    operator delete(v48);
  }
LABEL_9:
  v11 = *v10;
  v12 = *(_QWORD *)(*(_QWORD *)(*v10 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v13 = *(unsigned __int8 *)(v12 + 16);
LABEL_10:
  if ( (_BYTE)v13 != 13 || ((*(_WORD *)(v12 + 18) >> 3) & 0x1FF) != 0x1F1 )
  {
    v14 = sub_F57E80(v11);
    if ( !v14
      || *(_BYTE *)(v14 + 16) != 16
      || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 16 )
    {
      return v9;
    }
  }
  v15 = *(_WORD *)v8 & 0x1FF;
  if ( ((v15 + 423) & 0x1FFu) > 4 )
    goto LABEL_16;
  v24 = (__int64 *)(sub_17031A0(*(_QWORD *)(v8 + 32), a2) & 0xFFFFFFFFFFFFFFF0LL);
  if ( !v24 )
    goto LABEL_46;
  v27 = v24;
  v28 = *v24;
  v29 = *(_QWORD *)(*(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v29 + 16) != 13 )
  {
LABEL_48:
    v30 = *(unsigned __int8 *)(v28 + 16);
    if ( (_BYTE)v30 == 42 )
      goto LABEL_43;
    v26 = *(_QWORD *)(*(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v26 + 16) == 42 )
    {
      v28 = sub_F63050(v28, a2, v30, v26);
      if ( v28 )
        goto LABEL_43;
      v28 = *v27;
      LOBYTE(v30) = *(_BYTE *)(*v27 + 16);
    }
    goto LABEL_52;
  }
  v25 = *(unsigned __int16 *)(v29 + 18);
  LOWORD(v25) = ((unsigned __int16)v25 >> 3) & 0x1FF;
  if ( (_WORD)v25 == 499 )
  {
LABEL_46:
    v33 = (__int64 *)(sub_BFB570(*(_QWORD *)(v8 + 32), (__int64)a2, v25, v26) & 0xFFFFFFFFFFFFFFF0LL);
    if ( !v33 )
      return v9;
    v27 = v33;
    v28 = *v33;
    goto LABEL_48;
  }
  LOBYTE(v30) = *(_BYTE *)(v28 + 16);
  if ( (_BYTE)v30 == 42 )
  {
LABEL_43:
    v27 = (__int64 *)(*(_QWORD *)(v28 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    goto LABEL_44;
  }
LABEL_52:
  if ( (_BYTE)v30 == 11 )
    goto LABEL_43;
  v34 = *(_QWORD *)(*(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v34 + 16) == 11 )
  {
    v28 = sub_F63050(v28, a2, v34, v26);
    if ( v28 )
      goto LABEL_43;
  }
LABEL_44:
  v31 = *v27;
  v32 = (unsigned int)*(unsigned __int8 *)(*v27 + 16) - 25;
  if ( (unsigned int)v32 <= 1
    || (v35 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v31 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25,
        (unsigned int)v35 <= 1)
    && (v31 = sub_F63050(*v27, a2, v35, v26)) != 0 )
  {
    v48 = *(void **)(v31 + 24);
    return sub_C1BEF0((__int64)&v48, (__int64)a2, v32, v26);
  }
  v13 = *(_QWORD *)(v8 + 32);
  v36 = *(_WORD *)v13 & 0x1FF;
  if ( (unsigned int)v36 - 23 > 1 )
    goto LABEL_76;
  v37 = v13 + 64;
  v38 = v13 + 80;
  if ( v36 == 24 )
    v38 = v13 + 64;
  v39 = 0;
  v40 = (__int64 *)(v38 + 8LL * *(unsigned int *)(v13 + 4));
  v41 = (__int64 *)v38;
  if ( (__int64 *)v38 == v40 )
    goto LABEL_76;
  do
  {
    v43 = *v41;
    v48 = nullptr;
    v44 = v43 & 0xFFFFFFFFFFFFFFF8LL;
    v45 = *(_BYTE *)(v44 + 28) & 0x7F;
    v13 = (unsigned int)v45 - 34;
    if ( (unsigned int)v13 > 5 )
    {
      if ( v45 != 71 )
        goto LABEL_71;
      v44 = *(_QWORD *)(v44 + 48);
    }
    v48 = (void *)sub_C1D490(v44, v37, v38, v13);
    if ( ((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v42 = *(_QWORD *)(*(_QWORD *)&byte_8[sub_C1BEF0((__int64)&v48, v37, v38, v13) & 0xFFFFFFFFFFFFFFF0LL]
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( v39 && v42 != v39 )
        return v9;
      v39 = v42;
    }
LABEL_71:
    ++v41;
  }
  while ( v40 != v41 );
  if ( v39 )
    return v39 & 0xFFFFFFFFFFFFFFF0LL;
LABEL_76:
  v15 = *(_WORD *)v8 & 0x1FF;
LABEL_16:
  if ( v15 == 109 )
  {
    v16 = a2;
    sub_15B8AF0((__int64)&v48, a2, (_QWORD *)v8, v13, a5, a6);
    if ( v48 == v49 )
    {
      if ( v48 )
        goto LABEL_79;
    }
    else
    {
      v17 = *(_QWORD *)v48;
      if ( (*(_BYTE *)(*(_QWORD *)v48 + 28LL) & 0x7Fu) - 26 <= 0x1A )
      {
LABEL_19:
        v47 = *(_QWORD *)(v17 + 48);
        v9 = sub_C1BEF0((__int64)&v47, (__int64)v16, v17, (__int64)v49);
        if ( v48 )
          operator delete(v48);
        return v9;
      }
      v16 = (__int64 *)v48;
      while ( v49 != ++v16 )
      {
        v17 = *v16;
        if ( (*(_BYTE *)(*v16 + 28) & 0x7Fu) - 26 <= 0x1A )
          goto LABEL_19;
      }
LABEL_79:
      operator delete(v48);
    }
    v15 = *(_WORD *)v8 & 0x1FF;
  }
  if ( v15 == 71 )
  {
    v18 = *(_QWORD *)(v8 + 16);
    if ( (*(_BYTE *)(v18 + 28) & 0x7Fu) - 40 > 6 )
      return v9;
    if ( sub_B735C0(*(_QWORD *)(v8 + 16)) )
    {
      v46 = sub_B73640(v18);
      return sub_17031A0(v46, a2);
    }
    v15 = *(_WORD *)v8 & 0x1FF;
  }
  if ( v15 == 4 && *(_BYTE *)(v8 + 2) >> 3 == 5 )
  {
    v19 = sub_17031A0(*(_QWORD *)(v8 + 16), a2);
    v23 = sub_F68450(*(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v20, v21, v22);
    if ( (v23 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      return v23;
  }
  return v9;
}
