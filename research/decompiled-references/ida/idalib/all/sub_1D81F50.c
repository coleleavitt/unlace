__m128 *__fastcall sub_1D81F50(__m128 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  __int64 *v7; // rdx
  __int64 v8; // rdi
  _QWORD *v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 *v22; // rax
  _QWORD *v23; // rbp
  unsigned __int64 v24; // rax
  __int64 v25; // rbx
  unsigned __int64 v26; // [rsp+8h] [rbp-30h] BYREF
  __int64 v27[4]; // [rsp+18h] [rbp-20h] BYREF

  v6 = *(_QWORD *)(*(_QWORD *)(a3 + 48) + 80LL);
  v7 = (__int64 *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v6 & 4) != 0 )
    v8 = v7[1];
  else
    v8 = *v7;
  v9 = (_QWORD *)(sub_F6B250(v8, a2, (__int64)v7, a4, a5) & 0xFFFFFFFFFFFFFFF0LL);
  v10 = sub_F6A860(*v9);
  v15 = v10;
  if ( v10 )
  {
    v27[0] = *(_QWORD *)(v10 + 32);
    v26 = sub_F22BD0(v27, 0);
    v19 = sub_F6A870(v15, 0, v16, v17, v18);
    v15 = v19 + 48;
    v20 = *(unsigned int *)(v19 + 20);
  }
  else
  {
    v22 = (__int64 *)(*(_QWORD *)(*v9 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*v22 + 16) == 48
      && (v23 = sub_F63270(*v22, a2, v11, v12, v13, v14), (*((_BYTE *)v23 + 28) & 0x7Fu) - 60 <= 1) )
    {
      v24 = sub_BBF290((__int64)v23);
      v25 = v23[21];
      v26 = v24;
      v15 = v25 + 8;
      v20 = *(unsigned int *)(v15 - 8);
    }
    else
    {
      v26 = 0;
      v20 = 0;
    }
  }
  v26 = v15;
  a1[1].m128_u64[0] = v20;
  *a1 = _mm_loadh_ps((const double *)&v26);
  return a1;
}
