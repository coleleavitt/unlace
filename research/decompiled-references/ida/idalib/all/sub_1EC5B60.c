void __fastcall sub_1EC5B60(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rdi
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // edx
  __int64 *v10; // rsi
  __int64 v11; // r8
  unsigned __int64 v12; // r15
  _QWORD *v13; // rdx
  void *v14; // rdi
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 *v17; // r14
  __int64 *v18; // r15
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdi
  _QWORD *v22; // r14
  __int64 *v23; // r13
  char v24; // dl
  __int64 v25; // r15
  char *v26; // rcx
  __int64 v27; // rsi
  char *v28; // rdi
  char *v29; // rax
  char *v30; // rsi
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  int v33; // esi
  int v34; // r8d
  __int64 v35; // r11
  void *ptr; // [rsp+10h] [rbp-138h] BYREF
  unsigned int v37; // [rsp+18h] [rbp-130h]
  unsigned int v38; // [rsp+1Ch] [rbp-12Ch]
  _QWORD v39[4]; // [rsp+20h] [rbp-128h] BYREF
  void *v40; // [rsp+40h] [rbp-108h] BYREF
  __int64 v41; // [rsp+48h] [rbp-100h]
  int v42; // [rsp+50h] [rbp-F8h]
  char v43; // [rsp+54h] [rbp-F4h]
  __int64 v44; // [rsp+58h] [rbp-F0h] BYREF
  __m128 v45; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v46; // [rsp+90h] [rbp-B8h] BYREF
  _BYTE v47[176]; // [rsp+98h] [rbp-B0h] BYREF

  v3 = v39;
  v41 = 4;
  v42 = 0;
  v40 = &v44;
  v4 = 1;
  v43 = 1;
  ptr = v39;
  v38 = 4;
  v39[0] = a2;
  do
  {
    while ( 1 )
    {
      v5 = v4--;
      v6 = v3[v5 - 1];
      v37 = v4;
      if ( *(int *)(v6 + 908) <= 0 && (*(_BYTE *)(v6 + 904) & 1) == 0 )
        break;
      if ( !v4 )
        goto LABEL_44;
    }
    *(_DWORD *)(v6 + 908) = 1;
    v7 = *(unsigned int *)(a1 + 4600);
    v8 = *(_QWORD *)(a1 + 4584);
    if ( (_DWORD)v7 )
    {
      v9 = (v7 - 1) & (((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4));
      v10 = (__int64 *)(v8 + 40LL * v9);
      v11 = *v10;
      if ( v6 == *v10 )
        goto LABEL_7;
      v33 = 1;
      if ( v11 != -4096 )
      {
        while ( 1 )
        {
          v34 = v33 + 1;
          v9 = (v7 - 1) & (v33 + v9);
          v10 = (__int64 *)(v8 + 40LL * v9);
          v35 = *v10;
          if ( v6 == *v10 )
            break;
          v33 = v34;
          if ( v35 == -4096 )
            goto LABEL_57;
        }
LABEL_7:
        sub_1EC5AF0(&v45, v10, (_QWORD *)(v8 + 40 * v7), a1 + 4584, 1);
        v12 = v45.m128_u64[0];
        goto LABEL_8;
      }
    }
LABEL_57:
    sub_1EC5AF0(&v45, (_QWORD *)(v8 + 40 * v7), (_QWORD *)(v8 + 40 * v7), a1 + 4584, 1);
    v12 = v45.m128_u64[0];
LABEL_8:
    v13 = (_QWORD *)(*(_QWORD *)(a1 + 4584) + 40LL * *(unsigned int *)(a1 + 4600));
    sub_1EC5AF0(&v45, v13, v13, a1 + 4584, 1);
    if ( v12 != v45.m128_u64[0] )
    {
      v45.m128_u64[0] = *(_QWORD *)v12;
      v45.m128_u64[1] = (unsigned __int64)v47;
      v46 = 0x200000000LL;
      if ( *(_DWORD *)(v12 + 16) )
        sub_AEA8A0((char ***)&v45.m128_u64[1], (char ***)(v12 + 8));
      v14 = *(void **)(v12 + 8);
      if ( v14 != (void *)(v12 + 24) )
        free(v14);
      *(_QWORD *)v12 = -8192;
      v15 = (unsigned int)v46;
      v16 = v45.m128_u64[1];
      --*(_DWORD *)(a1 + 4592);
      ++*(_DWORD *)(a1 + 4596);
      v17 = (__int64 *)(v16 + 8 * v15);
      if ( (__int64 *)v16 != v17 )
      {
        v18 = (__int64 *)v16;
        do
        {
          v19 = *v18;
          v20 = *(_QWORD *)(*v18 + 8);
          if ( (v20 & 6) != 0 )
          {
            *(_QWORD *)(v19 + 8) = v20 & 0xFFFFFFFFFFFFFFF8LL | 1;
            v21 = *(_QWORD *)(a1 + 128);
            if ( v21 )
            {
              if ( (*(_BYTE *)(v19 + 28) & 0x7F) == 0x12 )
                sub_1EC5920(v21, v19);
            }
          }
          ++v18;
        }
        while ( v17 != v18 );
        v17 = (__int64 *)v45.m128_u64[1];
      }
      if ( v17 != (__int64 *)v47 )
        free(v17);
    }
    v45.m128_u64[0] = (unsigned __int64)&v46;
    v45.m128_u64[1] = 0x1000000000LL;
    sub_FEF2B0(v6, (__int64)&v45);
    v22 = (_QWORD *)v45.m128_u64[0];
    v23 = (__int64 *)(v45.m128_u64[0] + 8LL * v45.m128_u32[2]);
    if ( (__int64 *)v45.m128_u64[0] != v23 )
    {
      while ( 1 )
      {
        v24 = v43;
        v25 = *v22;
        if ( v43 )
        {
          v26 = (char *)v40;
          v27 = 8LL * HIDWORD(v41);
          v28 = (char *)v40 + v27;
          if ( v40 != (char *)v40 + v27 )
          {
            v29 = (char *)v40;
            if ( v25 == *(_QWORD *)v40 )
            {
LABEL_53:
              v24 = 0;
              goto LABEL_32;
            }
            while ( 1 )
            {
              v29 += 8;
              if ( v28 == v29 )
                break;
              if ( v25 == *(_QWORD *)v29 )
                goto LABEL_53;
            }
          }
          if ( HIDWORD(v41) < (unsigned int)v41 )
          {
            ++HIDWORD(v41);
            *(_QWORD *)v28 = v25;
            v26 = (char *)v40;
            v29 = (char *)v40 + v27;
LABEL_32:
            v30 = &v26[8 * HIDWORD(v41)];
            goto LABEL_33;
          }
        }
        v29 = (char *)sub_2236760(&v40, *v22);
        v26 = (char *)v40;
        if ( v43 )
          goto LABEL_32;
        v30 = (char *)v40 + 8 * (unsigned int)v41;
LABEL_33:
        if ( v30 != v29 && (unsigned __int64)(*(_QWORD *)v29 + 2LL) <= 1 )
        {
          do
            v29 += 8;
          while ( v30 != v29 && *(_QWORD *)v29 >= 0xFFFFFFFFFFFFFFFELL );
        }
        if ( v24 )
        {
          v31 = v37;
          v32 = v37 + 1LL;
          if ( v32 > v38 )
          {
            sub_2237220(&ptr, v39, v32, 8);
            v31 = v37;
          }
          *((_QWORD *)ptr + v31) = v25;
          ++v37;
        }
        if ( v23 == ++v22 )
        {
          v23 = (__int64 *)v45.m128_u64[0];
          break;
        }
      }
    }
    if ( v23 != &v46 )
      free(v23);
    v4 = v37;
    v3 = ptr;
  }
  while ( v37 );
LABEL_44:
  if ( v3 != v39 )
    free(v3);
  if ( !v43 )
    free(v40);
}
