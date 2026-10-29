unsigned __int64 __fastcall reset_dirtree_0(__int64 a1)
{
  __int64 *v1; // rax
  char *v3; // rdi
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 i; // r12
  void **v7; // rbx
  _QWORD *v8; // r15
  void *v9; // rdi
  char *v10; // rdi
  _QWORD *v11; // r15
  void *v12; // rdi
  char *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi
  __int64 v17; // rbx
  int v18; // eax
  unsigned int v19; // eax
  _QWORD *v20; // r12
  void *v21; // rdi
  _QWORD *v22; // r12
  void *v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // r12
  __int64 v26; // r14
  bool v27; // zf
  void *v28; // rdi
  __int64 *v30; // [rsp+8h] [rbp-50h]
  unsigned int v31; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v32; // [rsp+18h] [rbp-40h]

  v1 = (__int64 *)(a1 + 48);
  v32 = __readfsqword(0x28u);
  v3 = *(char **)(a1 + 48);
  v30 = v1;
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 56);
    if ( v4 )
    {
      v5 = 0;
      for ( i = 0; i != v4; ++i )
      {
        v7 = (void **)&v3[v5];
        v8 = *(_QWORD **)&v3[v5 + 120];
        while ( v8 )
        {
          v9 = v8;
          v8 = (_QWORD *)*v8;
          operator delete(v9, 0x10u);
        }
        memset(v7[13], 0, 8LL * (_QWORD)v7[14]);
        v10 = (char *)v7[13];
        v7[16] = nullptr;
        v7[15] = nullptr;
        if ( v10 != (char *)(v7 + 19) )
          operator delete(v10, 8LL * (_QWORD)v7[14]);
        v11 = v7[8];
        while ( v11 )
        {
          v12 = v11;
          v11 = (_QWORD *)*v11;
          operator delete(v12, 0x10u);
        }
        memset(v7[6], 0, 8LL * (_QWORD)v7[7]);
        v13 = (char *)v7[6];
        v7[9] = nullptr;
        v7[8] = nullptr;
        if ( v13 != (char *)(v7 + 12) )
          operator delete(v13, 8LL * (_QWORD)v7[7]);
        v14 = v7[3];
        if ( v14 )
        {
          v7[4] = nullptr;
          qfree(v14);
        }
        v15 = *v7;
        if ( *v7 )
        {
          v7[1] = nullptr;
          qfree(v15);
        }
        v3 = *(char **)(a1 + 48);
        v5 += 176;
      }
    }
    *(_QWORD *)(a1 + 56) = 0;
    qfree(v3);
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 64) = 0;
  }
  v16 = *(void **)(a1 + 72);
  if ( v16 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    qfree(v16);
    *(_QWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 88) = 0;
  }
  sub_75A6B0(v30, *(_QWORD *)(a1 + 56) + 1LL);
  v17 = *(_QWORD *)(a1 + 48) + 176LL * *(_QWORD *)(a1 + 56);
  *(_OWORD *)(v17 + 8) = 0;
  *(_OWORD *)(v17 + 32) = 0;
  *(_QWORD *)(v17 + 48) = v17 + 96;
  *(_DWORD *)(v17 + 160) = 0;
  *(_QWORD *)(v17 + 164) = 0;
  *(_QWORD *)v17 = 0;
  *(_QWORD *)(v17 + 24) = 0;
  *(_QWORD *)(v17 + 56) = 1;
  *(_QWORD *)(v17 + 64) = 0;
  *(_QWORD *)(v17 + 72) = 0;
  *(_QWORD *)(v17 + 88) = 0;
  *(_QWORD *)(v17 + 96) = 0;
  *(_QWORD *)(v17 + 104) = v17 + 152;
  *(_QWORD *)(v17 + 112) = 1;
  *(_QWORD *)(v17 + 120) = 0;
  *(_QWORD *)(v17 + 128) = 0;
  *(_QWORD *)(v17 + 144) = 0;
  *(_QWORD *)(v17 + 152) = 0;
  *(_DWORD *)(v17 + 80) = 1065353216;
  *(_DWORD *)(v17 + 136) = 1065353216;
  ++*(_QWORD *)(a1 + 56);
  *(_DWORD *)(v17 + 160) = 0;
  v18 = *(_DWORD *)(v17 + 164);
  if ( ((v18 & 4) != 0) != (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 8LL) & 4u) >> 2 )
  {
    v19 = v18 & 0xFFFFFFFB;
    v20 = *(_QWORD **)(v17 + 120);
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 8LL) & 4) != 0 )
      v19 = *(_DWORD *)(v17 + 164) | 4;
    *(_DWORD *)(v17 + 164) = v19;
    while ( v20 )
    {
      v21 = v20;
      v20 = (_QWORD *)*v20;
      operator delete(v21, 0x10u);
    }
    memset(*(void **)(v17 + 104), 0, 8LL * *(_QWORD *)(v17 + 112));
    v22 = *(_QWORD **)(v17 + 64);
    *(_QWORD *)(v17 + 128) = 0;
    *(_QWORD *)(v17 + 120) = 0;
    while ( v22 )
    {
      v23 = v22;
      v22 = (_QWORD *)*v22;
      operator delete(v23, 0x10u);
    }
    memset(*(void **)(v17 + 48), 0, 8LL * *(_QWORD *)(v17 + 56));
    v18 = *(_DWORD *)(v17 + 164);
    *(_QWORD *)(v17 + 72) = 0;
    *(_QWORD *)(v17 + 64) = 0;
    if ( (v18 & 4) == 0 )
    {
      v24 = *(_QWORD *)(v17 + 24);
      v25 = v24 + 5LL * *(_QWORD *)(v17 + 32);
      if ( v24 != v25 )
      {
        v26 = *(_QWORD *)(v17 + 24);
        do
        {
          while ( 1 )
          {
            v27 = *(_BYTE *)(v26 + 4) == 0;
            v31 = *(_DWORD *)v26;
            if ( v27 )
              break;
            v26 += 5;
            sub_753C70((__int64 *)(v17 + 104), &v31);
            if ( v26 == v25 )
              goto LABEL_33;
          }
          v26 += 5;
          sub_753C70((__int64 *)(v17 + 48), &v31);
        }
        while ( v26 != v25 );
LABEL_33:
        v18 = *(_DWORD *)(v17 + 164);
      }
    }
  }
  *(_DWORD *)(v17 + 164) = v18 | 1;
  v28 = *(void **)(a1 + 112);
  *(_QWORD *)(a1 + 96) = 0;
  *(_WORD *)(a1 + 104) = 0;
  *(_BYTE *)(a1 + 106) = 1;
  if ( v28 )
  {
    *(_QWORD *)(a1 + 120) = 0;
    qfree(v28);
    *(_QWORD *)(a1 + 112) = 0;
    *(_QWORD *)(a1 + 128) = 0;
  }
  *(_DWORD *)(a1 + 136) = -1;
  return v32 - __readfsqword(0x28u);
}

