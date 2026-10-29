__int64 __fastcall sub_1B0E630(__int64 a1, unsigned int a2, __int64 a3, double a4, __m128 a5)
{
  __int64 *v7; // rax
  unsigned int v8; // ebp
  __int64 v9; // rbp
  __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  __int64 v12; // rdi
  unsigned __int64 v13; // rdx
  __int64 v14; // r13
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // rbx
  _QWORD *v18; // rax
  __int64 v20; // r13
  __int64 v21; // rdx
  _QWORD *v22; // rax
  __int64 v23; // rbp
  _QWORD *v24; // rdx
  int v25; // r13d
  __int64 v26; // [rsp+8h] [rbp-80h] BYREF
  __int64 v27; // [rsp+10h] [rbp-78h] BYREF
  __int64 v28; // [rsp+18h] [rbp-70h] BYREF
  unsigned int v29; // [rsp+20h] [rbp-68h]
  __int64 v30; // [rsp+58h] [rbp-30h] BYREF

  v27 = 1;
  v7 = &v28;
  do
  {
    *v7 = -4096;
    v7 += 2;
  }
  while ( v7 != &v30 );
  v8 = 1;
  if ( (unsigned int)sub_1B0B640(
                       *(_DWORD *)(a1 + 32),
                       nullptr,
                       nullptr,
                       a3,
                       **(_QWORD ***)a1,
                       *(_QWORD *)(*(_QWORD *)a1 + 8LL),
                       a4,
                       a5,
                       (__int64)&v27,
                       **(_QWORD **)(a1 + 8) + 616LL * a2) )
  {
    v9 = **(_QWORD **)(a1 + 24) + 16LL * *(unsigned int *)(*(_QWORD *)(a1 + 24) + 8LL) - 16;
    v10 = *(unsigned int *)(v9 + 8);
    v11 = *(unsigned int *)(v9 + 12);
    v12 = v10;
    v13 = v10 + 1;
    if ( (*(_WORD *)a3 & 0x1FF) == 0xF3 )
    {
      v14 = *(_QWORD *)(a3 + 8);
      if ( v13 > v11 )
      {
        sub_2237220(
          **(_QWORD **)(a1 + 24) + 16LL * *(unsigned int *)(*(_QWORD *)(a1 + 24) + 8LL) - 16,
          **(_QWORD **)(a1 + 24) + 16LL * *(unsigned int *)(*(_QWORD *)(a1 + 24) + 8LL),
          v13,
          8);
        v10 = *(unsigned int *)(v9 + 8);
      }
      *(_QWORD *)(*(_QWORD *)v9 + 8 * v10) = v14;
      v15 = *(_QWORD *)(a3 + 40);
      v16 = *(_QWORD **)(a1 + 16);
      ++*(_DWORD *)(v9 + 8);
      *v16 = v15;
    }
    else
    {
      v20 = *(_QWORD *)(a3 + 24);
      if ( v13 > v11 )
      {
        sub_2237220(
          **(_QWORD **)(a1 + 24) + 16LL * *(unsigned int *)(*(_QWORD *)(a1 + 24) + 8LL) - 16,
          **(_QWORD **)(a1 + 24) + 16LL * *(unsigned int *)(*(_QWORD *)(a1 + 24) + 8LL),
          v13,
          8);
        v12 = *(unsigned int *)(v9 + 8);
      }
      *(_QWORD *)(*(_QWORD *)v9 + 8 * v12) = v20;
      v21 = *(_QWORD *)(a3 + 64);
      v22 = *(_QWORD **)(a1 + 16);
      ++*(_DWORD *)(v9 + 8);
      *v22 = v21;
    }
    v17 = *(_QWORD *)(a1 + 24);
    if ( *(_DWORD *)(v17 + 12) <= *(_DWORD *)(v17 + 8) )
    {
      v23 = sub_2237400(v17, v17 + 16, 0, 16, &v26);
      v24 = (_QWORD *)(v23 + 16LL * *(unsigned int *)(v17 + 8));
      v24[1] = 0;
      *v24 = v24 + 2;
      sub_1AFD6E0((__int64 *)v17, v23);
      v25 = v26;
      if ( v17 + 16 != *(_QWORD *)v17 )
        free(*(void **)v17);
      *(_QWORD *)v17 = v23;
      v8 = 0;
      *(_DWORD *)(v17 + 12) = v25;
      ++*(_DWORD *)(v17 + 8);
    }
    else
    {
      v18 = (_QWORD *)(*(_QWORD *)v17 + 16LL * *(unsigned int *)(v17 + 8));
      v8 = 0;
      v18[1] = 0;
      *v18 = v18 + 2;
      ++*(_DWORD *)(v17 + 8);
    }
  }
  if ( (v27 & 1) == 0 )
    operator delete(v28, 16LL * v29, 8);
  return v8;
}
