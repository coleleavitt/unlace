void __fastcall sub_BD2900(__int64 a1)
{
  __int64 v1; // r12
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // r14
  __int64 *v4; // rdx
  unsigned __int64 v5; // r13
  __int64 v6; // rdi
  __int64 v7; // rax
  void *v8; // rdi
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
  unsigned __int64 v15; // rbx
  __int64 v16; // r13
  __int64 v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rax
  void *v20; // rdi
  unsigned __int64 v21; // rdi
  _QWORD *v22; // rbp
  void *v23; // rdi
  __m128 v24[3]; // [rsp+0h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
  {
    if ( *(_DWORD *)(v1 + 8) )
      sub_BD28A0(
        v24,
        *(__int64 **)v1,
        (__int64 *)(*(_QWORD *)v1 + 16LL * *(unsigned int *)(v1 + 16)),
        *(_QWORD *)(a1 + 16),
        0);
    else
      sub_BD28A0(
        v24,
        (__int64 *)(*(_QWORD *)v1 + 16LL * *(unsigned int *)(v1 + 16)),
        (__int64 *)(*(_QWORD *)v1 + 16LL * *(unsigned int *)(v1 + 16)),
        *(_QWORD *)(a1 + 16),
        1);
    v2 = v24[0].m128_u64[1];
    v3 = v24[0].m128_u64[0];
    v4 = (__int64 *)(*(_QWORD *)v1 + 16LL * *(unsigned int *)(v1 + 16));
    sub_BD28A0(v24, v4, v4, v1, 1);
    v5 = v24[0].m128_u64[0];
    if ( v24[0].m128_u64[0] != v3 )
    {
      do
      {
        while ( 1 )
        {
LABEL_5:
          v6 = *(_QWORD *)(v3 + 8);
          v7 = (v6 >> 1) & 3;
          if ( v7 == 2 )
          {
            v8 = (void *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
            if ( v8 )
              operator delete(v8, 0x28u);
          }
          else if ( v7 == 3 )
          {
            v15 = v6 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v6 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              if ( !*(_BYTE *)(v15 + 76) )
                free(*(void **)(v15 + 56));
              if ( *(_QWORD *)v15 != v15 + 16 )
                free(*(void **)v15);
              operator delete((void *)v15, 0x60u);
            }
          }
          v9 = v3 + 16;
          if ( v3 + 16 != v2 )
            break;
LABEL_20:
          v3 = v2;
          if ( v5 == v2 )
            goto LABEL_16;
        }
        v10 = *(_QWORD *)(v3 + 16);
        if ( v10 == -4096 || v10 == -8192 )
        {
          v11 = (__int64 *)(v3 + 32);
          while ( 1 )
          {
            v3 = (unsigned __int64)v11;
            if ( v11 == (__int64 *)v2 )
              goto LABEL_20;
            v12 = *v11;
            v11 += 2;
            if ( v12 != -8192 && v12 != -4096 )
            {
              if ( v5 != v3 )
                goto LABEL_5;
              goto LABEL_16;
            }
          }
        }
        v3 += 16LL;
      }
      while ( v5 != v9 );
    }
LABEL_16:
    v13 = *(_QWORD *)(v1 + 24);
    v14 = 48LL * *(unsigned int *)(v1 + 40);
    if ( *(_DWORD *)(v1 + 32) )
    {
      v16 = v13 + v14;
      if ( v13 + v14 != v13 )
      {
        v17 = *(_QWORD *)(v1 + 24);
        while ( !*(_DWORD *)v17 || *(_DWORD *)v17 == 1067 )
        {
          v17 += 48;
          if ( v16 == v17 )
            goto LABEL_17;
        }
        while ( v16 != v17 )
        {
          v18 = *(_QWORD *)(v17 + 40);
          v19 = (v18 >> 1) & 3;
          if ( v19 == 2 )
          {
            v20 = (void *)(v18 & 0xFFFFFFFFFFFFFFF8LL);
            if ( v20 )
              operator delete(v20, 0x28u);
          }
          else if ( v19 == 3 )
          {
            v21 = v18 & 0xFFFFFFFFFFFFFFF8LL;
            v22 = (_QWORD *)v21;
            if ( v21 )
            {
              if ( !*(_BYTE *)(v21 + 76) )
                free(*(void **)(v21 + 56));
              v23 = *(void **)v21;
              if ( (_QWORD *)*v22 != v22 + 2 )
                free(v23);
              operator delete(v22, 0x60u);
            }
          }
          v17 += 48;
          if ( v17 == v16 )
            break;
          while ( !*(_DWORD *)v17 || *(_DWORD *)v17 == 1067 )
          {
            v17 += 48;
            if ( v16 == v17 )
              goto LABEL_17;
          }
        }
      }
    }
LABEL_17:
    operator delete();
    operator delete();
    operator delete((void *)v1, 0x30u);
  }
}

