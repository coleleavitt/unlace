__int64 __fastcall sub_1945510(__int64 *a1, __int64 a2, __int64 a3, _DWORD *a4, __m128 a5, __m128 a6)
{
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned __int64 v20; // r15
  __int64 *v21; // rbp
  __int64 v22; // rax
  __int64 v23; // rax
  _DWORD *v24; // rdx
  unsigned __int64 v25; // rax
  __int64 v26; // [rsp+8h] [rbp-40h]

  v9 = *a1;
  sub_18C74E0(v9, 0, *(_QWORD *)(*(_QWORD *)(v9 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 520), 4);
  v10 = sub_1944E10(a1, *(unsigned __int16 **)(a3 + 24), a5, a6);
  if ( v10 == 1 )
    goto LABEL_2;
  v16 = v10 & 0xFFFFFFFFFFFFFFFELL;
  v26 = *a1;
  v17 = sub_1907C70(*a1, (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFELL), (__m128i)a5, a6, *a1, v11, v12, v13);
  if ( v17 == 1 )
    goto LABEL_2;
  v19 = v26;
  v20 = v17 & 0xFFFFFFFFFFFFFFFELL;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)((v17 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 8) != 0 )
  {
    v16 = v17 & 0xFFFFFFFFFFFFFFFELL;
    v25 = sub_1934250(v26, v20, *(double *)a5.m128_u64, a6);
    if ( v25 == 1 )
      goto LABEL_2;
    v20 = v25 & 0xFFFFFFFFFFFFFFFELL;
  }
  v21 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v22 = *v21;
  if ( *(_BYTE *)(*v21 + 16) != 51 )
    v22 = sub_F63050(*v21, v16, v19, v18);
  v23 = sub_1E631F0(*a1, v20, (*(_BYTE *)(v22 + 18) & 8) != 0);
  v14 = v23;
  if ( (v23 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    sub_1EA6140(a2, v23, 12, 4);
    *v24 = *a4;
    v24[1] = a4[1];
    v24[2] = a4[2];
    goto LABEL_3;
  }
LABEL_2:
  v14 = 0;
LABEL_3:
  sub_190D5E0(v9, a5);
  return v14;
}
