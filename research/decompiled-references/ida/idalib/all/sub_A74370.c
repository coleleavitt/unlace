unsigned __int64 __fastcall sub_A74370(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rbp
  __int64 v6; // r15
  char v7; // al
  char *v8; // rsi
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbp
  __int64 v13; // rbx
  _BYTE *v14; // rax
  char *v15; // rbp
  signed __int64 v16; // rbp
  char *v17; // rax
  int v18; // r13d
  unsigned int v19; // ebx
  __int64 v20; // rbp
  unsigned __int64 v21; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // [rsp+8h] [rbp-150h]
  unsigned __int64 v25; // [rsp+8h] [rbp-150h]
  __m128i v26[8]; // [rsp+10h] [rbp-148h] BYREF
  void *ptr; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+98h] [rbp-C0h]
  _BYTE v29[184]; // [rsp+A0h] [rbp-B8h] BYREF

  v5 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v6 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(_BYTE *)(v6 + 16);
  if ( v7 == 26 )
    goto LABEL_2;
  a3 = *(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(a3 + 16) != 26 )
  {
LABEL_19:
    if ( v7 != 25 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 25 )
        return a2;
      v6 = sub_F63050(v6, a2, a3, a4, a5);
      if ( !v6 )
        return a2;
    }
    v23 = sub_A728F0(a1, *(_QWORD *)(v6 + 24), a3, a4, a5);
    LOWORD(ptr) = *(_WORD *)(v6 + 20) >> 2;
    return sub_A71610((__int64)a1, v23, (unsigned __int16 *)&ptr);
  }
  v6 = sub_F63050(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5);
  if ( !v6 )
  {
    v6 = *(_QWORD *)v5;
    v7 = *(_BYTE *)(*(_QWORD *)v5 + 16LL);
    goto LABEL_19;
  }
LABEL_2:
  v8 = v29;
  v24 = sub_A728F0(a1, *(_QWORD *)(v6 + 24), a3, a4, a5);
  v12 = 8LL * *(unsigned __int16 *)(v6 + 22);
  ptr = v29;
  v28 = 0x1000000000LL;
  v13 = v12 >> 3;
  if ( v12 )
  {
    v14 = v29;
    if ( v12 > 128 )
    {
      sub_2237220(&ptr, v29, v12 >> 3, 8);
      v14 = ptr;
      v9 = (unsigned int)v28;
      v8 = (char *)ptr + 8 * (unsigned int)v28;
    }
    v15 = &v14[v12];
    if ( v8 != v15 )
    {
      v16 = v15 - v8;
      v17 = v8;
      v10 = ((unsigned __int64)(v16 - 8) >> 3) + 1;
      if ( v16 == 8 )
        goto LABEL_10;
      v9 = (__int64)&v8[16 * (v10 >> 1)];
      do
      {
        *(_OWORD *)v17 = 0;
        v17 += 16;
      }
      while ( v17 != (char *)v9 );
      v8 += 8 * (v10 & 0xFFFFFFFFFFFFFFFELL);
      if ( v10 != (v10 & 0xFFFFFFFFFFFFFFFELL) )
LABEL_10:
        *(_QWORD *)v8 = 0;
    }
    v18 = v13;
    LODWORD(v28) = v13;
    v19 = 0;
    do
    {
      v20 = v19++;
      v21 = sub_A728F0(a1, *(_QWORD *)(v6 + 8 * v20 + 48), v9, v10, v11);
      v9 = (__int64)ptr;
      *((_QWORD *)ptr + v20) = v21;
    }
    while ( v19 != v18 );
  }
  sub_A5E110((__m128 *)v26, v6);
  result = sub_A73610((__int64)a1, v24, (__int64 *)ptr, (unsigned int)v28, v26, 0);
  if ( ptr != v29 )
  {
    v25 = result;
    free(ptr);
    return v25;
  }
  return result;
}
