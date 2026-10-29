unsigned __int64 __fastcall sub_6C5920(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6)
{
  int v7; // r14d
  unsigned __int64 v10; // rdx
  int v11; // ecx
  _QWORD *v12; // rsi
  unsigned __int64 v13; // rbp
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  _QWORD *v16; // rsi
  __int64 v17; // rax
  unsigned __int64 v18; // rbp
  unsigned __int64 *v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v24; // rax
  _BYTE *v25; // r15
  signed __int64 v26; // r12
  __int64 v27; // rax
  __int64 v28; // rdx
  bool v29; // cf
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // r13
  char *v32; // rax
  char *v33; // r14
  __int64 v34; // rcx
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rsi
  __int64 v38; // [rsp+0h] [rbp-48h]
  __int64 v39; // [rsp+0h] [rbp-48h]
  int v40; // [rsp+8h] [rbp-40h]

  v7 = a2;
  v10 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v11 = a2 & 7;
  if ( (*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)(a2
                                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                                    + 8LL)
    && (a2 & 7) == 0
    && (a2 & 8) == 0 )
  {
    goto LABEL_7;
  }
  v12 = (_QWORD *)(*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
  v13 = v11 & 7 | *(_QWORD *)(v10 + 8) & 7;
  if ( !(*(_BYTE *)(v10 + 8) & 8 | v11 & 8) )
  {
    LODWORD(v14) = sub_6C5920(a1, v12, a3, a4, a5, a6);
    goto LABEL_14;
  }
  v13 |= *(__int64 *)((char *)&qword_18 + (*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL | v11 & 0xFFFFFFF0));
  v14 = sub_6C5920(a1, *v12 & 0xFFFFFFFFFFFFFFF0LL, a3, a4, a5, a6);
  if ( v13 <= 7 )
  {
LABEL_14:
    v11 = v14 & 0xFFFFFFF8 | v13 | v14 & 7;
    goto LABEL_7;
  }
  v15 = v13 | v14 & 7;
  v16 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (v14 & 8) != 0 )
  {
    v15 |= *(__int64 *)((char *)&qword_18 + (v14 & 0xFFFFFFFFFFFFFFF0LL));
    v16 = (_QWORD *)*v16;
  }
  v11 = sub_6C3980((_QWORD *)a1, (unsigned __int64)v16, v15);
LABEL_7:
  v17 = *(_QWORD *)(a1 + 2192);
  *(_QWORD *)(a1 + 2272) += 64LL;
  v18 = (v17 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( *(_QWORD *)(a1 + 2200) >= v18 + 64 && v17 )
  {
    *(_QWORD *)(a1 + 2192) = v18 + 64;
  }
  else
  {
    v40 = v11;
    v24 = sub_6A76A0(a1 + 2192, 64, 4);
    v11 = v40;
    v18 = v24;
  }
  sub_B05CB0(v18, 6, v7, v11, a4, a5, a3);
  *(_QWORD *)(v18 + 40) = a3;
  *(_QWORD *)(v18 + 48) = a6;
  v19 = *(unsigned __int64 **)(a1 + 200);
  if ( v19 == *(unsigned __int64 **)(a1 + 208) )
  {
    v25 = *(_BYTE **)(a1 + 192);
    v26 = (char *)v19 - v25;
    v27 = ((char *)v19 - v25) >> 3;
    if ( v27 == 0xFFFFFFFFFFFFFFFLL )
      std::__throw_length_error("vector::_M_realloc_append");
    v28 = 1;
    if ( v27 )
      v28 = v27;
    v29 = __CFADD__(v28, v27);
    v30 = v28 + v27;
    if ( v29 )
    {
      v31 = 0x7FFFFFFFFFFFFFF8LL;
    }
    else
    {
      if ( v30 > 0xFFFFFFFFFFFFFFFLL )
        v30 = 0xFFFFFFFFFFFFFFFLL;
      v31 = 8 * v30;
    }
    v32 = (char *)operator new(v31);
    *(_QWORD *)&v32[v26] = v18;
    v33 = v32;
    v34 = (__int64)&v32[v26 + 8];
    if ( v26 > 0 )
    {
      v38 = (__int64)&v32[v26 + 8];
      memcpy(v32, v25, v26);
      v34 = v38;
      v36 = *(_QWORD *)(a1 + 208) - (_QWORD)v25;
    }
    else
    {
      if ( !v25 )
        goto LABEL_28;
      v36 = *(_QWORD *)(a1 + 208) - (_QWORD)v25;
    }
    v39 = v34;
    operator delete(v25, v36);
    v34 = v39;
LABEL_28:
    v20 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 200) = v34;
    v35 = *(unsigned int *)(a1 + 20);
    *(_QWORD *)(a1 + 192) = v33;
    v22 = v20 + 1;
    *(_QWORD *)(a1 + 208) = &v33[v31];
    if ( v35 >= v20 + 1 )
      goto LABEL_12;
LABEL_29:
    sub_25D6060(a1 + 8, a1 + 24, v22, 8);
    v20 = *(unsigned int *)(a1 + 16);
    goto LABEL_12;
  }
  *v19 = v18;
  v20 = *(unsigned int *)(a1 + 16);
  v21 = *(unsigned int *)(a1 + 20);
  *(_QWORD *)(a1 + 200) += 8LL;
  v22 = v20 + 1;
  if ( v21 < v20 + 1 )
    goto LABEL_29;
LABEL_12:
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v20) = v18;
  ++*(_DWORD *)(a1 + 16);
  return v18 & 0xFFFFFFFFFFFFFFF0LL;
}

