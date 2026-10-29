void __fastcall sub_E88A30(__int64 a1, __int64 a2)
{
  __int64 v4; // r13
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 *v11; // rbx
  __int64 *v12; // r12
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int64 *v17; // r8
  __int64 v18; // r9
  __int64 v19; // r14
  unsigned __int64 v20; // rax
  __int64 v21; // rbx
  _QWORD *v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  __int64 *v26; // rbx
  __int64 v27; // rax
  __int64 *v28; // r13
  __int64 v29; // rsi
  __int64 v30; // rbx
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  _QWORD *v33; // rcx
  _QWORD *v34; // rcx
  __int64 v35; // r12
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rax
  _DWORD *v40; // rax
  __int64 v41; // rdi
  int v42; // edx
  __int64 v43; // r12
  unsigned __int64 v44; // rdx
  __int64 v45; // rax
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rax
  _DWORD *v48; // rax
  __int64 v49; // rdi
  int v50; // edx
  unsigned __int64 v51; // [rsp+8h] [rbp-F0h]
  __m128i v52; // [rsp+10h] [rbp-E8h] BYREF
  _QWORD *v53; // [rsp+20h] [rbp-D8h] BYREF
  __m128i v54; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD v55[23]; // [rsp+40h] [rbp-B8h] BYREF

  v4 = a1 + 176;
  sub_E81B80(a1, a2);
  v7 = *(_DWORD *)((*(_QWORD *)(a2 + 104) & 0xFFFFFFFFFFFFFFF8LL) + 16);
  v8 = *(unsigned int *)(a1 + 184);
  if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
  {
    sub_22134E0(a1 + 176, a1 + 192, v8 + 1, 4);
    v8 = *(unsigned int *)(a1 + 184);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v8) = v7;
  ++*(_DWORD *)(a1 + 184);
  v9 = *(_QWORD *)(a2 + 104);
  if ( v9 )
  {
    v10 = v9 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v10 )
      goto LABEL_8;
    goto LABEL_5;
  }
  v30 = *(_QWORD *)(a2 + 96);
  v31 = *(_QWORD *)(v30 + 88);
  v32 = v31 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v31 & 1) == 0 )
  {
    v33 = (_QWORD *)(v31 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v31 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      if ( (v31 & 2) == 0 )
        goto LABEL_32;
      v43 = v33[2295];
      v44 = v30 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v43 )
      {
        v45 = v33[294];
        v33[304] += 24LL;
        v46 = (v45 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v33[295] >= v46 + 24 && v45 )
        {
          v33[294] = v46 + 24;
          v47 = (v45 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v47 = sub_962430((__int64)(v33 + 294), 24, 24, 3, v5, v6);
          v46 = v47 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v47 = v43;
        v44 = v46 | 4;
        *(_DWORD *)(v47 + 8) = 0;
        *(_QWORD *)(v47 + 16) = v30;
      }
      v32 = v44 & 0xFFFFFFFFFFFFFFFELL;
      v31 = v32 | 1;
      *(_QWORD *)(v30 + 88) = v32 | 1;
    }
  }
  if ( v32 )
  {
    if ( (v32 & 4) != 0 )
    {
      v48 = (_DWORD *)(v31 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v48 )
      {
        v49 = *(_QWORD *)v48;
        v50 = *(_DWORD *)(*(_QWORD *)v48 + 12LL);
        if ( v48[2] != v50 )
        {
          v48[2] = v50;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v49 + 152LL))(v49, v30);
        }
      }
    }
  }
  v10 = *(_QWORD *)(a2 + 104) & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v10 )
  {
    if ( *(_QWORD *)(a2 + 104) )
      goto LABEL_8;
    v30 = *(_QWORD *)(a2 + 96);
    v31 = *(_QWORD *)(v30 + 88);
    v32 = v31 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v31 & 1) != 0 )
    {
      if ( !v32 )
      {
LABEL_45:
        if ( (*(_QWORD *)(a2 + 104) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          goto LABEL_8;
        v11 = *(__int64 **)((*(_QWORD *)(a2 + 104) & 0xFFFFFFFFFFFFFFF8LL) + 8);
        v12 = nullptr;
        goto LABEL_6;
      }
LABEL_41:
      if ( (v32 & 4) != 0 )
      {
        v40 = (_DWORD *)(v31 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v40 )
        {
          v41 = *(_QWORD *)v40;
          v42 = *(_DWORD *)(*(_QWORD *)v40 + 12LL);
          if ( v40[2] != v42 )
          {
            v40[2] = v42;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v41 + 152LL))(v41, v30);
          }
        }
      }
      goto LABEL_45;
    }
