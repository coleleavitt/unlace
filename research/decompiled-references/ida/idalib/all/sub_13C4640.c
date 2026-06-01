void __fastcall sub_13C4640(__int64 a1, unsigned int a2, int a3)
{
  __int64 v4; // r13
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned int v10; // edx
  int *v11; // rsi
  int v12; // edi
  unsigned __int64 v13; // r14
  int *v14; // rdx
  __int64 v15; // rax
  void *v16; // rdi
  void **v17; // rbp
  unsigned __int64 v18; // rax
  void **v19; // r12
  void **v20; // rbx
  void **v21; // rdi
  void **v22; // rdi
  void **v23; // rbx
  void **v24; // r12
  int v25; // esi
  int v26; // r10d
  int v27; // edi
  __int64 v28; // rdx
  __m128 v29; // [rsp+0h] [rbp-78h] BYREF
  __int64 v30; // [rsp+10h] [rbp-68h]
  void *v31; // [rsp+20h] [rbp-58h]
  _BYTE v32[16]; // [rsp+30h] [rbp-48h] BYREF
  __int16 v33; // [rsp+40h] [rbp-38h]

  v4 = a1 + 8;
  v7 = (_QWORD *)(*(_QWORD *)(a1 + 72) + ((a2 >> 3) & 0x1FFFFFF8));
  v8 = *(_QWORD *)(a1 + 8);
  *v7 |= 1LL << a2;
  v9 = *(unsigned int *)(a1 + 24);
  if ( (_DWORD)v9 )
  {
    v10 = (v9 - 1) & (37 * a2);
    v11 = (int *)(v8 + 8LL * v10);
    v12 = *v11;
    if ( *v11 == a2 )
    {
LABEL_3:
      sub_B69B00(&v29, v11, (int *)(v8 + 8 * v9), v4, 1);
      v13 = v29.m128_u64[0];
      goto LABEL_4;
    }
    v25 = 1;
    if ( v12 != -1 )
    {
      do
      {
        v26 = v25 + 1;
        v10 = (v9 - 1) & (v25 + v10);
        v11 = (int *)(v8 + 8LL * v10);
        v27 = *v11;
        if ( *v11 == a2 )
          goto LABEL_3;
        v25 = v26;
      }
      while ( v27 != -1 );
    }
  }
  sub_B69B00(&v29, (int *)(v8 + 8 * v9), (int *)(v8 + 8 * v9), v4, 1);
  v13 = v29.m128_u64[0];
LABEL_4:
  v14 = (int *)(*(_QWORD *)(a1 + 8) + 8LL * *(unsigned int *)(a1 + 24));
  sub_B69B00(&v29, v14, v14, v4, 1);
  if ( v29.m128_u64[0] == v13 )
    return;
  sub_FC70B0((__int64)&v29, *(_QWORD *)(a1 + 32), a3, 1303);
  v15 = *(_QWORD *)(*(_QWORD *)a1 + 32LL) + 40LL * *(unsigned int *)(v13 + 4);
  sub_AEC220((unsigned __int8 **)&v29, *(_BYTE **)v15, *(_QWORD *)(v15 + 8));
  if ( (_BYTE)v33 )
  {
    sub_FC7790(v30, (__int64 *)&v29, SHIBYTE(v33));
    v16 = v31;
    v30 = 0;
    v33 = 0;
    if ( v31 == v32 )
      goto LABEL_8;
    goto LABEL_7;
  }
  v16 = v31;
  if ( v31 != v32 )
LABEL_7:
    operator delete(v16);
LABEL_8:
  v17 = (void **)v29.m128_u64[0];
  if ( v29.m128_u64[0] )
  {
    v18 = v29.m128_u64[1];
    if ( v29.m128_u64[1] )
    {
      if ( v29.m128_u64[0] >= v29.m128_u64[1] && v29.m128_u64[0] <= v29.m128_u64[1] + 14848 )
      {
        v28 = *(unsigned int *)(v29.m128_u64[1] + 14976);
        *(_DWORD *)(v29.m128_u64[1] + 14976) = v28 + 1;
        *(_QWORD *)(v18 + 8 * v28 + 14848) = v17;
      }
      else
      {
        v19 = *(void ***)(v29.m128_u64[0] + 528);
        v20 = &v19[8 * (unsigned __int64)*(unsigned int *)(v29.m128_u64[0] + 536)];
        if ( v19 != v20 )
        {
          do
          {
            while ( 1 )
            {
              v20 -= 8;
              v21 = (void **)v20[3];
              if ( v21 == v20 + 5 )
                break;
              operator delete(v21);
              if ( v19 == v20 )
                goto LABEL_15;
            }
          }
          while ( v19 != v20 );
LABEL_15:
          v20 = (void **)v17[66];
        }
        if ( v20 != v17 + 68 )
          free(v20);
        v22 = (void **)v17[52];
        if ( v22 != v17 + 54 )
          free(v22);
        v23 = v17 + 48;
        v24 = v17 + 8;
        do
        {
          while ( *v23 != v23 + 2 )
          {
            operator delete(*v23);
            v23 -= 4;
            if ( v24 == v23 )
              goto LABEL_23;
          }
          v23 -= 4;
        }
        while ( v24 != v23 );
LABEL_23:
        operator delete(v17, 0x3A0u);
      }
    }
  }
}
