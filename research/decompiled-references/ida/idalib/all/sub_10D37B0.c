__int64 __fastcall sub_10D37B0(__int64 a1, __int64 a2, int a3)
{
  int v5; // eax
  int *v6; // rcx
  __int64 v7; // rsi
  int *v8; // rdx
  int v9; // edi
  _DWORD *v10; // rax
  __int64 result; // rax
  __int64 v12; // r9
  __int64 v13; // r13
  __int64 v14; // r10
  __int64 *v15; // r8
  __int64 v16; // r11
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 *v20; // r12
  __int64 v21; // rdi
  double v22[6]; // [rsp+8h] [rbp-30h] BYREF

  *(_DWORD *)(a1 + 12) = a3;
  *(_DWORD *)(a1 + 8) = 2;
  *(_QWORD *)a1 = &off_2B62EF8;
  *(_QWORD *)(a1 + 16) = a1 + 32;
  *(_QWORD *)(a1 + 24) = 0x300000000LL;
  if ( *(_DWORD *)(a2 + 8) )
    sub_10D2D90((void **)(a1 + 16), (char **)a2);
  *(_BYTE *)(a1 + 56) = 1;
  *(_QWORD *)(a1 + 60) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_QWORD *)a1 = &off_2B62F68;
  *(_QWORD *)(a1 + 96) = a1 + 112;
  *(_QWORD *)(a1 + 104) = 0x300000000LL;
  v5 = *(_DWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 88) = 0;
  if ( v5 )
    sub_10D36D0((void **)(a1 + 96), (char **)(a2 + 40));
  v6 = *(int **)(a2 + 120);
  v7 = *(unsigned int *)(a2 + 128);
  v8 = &v6[v7];
  v9 = *v6;
  if ( v8 == v6 || (v10 = v6 + 1, v6 + 1 == v8) )
  {
LABEL_11:
    *(_DWORD *)(a1 + 64) = v9;
    goto LABEL_12;
  }
  if ( v6[1] == v9 )
  {
    do
    {
      if ( ++v10 == v8 )
        goto LABEL_11;
    }
    while ( *(v10 - 1) == *v10 );
  }
LABEL_12:
  if ( v7 == 1 )
    *(_QWORD *)(a1 + 72) = **(_QWORD **)(a2 + 80);
  result = *(unsigned int *)(a1 + 24);
  if ( (_DWORD)result )
  {
    v12 = 0;
    v13 = 4LL * (unsigned int)(result - 1) + 4;
    while ( 1 )
    {
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 2 * v12);
      result = *(unsigned int *)(v14 + 8);
      if ( (_DWORD)result == 2 )
        goto LABEL_25;
      if ( (_DWORD)result == 17 )
        goto LABEL_25;
      v15 = *(__int64 **)(v14 + 16);
      v16 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 2 * v12);
      v17 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 2 * v12);
      v18 = *(_QWORD *)(a2 + 120);
      *(_QWORD *)&v22[0] = v16;
      v19 = *(unsigned int *)(v18 + v12);
      result = *(unsigned int *)(v14 + 24);
      *(_DWORD *)(v14 + 64) = v19;
      v20 = &v15[result];
      *(__m128 *)(v14 + 72) = _mm_loadh_ps(v22);
      if ( v15 == v20 )
        goto LABEL_25;
      v21 = *v15;
      result = *(unsigned int *)(*v15 + 8);
      if ( (_DWORD)result != 2 )
        goto LABEL_20;
LABEL_22:
      if ( v20 != ++v15 )
        break;
LABEL_25:
      v12 += 4;
      if ( v13 == v12 )
        return result;
    }
    while ( 1 )
    {
      v21 = *v15;
      v19 = *(unsigned int *)(v14 + 64);
      result = *(unsigned int *)(*v15 + 8);
      if ( (_DWORD)result != 2 )
        break;
      if ( v20 == ++v15 )
        goto LABEL_25;
    }
LABEL_20:
    if ( (_DWORD)result != 17 )
      result = sub_10D1C60(v21, v19, v17, v16);
    goto LABEL_22;
  }
  return result;
}
