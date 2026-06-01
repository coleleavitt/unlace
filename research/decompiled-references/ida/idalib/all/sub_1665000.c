_QWORD *__fastcall sub_1665000(_QWORD *a1, __int64 *a2, __int64 *a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  const void *v7; // rbp
  size_t v8; // r12
  __int64 v9; // r15
  __int64 v10; // r13
  const void *v12; // r12
  size_t v13; // rbp
  __int64 v14; // [rsp+0h] [rbp-58h]
  __int64 v15; // [rsp+10h] [rbp-48h]

  v4 = *a2;
  v15 = *a3;
  v5 = (*a2 - *a3) >> 7;
  v6 = (*a2 - *a3) >> 5;
  if ( v5 > 0 )
  {
    v7 = *(const void **)a4;
    v8 = *(_QWORD *)(a4 + 8);
    v14 = v4 - (v5 << 7);
    while ( 1 )
    {
      v10 = v4 - 32;
      if ( *(_QWORD *)(v4 - 24) == v8 && (!v8 || !memcmp(*(const void **)(v4 - 32), v7, v8)) )
        goto LABEL_16;
      *a2 = v10;
      v9 = v4 - 64;
      if ( v8 == *(_QWORD *)(v4 - 56) && (!v8 || !memcmp(*(const void **)(v4 - 64), v7, v8)) )
      {
LABEL_17:
        *a1 = v10;
        return a1;
      }
      *a2 = v9;
      v10 = v4 - 96;
      if ( v8 == *(_QWORD *)(v4 - 88) && (!v8 || !memcmp(*(const void **)(v4 - 96), v7, v8)) )
      {
        *a1 = v9;
        return a1;
      }
      v4 -= 128;
      *a2 = v10;
      if ( v8 == *(_QWORD *)(v4 + 8) && (!v8 || !memcmp(*(const void **)v4, v7, v8)) )
        goto LABEL_17;
      *a2 = v4;
      if ( v4 == v14 )
      {
        v6 = (v4 - v15) >> 5;
        break;
      }
    }
  }
  switch ( v6 )
  {
    case 2LL:
      v12 = *(const void **)a4;
      v13 = *(_QWORD *)(a4 + 8);
LABEL_33:
      if ( *(_QWORD *)(v4 - 24) == v13 && (!v13 || !memcmp(*(const void **)(v4 - 32), v12, v13)) )
        goto LABEL_16;
      v4 -= 32;
      *a2 = v4;
LABEL_28:
      if ( *(_QWORD *)(v4 - 24) != v13 || v13 && memcmp(*(const void **)(v4 - 32), v12, v13) )
      {
        *a2 = v4 - 32;
        break;
      }
LABEL_16:
      *a1 = v4;
      return a1;
    case 3LL:
      v12 = *(const void **)a4;
      v13 = *(_QWORD *)(a4 + 8);
      if ( *(_QWORD *)(v4 - 24) == v13
        && (!v13 || !memcmp(*(const void **)(v4 - 32), *(const void **)a4, *(_QWORD *)(a4 + 8))) )
      {
        goto LABEL_16;
      }
      v4 -= 32;
      *a2 = v4;
      goto LABEL_33;
    case 1LL:
      v12 = *(const void **)a4;
      v13 = *(_QWORD *)(a4 + 8);
      goto LABEL_28;
  }
  *a1 = v15;
  return a1;
}
