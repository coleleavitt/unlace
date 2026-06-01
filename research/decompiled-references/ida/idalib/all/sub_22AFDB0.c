__int64 __fastcall sub_22AFDB0(__int64 a1, char a2)
{
  char **v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rsi
  int v7; // edi
  char v8; // dl
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r8
  __m128i si128; // xmm0
  _QWORD *v12; // rax
  unsigned int v13; // eax
  unsigned __int64 v14; // rcx
  unsigned int v15; // eax
  _QWORD *v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // eax
  _QWORD *v19; // rcx
  __int64 v20; // rcx
  unsigned int v21; // eax
  _QWORD *v22; // rcx
  __int64 v23; // rcx
  _QWORD *v24; // rcx
  __int64 result; // rax
  char *v26; // r14
  char *v27; // r15
  char **v28; // rcx
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rax

  v4 = &off_2BF4CA0;
  v5 = *(unsigned int *)(a1 + 8);
  v6 = *(unsigned int *)(a1 + 12);
  v7 = *(_DWORD *)(a1 + 8);
  do
  {
    while ( 1 )
    {
      v8 = 0;
      if ( (unsigned __int64)v4[3] > 3 )
        v8 = *(_DWORD *)v4[2] == 875984498;
      v9 = v5;
      v10 = v6;
      if ( a2 != v8 )
        goto LABEL_2;
      if ( v6 > v5 )
        break;
      v26 = v4[1];
      v27 = *v4;
      if ( v6 < v5 + 1 )
      {
        sub_2237220(a1, (const void *)(a1 + 16), v5 + 1, 16);
        v9 = *(unsigned int *)(a1 + 8);
      }
      v28 = (char **)(*(_QWORD *)a1 + 16 * v9);
      *v28 = v27;
      v28[1] = v26;
      v6 = *(unsigned int *)(a1 + 12);
      v9 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
      v7 = v9;
      *(_DWORD *)(a1 + 8) = v9;
      v5 = v9;
      v10 = v6;
LABEL_2:
      v4 += 8;
      if ( &off_2BF5820 == v4 )
        goto LABEL_8;
    }
    si128 = _mm_load_si128((const __m128i *)v4);
    v4 += 8;
    *(__m128i *)(*(_QWORD *)a1 + 16 * v5) = si128;
    v5 = (unsigned int)(v7 + 1);
    v7 = v5;
    *(_DWORD *)(a1 + 8) = v5;
    v9 = v5;
  }
  while ( &off_2BF5820 != v4 );
LABEL_8:
  if ( v5 >= v6 )
  {
    if ( v5 + 1 > v6 )
    {
      sub_2237220(a1, (const void *)(a1 + 16), v5 + 1, 16);
      v9 = *(unsigned int *)(a1 + 8);
    }
    v29 = (_QWORD *)(16 * v9 + *(_QWORD *)a1);
    *v29 = "andes-45-series";
    v29[1] = 15;
    v10 = *(unsigned int *)(a1 + 12);
    v13 = *(_DWORD *)(a1 + 8) + 1;
    v14 = v13;
    *(_DWORD *)(a1 + 8) = v13;
    if ( v10 <= v13 )
      goto LABEL_20;
LABEL_10:
    v15 = v13 + 1;
    v16 = (_QWORD *)(*(_QWORD *)a1 + 16 * v14);
    *v16 = "generic";
    v16[1] = 7;
    v17 = v15;
    *(_DWORD *)(a1 + 8) = v15;
    if ( v15 < v10 )
      goto LABEL_11;
LABEL_23:
    if ( v10 < v17 + 1 )
    {
      sub_2237220(a1, (const void *)(a1 + 16), v17 + 1, 16);
      v17 = *(unsigned int *)(a1 + 8);
    }
    v31 = (_QWORD *)(16 * v17 + *(_QWORD *)a1);
    *v31 = "generic-ooo";
    v31[1] = 11;
    v10 = *(unsigned int *)(a1 + 12);
    v18 = *(_DWORD *)(a1 + 8) + 1;
    v20 = v18;
    *(_DWORD *)(a1 + 8) = v18;
    if ( v10 <= v18 )
      goto LABEL_26;
LABEL_12:
    v21 = v18 + 1;
    v22 = (_QWORD *)(*(_QWORD *)a1 + 16 * v20);
    *v22 = "rocket";
    v22[1] = 6;
    v23 = v21;
    *(_DWORD *)(a1 + 8) = v21;
    if ( v21 < v10 )
      goto LABEL_13;
LABEL_29:
    if ( v10 < v23 + 1 )
    {
      sub_2237220(a1, (const void *)(a1 + 16), v23 + 1, 16);
      v23 = *(unsigned int *)(a1 + 8);
    }
    result = 16 * v23 + *(_QWORD *)a1;
    *(_QWORD *)result = "sifive-7-series";
    *(_QWORD *)(result + 8) = 15;
    ++*(_DWORD *)(a1 + 8);
  }
  else
  {
    v12 = (_QWORD *)(*(_QWORD *)a1 + 16 * v5);
    *v12 = "andes-45-series";
    v12[1] = 15;
    v13 = v7 + 1;
    v14 = (unsigned int)(v7 + 1);
    *(_DWORD *)(a1 + 8) = v7 + 1;
    if ( v10 > v14 )
      goto LABEL_10;
LABEL_20:
    if ( v10 < v14 + 1 )
    {
      sub_2237220(a1, (const void *)(a1 + 16), v14 + 1, 16);
      v14 = *(unsigned int *)(a1 + 8);
    }
    v30 = (_QWORD *)(16 * v14 + *(_QWORD *)a1);
    *v30 = "generic";
    v30[1] = 7;
    v10 = *(unsigned int *)(a1 + 12);
    v15 = *(_DWORD *)(a1 + 8) + 1;
    v17 = v15;
    *(_DWORD *)(a1 + 8) = v15;
    if ( v15 >= v10 )
      goto LABEL_23;
LABEL_11:
    v18 = v15 + 1;
    v19 = (_QWORD *)(*(_QWORD *)a1 + 16 * v17);
    *v19 = "generic-ooo";
    v19[1] = 11;
    v20 = v18;
    *(_DWORD *)(a1 + 8) = v18;
    if ( v10 > v18 )
      goto LABEL_12;
LABEL_26:
    if ( v10 < v20 + 1 )
    {
      sub_2237220(a1, (const void *)(a1 + 16), v20 + 1, 16);
      v20 = *(unsigned int *)(a1 + 8);
    }
    v32 = (_QWORD *)(16 * v20 + *(_QWORD *)a1);
    *v32 = "rocket";
    v32[1] = 6;
    v10 = *(unsigned int *)(a1 + 12);
    v21 = *(_DWORD *)(a1 + 8) + 1;
    v23 = v21;
    *(_DWORD *)(a1 + 8) = v21;
    if ( v21 >= v10 )
      goto LABEL_29;
LABEL_13:
    v24 = (_QWORD *)(*(_QWORD *)a1 + 16 * v23);
    result = v21 + 1;
    *v24 = "sifive-7-series";
    v24[1] = 15;
    *(_DWORD *)(a1 + 8) = result;
  }
  return result;
}
