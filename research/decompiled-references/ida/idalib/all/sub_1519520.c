__int64 __fastcall sub_1519520(__int64 a1, __int64 a2)
{
  void *v3; // rdi
  char *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rbp
  _QWORD *v7; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // r14
  __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  unsigned int *v13; // rax
  unsigned int v14; // edx
  char *v15; // r15
  char *v16; // r14
  char *v17; // rdi
  __int64 *v18; // rdi
  bool v19; // cc
  __int64 v20; // rdi
  int *v22; // [rsp+18h] [rbp-F0h]
  void *v23; // [rsp+20h] [rbp-E8h] BYREF
  __m128i si128; // [rsp+28h] [rbp-E0h]
  unsigned int v25; // [rsp+40h] [rbp-C8h] BYREF
  void *ptr; // [rsp+48h] [rbp-C0h]
  __int64 v27; // [rsp+50h] [rbp-B8h]
  _BYTE v28[176]; // [rsp+58h] [rbp-B0h] BYREF

  v23 = nullptr;
  v22 = (int *)(a1 + 16);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
  while ( 1 )
  {
    ptr = v28;
    v25 = 0;
    v27 = 0x200000000LL;
    sub_1518B20(a1, &v25, (__int64)&v23);
    if ( !v25 )
      goto LABEL_18;
    if ( !(_DWORD)v27 )
      goto LABEL_4;
    v9 = *(unsigned int *)(a2 + 8);
    v10 = *(_QWORD *)a2;
    v11 = v9 + 1;
    v12 = *(_QWORD *)a2 + 136 * v9;
    v13 = &v25;
    if ( v9 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
    {
      if ( v10 > (unsigned __int64)&v25 )
      {
        v20 = a2;
LABEL_29:
        sub_EC16A0(v20, v11);
        v12 = *(_QWORD *)a2 + 136LL * *(unsigned int *)(a2 + 8);
        v13 = &v25;
        goto LABEL_15;
      }
      v19 = v12 <= (unsigned __int64)&v25;
      v20 = a2;
      if ( v19 )
        goto LABEL_29;
      sub_EC16A0(a2, v11);
      v13 = (unsigned int *)((char *)&v25 + *(_QWORD *)a2 - v10);
      v12 = *(_QWORD *)a2 + 136LL * *(unsigned int *)(a2 + 8);
    }
LABEL_15:
    v14 = *v13;
    *(_QWORD *)(v12 + 16) = 0x200000000LL;
    *(_DWORD *)v12 = v14;
    *(_QWORD *)(v12 + 8) = v12 + 24;
    if ( v13[4] )
      sub_15192D0(v12 + 8, (__int64 *)v13 + 1);
    ++*(_DWORD *)(a2 + 8);
LABEL_18:
    v15 = (char *)ptr;
    v16 = (char *)ptr + 56 * (unsigned int)v27;
    while ( v15 != v16 )
    {
      while ( 1 )
      {
        v16 -= 56;
        v17 = *((char **)v16 + 2);
        if ( v17 == v16 + 32 )
          break;
        free(v17);
        if ( v15 == v16 )
        {
          v3 = ptr;
          if ( ptr != v28 )
            goto LABEL_5;
          goto LABEL_23;
        }
      }
    }
LABEL_4:
    v3 = ptr;
    if ( ptr == v28 )
      break;
LABEL_5:
    free(v3);
    if ( *(_WORD *)(a1 + 32) != 66 )
      goto LABEL_6;
LABEL_24:
    v18 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v18, v22);
  }
LABEL_23:
  if ( *(_WORD *)(a1 + 32) == 66 )
    goto LABEL_24;
LABEL_6:
  v4 = (char *)v23;
  if ( si128.m128i_i32[1] && si128.m128i_i32[0] )
  {
    v5 = 0;
    v6 = 8LL * (unsigned int)(si128.m128i_i32[0] - 1) + 8;
    do
    {
      v7 = *(_QWORD **)&v4[v5];
      if ( v7 != (_QWORD *)-8LL && v7 )
      {
        operator delete(*(_QWORD *)&v4[v5], *v7 + 17LL, 8);
        v4 = (char *)v23;
      }
      v5 += 8;
    }
    while ( v5 != v6 );
  }
  free(v4);
  return 0;
}
