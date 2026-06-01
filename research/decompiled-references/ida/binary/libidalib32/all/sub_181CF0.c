unsigned __int64 __fastcall sub_181CF0(__int64 a1, __int64 a2, signed __int64 a3, _BYTE *a4, size_t a5)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rbp
  unsigned int v13; // r12d
  unsigned __int64 v14; // rax
  _BYTE *v15; // rbp
  _BYTE *v16; // rcx
  _BYTE *v17; // r15
  __int64 v18; // r14
  __int64 v19; // rbp
  __int64 v20; // rbp
  __int64 *v21; // rax
  unsigned int *v22; // rax
  signed __int64 v24; // rbp
  signed __int64 v25; // r15
  bool v26; // cf
  unsigned __int64 v27; // r15
  __int64 v28; // rax
  _BYTE *v29; // r8
  _BYTE *v30; // r15
  _BYTE *v31; // rax
  _BYTE *v32; // rbp
  signed __int64 v33; // rbp
  __int64 v34; // r13
  unsigned __int64 v35; // r13
  _BYTE *v36; // rax
  unsigned __int64 v37; // rsi
  unsigned __int64 v38; // rax
  _BYTE *srca; // [rsp+8h] [rbp-60h]
  _BYTE *srcb; // [rsp+8h] [rbp-60h]
  _BYTE *srcc; // [rsp+8h] [rbp-60h]
  _BYTE *srcd; // [rsp+8h] [rbp-60h]
  _BYTE *src; // [rsp+8h] [rbp-60h]
  _BYTE *v44; // [rsp+10h] [rbp-58h]
  unsigned int v45; // [rsp+1Ch] [rbp-4Ch] BYREF
  __int64 v46; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v47; // [rsp+28h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 72);
  v7 = *(_QWORD *)(a1 + 8);
  v45 = a2;
  v8 = v7 - *(_QWORD *)a1 - v6;
  v47 = __readfsqword(0x28u);
  if ( v8 < v6 )
    sub_180FE0((__int64 *)a1, a2, v6, (__int64)a4, a5);
  v10 = *(_QWORD *)(a1 + 88);
  v11 = *(_QWORD *)(a1 + 80);
  v12 = v45;
  v13 = v45;
  v14 = (v10 - v11) >> 2;
  if ( v45 >= v14 )
  {
    v37 = v45 + 1;
    if ( v14 < v37 )
    {
      std::vector<unsigned int>::_M_default_append(a1 + 80, v37 - v14, v11, v10, a5);
      v11 = *(_QWORD *)(a1 + 80);
    }
    else if ( v37 < v14 )
    {
      v38 = v11 + 4 * v37;
      if ( v10 != v38 )
        *(_QWORD *)(a1 + 88) = v38;
    }
  }
  *(_DWORD *)(v11 + 4 * v12) = (__int64)(*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) >> 2;
  v15 = *(_BYTE **)(a1 + 8);
  v16 = *(_BYTE **)a1;
  v17 = *(_BYTE **)(a1 + 16);
  if ( a3 )
  {
    if ( v17 - v15 >= (unsigned __int64)a3 )
    {
      if ( a3 <= 1 )
      {
        if ( a3 == 1 )
        {
          *v15 = *a4;
          v15 = *(_BYTE **)(a1 + 8);
          v16 = *(_BYTE **)a1;
          v17 = *(_BYTE **)(a1 + 16);
        }
      }
      else
      {
        memmove(*(void **)(a1 + 8), a4, a3);
        v15 = *(_BYTE **)(a1 + 8);
        v16 = *(_BYTE **)a1;
        v17 = *(_BYTE **)(a1 + 16);
      }
      v15 += a3;
      *(_QWORD *)(a1 + 8) = v15;
      goto LABEL_9;
    }
    v24 = v15 - v16;
    v11 = 0x7FFFFFFFFFFFFFFFLL - v24;
    if ( 0x7FFFFFFFFFFFFFFFLL - v24 < (unsigned __int64)a3 )
      std::__throw_length_error("vector::_M_range_insert");
    v25 = v24;
    if ( a3 >= (unsigned __int64)v24 )
      v25 = a3;
    v26 = __CFADD__(v24, v25);
    v27 = v24 + v25;
    if ( v26 )
    {
      v27 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else
    {
      if ( !v27 )
      {
        v30 = nullptr;
        v29 = nullptr;
LABEL_23:
        if ( v24 <= 1 )
        {
          if ( v24 == 1 )
            *v29 = *v16;
        }
        else
        {
          srcb = v16;
          v31 = memmove(v29, v16, v24);
          v16 = srcb;
          v29 = v31;
        }
        v32 = &v29[v24];
        if ( a3 <= 1 )
        {
          if ( a3 == 1 )
            *v32 = *a4;
        }
        else
        {
          v44 = v29;
          srcc = v16;
          memmove(v32, a4, a3);
          v16 = srcc;
          v29 = v44;
        }
        v15 = &v32[a3];
        if ( v16 )
        {
          srcd = v29;
          operator delete(v16, *(_QWORD *)(a1 + 16) - (_QWORD)v16);
          v29 = srcd;
        }
        *(_QWORD *)a1 = v29;
        v16 = v29;
        *(_QWORD *)(a1 + 8) = v15;
        *(_QWORD *)(a1 + 16) = v30;
        if ( v15 != v30 )
          goto LABEL_10;
        goto LABEL_30;
      }
      if ( v27 > 0x7FFFFFFFFFFFFFFFLL )
        v27 = 0x7FFFFFFFFFFFFFFFLL;
    }
    srca = *(_BYTE **)a1;
    v28 = operator new(v27);
    v16 = srca;
    v29 = (_BYTE *)v28;
    v30 = (_BYTE *)(v28 + v27);
    goto LABEL_23;
  }
LABEL_9:
  if ( v15 != v17 )
  {
LABEL_10:
    *v15 = 0;
    v18 = *(_QWORD *)a1;
    v19 = *(_QWORD *)(a1 + 8) + 1LL;
    *(_QWORD *)(a1 + 8) = v19;
    goto LABEL_11;
  }
LABEL_30:
  v33 = v15 - v16;
  if ( v33 == 0x7FFFFFFFFFFFFFFFLL )
    std::__throw_length_error("vector::_M_realloc_append");
  v34 = 1;
  if ( v33 )
    v34 = v33;
  v26 = __CFADD__(v33, v34);
  v35 = v33 + v34;
  if ( v26 )
  {
    v35 = 0x7FFFFFFFFFFFFFFFLL;
  }
  else if ( v35 > 0x7FFFFFFFFFFFFFFFLL )
  {
    v35 = 0x7FFFFFFFFFFFFFFFLL;
  }
  src = v16;
  v36 = (_BYTE *)operator new(v35);
  v16 = src;
  v36[v33] = 0;
  v18 = (__int64)v36;
  if ( v33 > 0 )
  {
    memcpy(v36, src, v33);
    v16 = src;
  }
  v19 = v18 + v33 + 1;
  if ( v16 )
    operator delete(v16, *(_QWORD *)(a1 + 16) - (_QWORD)v16);
  *(_QWORD *)a1 = v18;
  *(_QWORD *)(a1 + 8) = v19;
  *(_QWORD *)(a1 + 16) = v18 + v35;
LABEL_11:
  v20 = v19 - v18;
  v21 = *(__int64 **)(a1 + 56);
  v46 = v20;
  if ( v21 == *(__int64 **)(a1 + 64) )
  {
    std::vector<unsigned long>::_M_realloc_append<unsigned long>(a1 + 48, &v46, v11, v16);
    v22 = *(unsigned int **)(a1 + 32);
    if ( v22 != *(unsigned int **)(a1 + 40) )
      goto LABEL_13;
LABEL_47:
    std::vector<unsigned int>::_M_realloc_append<unsigned int const&>(a1 + 24, &v45, v11, v16);
    return v47 - __readfsqword(0x28u);
  }
  *v21 = v20;
  v22 = *(unsigned int **)(a1 + 32);
  *(_QWORD *)(a1 + 56) += 8LL;
  if ( v22 == *(unsigned int **)(a1 + 40) )
    goto LABEL_47;
LABEL_13:
  *v22 = v13;
  *(_QWORD *)(a1 + 32) += 4LL;
  return v47 - __readfsqword(0x28u);
}

