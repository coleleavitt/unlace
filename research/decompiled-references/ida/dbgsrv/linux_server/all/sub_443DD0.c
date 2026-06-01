/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_443DD0
// Address: 0x0000000000443DD0

//----- (0000000000443DD0) ----------------------------------------------------
__int64 __fastcall sub_443DD0(
        _QWORD *a1,
        __int64 a2,
        const char **a3,
        __m128i *a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  unsigned __int64 v14; // rsi
  __int64 v15; // rax
  int v16; // edx
  const char *v18; // r15
  const char *v19; // rbx
  const char *v20; // r14
  const char *v21; // rsi
  const char *v22; // r13
  const char *v23; // rdi
  int v24; // eax
  const char *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  const char *v28; // rsi
  const char *v29; // rdi
  __int64 v31[9]; // [rsp+10h] [rbp-48h] BYREF

  v14 = *(int *)(a2 + 52);
  for ( v31[1] = __readfsqword(0x28u); (_DWORD)v14; v14 = *(int *)(v15 + 48) )
  {
    v15 = sub_439C70(a1[1], v14);
    v16 = *(_DWORD *)(v15 + 84);
    if ( v16 != -1 )
      return sub_443A40(a1, a2, v16, (__int64)a3, a4, 0, a5, a6, a7, a8, a9, a10, a11, a12);
  }
  v18 = *(const char **)(a2 + 16);
  v19 = (const char *)(a2 + 8);
  if ( !v18 )
    goto LABEL_24;
  v20 = a3[1];
  v19 = (const char *)(a2 + 8);
  while ( 1 )
  {
    v26 = *((_QWORD *)v18 + 5);
    if ( !v20 )
      break;
    v21 = *a3;
    v22 = v18;
    v23 = s1;
    if ( v26 )
      goto LABEL_9;
LABEL_10:
    v24 = strcmp(v23, v21);
    v25 = *((const char **)v18 + 2);
    v18 = *((const char **)v18 + 3);
    if ( v24 >= 0 )
    {
      v19 = v22;
      v18 = v25;
    }
    if ( !v18 )
      goto LABEL_19;
  }
  if ( v26 )
  {
LABEL_17:
    v21 = s1;
LABEL_9:
    v23 = *((const char **)v18 + 4);
    v22 = v18;
    goto LABEL_10;
  }
  while ( 1 )
  {
    v27 = *((_QWORD *)v18 + 2);
    if ( !v27 )
      break;
    v19 = v18;
    v18 = *((const char **)v18 + 2);
    if ( *(_QWORD *)(v27 + 40) )
      goto LABEL_17;
  }
  v19 = v18;
LABEL_19:
  if ( v19 == (const char *)(a2 + 8) )
    goto LABEL_24;
  if ( *((_QWORD *)v19 + 5) )
  {
    v28 = *((const char **)v19 + 4);
    v29 = s1;
    if ( v20 )
      v29 = *a3;
LABEL_23:
    if ( strcmp(v29, v28) < 0 )
    {
LABEL_24:
      v31[0] = (__int64)a3;
      v19 = sub_441740((_QWORD *)a2, v19, v31, a5, a6, a7, a8, a9, a10, a11, a12);
    }
  }
  else
  {
    v28 = s1;
    if ( v20 )
    {
      v29 = *a3;
      goto LABEL_23;
    }
  }
  sub_4418C0((unsigned __int8 *)v19 + 56, (unsigned __int8 *)a4, a5, a6, a7, a8, a9, a10, a11, a12);
  return 1;
}
// 443E53: variable 'a9' is possibly undefined
// 443E53: variable 'a10' is possibly undefined
