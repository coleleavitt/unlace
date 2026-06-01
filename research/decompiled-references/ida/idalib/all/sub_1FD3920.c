__int64 __fastcall sub_1FD3920(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // r9
  __int64 v6; // rcx
  unsigned __int64 *v7; // rdx
  int v8; // eax
  int v9; // esi
  __int64 v10; // r8
  bool v11; // zf
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r12
  _QWORD *v19; // r13
  __int64 v20; // rbp
  int v21; // eax
  int v22; // eax
  _QWORD *v23; // rbp
  _QWORD *v24; // rdi
  int v25; // ebp
  int v26; // eax
  unsigned __int64 *v27; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 *v28[8]; // [rsp+8h] [rbp-40h] BYREF

  if ( (unsigned __int8)sub_1FD18B0((__int64 *)a1, a2, &v27) )
    return *(_QWORD *)(a1 + 24) + 72LL * *((unsigned int *)v27 + 2);
  v6 = *(unsigned int *)(a1 + 16);
  v7 = v27;
  v8 = *(_DWORD *)(a1 + 8) + 1;
  v9 = 2 * v6;
  v10 = (unsigned int)(4 * v8);
  v28[0] = v27;
  if ( (unsigned int)v10 >= 3 * (int)v6 )
    goto LABEL_11;
  if ( (int)v6 - *(_DWORD *)(a1 + 12) - v8 <= (unsigned int)v6 >> 3 )
  {
    v9 = v6;
LABEL_11:
    sub_1FD37B0(a1, v9, (__int64)v27, v6, v10, v4);
    sub_1FD18B0((__int64 *)a1, a2, v28);
    v7 = v28[0];
    v8 = *(_DWORD *)(a1 + 8) + 1;
  }
  v11 = *v7 == -4096;
  *(_DWORD *)(a1 + 8) = v8;
  if ( !v11 )
    --*(_DWORD *)(a1 + 12);
  v12 = *a2;
  *((_DWORD *)v7 + 2) = 0;
  *v7 = v12;
  *((_DWORD *)v7 + 2) = *(_DWORD *)(a1 + 32);
  if ( *(_DWORD *)(a1 + 36) <= *(_DWORD *)(a1 + 32) )
  {
    v15 = sub_2237400(a1 + 24, a1 + 40, 0, 72, v28);
    v17 = v15 + 72LL * *(unsigned int *)(a1 + 32);
    *(_QWORD *)v17 = *a2;
    *(_OWORD *)(v17 + 56) = 0;
    *(_OWORD *)(v17 + 8) = 0;
    *(_OWORD *)(v17 + 24) = 0;
    *(_OWORD *)(v17 + 40) = 0;
    *(_QWORD *)(v17 + 16) = v17 + 32;
    *(_OWORD *)(v17 + 48) = 0;
    *(_DWORD *)(v17 + 64) = 0;
    v18 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(v17 + 24) = 0x400000000LL;
    v19 = (_QWORD *)(v18 + 72LL * *(unsigned int *)(a1 + 32));
    if ( (_QWORD *)v18 != v19 )
    {
      v20 = v15;
      do
      {
        *(_QWORD *)v20 = *(_QWORD *)v18;
        v22 = *(_DWORD *)(v18 + 8);
        *(_DWORD *)(v20 + 24) = 0;
        *(_DWORD *)(v20 + 8) = v22;
        *(_QWORD *)(v20 + 16) = v20 + 32;
        *(_DWORD *)(v20 + 28) = 4;
        if ( *(_DWORD *)(v18 + 24) )
          sub_1744C20((char ***)(v20 + 16), (char ***)(v18 + 16));
        *(__m128i *)(v20 + 48) = _mm_loadu_si128((const __m128i *)(v18 + 48));
        v21 = *(_DWORD *)(v18 + 64);
        v18 += 72;
        v20 += 72;
        *(_DWORD *)(v20 - 8) = v21;
      }
      while ( v19 != (_QWORD *)v18 );
      v23 = *(_QWORD **)(a1 + 24);
      v19 = &v23[9 * *(unsigned int *)(a1 + 32)];
      if ( v23 != v19 )
      {
        do
        {
          while ( 1 )
          {
            v19 -= 9;
            v24 = (_QWORD *)v19[2];
            if ( v24 == v19 + 4 )
              break;
            free(v24);
            if ( v23 == v19 )
              goto LABEL_20;
          }
        }
        while ( v23 != v19 );
LABEL_20:
        v19 = *(_QWORD **)(a1 + 24);
      }
    }
    v25 = (int)v28[0];
    if ( (_QWORD *)(a1 + 40) != v19 )
      free(v19);
    v26 = *(_DWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 24) = v15;
    *(_DWORD *)(a1 + 36) = v25;
    v16 = (unsigned int)(v26 + 1);
    *(_DWORD *)(a1 + 32) = v16;
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 24) + 72LL * *(unsigned int *)(a1 + 32);
    v14 = *a2;
    *(_OWORD *)(v13 + 56) = 0;
    *(_QWORD *)v13 = v14;
    *(_OWORD *)(v13 + 8) = 0;
    *(_OWORD *)(v13 + 24) = 0;
    *(_OWORD *)(v13 + 40) = 0;
    *(_QWORD *)(v13 + 16) = v13 + 32;
    *(_OWORD *)(v13 + 48) = 0;
    *(_DWORD *)(v13 + 64) = 0;
    v15 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(v13 + 24) = 0x400000000LL;
    v16 = (unsigned int)(*(_DWORD *)(a1 + 32) + 1);
    *(_DWORD *)(a1 + 32) = v16;
  }
  return v15 + 72 * v16 - 72;
}
