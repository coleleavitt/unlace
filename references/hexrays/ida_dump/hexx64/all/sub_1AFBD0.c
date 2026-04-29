__int64 __fastcall sub_1AFBD0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // r12
  _BYTE *v6; // rsi
  __int64 v7; // r14
  unsigned __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // r12
  size_t v14; // r14
  __int64 v15; // r13
  size_t v16; // r15
  _BYTE *v17; // rsi
  unsigned __int64 i; // r13
  char *v19; // r15
  size_t v20; // rax
  __int64 v21; // r14
  size_t v22; // r8
  size_t v23; // r9
  _BYTE *v24; // rsi
  size_t v25; // rdx
  __int64 v27; // rax
  __int64 v28; // r12
  __int64 v29; // r14
  _BYTE *v30; // rsi
  __int64 v31; // r12
  unsigned __int64 v32; // r12
  size_t v33; // r14
  __int64 v34; // r13
  size_t v35; // r15
  _BYTE *v36; // rsi
  __int64 v37; // r12
  unsigned __int64 v38; // rax
  _BYTE *v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  size_t v44; // [rsp+0h] [rbp-70h]
  size_t v45; // [rsp+8h] [rbp-68h]
  size_t v46; // [rsp+10h] [rbp-60h]
  void *src; // [rsp+18h] [rbp-58h] BYREF
  __int128 v48; // [rsp+20h] [rbp-50h]
  unsigned __int64 v49; // [rsp+30h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( !*(_BYTE *)(a3 + 48) )
  {
    v5 = *(_QWORD *)(a3 + 32);
    if ( v5 <= 1 )
    {
      v6 = nullptr;
      v7 = 0;
      v8 = 6;
      v9 = 5;
LABEL_4:
      v10 = qvector_reserve(a1, v6, v8, 1);
      *(_QWORD *)a1 = v10;
      v6 = (_BYTE *)v10;
      goto LABEL_5;
    }
    v40 = qvector_reserve(a1, 0, *(_QWORD *)(a3 + 32), 1);
    *(_QWORD *)a1 = v40;
    *(_QWORD *)(a1 + 8) = v5;
    *(_BYTE *)(v40 + v5 - 1) = 0;
    memcpy(*(void **)a1, *(const void **)(a3 + 24), v5 - 1);
    v37 = *(_QWORD *)(a1 + 8);
    v38 = *(_QWORD *)(a1 + 16);
    v6 = *(_BYTE **)a1;
    if ( !v37 )
      goto LABEL_45;
LABEL_38:
    v7 = v37 - 1;
    v9 = v37 + 4;
    v8 = v37 + 5;
    goto LABEL_39;
  }
  sub_32B7F0(a1, a3 + 48, *(_QWORD *)(a3 + 24), 0);
  v37 = *(_QWORD *)(a1 + 8);
  v38 = *(_QWORD *)(a1 + 16);
  v6 = *(_BYTE **)a1;
  if ( v37 )
    goto LABEL_38;
LABEL_45:
  v7 = 0;
  v8 = 6;
  v9 = 5;
LABEL_39:
  if ( v38 < v8 )
    goto LABEL_4;
