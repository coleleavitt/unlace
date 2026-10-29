__m128 *__fastcall sub_13C1DC0(__m128 *a1, char *a2, _QWORD *a3, _QWORD *a4)
{
  char *v4; // rbx
  char *v5; // rbp
  signed __int64 v6; // r8
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdi
  _QWORD *v12; // rax
  __int64 v13; // rdx
  char *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  char *v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  char *i; // r15
  _QWORD *v23; // r12
  char *v24; // rdi
  int v25; // eax
  __int64 v26; // r13
  __int64 v27; // r14
  _QWORD *v28; // r9
  __m128 *result; // rax
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // [rsp+0h] [rbp-78h] BYREF
  __int64 v32; // [rsp+8h] [rbp-70h]
  __m128 *v33; // [rsp+10h] [rbp-68h]
  unsigned __int64 v34; // [rsp+18h] [rbp-60h]
  signed __int64 v35; // [rsp+20h] [rbp-58h]
  char *v36; // [rsp+28h] [rbp-50h]
  _QWORD *v37; // [rsp+30h] [rbp-48h]
  _QWORD *v38; // [rsp+38h] [rbp-40h]

  v4 = (char *)a1->m128_u64[1];
  v5 = (char *)a1->m128_u64[0];
  v33 = a1;
  v6 = a2 - v5;
  v7 = (v4 - v5) >> 4;
  if ( !v7 )
  {
    v8 = 1;
    goto LABEL_31;
  }
  v8 = 2 * v7;
  v9 = -16;
  if ( v7 > 2 * v7 || v8 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_3;
  if ( v8 )
  {
LABEL_31:
    v9 = 16 * v8;
LABEL_3:
    v38 = a4;
    v37 = a3;
    v36 = a2;
    v35 = a2 - v5;
    v10 = operator new(v9);
    v6 = a2 - v5;
    v32 = v10;
    a3 = v37;
    v34 = v10 + v9;
    a4 = v38;
    v31 = v10 + 16;
    goto LABEL_4;
  }
  v31 = 16;
  v34 = 0;
  v32 = 0;
LABEL_4:
  v11 = v32;
  v12 = (_QWORD *)(v32 + v6);
  *v12 = *a3;
  v13 = *a4;
  *a4 = 0;
  v12[1] = v13;
  if ( a2 != v5 )
  {
    v14 = v5;
    v15 = v11;
    do
    {
      v16 = *(_QWORD *)v14;
      v14 += 16;
      v15 += 16;
      *(_QWORD *)(v15 - 16) = v16;
      v17 = *((_QWORD *)v14 - 1);
      *((_QWORD *)v14 - 1) = 0;
      *(_QWORD *)(v15 - 8) = v17;
    }
    while ( a2 != v14 );
    v31 = v32 + ((a2 - 16 - v5) & 0xFFFFFFFFFFFFFFF0LL) + 32;
  }
  v18 = a2;
  v19 = v31;
  if ( a2 != v4 )
  {
    do
    {
      v20 = *(_QWORD *)v18;
      v18 += 16;
      v19 += 16LL;
      *(_QWORD *)(v19 - 16) = v20;
      v21 = *((_QWORD *)v18 - 1);
      *((_QWORD *)v18 - 1) = 0;
      *(_QWORD *)(v19 - 8) = v21;
    }
    while ( v4 != v18 );
    v31 += ((v4 - a2 - 16) & 0xFFFFFFFFFFFFFFF0LL) + 16;
  }
  for ( i = v5; i != v4; i += 16 )
  {
    v23 = *((_QWORD **)i + 1);
    if ( v23 )
    {
      v24 = (char *)v23[2];
      if ( *((_DWORD *)v23 + 7) )
      {
        v25 = *((_DWORD *)v23 + 6);
        if ( v25 )
        {
          v26 = 0;
          v27 = 8LL * (unsigned int)(v25 - 1) + 8;
          do
          {
            v28 = *(_QWORD **)&v24[v26];
            if ( v28 != (_QWORD *)-8LL && v28 )
            {
              operator delete(*(_QWORD *)&v24[v26], *v28 + 25LL, 8);
              v24 = (char *)v23[2];
            }
            v26 += 8;
          }
          while ( v26 != v27 );
        }
      }
      free(v24);
      if ( *v23 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v23 + 8LL))(*v23);
      operator delete(v23, 0x28u);
    }
  }
  if ( v5 )
    operator delete(v5);
  result = v33;
  v30 = v34;
  *v33 = _mm_loadh_ps((const double *)&v31);
  result[1].m128_u64[0] = v30;
  return result;
}
