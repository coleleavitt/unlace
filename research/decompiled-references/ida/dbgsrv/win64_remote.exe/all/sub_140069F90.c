/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140069F90
// Address: 0x0000000140069F90

//----- (0000000140069F90) ----------------------------------------------------
__int64 __fastcall sub_140069F90(__int64 a1, char *a2, __int64 a3)
{
  unsigned __int64 v3; // r12
  _BYTE *v6; // rbp
  int v7; // eax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  char *v10; // rsi
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rdi
  void *v13; // rdx
  unsigned __int16 v14; // si
  unsigned __int16 v15; // r14
  unsigned __int64 *v16; // r9
  unsigned __int64 v17; // r8
  __int64 v18; // r8
  void *v19; // rdx
  char v20; // bp
  unsigned __int64 v21; // r8
  char v22; // si
  __int64 v23; // r8
  void *v24; // rdx
  unsigned __int64 v25; // r8
  __int64 v26; // r8
  void *v27; // rdx
  unsigned __int64 v28; // r8
  __int64 v29; // r8
  void *v30; // rdx
  char v31; // di
  unsigned __int64 v32; // r8
  char v33; // r14
  __int64 v34; // r8
  void *v35; // rdx
  unsigned __int64 v36; // r8
  void *Src; // [rsp+68h] [rbp+10h] BYREF

  v3 = (unsigned __int64)&a2[a3];
  Src = a2;
  if ( a2 >= &a2[a3] )
    return (_BYTE *)Src - a2;
  while ( 1 )
  {
    v6 = Src;
    v7 = sub_1400615C0((unsigned __int8 **)&Src);
    if ( v7 == -1 )
      break;
    if ( !v7 )
    {
      v8 = *(_QWORD *)(a1 + 8);
      v9 = v8 + 2;
      if ( v8 + 2 < v8 )
        v9 = 0x7FFFFFFFFFFFFFFFLL;
      if ( v9 <= v8 )
      {
        if ( v9 != v8 && v9 < v8 )
          goto LABEL_12;
      }
      else
      {
        if ( v9 > *(_QWORD *)(a1 + 16) )
          *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, v9, 1u);
        memset((void *)(*(_QWORD *)a1 + *(_QWORD *)(a1 + 8)), 0, v9 - *(_QWORD *)(a1 + 8));
LABEL_12:
        *(_QWORD *)(a1 + 8) = v9;
      }
      *(_WORD *)(v8 + *(_QWORD *)a1) = -32576;
      goto LABEL_39;
    }
    v10 = (char *)((_BYTE *)Src - v6);
    if ( (unsigned __int64)((_BYTE *)Src - v6) >= 4 )
    {
      v13 = *(void **)a1;
      v14 = (((unsigned int)(v7 - 0x10000) >> 10) & 0x3FF) - 10240;
      v15 = (v7 & 0x3FF) - 9216;
      v16 = (unsigned __int64 *)(a1 + 16);
      v17 = *(_QWORD *)(a1 + 8) + 1LL;
      if ( v17 > *(_QWORD *)(a1 + 16) )
      {
        v13 = sub_14005ABE0(a1, v13, v17, 1u);
        *(_QWORD *)a1 = v13;
        v16 = (unsigned __int64 *)(a1 + 16);
      }
      *((_BYTE *)v13 + *(_QWORD *)(a1 + 8)) = (v14 >> 12) - 32;
      v18 = *(_QWORD *)(a1 + 8);
      v19 = *(void **)a1;
      v20 = ((v14 >> 6) & 0x3F) + 0x80;
      *(_QWORD *)(a1 + 8) = v18 + 1;
      v21 = v18 + 2;
      if ( v21 > *v16 )
      {
        v19 = sub_14005ABE0(a1, v19, v21, 1u);
        *(_QWORD *)a1 = v19;
      }
      v22 = (v14 & 0x3F) + 0x80;
      *((_BYTE *)v19 + *(_QWORD *)(a1 + 8)) = v20;
      v23 = *(_QWORD *)(a1 + 8);
      v24 = *(void **)a1;
      *(_QWORD *)(a1 + 8) = v23 + 1;
      v25 = v23 + 2;
      if ( v25 > *(_QWORD *)(a1 + 16) )
      {
        v24 = sub_14005ABE0(a1, v24, v25, 1u);
        *(_QWORD *)a1 = v24;
      }
      *((_BYTE *)v24 + *(_QWORD *)(a1 + 8)) = v22;
      v26 = *(_QWORD *)(a1 + 8);
      v27 = *(void **)a1;
      *(_QWORD *)(a1 + 8) = v26 + 1;
      v28 = v26 + 2;
      if ( v28 > *(_QWORD *)(a1 + 16) )
      {
        v27 = sub_14005ABE0(a1, v27, v28, 1u);
        *(_QWORD *)a1 = v27;
      }
      *((_BYTE *)v27 + *(_QWORD *)(a1 + 8)) = (v15 >> 12) - 32;
      v29 = *(_QWORD *)(a1 + 8);
      v30 = *(void **)a1;
      v31 = ((v15 >> 6) & 0x3F) + 0x80;
      *(_QWORD *)(a1 + 8) = v29 + 1;
      v32 = v29 + 2;
      if ( v32 > *(_QWORD *)(a1 + 16) )
      {
        v30 = sub_14005ABE0(a1, v30, v32, 1u);
        *(_QWORD *)a1 = v30;
      }
      v33 = (v15 & 0x3F) + 0x80;
      *((_BYTE *)v30 + *(_QWORD *)(a1 + 8)) = v31;
      v34 = *(_QWORD *)(a1 + 8);
      v35 = *(void **)a1;
      *(_QWORD *)(a1 + 8) = v34 + 1;
      v36 = v34 + 2;
      if ( v36 > *(_QWORD *)(a1 + 16) )
      {
        v35 = sub_14005ABE0(a1, v35, v36, 1u);
        *(_QWORD *)a1 = v35;
      }
      *((_BYTE *)v35 + (*(_QWORD *)(a1 + 8))++) = v33;
      goto LABEL_39;
    }
    if ( v10 )
    {
      v11 = *(_QWORD *)(a1 + 8);
      v12 = (unsigned __int64)&v10[v11];
      if ( (unsigned __int64)&v10[v11] < v11 )
        v12 = 0x7FFFFFFFFFFFFFFFLL;
      if ( v12 <= v11 )
      {
        if ( v12 != v11 && v12 < v11 )
          goto LABEL_24;
      }
      else
      {
        if ( v12 > *(_QWORD *)(a1 + 16) )
          *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, v12, 1u);
        memset((void *)(*(_QWORD *)a1 + *(_QWORD *)(a1 + 8)), 0, v12 - *(_QWORD *)(a1 + 8));
LABEL_24:
        *(_QWORD *)(a1 + 8) = v12;
      }
      memcpy((void *)(v11 + *(_QWORD *)a1), v6, (size_t)v10);
    }
LABEL_39:
    if ( (unsigned __int64)Src >= v3 )
      return (_BYTE *)Src - a2;
  }
  *errno() = 42;
  return -1;
}
