void __fastcall sub_572A30(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int64 a8)
{
  unsigned __int64 v8; // r12
  __int64 v9; // r13
  int v10; // r10d
  unsigned __int64 v11; // r15
  int v12; // ebp
  int v13; // edx
  unsigned __int64 *v14; // rbx
  int v15; // r14d
  char v16; // al
  __int64 v17; // rax
  int v18; // edx
  bool v19; // zf
  __int64 v20; // rdx
  __m128i v21; // xmm1
  __int64 v22; // rdx
  __m128i *v23; // rax
  unsigned int v24; // ebx
  int v25; // ebp
  int v26; // edx
  int v27; // r14d
  __int64 v28; // rax
  __int64 v29; // rax
  bool v30; // al
  __int64 v31; // rbx
  __int64 v32; // rax
  char v33; // cl
  int v34; // edx
  int v35; // eax
  int v36; // edx
  int v37; // esi
  unsigned __int8 v38; // [rsp+20h] [rbp-58h]
  unsigned __int8 v39; // [rsp+20h] [rbp-58h]
  __int64 v40; // [rsp+20h] [rbp-58h]
  __int64 v41; // [rsp+20h] [rbp-58h]
  __int64 v42; // [rsp+28h] [rbp-50h]
  unsigned int v43; // [rsp+28h] [rbp-50h]
  __int64 v44; // [rsp+30h] [rbp-48h]
  int v45; // [rsp+3Ch] [rbp-3Ch]

  v8 = *((_QWORD *)&a7 + 1);
  v9 = a7;
  if ( a1 == (_QWORD)a7 )
    return;
  v10 = *(unsigned __int16 *)(a1 + 208);
  v11 = a1;
  if ( !(_WORD)v10 )
  {
    v17 = 0;
LABEL_14:
    if ( v9 )
    {
      v18 = *(_DWORD *)(v9 + 212);
      if ( !v18 )
        __assert_fail("self->ref_count > 0", "lib/src/./stack.c", 0x55u, "stack_node_retain");
      v19 = v18 == -1;
      v20 = (unsigned int)(v18 + 1);
      *(_DWORD *)(v9 + 212) = v20;
      if ( v19 )
        sub_55D220(a1, a2, v20, a4, a5, a6);
    }
    v21 = _mm_loadu_si128((const __m128i *)&a7);
    v22 = a8;
    v23 = (__m128i *)(v11 + 24 * v17);
    v24 = *(_DWORD *)(v9 + 220);
    v25 = *(_DWORD *)(v9 + 224);
    *(_WORD *)(v11 + 208) = v10 + 1;
    v23[2].m128i_i64[0] = v22;
    v23[1] = v21;
    if ( v8 )
    {
      sub_56C560(*((volatile signed __int32 **)&a7 + 1));
      if ( (BYTE8(a7) & 1) != 0 )
      {
        v26 = (BYTE8(a7) & 2) != 0;
      }
      else
      {
        v36 = *(_DWORD *)(*((_QWORD *)&a7 + 1) + 36LL);
        if ( v36 )
          v36 = *(_DWORD *)(*((_QWORD *)&a7 + 1) + 56LL);
        v26 = v36 - (((*(_BYTE *)(*((_QWORD *)&a7 + 1) + 44LL) & 1) == 0) - 1);
        if ( *(_WORD *)(*((_QWORD *)&a7 + 1) + 40LL) == 0xFFFE )
          ++v26;
      }
      v24 += v26;
      if ( (v8 & 1) == 0 && *(_DWORD *)(v8 + 36) )
        v25 += *(_DWORD *)(v8 + 60);
    }
    if ( *(_DWORD *)(v11 + 220) < v24 )
      *(_DWORD *)(v11 + 220) = v24;
    if ( *(_DWORD *)(v11 + 224) < v25 )
      *(_DWORD *)(v11 + 224) = v25;
    return;
  }
  a5 = DWORD2(a7);
  a6 = a2;
  v12 = 0;
  v13 = BYTE8(a7) & 1;
  LOWORD(a5) = HIBYTE(WORD4(a7));
  v14 = (unsigned __int64 *)(a1 + 16);
  v15 = (unsigned __int16)v10;
  a4 = 0xFFFFFFFF0000FFFFLL;
  while ( 1 )
  {
    a1 = v14[1];
    if ( a1 == v8 )
      goto LABEL_34;
    if ( !a1 || !v8 )
      goto LABEL_12;
    v16 = a1 & 1;
    if ( (a1 & 1) != 0 )
      break;
    a2 = *(unsigned __int16 *)(a1 + 40);
    if ( !(_BYTE)v13 )
    {
      if ( (_WORD)a2 != *(_WORD *)(v8 + 40) )
        goto LABEL_12;
      if ( (*(_BYTE *)(a1 + 45) & 2) != 0 || *(_DWORD *)(a1 + 32) )
      {
LABEL_32:
        if ( (*(_BYTE *)(v8 + 45) & 2) != 0 )
          goto LABEL_34;
        a2 = *(unsigned int *)(v8 + 32);
        if ( (_DWORD)a2 )
          goto LABEL_34;
        if ( !v16 )
          goto LABEL_42;
LABEL_55:
        a2 = BYTE6(a1);
        if ( BYTE6(a1) != *(_DWORD *)(v8 + 4) )
          goto LABEL_12;
        a2 = HIBYTE(a1);
        if ( *(_DWORD *)(v8 + 16) != HIBYTE(a1) )
          goto LABEL_12;
        a2 = 0;
      }
      else
      {
LABEL_42:
        a2 = *(unsigned int *)(a1 + 4);
        if ( *(_DWORD *)(v8 + 4) != (_DWORD)a2 )
          goto LABEL_12;
        a2 = *(unsigned int *)(v8 + 16);
        if ( *(_DWORD *)(a1 + 16) != (_DWORD)a2 )
          goto LABEL_12;
        a2 = *(unsigned int *)(a1 + 36);
      }
      if ( *(_DWORD *)(v8 + 36) == (_DWORD)a2 )
      {
        if ( v16 )
          a2 = (a1 >> 3) & 1;
        else
          a2 = (*(_BYTE *)(a1 + 44) & 4) != 0;
        LOBYTE(v29) = (*(_BYTE *)(v8 + 44) & 4) != 0;
        goto LABEL_65;
      }
      goto LABEL_12;
    }
    if ( (_WORD)a2 == (_WORD)a5 )
    {
      if ( (*(_BYTE *)(a1 + 45) & 2) == 0 && !*(_DWORD *)(a1 + 32) || (v8 & 0x20) == 0 )
      {
        a2 = *(unsigned int *)(a1 + 4);
        if ( BYTE6(v8) != (_DWORD)a2 || HIBYTE(v8) != *(_DWORD *)(a1 + 16) || *(_DWORD *)(a1 + 36) )
          goto LABEL_12;
        a2 = (*(_BYTE *)(a1 + 44) & 4) != 0;
LABEL_64:
        v29 = (v8 >> 3) & 1;
LABEL_65:
        if ( (_BYTE)a2 != (_BYTE)v29 )
          goto LABEL_12;
        a2 = v8;
        v45 = v10;
        v44 = a6;
        v43 = a5;
        v39 = v13;
        v30 = sub_5715E0(a1, v8);
        v13 = v39;
        a5 = v43;
        a4 = 0xFFFFFFFF0000FFFFLL;
        a6 = v44;
        v10 = v45;
        if ( !v30 )
          goto LABEL_12;
      }
LABEL_34:
      a1 = *v14;
      if ( *v14 == v9 )
        goto LABEL_70;
      goto LABEL_35;
    }
LABEL_12:
    ++v12;
    v17 = v15;
    v14 += 3;
    if ( v15 <= v12 )
    {
      if ( (_WORD)v10 == 8 )
        return;
      goto LABEL_14;
    }
  }
  a2 = (unsigned int)a1;
  LOWORD(a2) = BYTE1(a1);
  if ( !(_BYTE)v13 )
  {
    if ( *(_WORD *)(v8 + 40) != (_WORD)a2 )
      goto LABEL_12;
    if ( (a1 & 0x20) != 0 )
      goto LABEL_32;
    goto LABEL_55;
  }
  if ( (_WORD)a2 != (_WORD)a5 )
    goto LABEL_12;
  if ( (a1 & 0x20) == 0 || (v8 & 0x20) == 0 )
  {
    a2 = BYTE6(v8);
    if ( BYTE6(a1) != BYTE6(v8) )
      goto LABEL_12;
    a2 = HIBYTE(v8);
    if ( HIBYTE(v8) != HIBYTE(a1) )
      goto LABEL_12;
    a2 = (a1 >> 3) & 1;
    goto LABEL_64;
  }
  a1 = *v14;
  if ( *v14 == v9 )
  {
LABEL_70:
    v31 = 24LL * v12;
    v32 = *(_QWORD *)(v11 + v31 + 24);
    v33 = v32 & 1;
    if ( (_BYTE)v13 )
    {
      if ( v33 || !*(_DWORD *)(v32 + 36) || *(int *)(v32 + 60) >= 0 )
        return;
      v40 = a6;
      sub_56C560(*((volatile signed __int32 **)&a7 + 1));
      sub_56C9A0(v40, *(volatile signed __int32 **)(v11 + v31 + 24));
      *(_QWORD *)(v11 + v31 + 24) = v8;
      v35 = *(_DWORD *)(v9 + 224);
LABEL_84:
      *(_DWORD *)(v11 + 224) = v35;
      return;
    }
    if ( *(_DWORD *)(v8 + 36) )
    {
      v34 = *(_DWORD *)(v8 + 60);
      if ( v33 || !*(_DWORD *)(v32 + 36) )
      {
        if ( v34 <= 0 )
          return;
LABEL_91:
        v41 = a6;
        sub_56C560(*((volatile signed __int32 **)&a7 + 1));
        sub_56C9A0(v41, *(volatile signed __int32 **)(v11 + v31 + 24));
        v37 = *(_DWORD *)(v8 + 36);
        *(_QWORD *)(v11 + v31 + 24) = v8;
        v35 = *(_DWORD *)(v9 + 224);
        if ( v37 )
          v35 += *(_DWORD *)(v8 + 60);
        goto LABEL_84;
      }
    }
    else
    {
      if ( v33 || !*(_DWORD *)(v32 + 36) )
        return;
      v34 = 0;
    }
    if ( *(_DWORD *)(v32 + 60) >= v34 )
      return;
    goto LABEL_91;
  }
LABEL_35:
  if ( ((*(_QWORD *)v9 ^ *(_QWORD *)a1) & 0xFFFFFFFF0000FFFFLL) != 0 || *(_DWORD *)(a1 + 216) != *(_DWORD *)(v9 + 216) )
    goto LABEL_12;
  if ( *(_WORD *)(v9 + 208) )
  {
    v27 = 0;
    while ( 1 )
    {
      v38 = v13;
      v28 = 3LL * v27;
      v42 = a6;
      ++v27;
      sub_572A30(
        a1,
        a6,
        v13,
        a4,
        a5,
        a6,
        (__int128)_mm_loadu_si128((const __m128i *)(v9 + 8 * v28 + 16)),
        *(_QWORD *)(v9 + 8 * v28 + 32));
      v13 = v38;
      if ( *(unsigned __int16 *)(v9 + 208) <= v27 )
        break;
      a1 = *(_QWORD *)(v11 + 24LL * v12 + 16);
      a6 = v42;
    }
  }
  v35 = *(_DWORD *)(v9 + 224);
  if ( v8 && !(_BYTE)v13 && *(_DWORD *)(v8 + 36) )
    v35 += *(_DWORD *)(v8 + 60);
  if ( *(_DWORD *)(v11 + 224) < v35 )
    goto LABEL_84;
}
