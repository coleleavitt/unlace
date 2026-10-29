unsigned __int64 __fastcall sub_FA6F90(__int64 a1, char *a2, _DWORD *a3, _QWORD *a4)
{
  char *v6; // r12
  char *v7; // r14
  char *v8; // rsi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // r13
  unsigned __int64 v14; // r15
  unsigned __int64 result; // rax
  char *v16; // rsi
  char *v17; // rdx
  __int64 v18; // rcx
  int v19; // r9d
  __int64 v20; // r8
  char *v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // r9d
  unsigned __int64 v25; // [rsp+8h] [rbp-50h] BYREF
  _DWORD *v26; // [rsp+10h] [rbp-48h]
  _QWORD *v27; // [rsp+18h] [rbp-40h]

  v6 = *(char **)(a1 + 8);
  v7 = *(char **)a1;
  v8 = &a2[-*(_QWORD *)a1];
  v9 = (__int64)&v6[-*(_QWORD *)a1] >> 4;
  if ( !v9 )
  {
    v10 = 1;
    goto LABEL_19;
  }
  v10 = 2 * v9;
  v11 = -16;
  if ( v9 > 2 * v9 || v10 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_3;
  if ( v10 )
  {
LABEL_19:
    v11 = 16 * v10;
LABEL_3:
    v27 = a4;
    v26 = a3;
    v25 = (unsigned __int64)v8;
    v12 = operator new(v11);
    a3 = v26;
    a4 = v27;
    v13 = v12;
    v14 = v12 + v11;
    result = v12 + 16;
    goto LABEL_4;
  }
  result = 16;
  v14 = 0;
  v13 = 0;
LABEL_4:
  v16 = &v8[v13];
  *(_DWORD *)v16 = *a3;
  *((_QWORD *)v16 + 1) = *a4;
  if ( a2 != v7 )
  {
    v17 = v7;
    v18 = v13;
    do
    {
      v19 = *(_DWORD *)v17;
      v20 = *((_QWORD *)v17 + 1);
      v17 += 16;
      v18 += 16;
      *(_DWORD *)(v18 - 16) = v19;
      *(_QWORD *)(v18 - 8) = v20;
    }
    while ( a2 != v17 );
    result = v13 + ((a2 - 16 - v7) & 0xFFFFFFFFFFFFFFF0LL) + 32;
  }
  if ( a2 != v6 )
  {
    v21 = a2;
    v22 = result;
    do
    {
      v23 = *((_QWORD *)v21 + 1);
      v24 = *(_DWORD *)v21;
      v21 += 16;
      v22 += 16LL;
      *(_DWORD *)(v22 - 16) = v24;
      *(_QWORD *)(v22 - 8) = v23;
    }
    while ( v6 != v21 );
    result += ((v6 - a2 - 16) & 0xFFFFFFFFFFFFFFF0LL) + 16;
  }
  if ( v7 )
  {
    v25 = result;
    operator delete(v7);
    result = v25;
  }
  v25 = result;
  *(_QWORD *)(a1 + 16) = v14;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v25);
  return result;
}

