void __fastcall sub_1F8F920(__int64 a1)
{
  unsigned __int64 v1; // r12
  unsigned __int64 v2; // rdx
  int v3; // ecx
  int *v4; // rsi
  unsigned int *v5; // rbx
  unsigned __int64 v6; // rbp
  int *v7; // rdx
  unsigned __int64 v8; // r13
  unsigned int v9; // ecx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r15
  __int64 v12; // rax
  unsigned __int64 *v13; // rax
  unsigned int *v14; // rdx
  unsigned int *v15; // rax
  unsigned int v16; // edi
  int *v17; // r12
  __int64 v18; // rbx
  int *v19; // rbp
  unsigned __int64 v20; // rax
  __int32 i; // eax
  __int64 v22; // r14
  __int64 v23; // rbp
  __int64 v24; // r12
  __int64 v25; // rbp
  __int64 v26; // r15
  __int64 v27; // rbx
  _QWORD *v28; // rax
  int v29; // esi
  char *v30; // rdx
  __int64 v31; // rcx
  int v32; // esi
  __int64 v33; // rdx
  __int64 v34; // rdx
  void *v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // r12
  __int64 v39; // rbp
  __int64 v40; // r11
  int v41; // ecx
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rdx
  int *v45; // rbx
  int *v46; // r15
  __int64 v47; // rbp
  __int64 v48; // r15
  __int64 v49; // rdi
  volatile signed __int32 *v50; // rax
  unsigned int v51; // ebp
  __int64 v52; // rdi
  __int64 v53; // rax
  char *v54; // [rsp+8h] [rbp-CD0h]
  unsigned __int64 v55; // [rsp+8h] [rbp-CD0h]
  int *v56; // [rsp+10h] [rbp-CC8h]
  void *v57; // [rsp+18h] [rbp-CC0h]
  __int64 v58; // [rsp+18h] [rbp-CC0h]
  char *v59; // [rsp+28h] [rbp-CB0h]
  __int64 v61; // [rsp+48h] [rbp-C90h]
  __int128 v62; // [rsp+60h] [rbp-C78h] BYREF
  __int64 v63; // [rsp+70h] [rbp-C68h] BYREF
  volatile signed __int32 *v64; // [rsp+78h] [rbp-C60h]
  void *v65; // [rsp+80h] [rbp-C58h] BYREF
  __int64 v66; // [rsp+88h] [rbp-C50h]
  _BYTE v67[1024]; // [rsp+90h] [rbp-C48h] BYREF
  __m128 ptr; // [rsp+490h] [rbp-848h] BYREF
  _BYTE v69[2104]; // [rsp+4A0h] [rbp-838h] BYREF

  v2 = *(unsigned int *)(a1 + 792);
  v3 = *(_DWORD *)(a1 + 792);
  v65 = v67;
  v66 = 0x4000000000LL;
  if ( v2 > 0x40 )
  {
    sub_2237220(&v65, v67, v2, 16);
    v3 = *(_DWORD *)(a1 + 792);
  }
  v4 = *(int **)(a1 + 784);
  if ( v3 )
    sub_1F785F0(&ptr, v4, &v4[4 * *(unsigned int *)(a1 + 800)], a1 + 784, 0);
  else
    sub_1F785F0(&ptr, &v4[4 * *(unsigned int *)(a1 + 800)], &v4[4 * *(unsigned int *)(a1 + 800)], a1 + 784, 1);
  v6 = ptr.m128_u64[1];
  v5 = (unsigned int *)ptr.m128_u64[0];
  v7 = (int *)(*(_QWORD *)(a1 + 784) + 16LL * *(unsigned int *)(a1 + 800));
  sub_1F785F0(&ptr, v7, v7, a1 + 784, 1);
  v8 = ptr.m128_u64[0];
  v9 = v66;
  while ( (unsigned int *)v8 != v5 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v10 = *((_QWORD *)v5 + 1);
        v11 = *v5 | v1 & 0xFFFFFFFF00000000LL;
        v12 = v9;
        v1 = v11;
        if ( (unsigned __int64)v9 + 1 > HIDWORD(v66) )
        {
          v55 = *((_QWORD *)v5 + 1);
          sub_2237220(&v65, v67, v9 + 1LL, 16);
          v12 = (unsigned int)v66;
          v10 = v55;
        }
        v13 = (unsigned __int64 *)((char *)v65 + 16 * v12);
        v14 = v5 + 4;
        *v13 = v11;
        v13[1] = v10;
        v9 = v66 + 1;
        LODWORD(v66) = v66 + 1;
        if ( (unsigned int *)v6 != v5 + 4 )
          break;
        v5 = (unsigned int *)v6;
        if ( v8 == v6 )
          goto LABEL_14;
      }
      if ( v5[4] + 1 <= 1 )
        break;
      v5 += 4;
      if ( (unsigned int *)v8 == v14 )
        goto LABEL_14;
    }
    v15 = v5 + 8;
    do
    {
      v5 = v15;
      if ( (unsigned int *)v6 == v15 )
        break;
      v16 = *v15;
      v15 += 4;
    }
    while ( v16 + 1 <= 1 );
  }
