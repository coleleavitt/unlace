unsigned __int64 __fastcall sub_1390230(__int64 a1, _QWORD *a2, __m128 a3, double a4)
{
  __int64 v5; // r13
  _QWORD *v6; // rbp
  __int64 v7; // r13
  _QWORD *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rsi
  unsigned __int64 result; // rax
  int v14; // ecx
  unsigned __int64 v15; // r14
  __int64 *v16; // r12
  __int64 v17; // rdx
  _QWORD *v18; // rdi
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 *v23; // r13
  __int64 *v24; // rsi
  unsigned __int64 v25; // r8
  __int64 v26; // rdx
  unsigned __int64 v27; // rsi
  __int64 *v28; // rcx
  __int64 v29; // rdx
  __int64 *v30; // rbp
  int v31; // ebp
  unsigned __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // [rsp+0h] [rbp-58h]
  char v35; // [rsp+Fh] [rbp-49h]
  _QWORD *v36; // [rsp+10h] [rbp-48h] BYREF
  __int64 v37[8]; // [rsp+18h] [rbp-40h] BYREF

  v5 = a2[11];
  v6 = (_QWORD *)operator new(0x18u);
  v6[2] = v5;
  v7 = a2[149];
  *v6 = &off_2C43E68;
  v6[1] = a1;
  if ( v7 )
  {
    a2[149] = 0;
    v8 = (_QWORD *)operator new(0x18u);
    v9 = a2[149];
    v8[1] = v6;
    v8[2] = v7;
    *v8 = &off_2BB2860;
    a2[149] = v8;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  }
  else
  {
    a2[149] = v6;
  }
  v10 = a2[13];
  v11 = (_QWORD *)operator new(0x10u);
  *v11 = off_2C43FF8;
  v12 = *(unsigned int *)(v10 + 680);
  v11[1] = a1;
  v36 = v11;
  result = *(unsigned int *)(v10 + 684);
  v14 = v12;
  if ( v12 + 1 > result )
  {
    v19 = *(_QWORD *)(v10 + 672);
    v16 = (__int64 *)&v36;
    v35 = 0;
    v34 = -1;
    if ( v19 <= (unsigned __int64)&v36 && (unsigned __int64)&v36 < v19 + 8 * v12 )
    {
      v35 = 1;
      v34 = (__int64)((__int64)&v37[-1] - v19) >> 3;
    }
    v20 = sub_2237400(v10 + 672, v10 + 688, v12 + 1, 8, v37);
    v21 = *(_QWORD *)(v10 + 672);
    v15 = v20;
    v22 = 8LL * *(unsigned int *)(v10 + 680);
    v23 = (__int64 *)(v21 + v22);
    if ( v21 != v21 + v22 )
    {
      v24 = *(__int64 **)(v10 + 672);
      if ( (v21 >= v20 + 16 || v20 >= v21 + 16) && (unsigned __int64)(v22 - 8) > 0x10 )
      {
        v25 = ((unsigned __int64)(v22 - 8) >> 3) + 1;
        v26 = 0;
        a4 = 0.0;
        do
        {
          a3 = (__m128)_mm_loadu_si128((const __m128i *)(v21 + v26));
          *(_OWORD *)(v21 + v26) = 0;
          *(__m128 *)(v20 + v26) = a3;
          v26 += 16;
        }
        while ( 16 * (v25 >> 1) != v26 );
        v27 = 8 * (v25 & 0xFFFFFFFFFFFFFFFELL);
        v28 = (__int64 *)(v27 + v21);
        v24 = (__int64 *)(v20 + v27);
        if ( v25 != (v25 & 0xFFFFFFFFFFFFFFFELL) )
        {
          v29 = *v28;
          *v28 = 0;
          *v24 = v29;
        }
      }
      else
      {
        v32 = v20;
        do
        {
          v33 = *v24;
          *v24++ = 0;
          v32 += 8LL;
          *(_QWORD *)(v32 - 8) = v33;
        }
        while ( v23 != v24 );
      }
      v30 = *(__int64 **)(v10 + 672);
      v23 = &v30[(unsigned __int64)v22 / 8];
      if ( v30 != &v30[(unsigned __int64)v22 / 8] )
      {
        do
        {
          while ( *--v23 )
          {
            (*(void (__fastcall **)(__int64, __int64 *, double, double))(*(_QWORD *)*v23 + 16LL))(
              *v23,
              v24,
              *(double *)a3.m128_u64,
              a4);
            if ( v30 == v23 )
              goto LABEL_23;
          }
        }
        while ( v30 != v23 );
LABEL_23:
        v23 = *(__int64 **)(v10 + 672);
      }
    }
    v31 = v37[0];
    if ( v23 != (__int64 *)(v10 + 688) )
      free(v23);
    result = v34;
    v12 = *(unsigned int *)(v10 + 680);
    *(_QWORD *)(v10 + 672) = v15;
    *(_DWORD *)(v10 + 684) = v31;
    v14 = v12;
    if ( v35 )
      v16 = (__int64 *)(v15 + 8 * v34);
  }
  else
  {
    v15 = *(_QWORD *)(v10 + 672);
    v16 = (__int64 *)&v36;
  }
  v17 = *v16;
  *v16 = 0;
  v18 = v36;
  *(_QWORD *)(v15 + 8 * v12) = v17;
  *(_DWORD *)(v10 + 680) = v14 + 1;
  if ( v18 )
    return (*(__int64 (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
  return result;
}
