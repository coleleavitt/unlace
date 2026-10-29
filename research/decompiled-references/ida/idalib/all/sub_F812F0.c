__m128 *__fastcall sub_F812F0(__m128 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r13
  unsigned __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 *v21; // r12
  __int64 v22; // rdi
  _QWORD *v23; // r13
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _QWORD *v28; // rax
  unsigned __int64 v30; // r13
  __int64 v31; // rdx
  __int64 v32; // rax
  unsigned __int64 v33; // r12
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rax

  v8 = *(_QWORD *)(*(_QWORD *)(a4 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v8 + 16) - 25 > 1 )
    v8 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a4 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4);
  v9 = *(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v10 = (unsigned int)*(unsigned __int8 *)(v9 + 16) - 25;
  if ( (unsigned int)v10 > 1 )
    v9 = sub_F63050(v9, a2, v10, a4);
  v11 = *(_QWORD *)&byte_8[*(_QWORD *)(v9 + 24) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)*(_QWORD *)&byte_8[*(_QWORD *)(v9 + 24) & 0xFFFFFFFFFFFFFFF0LL]
       | (unsigned __int8)*(_QWORD *)(v9 + 24))
      & 7;
  v12 = *(_QWORD *)&byte_8[*(_QWORD *)(v8 + 24) & 0xFFFFFFFFFFFFFFF0LL];
  v13 = v12 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v12 | *(_BYTE *)(v8 + 24)) & 7;
  if ( v13 == v11 )
    goto LABEL_13;
  v14 = v11 & 0xFFFFFFFFFFFFFFF0LL;
  v15 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
  v16 = *(unsigned __int8 *)(v15 + 16);
  if ( (_DWORD)v16 == 43 || (_DWORD)v16 == 44 )
  {
    if ( !v14 )
      v15 = 0x10102464C457FLL;
    while ( 1 )
    {
      v17 = *(_QWORD *)(v15 + 32);
      if ( (*(_BYTE *)(v15 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v30 = v17 & 0xFFFFFFFFFFFFFFF0LL;
        v15 = *(_QWORD *)v30;
        v31 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v30 + 16LL) - 43;
        if ( (unsigned int)v31 <= 1 )
          break;
        v32 = sub_F63050(v15, a2, v31, v16);
        v17 = *(_QWORD *)(v32 + 32);
        if ( (*(_BYTE *)(v32 + 18) & 0x10) == 0 )
          goto LABEL_19;
      }
    }
LABEL_19:
    v33 = v13 & 0xFFFFFFFFFFFFFFF0LL;
    if ( !v33 || (v34 = *(_QWORD *)v33, (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v33 + 16LL) - 43 > 1) )
      v34 = 0x10102464C457FLL;
    while ( 1 )
    {
      v35 = *(_QWORD *)(v34 + 32);
      if ( (*(_BYTE *)(v34 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v34 = *(_QWORD *)(v35 & 0xFFFFFFFFFFFFFFF0LL);
        v36 = (unsigned int)*(unsigned __int8 *)(v34 + 16) - 43;
        if ( (unsigned int)v36 <= 1 )
          break;
        v37 = sub_F63050(v34, a2, v36, v16);
        v35 = *(_QWORD *)(v37 + 32);
        if ( (*(_BYTE *)(v37 + 18) & 0x10) == 0 )
          goto LABEL_24;
      }
    }
LABEL_24:
    v20 = v35;
  }
  else
  {
    v17 = *(_QWORD *)(v15 + 32);
    v18 = v13 & 0xFFFFFFFFFFFFFFF0LL;
    if ( !v18 || (v19 = *(_QWORD *)v18, *(_BYTE *)(*(_QWORD *)v18 + 16LL) != 42) )
      v19 = 0x10102464C457FLL;
    v20 = *(_QWORD *)(v19 + 32);
  }
  v21 = (__int64 *)(v20 & 0xFFFFFFFFFFFFFFF0LL);
  v22 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (v22 & 0xFFFFFFFFFFFFFFF0LL) == (*v21 & 0xFFFFFFFFFFFFFFF0LL) )
  {
LABEL_13:
    a1[1].m128_u64[0] = 0;
    *a1 = 0;
    return a1;
  }
  else
  {
    v23 = sub_F60F10(v22, a2, v22 & 0xFFFFFFFFFFFFFFF0LL, v16, a5, a6);
    v28 = sub_F60F10(*v21, a2, v24, v25, v26, v27);
    sub_F81120(a1, a2, (__int64)v28, (__int64)v23);
    return a1;
  }
}
