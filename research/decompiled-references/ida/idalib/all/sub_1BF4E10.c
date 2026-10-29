void __fastcall sub_1BF4E10(
        __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        char a6,
        __m128 a7,
        __m128 a8)
{
  __m128i *v8; // r14
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rax
  void **v11; // r15
  __int16 v12; // ax
  __int64 v13; // rbp
  __int64 *v14; // rbx
  __int64 *v15; // rbp
  unsigned __int8 v16; // al
  int v17; // edx
  __int64 v18; // rdi
  _DWORD *v19; // rdi
  int v20; // eax
  unsigned __int64 v21; // rax
  unsigned __int64 v24; // [rsp+10h] [rbp-198h]
  __int64 v26; // [rsp+48h] [rbp-160h]
  void *ptr[2]; // [rsp+50h] [rbp-158h] BYREF
  _QWORD v28[41]; // [rsp+60h] [rbp-148h] BYREF

  v8 = (__m128i *)a3;
  v9 = a2;
  v24 = a4;
  ptr[0] = v28;
  ptr[1] = (void *)0x800000000LL;
  v10 = *(_QWORD *)a2;
  v28[32] = 0;
  if ( (v10 & 0x80000) == 0 )
  {
    v11 = nullptr;
    v12 = *(_WORD *)a2 & 0x1FF;
    v13 = 8LL * *(unsigned int *)(a2 + 4);
    goto LABEL_3;
  }
  a3 = *(unsigned __int16 *)a2;
  LOWORD(a3) = a3 & 0x1FF;
  v13 = 8LL * *(unsigned int *)(a2 + 4);
  if ( (_WORD)a3 == 24 )
  {
    v11 = nullptr;
    if ( !*(_DWORD *)(a2 + v13 + 64) )
      goto LABEL_4;
    a2 = *(unsigned int *)(a2 + v13 + 64);
    if ( !(_DWORD)a2 )
    {
      v11 = ptr;
      goto LABEL_4;
    }
    if ( (v10 & 0x80000) != 0 )
      v19 = (_DWORD *)(v9 + v13 + 64);
    else
      v19 = nullptr;
  }
  else
  {
    v11 = nullptr;
    if ( !*(_DWORD *)(a2 + v13 + 80) )
      goto LABEL_30;
    a4 = *(unsigned int *)(a2 + v13 + 80);
    v19 = (_DWORD *)(a2 + v13 + 80);
    if ( !(_DWORD)a4 )
    {
      v11 = ptr;
      goto LABEL_30;
    }
  }
  v21 = v10 >> 16;
  if ( (v21 & 8) != 0 )
  {
    if ( (_WORD)a3 == 24 )
    {
      if ( *(_DWORD *)(v9 + v13 + 64) )
      {
        a2 = v9 + v13 + 16LL * ((v21 & 8) != 0) + 64;
        goto LABEL_35;
      }
    }
    else if ( *(_DWORD *)(v9 + v13 + 80) )
    {
      a2 = v9 + v13 + 16LL * ((v21 & 8) != 0) + 80;
      goto LABEL_35;
    }
  }
  a2 = 0;
LABEL_35:
  v11 = ptr;
  sub_F1EA70(v19, a2, (__int64)ptr);
  v12 = *(_WORD *)v9 & 0x1FF;
  v13 = 8LL * *(unsigned int *)(v9 + 4);
LABEL_3:
  if ( v12 == 24 )
  {
LABEL_4:
    v14 = (__int64 *)(v9 + 64);
    goto LABEL_5;
  }
LABEL_30:
  v14 = (__int64 *)(v9 + 80);
LABEL_5:
  v15 = &v14[(unsigned __int64)v13 / 8];
  if ( v15 != v14 )
  {
    while ( 1 )
    {
      v26 = *v14;
      a2 = *v14 & 0xFFFFFFFFFFFFFFF8LL;
      v16 = *(_BYTE *)(a2 + 28) & 0x7F;
      v17 = v16;
      a4 = (unsigned int)v16 - 53;
      if ( (unsigned int)a4 <= 1 )
      {
        a2 = *(_QWORD *)(a2 + 64);
        v16 = *(_BYTE *)(a2 + 28) & 0x7F;
        v17 = v16;
      }
      a3 = (unsigned int)(v17 - 34);
      if ( (unsigned int)a3 > 5 )
        break;
      if ( v11 )
        goto LABEL_7;
      v18 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      a3 = *(unsigned __int8 *)(v18 + 16);
      if ( (unsigned int)(a3 - 25) > 1 )
      {
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 > 1 )
          BUG();
        a3 = *(unsigned __int8 *)(sub_F63050(v18, a2, a3, a4) + 16);
      }
      if ( (_BYTE)a3 != 26 )
      {
LABEL_7:
        if ( v15 == ++v14 )
          goto LABEL_15;
      }
      else
      {
        ++v14;
        sub_1BF10B0(a1, a2, v26, (unsigned __int64 *)v8, v24, a5, a7, a8, 0, a6, 1, 0, 0, 0, 0, 0, 0, 0);
        if ( v15 == v14 )
          goto LABEL_15;
      }
    }
    if ( v16 == 71 )
      sub_1BF3B70(
        a1,
        (__int64 *)a2,
        v26,
        (__int64)v11,
        (unsigned __int64 *)v8,
        v24,
        *(double *)a7.m128_u64,
        a8,
        (__int64)a5,
        0,
        a6,
        0,
        0);
    goto LABEL_7;
  }
LABEL_15:
  if ( (*(_DWORD *)v9 & 0x100000) != 0 )
  {
    v20 = sub_C00A40(v9, a2, a3, a4, (__int64)a5);
    sub_1BF3E80(a1, *(_QWORD *)(v9 + 16), v20, v8, v24, (__int64)v11, a7, a8, (__int64)a5, a6);
  }
  if ( ptr[0] != v28 )
    free(ptr[0]);
}