LABEL_5:
  *(_QWORD *)(a1 + 8) = v8;
  v6[v9] = 0;
  v11 = v7 + *(_QWORD *)a1;
  *(_DWORD *)v11 = 791617595;
  *(_BYTE *)(v11 + 4) = 32;
  v12 = *(unsigned int *)(a2 + 80);
  src = nullptr;
  v48 = 0;
  sub_1C7B80(a3, a2, &src, v12, 0);
  if ( (unsigned __int64)v48 <= 1 )
  {
    v39 = src;
    if ( *((_QWORD *)&v48 + 1) <= 1u )
    {
      src = (void *)qvector_reserve(&src, src, 2, 1);
      v39 = src;
    }
    *(_QWORD *)&v48 = 2;
    *v39 = 63;
    *((_BYTE *)src + 1) = 0;
  }
  sub_FAAD0((__int64 *)&src, (__int64)" defea=%a", 0.0);
  v13 = v48;
  if ( (_QWORD)v48 )
  {
    v14 = v48 - 1;
    if ( (_QWORD)v48 != 1 )
    {
      v15 = *(_QWORD *)(a1 + 8);
      v16 = v48 - 1;
      if ( v15 )
      {
        --v15;
        v16 = v14 + v15;
        v13 = v48 + v15;
      }
      v17 = *(_BYTE **)a1;
      if ( *(_QWORD *)(a1 + 16) < v13 )
      {
        v41 = qvector_reserve(a1, v17, v13, 1);
        *(_QWORD *)a1 = v41;
        v17 = (_BYTE *)v41;
      }
      *(_QWORD *)(a1 + 8) = v13;
      v17[v16] = 0;
      memcpy((void *)(v15 + *(_QWORD *)a1), src, v14);
    }
  }
  if ( src )
  {
    *(_QWORD *)&v48 = 0;
    qfree(src);
  }
  for ( i = 0; i != 6; ++i )
  {
    if ( (*(_DWORD *)(a3 + 88) & (1 << i)) != 0 )
    {
      v19 = off_4DE440[i];
      if ( v19 )
      {
        v20 = strlen(off_4DE440[i]);
        v21 = *(_QWORD *)(a1 + 8);
        v22 = v20;
        v23 = v20;
        if ( v21 )
        {
          --v21;
          v23 = v20 + v21;
        }
        v24 = *(_BYTE **)a1;
        v25 = v23 + 1;
        if ( *(_QWORD *)(a1 + 16) < v23 + 1 )
        {
          v46 = v20;
          v45 = v23;
          v44 = v23 + 1;
          v27 = qvector_reserve(a1, v24, v25, 1);
          v22 = v46;
          v23 = v45;
          *(_QWORD *)a1 = v27;
          v24 = (_BYTE *)v27;
          v25 = v44;
        }
        *(_QWORD *)(a1 + 8) = v25;
        v24[v23] = 0;
        memmove((void *)(v21 + *(_QWORD *)a1), v19, v22);
      }
    }
  }
  if ( *(_QWORD *)(a3 + 64) > 1u )
  {
    v28 = *(_QWORD *)(a1 + 8);
    v29 = 5;
    if ( v28 )
    {
      v29 = v28 + 4;
      i = v28 + 5;
      --v28;
    }
    v30 = *(_BYTE **)a1;
    if ( *(_QWORD *)(a1 + 16) < i )
    {
      v42 = qvector_reserve(a1, v30, i, 1);
      *(_QWORD *)a1 = v42;
      v30 = (_BYTE *)v42;
    }
    *(_QWORD *)(a1 + 8) = i;
    v30[v29] = 0;
    v31 = *(_QWORD *)a1 + v28;
    *(_DWORD *)v31 = 1414349600;
    *(_BYTE *)(v31 + 4) = 61;
    v32 = *(_QWORD *)(a3 + 64);
    if ( v32 )
    {
      v33 = v32 - 1;
      if ( v32 != 1 )
      {
        v34 = *(_QWORD *)(a1 + 8);
        v35 = v32 - 1;
        if ( v34 )
        {
          --v34;
          v35 = v33 + v34;
          v32 += v34;
        }
        v36 = *(_BYTE **)a1;
        if ( *(_QWORD *)(a1 + 16) < v32 )
        {
          v43 = qvector_reserve(a1, v36, v32, 1);
          *(_QWORD *)a1 = v43;
          v36 = (_BYTE *)v43;
        }
        *(_QWORD *)(a1 + 8) = v32;
        v36[v35] = 0;
        memcpy((void *)(v34 + *(_QWORD *)a1), *(const void **)(a3 + 56), v33);
      }
    }
  }
  return a1;
}