LABEL_14:
  v17 = (int *)v65;
  v18 = 16LL * v9;
  v19 = (int *)((char *)v65 + v18);
  if ( v65 == (char *)v65 + v18 )
  {
    ptr.m128_u64[0] = (unsigned __int64)v69;
    ptr.m128_u64[1] = 0x10000000000LL;
  }
  else
  {
    _BitScanReverse64(&v20, v18 >> 4);
    sub_1F85960((__int64)v65, (__int64 *)((char *)v65 + v18), 2LL * (int)(63 - (v20 ^ 0x3F)));
    if ( (unsigned __int64)v18 > 0x100 )
    {
      sub_1F6B110((__int64)v17, v17 + 64);
      for ( ; v19 != (int *)v40; *(_QWORD *)(v43 + 8) = v42 )
      {
        while ( 1 )
        {
          v41 = *(_DWORD *)v40;
          v42 = *(_QWORD *)(v40 + 8);
          v43 = v40 - 16;
          if ( *(_DWORD *)(v40 - 16) > *(_DWORD *)v40 )
            break;
          v53 = v40;
          v40 += 16;
          *(_DWORD *)v53 = v41;
          *(_QWORD *)(v53 + 8) = v42;
          if ( v19 == (int *)v40 )
            goto LABEL_17;
        }
        while ( 1 )
        {
          *(_DWORD *)(v43 + 16) = *(_DWORD *)v43;
          *(_QWORD *)(v43 + 24) = *(_QWORD *)(v43 + 8);
          if ( v41 >= *(_DWORD *)(v43 - 16) )
            break;
          v43 -= 16;
        }
        v40 += 16;
        *(_DWORD *)v43 = v41;
      }
    }
    else
    {
      sub_1F6B110((__int64)v17, v19);
    }
LABEL_17:
    v54 = (char *)v65;
    v59 = (char *)v65 + 16 * (unsigned int)v66;
    ptr.m128_u64[0] = (unsigned __int64)v69;
    ptr.m128_u64[1] = 0x10000000000LL;
    if ( v65 != v59 )
    {
      for ( i = 0; ; i = ptr.m128_i32[2] )
      {
        v22 = *((_QWORD *)v54 + 1);
        v23 = *(unsigned int *)(v22 + 8);
        v24 = *(_QWORD *)v22;
        *(_DWORD *)(v22 + 1040) = i;
        v25 = 16 * v23;
        v56 = (int *)(v24 + v25);
        if ( v25 )
        {
          v26 = v25 >> 4;
          do
          {
            v27 = 2 * v26;
            v28 = (_QWORD *)operator new(16 * v26, (const std::nothrow_t *)&std::nothrow);
            if ( v28 )
            {
              v29 = *(_DWORD *)v24;
              v28[1] = *(_QWORD *)(v24 + 8);
              v30 = (char *)(v28 + 2);
              *(_DWORD *)v28 = v29;
              if ( &v28[v27] == v28 + 2 )
              {
                v33 = (__int64)v28;
              }
              else
              {
                do
                {
                  v31 = *((_QWORD *)v30 - 1);
                  v32 = *((_DWORD *)v30 - 4);
                  v30 += 16;
                  *((_DWORD *)v30 - 4) = v32;
                  *((_QWORD *)v30 - 1) = v31;
                }
                while ( &v28[v27] != (_QWORD *)v30 );
                v29 = v28[v27 - 2];
                v33 = (__int64)&v28[v27 - 2];
              }
              v34 = *(_QWORD *)(v33 + 8);
              *(_DWORD *)v24 = v29;
              v57 = v28;
              *(_QWORD *)(v24 + 8) = v34;
              sub_1F8F860((char *)v24, v56, (int *)v28, v26);
              v35 = v57;
              goto LABEL_27;
            }
            v26 >>= 1;
          }
          while ( v26 );
          if ( (unsigned __int64)v25 <= 0xE0 )
            goto LABEL_58;
          v44 = 16 * (v25 >> 5);
          v45 = (int *)(v24 + v44);
          v58 = v44 >> 4;
          if ( (unsigned __int64)v44 <= 0xE0 )
          {
            sub_1F6B1D0(v24, (int *)(v24 + v44));
          }
          else
          {
            v46 = (int *)(v24 + 16 * (v44 >> 5));
            v61 = 16 * (v44 >> 5);
            sub_1F6CD40((char *)v24, v46);
            sub_1F6CD40((char *)v46, v45);
            sub_1F6CB00((char *)v24, (char *)v46, (__int64)v45, v61 >> 4, (16 * (v25 >> 5) - v61) >> 4);
          }
          v47 = v25 - 16 * (v25 >> 5);
          if ( v47 <= 224 )
          {
            sub_1F6B1D0((__int64)v45, v56);
          }
          else
          {
            v48 = 4 * (v47 >> 5);
            sub_1F6CD40((char *)v45, &v45[v48]);
            sub_1F6CD40((char *)&v45[v48], v56);
            sub_1F6CB00(
              (char *)v45,
              (char *)&v45[v48],
              (__int64)v56,
              (v48 * 4) >> 4,
              ((char *)v56 - (char *)&v45[v48]) >> 4);
          }
          sub_1F6CB00((char *)v24, (char *)v45, (__int64)v56, v58, v47 >> 4);
          v35 = nullptr;
        }
        else
        {
LABEL_58:
          sub_1F6B1D0(v24, v56);
          v35 = nullptr;
        }
LABEL_27:
        operator delete(v35, (const std::nothrow_t *)&std::nothrow);
        v36 = *(_QWORD *)v22;
        v37 = ptr.m128_u32[2];
        v38 = *(_QWORD *)v22 + 16LL * *(unsigned int *)(v22 + 8);
        if ( *(_QWORD *)v22 != v38 )
        {
          do
          {
            while ( 1 )
            {
              v39 = *(_QWORD *)(v36 + 8);
              if ( v37 + 1 > (unsigned __int64)ptr.m128_u32[3] )
                break;
              v36 += 16;
              *(_QWORD *)(ptr.m128_u64[0] + 8 * v37) = v39;
              v37 = (unsigned int)++ptr.m128_i32[2];
              if ( v36 == v38 )
                goto LABEL_32;
            }
            v36 += 16;
            sub_2237220(&ptr, v69, v37 + 1, 8);
            *(_QWORD *)(ptr.m128_u64[0] + 8LL * ptr.m128_u32[2]) = v39;
            v37 = (unsigned int)++ptr.m128_i32[2];
          }
          while ( v38 != v36 );
        }
LABEL_32:
        v54 += 16;
        if ( v54 == v59 )
          break;
      }
    }
  }
  sub_1F6B880(&v62);
  sub_A1FE00(v62, 42, 1);
  sub_A1FE00(v62, 32, 2);
  sub_A1FE00(v62, 0, 10);
  v49 = *(_QWORD *)(a1 + 16);
  v50 = *((volatile signed __int32 **)&v62 + 1);
  v63 = v62;
  v62 = 0;
  v64 = v50;
  v51 = sub_A22F90(v49, &v63);
  if ( v64 )
    sub_4343A0(v64);
  v63 = 42;
  v52 = *(_QWORD *)(a1 + 16);
  v64 = (volatile signed __int32 *)ptr.m128_u32[2];
  sub_1F759B0(v52, v51, (unsigned __int8 *)&v63, 2, ptr.m128_u64[0], 8LL * ptr.m128_u32[2], 0);
  if ( *((_QWORD *)&v62 + 1) )
    sub_4343A0(*((volatile signed __int32 **)&v62 + 1));
  if ( (_BYTE *)ptr.m128_u64[0] != v69 )
    free((void *)ptr.m128_u64[0]);
  if ( v65 != v67 )
    free(v65);
}
