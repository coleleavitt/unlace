void __fastcall sub_1F74580(__int64 a1, char *a2, _DWORD *a3, _DWORD *a4)
{
  char *v5; // r14
  char *v7; // r8
  char *v8; // rbx
  char *v9; // r9
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  unsigned __int64 v15; // r12
  __int64 v16; // r13
  int v17; // ecx
  char *v18; // rax
  char *v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdi
  __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  char *v24; // rax
  _QWORD *v25; // rdx
  signed __int64 v26; // r8
  unsigned __int64 v27; // rcx
  __int64 v28; // rdx
  unsigned __int64 v29; // r14
  _QWORD *v30; // rdx
  unsigned __int64 v31; // rdx
  int v32; // r9d
  int v33; // edi
  __int64 v34; // [rsp+0h] [rbp-58h] BYREF
  char *v35; // [rsp+8h] [rbp-50h]
  _DWORD *v36; // [rsp+10h] [rbp-48h]
  _DWORD *v37; // [rsp+18h] [rbp-40h]

  v5 = a2;
  v7 = *(char **)(a1 + 8);
  v8 = *(char **)a1;
  v9 = &a2[-*(_QWORD *)a1];
  v10 = (__int64)&v7[-*(_QWORD *)a1] >> 3;
  if ( !v10 )
  {
    v11 = 1;
    goto LABEL_26;
  }
  v11 = 2 * v10;
  v12 = -8;
  if ( v10 > 2 * v10 || v11 > 0x1FFFFFFFFFFFFFFFLL )
    goto LABEL_3;
  if ( v11 )
  {
LABEL_26:
    v12 = 8 * v11;
LABEL_3:
    v37 = a4;
    v36 = a3;
    v35 = v9;
    v34 = (__int64)v7;
    v13 = operator new(v12);
    v7 = (char *)v34;
    v9 = v35;
    a3 = v36;
    a4 = v37;
    v14 = v13 + v12;
    v15 = v13;
    v16 = v13 + 8;
    goto LABEL_4;
  }
  v16 = 8;
  v14 = 0;
  v15 = 0;
LABEL_4:
  v17 = *a4;
  v18 = &v9[v15];
  *(_DWORD *)v18 = *a3;
  *((_DWORD *)v18 + 1) = v17;
  if ( a2 != v8 )
  {
    v19 = v8;
    v20 = (unsigned __int64)(a2 - 8 - v8) >> 3;
    if ( (v15 >= (unsigned __int64)(v8 + 16) || (unsigned __int64)v8 >= v15 + 16) && (v20 & 0x1FFFFFFFFFFFFFFELL) != 0 )
    {
      v21 = v20 + 1;
      v22 = 0;
      do
      {
        *(__m128i *)(v15 + v22) = _mm_loadu_si128((const __m128i *)&v8[v22]);
        v22 += 16;
      }
      while ( 16 * ((v20 + 1) >> 1) != v22 );
      v23 = 8 * (v21 & 0xFFFFFFFFFFFFFFFELL);
      v24 = &v8[v23];
      v25 = (_QWORD *)(v15 + v23);
      if ( v21 != (v21 & 0xFFFFFFFFFFFFFFFELL) )
        *v25 = *(_QWORD *)v24;
    }
    else
    {
      v31 = v15;
      do
      {
        v32 = *(_DWORD *)v19;
        v33 = *((_DWORD *)v19 + 1);
        v19 += 8;
        v31 += 8LL;
        *(_DWORD *)(v31 - 8) = v32;
        *(_DWORD *)(v31 - 4) = v33;
      }
      while ( a2 != v19 );
    }
    v16 = v15 + 8 * v20 + 16;
  }
  if ( a2 != v7 )
  {
    v26 = v7 - a2;
    v27 = ((unsigned __int64)(v26 - 8) >> 3) + 1;
    if ( v26 == 8 )
    {
      v30 = (_QWORD *)v16;
    }
    else
    {
      v28 = 0;
      do
      {
        *(__m128i *)(v16 + v28) = _mm_loadu_si128((const __m128i *)&a2[v28]);
        v28 += 16;
      }
      while ( v28 != 16 * (v27 >> 1) );
      v29 = 8 * (v27 & 0xFFFFFFFFFFFFFFFELL);
      v30 = (_QWORD *)(v16 + v29);
      v5 = &a2[v29];
      if ( v27 == (v27 & 0xFFFFFFFFFFFFFFFELL) )
        goto LABEL_18;
    }
    *v30 = *(_QWORD *)v5;
LABEL_18:
    v16 += 8 * v27;
  }
  if ( v8 )
  {
    v34 = v14;
    operator delete(v8);
  }
  v34 = v16;
  *(_QWORD *)(a1 + 16) = v14;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v34);
}