LABEL_32:
    v34 = (_QWORD *)(v31 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v31 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      if ( (v31 & 2) == 0 )
        goto LABEL_8;
      v35 = v34[2295];
      v36 = v30 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v35 )
      {
        v37 = v34[294];
        v34[304] += 24LL;
        v38 = (v37 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v34[295] >= v38 + 24 && v37 )
        {
          v34[294] = v38 + 24;
          v39 = (v37 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v39 = sub_962430((__int64)(v34 + 294), 24, 24, 3, v5, v6);
          v38 = v39 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v39 = v35;
        v36 = v38 | 4;
        *(_DWORD *)(v39 + 8) = 0;
        *(_QWORD *)(v39 + 16) = v30;
      }
      v32 = v36 & 0xFFFFFFFFFFFFFFFELL;
      v31 = v32 | 1;
      *(_QWORD *)(v30 + 88) = v32 | 1;
    }
    if ( !v32 )
      goto LABEL_45;
    goto LABEL_41;
  }
LABEL_5:
  v11 = *(__int64 **)(v10 + 8);
  v12 = &v11[*(unsigned int *)(v10 + 16)];
LABEL_6:
  while ( v12 != v11 )
  {
    v13 = *v11;
    v52.m128i_i32[2] = 0;
    ++v11;
    v52.m128i_i64[0] = *(_QWORD *)(v13 + 40);
    v14 = v52.m128i_i64[0];
    sub_B61B50(&v53, v52.m128i_i64[0]);
    v54 = _mm_load_si128(&v52);
    v55[0] = v53;
    sub_E80EA0(a1, v14, v15, v16, v17, v18, v54.m128i_u64[0], v54.m128i_i32[2], v53);
  }
LABEL_8:
  v19 = a2 + 48;
  v54.m128i_i64[0] = (__int64)v55;
  v54.m128i_i64[1] = 0x1000000000LL;
  v20 = sub_B6AC30(v19);
  v21 = v54.m128i_u32[2];
  if ( v20 )
  {
    while ( 2 )
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)(v20 + 29) & 2) == 0 )
        {
          v22 = (_QWORD *)(*(_QWORD *)(v20 + 16) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*(_QWORD *)(v20 + 16) & 4) != 0 )
            v22 = (_QWORD *)*v22;
          if ( (_QWORD *)v19 == v22 )
            break;
        }
LABEL_10:
        v20 = *(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v20 )
          goto LABEL_19;
      }
      switch ( (*(_BYTE *)(v20 + 28) + 119) & 0x7F )
      {
        case 0:
        case 9:
        case 0x18:
        case 0x1A:
        case 0x1B:
        case 0x1D:
        case 0x1F:
        case 0x28:
        case 0x29:
        case 0x37:
        case 0x38:
        case 0x3E:
        case 0x42:
        case 0x4D:
        case 0x50:
          if ( v21 + 1 > (unsigned __int64)v54.m128i_u32[3] )
          {
            v51 = v20;
            sub_22134E0(&v54, v55, v21 + 1, 8);
            v21 = v54.m128i_u32[2];
            v20 = v51;
          }
          *(_QWORD *)(v54.m128i_i64[0] + 8 * v21) = v20;
          v21 = (unsigned int)++v54.m128i_i32[2];
          v20 = *(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v20 )
            continue;
          break;
        default:
          goto LABEL_10;
      }
      break;
    }
  }
LABEL_19:
  v23 = *(unsigned int *)(a1 + 184);
  if ( v23 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
  {
    sub_22134E0(v4, a1 + 192, v23 + 1, 4);
    v23 = *(unsigned int *)(a1 + 184);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v23) = v21;
  v24 = *(unsigned int *)(a1 + 188);
  v25 = (unsigned int)(*(_DWORD *)(a1 + 184) + 1);
  *(_DWORD *)(a1 + 184) = v25;
  if ( v25 + 1 > v24 )
  {
    sub_22134E0(v4, a1 + 192, v25 + 1, 4);
    v25 = *(unsigned int *)(a1 + 184);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v25) = 0;
  v26 = (__int64 *)v54.m128i_i64[0];
  v27 = v54.m128i_u32[2];
  ++*(_DWORD *)(a1 + 184);
  v28 = &v26[v27];
  if ( v26 != v28 )
  {
    do
    {
      v29 = *v26++;
      sub_E853B0(a1, v29);
    }
    while ( v28 != v26 );
    v28 = (__int64 *)v54.m128i_i64[0];
  }
  if ( v28 != v55 )
    free(v28);
}

