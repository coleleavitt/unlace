__int64 __fastcall sub_FC4A80(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v4; // r13
  size_t v5; // rbp
  _WORD *v6; // rsi
  size_t v7; // rax
  _WORD *v8; // rdx
  __int64 v9; // rdi
  char v10; // al
  size_t v11; // r13
  void *v12; // r14
  unsigned int v13; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v16; // r15
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rdx
  unsigned __int64 v23; // rbp
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  _QWORD *v27; // rbp
  char *v28; // rdx
  _QWORD *v29; // rcx
  unsigned int v30; // eax
  _QWORD *v32; // rax
  size_t v33; // rdi
  __int64 v34; // rax
  int v35; // [rsp+Ch] [rbp-ACh]
  int v36; // [rsp+Ch] [rbp-ACh]
  __int64 *v37; // [rsp+18h] [rbp-A0h] BYREF
  void *ptr; // [rsp+20h] [rbp-98h] BYREF
  size_t n[2]; // [rsp+28h] [rbp-90h]
  _WORD v40[64]; // [rsp+38h] [rbp-80h] BYREF

  v4 = *(unsigned int **)(a3 + 16);
  v5 = *v4;
  v6 = v40;
  n[1] = _mm_load_si128((const __m128i *)&xmmword_2384D30).m128i_u64[1];
  qmemcpy(v40, "set", 3);
  ptr = v40;
  n[0] = 3;
  if ( v5 + 3 > 0x40 )
  {
    sub_22130D0(&ptr, v40, v5 + 3, 1);
    v6 = ptr;
    v33 = n[0];
  }
  else
  {
    v7 = 3;
    v8 = v40;
    if ( !v5 )
      goto LABEL_3;
    v33 = 3;
  }
  memcpy((char *)v6 + v33, v4 + 4, v5);
  v8 = ptr;
  v7 = n[0];
LABEL_3:
  n[0] = v7 + v5;
  v9 = *((unsigned __int8 *)v8 + 3);
  v10 = *((_BYTE *)v8 + 3);
  if ( (byte_23ED5E0[2 * v9] & 0x40) != 0 )
    v10 = v9 - 32;
  *((_BYTE *)v8 + 3) = v10;
  v11 = n[0];
  v12 = ptr;
  v13 = sub_2220DF0(ptr, n[0]);
  v14 = (unsigned int)sub_2220F70(a1, v12, v11, v13);
  v16 = (__int64 *)(*(_QWORD *)a1 + 8 * v14);
  if ( !*v16 )
  {
LABEL_15:
    v26 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 104) += v11 + 17;
    v27 = (_QWORD *)((v26 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    v28 = (char *)v27 + v11 + 17;
    if ( *(_QWORD *)(a1 + 32) >= (unsigned __int64)v28 && v26 )
    {
      *(_QWORD *)(a1 + 24) = v28;
    }
    else
    {
      v36 = v14;
      v34 = sub_962430(a1 + 24, v11 + 17, v11 + 17, 3, v14, v15);
      LODWORD(v14) = v36;
      v27 = (_QWORD *)v34;
    }
    v29 = v27 + 2;
    if ( v11 )
    {
      v35 = v14;
      v32 = memcpy(v27 + 2, v12, v11);
      LODWORD(v14) = v35;
      v29 = v32;
    }
    *((_BYTE *)v29 + v11) = 0;
    *v27 = v11;
    v27[1] = 0;
    *v16 = (__int64)v27;
    ++*(_DWORD *)(a1 + 12);
    v30 = sub_2221390(a1, (unsigned int)v14);
    sub_965750(&v37, (__int64 *)(*(_QWORD *)a1 + 8LL * v30), 0);
    v19 = *v37;
    v20 = *(_QWORD *)(*v37 + 8);
    if ( v20 )
      goto LABEL_21;
    goto LABEL_8;
  }
  if ( *v16 == -8 )
  {
    --*(_DWORD *)(a1 + 16);
    goto LABEL_15;
  }
  sub_965750(&v37, v16, 0);
  v19 = *v37;
  v20 = *(_QWORD *)(*v37 + 8);
  if ( v20 )
  {
LABEL_21:
    v23 = v20 & 0xFFFFFFFFFFFFFFF8LL;
    goto LABEL_22;
  }
LABEL_8:
  v21 = *(_QWORD *)(a1 + 120);
  if ( v21 )
  {
    v20 = (*(__int64 (__fastcall **)(__int64, void *, size_t))(*(_QWORD *)v21 + 16LL))(v21, v12, v11);
    *(_QWORD *)(v19 + 8) = v20;
    if ( v20 )
      goto LABEL_21;
  }
  v22 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 104) += 24LL;
  v23 = (v22 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_QWORD *)(a1 + 32) >= v23 + 24 && v22 )
  {
    *(_QWORD *)(a1 + 24) = v23 + 24;
    v24 = (v22 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    v24 = sub_962430(a1 + 24, 24, 24, 3, v17, v18);
    v23 = v24 & 0xFFFFFFFFFFFFFFF8LL;
  }
  v25 = *(_QWORD *)v24 & 0xFFFFF80000000000LL;
  *(_QWORD *)(v24 + 8) = 0;
  *(_QWORD *)v24 = v25 | 0x1FFFC05;
  *(_QWORD *)(v19 + 8) = v24;
  *(_QWORD *)(v24 + 16) = v19;
LABEL_22:
  if ( ptr != v40 )
    free(ptr);
  return v23 | 2;
}

