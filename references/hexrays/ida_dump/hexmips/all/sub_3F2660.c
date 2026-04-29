unsigned __int64 __fastcall sub_3F2660(__int64 a1, _QWORD *a2, __m128 a3)
{
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 v5; // r12
  unsigned int v8; // esi
  __int64 (*v9)(void); // rax
  int v10; // r15d
  __int64 v11; // rax
  __int64 v12; // rsi
  int *v13; // rdi
  unsigned __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdx
  unsigned __int64 v17; // r15
  unsigned __int64 *v18; // rcx
  unsigned __int64 *v19; // rax
  unsigned __int64 v20; // rdx
  int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __m128 v26; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v27; // [rsp+18h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 80);
  v27 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 72);
  v5 = v4 + 32 * v3;
  while ( v5 != v4 )
  {
    while ( 1 )
    {
      v13 = *(int **)(a1 + 56);
      if ( (unsigned int)(v13[187] - 1) <= 1 )
        break;
LABEL_3:
      v8 = *(unsigned __int16 *)(v4 + 24);
      if ( (_WORD)v8 != 31 )
        goto LABEL_4;
      v14 = *(_QWORD *)(v4 + 16);
LABEL_26:
      if ( v13[20] < v14 )
      {
        v8 = *(unsigned __int16 *)(v4 + 24);
        goto LABEL_5;
      }
      v22 = *(_DWORD *)(a1 + 128);
      *(_QWORD *)(a1 + 120) = *(_QWORD *)(v4 + 8) + a2[17] - a2[22];
      *(_DWORD *)(a1 + 128) = v22 | 1;
      if ( v13[20] > (int)v14 )
        *(_DWORD *)(a1 + 128) = v22 | 9;
      a3 = _mm_loadh_ps((const double *)(v4 + 16));
      v26 = a3;
      sub_F38C0((__int64)a2, (__int64)&v26);
      v13 = *(int **)(a1 + 56);
      v8 = *(unsigned __int16 *)(v4 + 24);
LABEL_4:
      if ( (unsigned int)(v13[187] - 1) <= 2 )
        goto LABEL_15;
LABEL_5:
      v9 = *(__int64 (**)(void))(*(_QWORD *)v13 + 168LL);
      if ( (char *)v9 == (char *)sub_3E5480 )
        v10 = sub_3E5480(v13, v8);
      else
        v10 = v9();
      if ( v10 != -1 )
      {
        v11 = *(_QWORD *)(a1 + 16);
        v12 = *(_QWORD *)(a1 + 8);
        if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v11 + 1) )
        {
          v23 = qvector_reserve(a1 + 8, v12, v11 + 1, 4);
          *(_QWORD *)(a1 + 8) = v23;
          v12 = v23;
          v11 = *(_QWORD *)(a1 + 16);
        }
        *(_DWORD *)(v12 + 4 * v11) = v10;
        ++*(_QWORD *)(a1 + 16);
      }
      v4 += 32;
      if ( v5 == v4 )
        return v27 - __readfsqword(0x28u);
    }
    v14 = *(_QWORD *)(v4 + 16);
    if ( v14 == 4 )
    {
      sub_32C190(a2, *(_QWORD *)v4, 0x32u);
      v13 = *(int **)(a1 + 56);
      goto LABEL_3;
    }
    v8 = *(unsigned __int16 *)(v4 + 24);
    if ( (_WORD)v8 == 31 )
      goto LABEL_26;
LABEL_15:
    if ( (unsigned __int16)(v8 - 4) > 7u )
      goto LABEL_5;
    v15 = *(_QWORD *)(a1 + 96);
    v16 = *(_QWORD *)(a1 + 104);
    v17 = *(_QWORD *)v4;
    v18 = (unsigned __int64 *)(v15 + 8 * v16);
    if ( (unsigned __int64 *)v15 != v18 )
    {
      v19 = *(unsigned __int64 **)(a1 + 96);
      while ( v17 != *v19 )
      {
        if ( v18 == ++v19 )
          goto LABEL_21;
      }
      if ( v18 != v19 )
      {
        if ( !under_debugger )
          sub_37E160(0xCCCCu, v15, *(double *)a3.m128_u64);
        BUG();
      }
    }
LABEL_21:
    v20 = v16 + 1;
    if ( *(_QWORD *)(a1 + 112) < v20 )
    {
      v24 = qvector_reserve(a1 + 96, v15, v20, 8);
      v25 = *(_QWORD *)(a1 + 104);
      *(_QWORD *)(a1 + 96) = v24;
      v18 = (unsigned __int64 *)(v24 + 8 * v25);
    }
    v4 += 32;
    *v18 = v17;
    ++*(_QWORD *)(a1 + 104);
  }
  return v27 - __readfsqword(0x28u);
}
