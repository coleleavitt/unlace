__int64 __fastcall sub_2260CC0(__int64 a1, char *a2, _QWORD *a3)
{
  char *v4; // r15
  char *v5; // rbx
  char *v6; // r14
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r12
  __int64 v10; // rax
  unsigned __int64 v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rdx
  char *v14; // rax
  char *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // rdi
  __m128i v22; // xmm1
  char *v23; // r14
  char *v24; // r13
  _DWORD *v25; // r14
  int v26; // eax
  int v27; // eax
  __int64 result; // rax
  __m128 v29; // xmm0
  volatile signed __int32 *v30; // r13
  __int64 v31; // [rsp+8h] [rbp-50h] BYREF
  __int64 v32; // [rsp+10h] [rbp-48h]
  _QWORD *v33; // [rsp+18h] [rbp-40h]

  v4 = *(char **)(a1 + 8);
  v5 = *(char **)a1;
  v6 = &a2[-*(_QWORD *)a1];
  v7 = (__int64)&v4[-*(_QWORD *)a1] >> 4;
  if ( !v7 )
  {
    v8 = 1;
    goto LABEL_36;
  }
  v8 = 2 * v7;
  v9 = -16;
  if ( v7 > 2 * v7 || v8 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_3;
  if ( v8 )
  {
LABEL_36:
    v9 = 16 * v8;
LABEL_3:
    v33 = a3;
    v10 = operator new(v9);
    a3 = v33;
    v31 = v10;
    v32 = v10 + v9;
    v11 = v10 + 16;
    goto LABEL_4;
  }
  v31 = 0;
  v11 = 16;
  v10 = 0;
  v32 = 0;
LABEL_4:
  v12 = *a3;
  v13 = a3[1];
  v14 = &v6[v10];
  *(_QWORD *)v14 = v12;
  *((_QWORD *)v14 + 1) = v13;
  if ( v13 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v13 + 8), 1u);
    else
      ++*(_DWORD *)(v13 + 8);
  }
  v15 = v5;
  v16 = v31;
  if ( a2 != v5 )
  {
    do
    {
      v17 = *(_QWORD *)v15;
      *(_QWORD *)(v16 + 8) = 0;
      v15 += 16;
      v16 += 16;
      *(_QWORD *)(v16 - 16) = v17;
      v18 = *((_QWORD *)v15 - 1);
      *((_QWORD *)v15 - 1) = 0;
      *(_QWORD *)(v16 - 8) = v18;
      *((_QWORD *)v15 - 2) = 0;
    }
    while ( a2 != v15 );
    v11 = v31 + ((a2 - 16 - v5) & 0xFFFFFFFFFFFFFFF0LL) + 32;
  }
  if ( a2 != v4 )
  {
    v19 = 0;
    v20 = 0;
    v21 = ((unsigned __int64)(v4 - a2 - 16) >> 4) + 1;
    do
    {
      v22 = _mm_loadu_si128((const __m128i *)&a2[v20]);
      ++v19;
      *(_OWORD *)&a2[v20] = 0;
      *(__m128i *)(v11 + v20) = v22;
      v20 += 16;
    }
    while ( v19 < v21 );
    v11 += 16 * v21;
  }
  if ( v5 != v4 )
  {
    v23 = v5;
    if ( &_pthread_key_create )
    {
      do
      {
        v30 = *((volatile signed __int32 **)v23 + 1);
        if ( v30 )
        {
          if ( !_InterlockedSub(v30 + 2, 1u) )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
            if ( !_InterlockedSub(v30 + 3, 1u) )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 24LL))(v30);
          }
        }
        v23 += 16;
      }
      while ( v23 != v4 );
    }
    else
    {
      v24 = v5;
      do
      {
        while ( 1 )
        {
          v25 = *((_DWORD **)v24 + 1);
          if ( v25 )
          {
            v26 = v25[2];
            v25[2] = v26 - 1;
            if ( v26 == 1 )
            {
              (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v25 + 16LL))(v25);
              v27 = v25[3];
              v25[3] = v27 - 1;
              if ( v27 == 1 )
                break;
            }
          }
          v24 += 16;
          if ( v4 == v24 )
            goto LABEL_22;
        }
        v24 += 16;
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v25 + 24LL))(v25);
      }
      while ( v4 != v24 );
    }
  }
LABEL_22:
  if ( v5 )
    operator delete(v5);
  v31 = v11;
  result = v32;
  v29 = _mm_loadh_ps((const double *)&v31);
  *(_QWORD *)(a1 + 16) = v32;
  *(__m128 *)a1 = v29;
  return result;
}
