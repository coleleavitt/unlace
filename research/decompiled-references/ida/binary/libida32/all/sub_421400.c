unsigned __int64 __fastcall sub_421400(__int64 a1, unsigned int a2, signed __int64 a3, _BYTE *a4)
{
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v9; // rdx
  __int64 v10; // rbp
  unsigned int v11; // r12d
  unsigned __int64 v12; // rax
  _BYTE *v13; // rbp
  _BYTE *v14; // rcx
  _BYTE *v15; // r15
  _BYTE *v16; // r14
  __int64 v17; // rbp
  __int64 v18; // rbp
  __int64 *v19; // rax
  unsigned int *v20; // rax
  signed __int64 v22; // rbp
  signed __int64 v23; // r15
  bool v24; // cf
  unsigned __int64 v25; // r15
  __int64 v26; // rax
  _BYTE *v27; // r8
  _BYTE *v28; // r15
  _BYTE *v29; // rax
  _BYTE *v30; // rbp
  signed __int64 v31; // rbp
  __int64 v32; // r13
  unsigned __int64 v33; // r13
  _BYTE *v34; // rax
  void *v35; // rcx
  unsigned __int64 v36; // rsi
  __int64 v37; // rax
  _BYTE *srca; // [rsp+8h] [rbp-60h]
  _BYTE *srcb; // [rsp+8h] [rbp-60h]
  _BYTE *srcc; // [rsp+8h] [rbp-60h]
  _BYTE *srcd; // [rsp+8h] [rbp-60h]
  void *src; // [rsp+8h] [rbp-60h]
  _BYTE *v43; // [rsp+10h] [rbp-58h]
  unsigned int v44; // [rsp+1Ch] [rbp-4Ch] BYREF
  __int64 v45; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v46; // [rsp+28h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 72);
  v6 = *(_QWORD *)(a1 + 8);
  v44 = a2;
  v7 = v6 - *(_QWORD *)a1 - v5;
  v46 = __readfsqword(0x28u);
  if ( v7 < v5 )
    sub_420DD0(a1);
  v9 = *(_QWORD *)(a1 + 80);
  v10 = v44;
  v11 = v44;
  v12 = (*(_QWORD *)(a1 + 88) - v9) >> 2;
  if ( v44 >= v12 )
  {
    v36 = v44 + 1;
    if ( v12 < v36 )
    {
      sub_420C60(a1 + 80, v36 - v12);
      v9 = *(_QWORD *)(a1 + 80);
    }
    else if ( v36 < v12 )
    {
      v37 = v9 + 4 * v36;
      if ( *(_QWORD *)(a1 + 88) != v37 )
        *(_QWORD *)(a1 + 88) = v37;
    }
  }
  *(_DWORD *)(v9 + 4 * v10) = (__int64)(*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) >> 2;
  v13 = *(_BYTE **)(a1 + 8);
  v14 = *(_BYTE **)a1;
  v15 = *(_BYTE **)(a1 + 16);
  if ( a3 )
  {
    if ( v15 - v13 >= (unsigned __int64)a3 )
    {
      if ( a3 <= 1 )
      {
        if ( a3 == 1 )
        {
          *v13 = *a4;
          v13 = *(_BYTE **)(a1 + 8);
          v14 = *(_BYTE **)a1;
          v15 = *(_BYTE **)(a1 + 16);
        }
      }
      else
      {
        memmove(*(void **)(a1 + 8), a4, a3);
        v13 = *(_BYTE **)(a1 + 8);
        v14 = *(_BYTE **)a1;
        v15 = *(_BYTE **)(a1 + 16);
      }
      v13 += a3;
      *(_QWORD *)(a1 + 8) = v13;
      goto LABEL_9;
    }
    v22 = v13 - v14;
    if ( 0x7FFFFFFFFFFFFFFFLL - v22 < (unsigned __int64)a3 )
      std::__throw_length_error("vector::_M_range_insert");
    v23 = v22;
    if ( a3 >= (unsigned __int64)v22 )
      v23 = a3;
    v24 = __CFADD__(v22, v23);
    v25 = v22 + v23;
    if ( v24 )
    {
      v25 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else
    {
      if ( !v25 )
      {
        v28 = nullptr;
        v27 = nullptr;
LABEL_23:
        if ( v22 <= 1 )
        {
          if ( v22 == 1 )
            *v27 = *v14;
        }
        else
        {
          srcb = v14;
          v29 = memmove(v27, v14, v22);
          v14 = srcb;
          v27 = v29;
        }
        v30 = &v27[v22];
        if ( a3 <= 1 )
        {
          if ( a3 == 1 )
            *v30 = *a4;
        }
        else
        {
          v43 = v27;
          srcc = v14;
          memmove(v30, a4, a3);
          v14 = srcc;
          v27 = v43;
        }
        v13 = &v30[a3];
        if ( v14 )
        {
          srcd = v27;
          operator delete(v14, *(_QWORD *)(a1 + 16) - (_QWORD)v14);
          v27 = srcd;
        }
        *(_QWORD *)a1 = v27;
        v14 = v27;
        *(_QWORD *)(a1 + 8) = v13;
        *(_QWORD *)(a1 + 16) = v28;
        if ( v13 != v28 )
          goto LABEL_10;
        goto LABEL_30;
      }
      if ( v25 > 0x7FFFFFFFFFFFFFFFLL )
        v25 = 0x7FFFFFFFFFFFFFFFLL;
    }
    srca = *(_BYTE **)a1;
    v26 = operator new(v25);
    v14 = srca;
    v27 = (_BYTE *)v26;
    v28 = (_BYTE *)(v26 + v25);
    goto LABEL_23;
  }
LABEL_9:
  if ( v13 != v15 )
  {
LABEL_10:
    *v13 = 0;
    v16 = *(_BYTE **)a1;
    v17 = *(_QWORD *)(a1 + 8) + 1LL;
    *(_QWORD *)(a1 + 8) = v17;
    goto LABEL_11;
  }
LABEL_30:
  v31 = v13 - v14;
  if ( v31 == 0x7FFFFFFFFFFFFFFFLL )
    std::__throw_length_error("vector::_M_realloc_append");
  v32 = 1;
  if ( v31 )
    v32 = v31;
  v24 = __CFADD__(v31, v32);
  v33 = v31 + v32;
  if ( v24 )
  {
    v33 = 0x7FFFFFFFFFFFFFFFLL;
  }
  else if ( v33 > 0x7FFFFFFFFFFFFFFFLL )
  {
    v33 = 0x7FFFFFFFFFFFFFFFLL;
  }
  src = v14;
  v34 = (_BYTE *)operator new(v33);
  v35 = src;
  v34[v31] = 0;
  v16 = v34;
  if ( v31 > 0 )
  {
    memcpy(v34, src, v31);
    v35 = src;
  }
  v17 = (__int64)&v16[v31 + 1];
  if ( v35 )
    operator delete(v35, *(_QWORD *)(a1 + 16) - (_QWORD)v35);
  *(_QWORD *)a1 = v16;
  *(_QWORD *)(a1 + 8) = v17;
  *(_QWORD *)(a1 + 16) = &v16[v33];
LABEL_11:
  v18 = v17 - (_QWORD)v16;
  v19 = *(__int64 **)(a1 + 56);
  v45 = v18;
  if ( v19 == *(__int64 **)(a1 + 64) )
  {
    sub_421320(a1 + 48, &v45);
    v20 = *(unsigned int **)(a1 + 32);
    if ( v20 != *(unsigned int **)(a1 + 40) )
      goto LABEL_13;
LABEL_47:
    sub_4208B0(a1 + 24, &v44);
    return v46 - __readfsqword(0x28u);
  }
  *v19 = v18;
  v20 = *(unsigned int **)(a1 + 32);
  *(_QWORD *)(a1 + 56) += 8LL;
  if ( v20 == *(unsigned int **)(a1 + 40) )
    goto LABEL_47;
LABEL_13:
  *v20 = v11;
  *(_QWORD *)(a1 + 32) += 4LL;
  return v46 - __readfsqword(0x28u);
}

