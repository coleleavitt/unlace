unsigned int *__fastcall sub_1B72070(__int64 *a1, unsigned int *a2, unsigned __int8 a3, __m128 a4, __m128 a5)
{
  unsigned int *v6; // rbx
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r12
  __int64 v11; // rcx
  const __m128i *v12; // r13
  __int64 v13; // rax
  bool v14; // r14
  const __m128i **v15; // rbx
  const __m128i *v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  bool v21; // cl
  _BYTE *v22; // rdi
  __int64 v24; // r13
  unsigned int v25; // r12d
  unsigned int v26; // r14d
  __int64 v27; // rsi
  unsigned int v28; // r14d
  unsigned __int64 v29; // rax
  int v30; // ecx
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // [rsp+8h] [rbp-E0h]
  unsigned int *v34; // [rsp+18h] [rbp-D0h]
  char v36; // [rsp+23h] [rbp-C5h]
  unsigned __int64 v38; // [rsp+28h] [rbp-C0h]
  unsigned int v39; // [rsp+3Ch] [rbp-ACh] BYREF
  _BYTE v40[32]; // [rsp+40h] [rbp-A8h] BYREF
  void *ptr; // [rsp+60h] [rbp-88h] BYREF
  __int64 v42; // [rsp+68h] [rbp-80h]
  _BYTE v43[120]; // [rsp+70h] [rbp-78h] BYREF

  v6 = a2;
  v33 = *a1;
  sub_1C36400(*a1, 0);
  sub_15F3080((__int64)v40, *a1);
  if ( (*(_WORD *)a2 & 0x200) != 0 )
  {
    v24 = *a1;
    v25 = a2[2 * a2[1] + 4];
    v26 = a2[2 * a2[1] + 5];
    sub_BF6C80((unsigned int *)&ptr, *(_QWORD *)(*a1 + 232));
    v27 = *(_QWORD *)(v24 + 232);
    v28 = (unsigned int)ptr ^ ((unsigned int)ptr ^ v25) & v26;
    *(_DWORD *)(v24 + 224) = v28;
    v39 = v28;
    sub_BF6C80((unsigned int *)&ptr, v27);
    if ( v28 == (_DWORD)ptr )
    {
      LODWORD(v29) = 0;
      v30 = 0;
    }
    else
    {
      v31 = sub_FEAE70(&v39, (unsigned int *)&ptr);
      v30 = v31;
      v29 = HIDWORD(v31);
    }
    *(_DWORD *)(v24 + 1952) = v30;
    *(_DWORD *)(v24 + 1956) = v29;
  }
  v8 = v6[1];
  v9 = (__int64)(v6 + 4);
  v10 = (__int64)&v6[2 * v8 + 4];
  v11 = v8;
  if ( (unsigned int *)v10 == v6 + 4 )
  {
    v21 = 0;
    ptr = v43;
    v42 = 0x800000000LL;
    v22 = v43;
LABEL_35:
    if ( *(_DWORD *)(*a1 + 12632) || v21 )
    {
      v32 = sub_1C36480(*a1, v6[2], v6[3], v22, (unsigned int)v42, a3);
      v22 = ptr;
      v6 = (unsigned int *)v32;
    }
    goto LABEL_25;
  }
  v12 = *(const __m128i **)&v6[2 * v8 + 2];
  if ( (v12->m128i_i16[0] & 0x1FF) != 0xEE )
    goto LABEL_9;
  v13 = (__int64)&v6[2 * v8 + 2];
  while ( v9 != v13 )
  {
    v12 = *(const __m128i **)(v13 - 8);
    v13 -= 8;
    if ( (v12->m128i_i16[0] & 0x1FF) != 0xEE )
      goto LABEL_9;
  }
  if ( (_DWORD)v11 )
  {
    v12 = *(const __m128i **)&v6[2 * (unsigned int)(v11 - 1) + 4];
LABEL_9:
    ptr = v43;
    v42 = 0x800000000LL;
    goto LABEL_10;
  }
  v12 = nullptr;
  ptr = v43;
  v42 = 0x800000000LL;
LABEL_10:
  v36 = 0;
  v14 = 0;
  v34 = v6;
  v15 = (const __m128i **)(v6 + 4);
  do
  {
    v16 = *v15;
    if ( *v15 != v12 || (v17 = 2, !a3) )
      v17 = 0;
    v18 = sub_1B71AD0(a1, *v15, v17, a4, a5, v11, v9, v7);
    if ( v18 == 1 )
    {
      if ( (v16->m128i_i16[0] & 0x1FF) == 0xF5 )
      {
        v22 = ptr;
        v6 = (unsigned int *)(&dword_0 + 1);
        goto LABEL_25;
      }
      v36 = 1;
    }
    else
    {
      v19 = v18 & 0xFFFFFFFFFFFFFFFELL;
      if ( !v14 )
        v14 = v16 != (const __m128i *)v19;
      v11 = (unsigned int)v42;
      v20 = (unsigned int)v42 + 1LL;
      if ( v20 > HIDWORD(v42) )
      {
        v38 = v19;
        sub_2237220(&ptr, v43, v20, 8);
        v11 = (unsigned int)v42;
        v19 = v38;
      }
      *((_QWORD *)ptr + v11) = v19;
      LODWORD(v42) = v42 + 1;
    }
    ++v15;
  }
  while ( (const __m128i **)v10 != v15 );
  v21 = v14;
  v6 = v34;
  v22 = ptr;
  if ( !v36 )
    goto LABEL_35;
  v6 = (unsigned int *)(&dword_0 + 1);
LABEL_25:
  if ( v22 != v43 )
    free(v22);
  sub_15F30C0((__int64)v40);
  sub_1C36470(v33);
  return v6;
}
