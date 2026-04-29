__int64 __fastcall sub_3980(__int64 a1, __int64 a2, int *a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // rbp
  char v9; // al
  int v10; // edx
  int v11; // eax
  unsigned int v12; // eax
  _QWORD *v13; // rcx
  unsigned int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rdi
  _DWORD *v17; // r13
  __int64 v18; // rsi
  _QWORD *v19; // r12
  char *v20; // rbp
  __int64 v21; // rsi
  _DWORD *v22; // rax
  char v23; // dl
  size_t v24; // rax
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  char *v28; // rdx
  char *v29; // rax
  __int64 v30; // r15
  size_t v31; // r14
  void *v32; // rax
  char *v33; // rsi
  __int64 v34; // rbx
  __m128i v35; // xmm0
  _BYTE *v36; // rdi
  _DWORD **v37; // rcx
  _QWORD **v38; // rax
  void **v39; // rcx
  void **v40; // rax
  __m128i v41; // [rsp+0h] [rbp-88h] BYREF
  void *dest; // [rsp+10h] [rbp-78h] BYREF
  __int128 v43; // [rsp+18h] [rbp-70h]
  __int64 v44; // [rsp+28h] [rbp-60h]
  __int64 v45; // [rsp+30h] [rbp-58h] BYREF
  __m128i v46; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v47; // [rsp+48h] [rbp-40h]
  __int64 v48; // [rsp+50h] [rbp-38h]

  v47 = __readfsqword(0x28u);
  if ( a2 == 94 )
  {
    v12 = *a3;
    if ( (unsigned int)*a3 > 0x2F )
    {
      v13 = *((_QWORD **)a3 + 1);
      *((_QWORD *)a3 + 1) = v13 + 1;
    }
    else
    {
      v13 = (_QWORD *)(*((_QWORD *)a3 + 2) + v12);
      *a3 = v12 + 8;
    }
    sub_53B0(
      *v13,
      94,
      (_DWORD)a3,
      (_DWORD)v13,
      a5,
      a6,
      v41.m128i_i64[0],
      v41.m128i_i32[2],
      (_DWORD)dest,
      v43,
      *((__int64 *)&v43 + 1),
      v44,
      v45,
      v46.m128i_i32[0],
      v46.m128i_i32[2],
      v47,
      v48);
    return 0;
  }
  v6 = *(_QWORD *)(a1 + 16);
  if ( !*(_BYTE *)(v6 + 213) )
    return 0;
  if ( a2 != 62 )
  {
    if ( a2 > 62 )
    {
      if ( a2 == 86 )
      {
        netnode_check(&v45, "$ rust", 0, 0);
        *(_DWORD *)(v6 + 200) = netnode_altval(v45, -1, 65);
      }
    }
    else if ( a2 == 4 || a2 == 5 || a2 == 2 )
    {
      v9 = getinf(3);
      v10 = 16;
      v11 = v9 & 6;
      if ( v11 )
      {
        v10 = 64;
        if ( v11 == 2 )
          v10 = 32;
      }
      *(_DWORD *)(v6 + 208) = v10;
      sub_34F0(*(_QWORD *)(a1 + 16));
    }
    return 0;
  }
  if ( !*(_BYTE *)(v6 + 214) || !*(_QWORD *)(v6 + 128) )
    return 0;
  v14 = *a3;
  if ( (unsigned int)*a3 > 0x2F )
  {
    v37 = *((_DWORD ***)a3 + 1);
    v38 = (_QWORD **)(v37 + 1);
    *((_QWORD *)a3 + 1) = v37 + 1;
    v17 = *v37;
LABEL_49:
    v39 = (void **)(v38 + 1);
    *((_QWORD *)a3 + 1) = v38 + 1;
    v19 = *v38;
LABEL_50:
    v40 = v39 + 1;
    *((_QWORD *)a3 + 1) = v39 + 1;
    v20 = (char *)*v39;
LABEL_51:
    v22 = v40 + 1;
LABEL_52:
    *((_QWORD *)a3 + 1) = v22 + 2;
    goto LABEL_24;
  }
  v15 = *((_QWORD *)a3 + 2);
  v16 = v14 + 8;
  *a3 = v16;
  v17 = *(_DWORD **)(v15 + v14);
  if ( (unsigned int)v16 > 0x2F )
  {
    v38 = *((_QWORD ***)a3 + 1);
    goto LABEL_49;
  }
  v18 = v14 + 16;
  *a3 = v18;
  v19 = *(_QWORD **)(v15 + v16);
  if ( (unsigned int)v18 > 0x2F )
  {
    v39 = *((void ***)a3 + 1);
    goto LABEL_50;
  }
  *a3 = v14 + 24;
  v20 = *(char **)(v15 + v18);
  if ( v14 + 24 > 0x2F )
  {
    v40 = *((void ***)a3 + 1);
    goto LABEL_51;
  }
  v21 = v14 + 32;
  *a3 = v21;
  if ( (unsigned int)v21 > 0x2F )
  {
    v22 = *((_DWORD **)a3 + 1);
    goto LABEL_52;
  }
  v22 = (_DWORD *)(v21 + v15);
  *a3 = v14 + 40;
LABEL_24:
  if ( !v20 )
    return 0;
  v23 = *v20;
  if ( *v22 != 2 || !v23 )
    return 0;
  if ( v23 == 95 && v20[1] == 95 )
    ++v20;
  v24 = strlen(v20);
  v28 = &v20[v24];
  if ( v20 >= &v20[v24] )
  {
    dest = nullptr;
    v43 = 0;
    goto LABEL_36;
  }
  v29 = &v20[v24];
  while ( 1 )
  {
    v25 = (unsigned __int8)*(v29 - 1) - 48;
    if ( (unsigned __int8)(*(v29 - 1) - 48) > 9u )
      break;
    if ( v20 == --v29 )
    {
      v30 = 1;
      v31 = 0;
      dest = nullptr;
      v43 = 0;
LABEL_33:
      v32 = (void *)qvector_reserve(&dest, 0, v30, 1);
      dest = v32;
      goto LABEL_34;
    }
  }
  if ( v28 == v29 || v20 >= v29 )
    goto LABEL_60;
  if ( *(v29 - 1) == 95 )
  {
    --v29;
LABEL_60:
    dest = nullptr;
    v43 = 0;
    if ( v29 == v28 )
      goto LABEL_36;
    goto LABEL_57;
  }
  dest = nullptr;
  v43 = 0;
LABEL_57:
  v31 = v29 - v20;
  v30 = v29 - v20 + 1;
  if ( v29 - v20 != -1 )
    goto LABEL_33;
  v32 = dest;
  v31 = -1;
LABEL_34:
  *(_QWORD *)&v43 = v30;
  v33 = v20;
  v20 = (char *)&unk_71C5;
  *((_BYTE *)v32 + v31) = 0;
  memmove(dest, v33, v31);
  if ( (_QWORD)v43 )
    LODWORD(v20) = (_DWORD)dest;
LABEL_36:
  sub_6250(
    (unsigned int)&v45,
    *(_DWORD *)(a1 + 16) + 128,
    (_DWORD)v20,
    v25,
    v26,
    v27,
    v41.m128i_i64[0],
    v41.m128i_i32[2],
    (__int64)dest);
  v34 = v45;
  v35 = _mm_loadu_si128(&v46);
  v45 = 0;
  v46 = 0;
  v36 = (_BYTE *)*v19;
  if ( *v19 )
  {
    v19[1] = 0;
    v41 = v35;
    qfree(v36);
    v35 = _mm_load_si128(&v41);
  }
  *v19 = v34;
  *(__m128i *)(v19 + 1) = v35;
  if ( v45 )
  {
    v46.m128i_i64[0] = 0;
    qfree(v45);
  }
  if ( !v19[1] || !*(_BYTE *)*v19 )
  {
    if ( dest )
    {
      *(_QWORD *)&v43 = 0;
      qfree(dest);
    }
    return 0;
  }
  *v17 = 1;
  if ( dest )
  {
    *(_QWORD *)&v43 = 0;
    qfree(dest);
  }
  return 1;
}
