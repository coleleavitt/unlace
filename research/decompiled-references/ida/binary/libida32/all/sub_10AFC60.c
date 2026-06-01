__int64 __fastcall sub_10AFC60(__int64 a1, _DWORD *a2, __int64 a3)
{
  void **v5; // rdi
  int v6; // edx
  _QWORD *v7; // rdi
  __int64 v8; // r14
  __int64 v9; // rbx
  int v10; // eax
  bool v11; // zf
  __int64 *v12; // r13
  __int64 v13; // rdx
  unsigned int v14; // esi
  __int64 *v15; // rbp
  __int64 v16; // rdi
  __int64 result; // rax
  __int64 v18; // rbx
  __int64 v19; // r13
  __int64 v20; // rbp
  __int64 v21; // rax
  int v22; // eax
  __int64 *v23; // r8
  __int64 v24; // r10
  __int64 v25; // r11
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 *v29; // r9
  __int64 v30; // rdi
  int v31; // eax
  __int64 v32; // [rsp+8h] [rbp-80h] BYREF
  void **v33; // [rsp+10h] [rbp-78h]
  __int64 v34; // [rsp+18h] [rbp-70h]
  void *ptr[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v36[11]; // [rsp+30h] [rbp-58h] BYREF

  v5 = (void **)(a1 + 16);
  v6 = *(_DWORD *)(*(_QWORD *)a2 + 12LL);
  v36[0] = *(_QWORD *)a2;
  ptr[1] = (void *)0x300000001LL;
  *((_DWORD *)v5 - 2) = 2;
  *((_DWORD *)v5 - 1) = v6;
  *(v5 - 2) = &off_2B38F58;
  v34 = a1 + 32;
  *(_QWORD *)(a1 + 16) = a1 + 32;
  *(_QWORD *)(a1 + 24) = 0x300000000LL;
  v33 = v5;
  ptr[0] = v36;
  sub_10AF050(v5, (char **)ptr);
  v7 = ptr[0];
  *(_BYTE *)(a1 + 56) = 1;
  *(_QWORD *)(a1 + 60) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  if ( v7 != v36 )
    free(v7);
  *(_QWORD *)a1 = &off_2B38FC8;
  *(_QWORD *)(a1 + 88) = *((_QWORD *)a2 + 1);
  *(_QWORD *)(a1 + 96) = a1 + 112;
  *(_QWORD *)(a1 + 104) = 0x300000000LL;
  if ( *(_DWORD *)(a3 + 48) )
    sub_10AF990((void **)(a1 + 96), (char **)(a3 + 40));
  v8 = *(_QWORD *)a2;
  v9 = *((_QWORD *)a2 + 2);
  v10 = a2[6];
  v11 = *(_DWORD *)(*(_QWORD *)a2 + 8LL) == 2;
  *(_QWORD *)(a1 + 72) = v9;
  *(_DWORD *)(a1 + 60) = v10;
  if ( !v11 )
  {
    v12 = *(__int64 **)(v8 + 16);
    v13 = *(unsigned int *)(v8 + 24);
    v14 = *(_DWORD *)(v8 + 60) | a2[6];
    *(_QWORD *)(v8 + 72) = v9;
    v15 = &v12[v13];
    *(_DWORD *)(v8 + 60) = v14;
    if ( v12 != v15 )
    {
      while ( 1 )
      {
        v16 = *v12++;
        sub_10AE1D0(v16, v14, v9);
        if ( v15 == v12 )
          break;
        v14 = *(_DWORD *)(v8 + 60);
      }
    }
  }
  result = *(unsigned int *)(a3 + 8);
  v18 = 0;
  v19 = (unsigned int)(result - 1);
  if ( (_DWORD)result )
  {
    while ( 1 )
    {
      v20 = *(_QWORD *)(*(_QWORD *)a3 + 8 * v18);
      if ( !v20 )
        goto LABEL_23;
      v21 = *(unsigned int *)(a1 + 24);
      if ( v21 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 28) )
      {
        sub_22134E0(v33, v34, v21 + 1, 8);
        v21 = *(unsigned int *)(a1 + 24);
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v21) = v20;
      v22 = *(_DWORD *)(v20 + 8);
      ++*(_DWORD *)(a1 + 24);
      if ( v22 == 17 )
        goto LABEL_22;
      if ( v22 == 2 )
        goto LABEL_22;
      v23 = *(__int64 **)(v20 + 16);
      v24 = *(_QWORD *)(*(_QWORD *)(a3 + 40) + 8 * v18);
      v25 = *(_QWORD *)(*(_QWORD *)(a3 + 80) + 8 * v18);
      v26 = *(_QWORD *)(a3 + 120);
      v32 = v24;
      v27 = *(unsigned int *)(v26 + 4 * v18);
      v28 = *(unsigned int *)(v20 + 24);
      *(_DWORD *)(v20 + 64) = v27;
      v29 = &v23[v28];
      *(__m128 *)(v20 + 72) = _mm_loadh_ps((const double *)&v32);
      if ( v23 == v29 )
        goto LABEL_22;
      v30 = *v23;
      v31 = *(_DWORD *)(*v23 + 8);
      if ( v31 != 17 )
        goto LABEL_17;
LABEL_19:
      if ( v29 != ++v23 )
        break;
LABEL_22:
      if ( *(_DWORD *)(a3 + 8) != 1 )
      {
LABEL_23:
        result = v18 + 1;
        if ( v18 == v19 )
          return result;
        goto LABEL_24;
      }
      *(_QWORD *)(a1 + 80) = *(_QWORD *)(*(_QWORD *)(a3 + 40) + 8 * v18);
      result = v18 + 1;
      if ( v18 == v19 )
        return result;
LABEL_24:
      v18 = result;
    }
    while ( 1 )
    {
      v30 = *v23;
      v27 = *(unsigned int *)(v20 + 64);
      v31 = *(_DWORD *)(*v23 + 8);
      if ( v31 != 17 )
        break;
      if ( v29 == ++v23 )
        goto LABEL_22;
    }
LABEL_17:
    if ( v31 != 2 )
      sub_10ADF20(v30, v27, v25, v24);
    goto LABEL_19;
  }
  return result;
}

