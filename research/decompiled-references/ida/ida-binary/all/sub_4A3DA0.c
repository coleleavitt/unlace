unsigned __int64 __fastcall sub_4A3DA0(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  const char *v5; // rsi
  __int64 v7; // r13
  char *v8; // rbp
  const char *v9; // r12
  char *v10; // rax
  __int64 v11; // rdx
  const char *v12; // rsi
  char *v13; // r8
  __int64 v14; // rax
  size_t v15; // rax
  __int64 v16; // r8
  size_t v17; // r9
  size_t v18; // r10
  __int64 v19; // rsi
  size_t v20; // rdx
  __int64 v22; // r9
  const void *v23; // r10
  size_t v24; // r8
  size_t v25; // r12
  __int64 v26; // rsi
  size_t v27; // rdx
  const void *v28; // r12
  size_t v29; // rax
  __int64 v30; // r9
  size_t v31; // r8
  size_t v32; // r10
  __int64 v33; // rsi
  size_t v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  char *v38; // [rsp+0h] [rbp-78h]
  __int64 v39; // [rsp+0h] [rbp-78h]
  size_t v40; // [rsp+0h] [rbp-78h]
  size_t v41; // [rsp+0h] [rbp-78h]
  size_t v42; // [rsp+0h] [rbp-78h]
  __int64 v43; // [rsp+8h] [rbp-70h]
  const void *v44; // [rsp+8h] [rbp-70h]
  __int64 v45; // [rsp+8h] [rbp-70h]
  size_t v46; // [rsp+10h] [rbp-68h]
  __int64 v47; // [rsp+10h] [rbp-68h]
  size_t v48; // [rsp+10h] [rbp-68h]
  size_t v49; // [rsp+18h] [rbp-60h]
  size_t v50; // [rsp+18h] [rbp-60h]
  size_t v51; // [rsp+18h] [rbp-60h]
  __int64 v52; // [rsp+20h] [rbp-58h] BYREF
  __int128 v53; // [rsp+28h] [rbp-50h]
  unsigned __int64 v54; // [rsp+38h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 64);
  v54 = __readfsqword(0x28u);
  v5 = (const char *)*(int *)(a2 + 48);
  if ( v3 )
  {
    v7 = 0;
    if ( (int)v5 <= 0 )
      return v54 - __readfsqword(0x28u);
    while ( 1 )
    {
      v9 = *(const char **)(v3 + 8 * v7);
      v10 = strrchr(v9, 35);
      v11 = *(_QWORD *)(a1 + 8);
      v12 = *(const char **)a1;
      v13 = v10;
      if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v11 + 1) )
      {
        v38 = v10;
        v14 = qvector_reserve(a1, v12, v11 + 1, 24);
        v11 = *(_QWORD *)(a1 + 8);
        v13 = v38;
        *(_QWORD *)a1 = v14;
        v12 = (const char *)v14;
      }
      v8 = (char *)&v12[24 * v11];
      *(_QWORD *)v8 = 0;
      *(_OWORD *)(v8 + 8) = 0;
      ++*(_QWORD *)(a1 + 8);
      if ( *v9 == 35 && v9 < v13 )
        break;
      if ( !v9 || a3 == 1 )
        goto LABEL_8;
      v15 = strlen(v9);
      v16 = *((_QWORD *)v8 + 1);
      v17 = v15;
      v18 = v15;
      if ( v16 )
      {
        --v16;
        v18 = v15 + v16;
      }
      v19 = *(_QWORD *)v8;
      v20 = v18 + 1;
      if ( *((_QWORD *)v8 + 2) < v18 + 1 )
      {
        v49 = v15;
        v46 = v18;
        v43 = v16;
        v40 = v18 + 1;
        v35 = qvector_reserve(v8, v19, v20, 1);
        v17 = v49;
        v18 = v46;
        v16 = v43;
        v20 = v40;
        *(_QWORD *)v8 = v35;
        v19 = v35;
      }
      *((_QWORD *)v8 + 1) = v20;
      ++v7;
      *(_BYTE *)(v19 + v18) = 0;
      memmove((void *)(v16 + *(_QWORD *)v8), v9, v17);
      if ( *(_DWORD *)(a2 + 48) <= (int)v7 )
        return v54 - __readfsqword(0x28u);
LABEL_9:
      v3 = *(_QWORD *)(a2 + 64);
    }
    v22 = *((_QWORD *)v8 + 1);
    if ( a3 )
    {
      v23 = v9 + 1;
      v24 = v13 - (v9 + 1);
      v25 = v24;
      if ( v22 )
        v24 += --v22;
      v26 = *(_QWORD *)v8;
      v27 = v24 + 1;
      if ( *((_QWORD *)v8 + 2) < v24 + 1 )
      {
        v50 = v24;
        v47 = v22;
        v44 = v23;
        v41 = v24 + 1;
        v36 = qvector_reserve(v8, v26, v27, 1);
        v24 = v50;
        v22 = v47;
        v23 = v44;
        v27 = v41;
        *(_QWORD *)v8 = v36;
        v26 = v36;
      }
      *((_QWORD *)v8 + 1) = v27;
      *(_BYTE *)(v26 + v24) = 0;
      memmove((void *)(v22 + *(_QWORD *)v8), v23, v25);
    }
    else
    {
      v28 = v13 + 1;
      v39 = *((_QWORD *)v8 + 1);
      v29 = strlen(v13 + 1);
      v30 = v39;
      v31 = v29;
      v32 = v29;
      if ( v39 )
      {
        v30 = v39 - 1;
        v32 = v29 + v39 - 1;
      }
      v33 = *(_QWORD *)v8;
      v34 = v32 + 1;
      if ( *((_QWORD *)v8 + 2) < v32 + 1 )
      {
        v51 = v29;
        v48 = v32;
        v45 = v30;
        v42 = v32 + 1;
        v37 = qvector_reserve(v8, v33, v34, 1);
        v31 = v51;
        v32 = v48;
        v30 = v45;
        v34 = v42;
        *(_QWORD *)v8 = v37;
        v33 = v37;
      }
      *((_QWORD *)v8 + 1) = v34;
      *(_BYTE *)(v33 + v32) = 0;
      memmove((void *)(v30 + *(_QWORD *)v8), v28, v31);
    }
LABEL_8:
    if ( *(_DWORD *)(a2 + 48) <= (int)++v7 )
      return v54 - __readfsqword(0x28u);
    goto LABEL_9;
  }
  if ( v5 != *(const char **)(a1 + 8) )
  {
    v52 = 0;
    v53 = 0;
    sub_274880((const char **)a1, v5, (unsigned __int64)&v52);
  }
  return v54 - __readfsqword(0x28u);
}
