unsigned __int64 __fastcall sub_192600(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rbx
  int v9; // r13d
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rax
  __int128 i; // xmm0
  __int64 v13; // r14
  size_t v14; // r15
  void *v15; // rax
  unsigned __int64 v16; // rcx
  const void *v17; // rsi
  size_t v18; // rbx
  unsigned __int16 *v19; // rax
  unsigned __int16 *v20; // rbx
  unsigned __int64 v22; // r14
  _QWORD *v23; // rax
  __int64 v24; // r12
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  void *src; // [rsp+0h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+8h] [rbp-50h]
  unsigned __int64 v32; // [rsp+18h] [rbp-40h]

  v6 = a1[315];
  v7 = a1[274];
  v32 = __readfsqword(0x28u);
  v8 = *(int *)(v6 + 48);
  v9 = *(_DWORD *)(v6 + 48);
  if ( v8 != v7 )
  {
    src = nullptr;
    *(_OWORD *)n = 0;
    if ( v8 < v7 )
    {
      v22 = v8;
      do
      {
        a3 = a1[273];
        v23 = (_QWORD *)(a3 + 24 * v22);
        if ( *v23 )
        {
          v23[1] = 0;
          qfree();
        }
        ++v22;
      }
      while ( v22 < v7 );
      a1[274] = v8;
    }
    else
    {
      v10 = a1[273];
      v11 = a1[275];
      if ( (unsigned __int64)&src < v10 || (unsigned __int64)&src >= v10 + 24 * v11 )
      {
        if ( v11 < v8 )
        {
          v28 = qvector_reserve();
          v7 = a1[274];
          a1[273] = v28;
        }
        for ( i = 0; v7 < v8; i = 0 )
        {
          while ( 1 )
          {
            a3 = a1[273];
            v13 = a3 + 24 * v7;
            *(_QWORD *)v13 = 0;
            *(_OWORD *)(v13 + 8) = i;
            v14 = n[0];
            if ( n[0] )
              break;
            if ( ++v7 >= v8 )
              goto LABEL_11;
          }
          ++v7;
          v15 = (void *)qalloc_or_throw();
          *(_QWORD *)(v13 + 16) = v14;
          *(_QWORD *)v13 = v15;
          memcpy(v15, src, v14);
          *(_QWORD *)(v13 + 8) = v14;
        }
      }
      else
      {
        if ( v11 < v8 )
        {
          v29 = qvector_reserve();
          v7 = a1[274];
          a1[273] = v29;
        }
        if ( v7 < v8 )
        {
          v26 = 24 * v7;
          do
          {
            ++v7;
            a3 = v26 + a1[273];
            v26 += 24;
            *(_QWORD *)a3 = 0;
            *(_OWORD *)(a3 + 8) = 0;
          }
          while ( v8 != v7 );
        }
      }
LABEL_11:
      a1[274] = v8;
    }
  }
  v16 = a1[277];
  if ( v16 < v8 )
  {
    v25 = a1[276];
    if ( a1[278] < v8 )
    {
      v27 = qvector_reserve();
      v16 = a1[277];
      a1[276] = v27;
      v25 = v27;
    }
    memset((void *)(v25 + 4 * v16), 0, 4 * (v8 - v16));
    a1[277] = v8;
  }
  else if ( v8 != v16 )
  {
    a1[277] = v8;
  }
  v17 = *(const void **)(a1[315] + 56LL);
  if ( v17 )
  {
    v18 = 4 * v8;
    memcpy((void *)a1[276], v17, v18);
    a3 = (unsigned int)(v9 - 1);
    if ( v9 <= 0 )
      goto LABEL_40;
  }
  else
  {
    if ( (int)v8 <= 0 )
      goto LABEL_40;
    v18 = 4 * v8;
    v24 = 0;
    do
    {
      *(_DWORD *)(a1[276] + v24) = (unsigned __int16)qustrlen();
      v24 += 4;
    }
    while ( v24 != v18 );
    LODWORD(a3) = v9 - 1;
  }
  v19 = (unsigned __int16 *)a1[276];
  v20 = &v19[v18 / 2];
  do
  {
    v16 = *v19;
    v19 += 2;
    LODWORD(a3) = v16 + a3;
  }
  while ( v19 != v20 );
  a3 = (int)a3;
  if ( (unsigned __int64)(int)a3 > 0xFE )
LABEL_40:
    sub_91F70((__int64)"too wide chooser!", (__int64)v17, a3, v16, a5, a6, (char)src);
  return v32 - __readfsqword(0x28u);
}

