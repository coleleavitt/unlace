void __fastcall sub_E872A0(__int64 a1, __int64 a2)
{
  __int64 v4; // r12
  __int64 v5; // rsi
  __m128i v6; // xmm0
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 *v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 *v18; // rax
  __int64 v19; // r13
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
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned __int64 v36; // [rsp+8h] [rbp-E0h]
  char v37; // [rsp+8h] [rbp-E0h]
  __m128i v38; // [rsp+10h] [rbp-D8h] BYREF
  _QWORD *v39; // [rsp+20h] [rbp-C8h] BYREF
  __m128i v40; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v41[21]; // [rsp+40h] [rbp-A8h] BYREF

  v4 = a1 + 24;
  v5 = *(_QWORD *)(a2 + 40);
  v38.m128i_i32[2] = 0;
  v38.m128i_i64[0] = v5;
  sub_B61B50(&v39, v5);
  v6 = _mm_load_si128(&v38);
  v41[0] = v39;
  v40 = v6;
  sub_E80EA0(a1, v5, v7, v8, v9, v10, v6.m128i_u64[0], v6.m128i_i32[2], v39);
  v13 = *(_DWORD *)(a2 + 76) >> 7;
  v14 = *(_QWORD *)(a1 + 32);
  if ( (unsigned __int64)(v14 + 1) > *(_QWORD *)(a1 + 40) )
  {
    sub_22130D0(v4, a1 + 48, v14 + 1, 1);
    v14 = *(_QWORD *)(a1 + 32);
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + v14) = v13;
  v15 = *(_QWORD *)(a1 + 32);
  v16 = v15 + 1;
  *(_QWORD *)(a1 + 32) = v15 + 1;
  if ( (BYTE4(*(_QWORD *)(a2 + 72)) & 0x80u) != 0 )
  {
    v30 = v15 + 2;
    v31 = (*(_QWORD *)(a2 + 72) >> 40) & 1LL;
    if ( v30 > *(_QWORD *)(a1 + 40) )
    {
      v37 = ((unsigned __int16)WORD2(*(_QWORD *)(a2 + 72)) >> 8) & 1;
      sub_22130D0(v4, a1 + 48, v30, 1);
      v16 = *(_QWORD *)(a1 + 32);
      LOBYTE(v31) = v37;
    }
    *(_BYTE *)(*(_QWORD *)(a1 + 24) + v16) = v31;
    ++*(_QWORD *)(a1 + 32);
  }
  v17 = *(_QWORD *)(a2 + 128);
  if ( v17 )
  {
    if ( (v17 & 4) != 0 )
    {
      v18 = (__int64 *)(v17 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v18 )
      {
        v32 = *v18;
        v33 = *(_QWORD *)(*v18 & 0xFFFFFFFFFFFFFFF0LL);
        v34 = *(_QWORD *)(v33 + 8) & 7LL;
        v35 = v34 | (*(__int64 *)(v33 + 8) >> 3) & 1;
        if ( v35 )
          v33 = sub_F411C0(v32);
        sub_E847E0(a1, *(_QWORD *)&byte_8[v33 & 0xFFFFFFFFFFFFFFF0LL], v34, v35, v11, v12);
      }
    }
  }
  v19 = a2 + 64;
  v40.m128i_i64[0] = (__int64)v41;
  v40.m128i_i64[1] = 0x1000000000LL;
  v20 = sub_B6AC30(v19);
  if ( v20 )
  {
    v21 = v40.m128i_u32[2];
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
LABEL_9:
        v20 = *(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v20 )
          goto LABEL_18;
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
          if ( v21 + 1 > (unsigned __int64)v40.m128i_u32[3] )
          {
            v36 = v20;
            sub_22134E0(&v40, v41, v21 + 1, 8);
            v21 = v40.m128i_u32[2];
            v20 = v36;
          }
          *(_QWORD *)(v40.m128i_i64[0] + 8 * v21) = v20;
          v21 = (unsigned int)++v40.m128i_i32[2];
          v20 = *(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v20 )
            continue;
          break;
        default:
          goto LABEL_9;
      }
      break;
    }
  }
  else
  {
    LODWORD(v21) = v40.m128i_i32[2];
  }
LABEL_18:
  v23 = *(unsigned int *)(a1 + 184);
  if ( v23 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
  {
    sub_22134E0(a1 + 176, a1 + 192, v23 + 1, 4);
    v23 = *(unsigned int *)(a1 + 184);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v23) = v21;
  v24 = *(unsigned int *)(a1 + 188);
  v25 = (unsigned int)(*(_DWORD *)(a1 + 184) + 1);
  *(_DWORD *)(a1 + 184) = v25;
  if ( v25 + 1 > v24 )
  {
    sub_22134E0(a1 + 176, a1 + 192, v25 + 1, 4);
    v25 = *(unsigned int *)(a1 + 184);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v25) = 0;
  v26 = (__int64 *)v40.m128i_i64[0];
  v27 = v40.m128i_u32[2];
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
    v28 = (__int64 *)v40.m128i_i64[0];
  }
  if ( v28 != v41 )
    free(v28);
}

