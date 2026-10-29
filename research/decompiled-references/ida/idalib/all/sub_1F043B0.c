void __fastcall sub_1F043B0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 *v5; // rdx
  __int64 *v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r9
  unsigned int v10; // edx
  __int64 *v11; // rsi
  __int64 v12; // r8
  unsigned __int64 v13; // r13
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 *v23; // rbx
  unsigned __int64 *v24; // r15
  __int64 v25; // r12
  __int64 *v26; // rcx
  __int64 v27; // rsi
  __int64 *v28; // rdi
  __int64 *v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rsi
  __int64 v32; // r12
  __int64 v33; // rax
  __int64 v34; // r13
  int v35; // esi
  int v36; // r11d
  __int64 v37; // r8
  __int64 v38[2]; // [rsp+0h] [rbp-78h] BYREF
  __m128 v39; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v40[88]; // [rsp+20h] [rbp-58h] BYREF

  v4 = *a1;
  v5 = (__int64 *)a1[1];
  v6 = (__int64 *)(*a1 + 3792);
  v7 = *v6;
  v8 = *(unsigned int *)(v4 + 3808);
  v9 = *v5;
  if ( (_DWORD)v8 )
  {
    v10 = (v8 - 1) & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4));
    v11 = (__int64 *)(v7 + 24LL * v10);
    v12 = *v11;
    if ( v9 == *v11 )
    {
LABEL_3:
      sub_1ECCF80(&v39, v11, (_QWORD *)(v7 + 24 * v8), (__int64)v6, 1);
      v13 = v39.m128_u64[0];
      goto LABEL_4;
    }
    v35 = 1;
    if ( v12 != -4096 )
    {
      do
      {
        v36 = v35 + 1;
        v10 = (v8 - 1) & (v35 + v10);
        v11 = (__int64 *)(v7 + 24LL * v10);
        v37 = *v11;
        if ( v9 == *v11 )
          goto LABEL_3;
        v35 = v36;
      }
      while ( v37 != -4096 );
    }
  }
  sub_1ECCF80(&v39, (_QWORD *)(v7 + 24 * v8), (_QWORD *)(v7 + 24 * v8), (__int64)v6, 1);
  v13 = v39.m128_u64[0];
LABEL_4:
  sub_1ECCF80(
    &v39,
    (_QWORD *)(*(_QWORD *)(*a1 + 3792) + 24LL * *(unsigned int *)(*a1 + 3808)),
    (_QWORD *)(*(_QWORD *)(*a1 + 3792) + 24LL * *(unsigned int *)(*a1 + 3808)),
    *a1 + 3792,
    1);
  if ( v39.m128_u64[0] == v13 )
    return;
  ++*(_DWORD *)(*a1 + 9380);
  v17 = a1[2];
  v18 = *(_QWORD *)a1[3];
  v38[1] = a2;
  v38[0] = v18;
  sub_1F03F10((__int64 *)&v39, v13 + 8, v38, v14, v15, v16);
  v23 = (unsigned __int64 *)v39.m128_u64[0];
  v24 = (unsigned __int64 *)(v39.m128_u64[0] + 8LL * v39.m128_u32[2]);
  if ( (unsigned __int64 *)v39.m128_u64[0] == v24 )
  {
    if ( v24 == (unsigned __int64 *)v40 )
      return;
    goto LABEL_7;
  }
  do
  {
    while ( 1 )
    {
      v34 = sub_1EDB980(*(_QWORD **)v17, *v23, v19, v20, v21, v22);
      if ( *(_QWORD *)(v34 + 40) == **(_QWORD **)(v17 + 8) )
        break;
      if ( v24 == ++v23 )
        goto LABEL_30;
    }
    v25 = *(_QWORD *)(v17 + 16);
    v19 = *(unsigned __int8 *)(v25 + 20);
    if ( (_BYTE)v19 )
    {
      v26 = *(__int64 **)v25;
      v21 = *(unsigned int *)(v25 + 12);
      v27 = 8 * v21;
      v28 = (__int64 *)(*(_QWORD *)v25 + 8 * v21);
      if ( *(__int64 **)v25 != v28 )
      {
        v29 = *(__int64 **)v25;
        if ( *v26 == v34 )
        {
LABEL_32:
          v19 = 0;
LABEL_33:
          v20 = (unsigned __int64)&v26[*(unsigned int *)(v25 + 12)];
          goto LABEL_18;
        }
        while ( v28 != ++v29 )
        {
          if ( v34 == *v29 )
            goto LABEL_32;
        }
      }
      if ( (unsigned int)v21 < *(_DWORD *)(v25 + 8) )
      {
        v21 = (unsigned int)(v21 + 1);
        *(_DWORD *)(v25 + 12) = v21;
        *v28 = v34;
        v29 = (__int64 *)(*(_QWORD *)v25 + v27);
        v20 = *(_QWORD *)v25 + 8LL * *(unsigned int *)(v25 + 12);
        goto LABEL_18;
      }
    }
    v29 = (__int64 *)sub_2236760(*(_QWORD *)(v17 + 16), v34);
    v26 = *(__int64 **)v25;
    if ( *(_BYTE *)(v25 + 20) )
      goto LABEL_33;
    v20 = (unsigned __int64)&v26[*(unsigned int *)(v25 + 8)];
LABEL_18:
    if ( (__int64 *)v20 != v29 && (unsigned __int64)*v29 >= 0xFFFFFFFFFFFFFFFELL )
    {
      v30 = v29 + 1;
      do
      {
        v31 = v30;
        if ( (_QWORD *)v20 == v30 )
          break;
        ++v30;
      }
      while ( *v31 >= 0xFFFFFFFFFFFFFFFELL );
    }
    if ( (_BYTE)v19 )
    {
      v32 = *(_QWORD *)(v17 + 24);
      v33 = *(unsigned int *)(v32 + 8);
      v20 = *(unsigned int *)(v32 + 12);
      if ( v33 + 1 > v20 )
      {
        sub_2237220(*(_QWORD *)(v17 + 24), v32 + 16, v33 + 1, 8);
        v33 = *(unsigned int *)(v32 + 8);
      }
      v19 = *(_QWORD *)v32;
      *(_QWORD *)(*(_QWORD *)v32 + 8 * v33) = v34;
      ++*(_DWORD *)(v32 + 8);
    }
    ++v23;
  }
  while ( v24 != v23 );
LABEL_30:
  v24 = (unsigned __int64 *)v39.m128_u64[0];
  if ( (_BYTE *)v39.m128_u64[0] != v40 )
LABEL_7:
    free(v24);
}
