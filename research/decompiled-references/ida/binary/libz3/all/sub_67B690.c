__m128 *__fastcall sub_67B690(__m128 *a1, const double *a2, __int64 a3, int a4, int a5, int a6)
{
  _DWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r14
  _QWORD *v12; // r13
  __int64 v13; // rsi
  __int64 v14; // r12
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  unsigned int v18; // edx
  __int64 v19; // rdi
  int v20; // edx
  double v22; // r13
  __int64 v23; // rax
  int v24; // [rsp+0h] [rbp-78h]
  int v25; // [rsp+10h] [rbp-68h]
  int v26[2]; // [rsp+20h] [rbp-58h] BYREF
  char v27[8]; // [rsp+28h] [rbp-50h] BYREF
  int v28[2]; // [rsp+30h] [rbp-48h] BYREF
  int v29; // [rsp+38h] [rbp-40h]
  int v30; // [rsp+40h] [rbp-38h]
  void *v31; // [rsp+48h] [rbp-30h]

  if ( *(_WORD *)(a3 + 4) )
    goto LABEL_10;
  v9 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
  if ( v9 && *v9 == 3 && !v9[1] )
  {
    sub_67AD40((__int64)a2, a3);
    *a1 = _mm_loadh_ps(a2);
    ++*(_DWORD *)(a3 + 8);
    return a1;
  }
  v10 = *(unsigned int *)(a3 + 24);
  if ( !(_DWORD)v10 )
  {
LABEL_10:
    *a1 = _mm_loadh_ps(a2);
    ++*(_DWORD *)(a3 + 8);
  }
  else
  {
    *(double *)v26 = *a2;
    v11 = a3 + 32 + 8 * v10;
    v12 = (_QWORD *)(a3 + 32);
    sub_67B690((unsigned int)v28, (_DWORD)a2, *(_QWORD *)(a3 + 32), a4, a5, a6);
    v13 = *(_QWORD *)v28;
    v14 = 0;
LABEL_6:
    v25 = v13;
    *(_QWORD *)v27 = v14;
    sub_23A6F0((unsigned int **)v27);
    v14 = *(_QWORD *)v27;
    v18 = *(_DWORD *)(*(_QWORD *)v27 - 4LL);
    while ( 1 )
    {
      v19 = v18;
      ++v12;
      v20 = v18 + 1;
      *(_QWORD *)(v14 + 8 * v19) = v13;
      *(_DWORD *)(v14 - 4) = v20;
      if ( (_QWORD *)v11 == v12 )
        break;
      sub_67B690((unsigned int)v28, (_DWORD)a2, *v12, v15, v16, v17);
      v13 = *(_QWORD *)v28;
      v18 = *(_DWORD *)(v14 - 4);
      if ( v18 == *(_DWORD *)(v14 - 8) )
        goto LABEL_6;
    }
    v22 = *a2;
    v23 = sub_15DC610(
            *(_QWORD *)a2,
            *(_QWORD *)(a3 + 16),
            v20,
            v14,
            v16,
            v17,
            v24,
            (int)v28,
            v25,
            (int)v27,
            v26[0],
            v27[0],
            v28[0],
            v29,
            v30,
            v31);
    *(__m128i *)a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v23, (__m128i)*(unsigned __int64 *)&v22);
    if ( v23 )
      ++*(_DWORD *)(v23 + 8);
    *(_QWORD *)v27 = v14;
    sub_2334C0((__int64 *)v26);
  }
  return a1;
}

