__int64 __fastcall sub_118A0F0(__int64 a1, __int64 *a2, __m128 a3, double a4)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  __int64 *v9; // rbx
  unsigned __int64 v10; // rdx
  int v11; // eax
  __int64 *v12; // rcx
  __int64 v13; // rdx
  __int64 result; // rax
  __int64 v15; // rdi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rbp
  __int64 v19; // rsi
  __int64 *v20; // r14
  __int64 *v21; // rcx
  unsigned __int64 v22; // rdi
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  __int64 *v25; // rdx
  __int64 v26; // rax
  __int64 *v27; // r12
  int v28; // r12d
  __int64 v29; // rdx
  unsigned __int64 v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // [rsp+0h] [rbp-58h]
  char v33; // [rsp+Fh] [rbp-49h]
  __int64 v34; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v35[8]; // [rsp+18h] [rbp-40h] BYREF

  v5 = *(unsigned int *)(a1 + 160);
  v6 = *a2;
  *a2 = 0;
  v7 = *(_QWORD *)(a1 + 152);
  v8 = *(unsigned int *)(a1 + 164);
  v9 = &v34;
  v10 = v5 + 1;
  v34 = v6;
  v11 = v5;
  v12 = (__int64 *)(v7 + 8 * v5);
  if ( v10 > v8 )
  {
    v32 = -1;
    v33 = 0;
    if ( v7 <= (unsigned __int64)&v34 && v12 > &v34 )
    {
      v33 = 1;
      v32 = (__int64)((__int64)&v35[-1] - v7) >> 3;
    }
    v16 = sub_2237400(a1 + 152, a1 + 168, v10, 8, v35);
    v17 = *(_QWORD *)(a1 + 152);
    v18 = v16;
    v19 = 8LL * *(unsigned int *)(a1 + 160);
    v20 = (__int64 *)(v17 + v19);
    if ( v17 != v17 + v19 )
    {
      v21 = *(__int64 **)(a1 + 152);
      if ( (v17 >= v16 + 16 || v16 >= v17 + 16) && (unsigned __int64)(v19 - 8) > 0x10 )
      {
        v22 = ((unsigned __int64)(v19 - 8) >> 3) + 1;
        v23 = 0;
        a4 = 0.0;
        do
        {
          a3 = (__m128)_mm_loadu_si128((const __m128i *)(v17 + v23));
          *(_OWORD *)(v17 + v23) = 0;
          *(__m128 *)(v18 + v23) = a3;
          v23 += 16;
        }
        while ( 16 * (v22 >> 1) != v23 );
        v24 = 8 * (v22 & 0xFFFFFFFFFFFFFFFELL);
        v25 = (__int64 *)(v24 + v17);
        v21 = (__int64 *)(v18 + v24);
        if ( v22 != (v22 & 0xFFFFFFFFFFFFFFFELL) )
        {
          v26 = *v25;
          *v25 = 0;
          *v21 = v26;
        }
      }
      else
      {
        v30 = v16;
        do
        {
          v31 = *v21;
          *v21++ = 0;
          v30 += 8LL;
          *(_QWORD *)(v30 - 8) = v31;
        }
        while ( v20 != v21 );
      }
      v27 = *(__int64 **)(a1 + 152);
      v20 = &v27[(unsigned __int64)v19 / 8];
      if ( v27 != &v27[(unsigned __int64)v19 / 8] )
      {
        do
        {
          while ( *--v20 )
          {
            (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64 *, double, double))(*(_QWORD *)*v20 + 8LL))(
              *v20,
              v19,
              *(_QWORD *)*v20,
              v21,
              *(double *)a3.m128_u64,
              a4);
            if ( v27 == v20 )
              goto LABEL_18;
          }
        }
        while ( v27 != v20 );
LABEL_18:
        v20 = *(__int64 **)(a1 + 152);
      }
    }
    v28 = v35[0];
    if ( (__int64 *)(a1 + 168) != v20 )
      free(v20);
    v29 = *(unsigned int *)(a1 + 160);
    *(_QWORD *)(a1 + 152) = v18;
    *(_DWORD *)(a1 + 164) = v28;
    v11 = v29;
    v12 = (__int64 *)(v18 + 8 * v29);
    if ( v33 )
      v9 = (__int64 *)(v18 + 8 * v32);
  }
  v13 = *v9;
  *v9 = 0;
  result = (unsigned int)(v11 + 1);
  v15 = v34;
  *v12 = v13;
  *(_DWORD *)(a1 + 160) = result;
  if ( v15 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  return result;
}
