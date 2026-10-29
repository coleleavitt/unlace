unsigned __int64 __fastcall sub_697BC0(__int64 a1, const __m128i *a2, char a3)
{
  __int64 v4; // rax
  __int64 v6; // rbx
  __m128i *v8; // r13
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __m128i *v11; // rdi
  __m128i *v12; // rsi
  int v13; // r13d
  __int64 v14; // rax
  int user_idadir; // eax
  int v16; // r9d
  FILE *v17; // rbx
  char *v18; // rsi
  char *v19; // r8
  char *v20; // rcx
  bool v21; // al
  __m128i *v22; // rax
  __m128i v23; // [rsp+0h] [rbp-10A8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-1058h]
  __m128i v25; // [rsp+60h] [rbp-1048h] BYREF
  char filename[4104]; // [rsp+70h] [rbp-1038h] BYREF
  unsigned __int64 v27; // [rsp+1078h] [rbp-30h]

  v4 = *(_QWORD *)a1;
  v27 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(v4 + 1672);
  if ( (unsigned int)sub_697B40(a1) != 1 )
    return v27 - __readfsqword(0x28u);
  if ( a2 )
    v25 = _mm_loadu_si128(a2);
  else
    v25 = 0;
  if ( *(_BYTE *)(a1 + 28) )
  {
    if ( *(_OWORD *)(a1 + 12) - *(_OWORD *)&v25 == 0 )
      return v27 - __readfsqword(0x28u);
    v8 = (__m128i *)qword_2CCC3E0;
    v9 = xmmword_2CCC3E8;
    if ( (a3 & 1) == 0 )
    {
      v18 = (char *)qword_2CCC3E0;
      v19 = (char *)qword_2CCC3E0 + 16 * xmmword_2CCC3E8;
      if ( qword_2CCC3E0 != v19 )
      {
        while ( 1 )
        {
          v20 = v18;
          v21 = *(_OWORD *)v18 != *(_OWORD *)(a1 + 12);
          v18 += 16;
          if ( !v21 )
            break;
          if ( v18 == v19 )
            goto LABEL_7;
        }
        memmove(v20, v18, v19 - v20 - 16);
        v10 = xmmword_2CCC3E8;
        v8 = (__m128i *)qword_2CCC3E0;
        v9 = xmmword_2CCC3E8 - 1;
        *(_QWORD *)&xmmword_2CCC3E8 = xmmword_2CCC3E8 - 1;
        goto LABEL_8;
      }
    }
  }
  else
  {
    v8 = (__m128i *)qword_2CCC3E0;
    v9 = xmmword_2CCC3E8;
  }
LABEL_7:
  v10 = v9 + 1;
LABEL_8:
  v23 = _mm_load_si128(&v25);
  if ( *((_QWORD *)&xmmword_2CCC3E8 + 1) < v10 )
  {
    v22 = (__m128i *)qvector_reserve(&qword_2CCC3E0, v8, v10, 16);
    v9 = xmmword_2CCC3E8;
    qword_2CCC3E0 = v22;
    v8 = v22;
  }
  v11 = v8 + 1;
  v12 = v8;
  memmove(&v8[1], v8, 16 * v9);
  *v8 = _mm_load_si128(&v23);
  v13 = 10;
  v14 = xmmword_2CCC3E8 + 1;
  if ( *(_QWORD *)(v6 + 448) < (unsigned __int64)(xmmword_2CCC3E8 + 1) )
    v14 = xmmword_2CCC3E8;
  *(_QWORD *)&xmmword_2CCC3E8 = v14;
  user_idadir = get_user_idadir(v11, v12);
  qmakepath((unsigned int)filename, 4096, user_idadir, (unsigned int)"trusted_i64_list.bin", 0, v16);
  do
  {
    v17 = (FILE *)fopenWB(filename);
    if ( v17 )
      break;
    if ( *__errno_location() != 11 )
    {
      get_errdesc(filename);
      sub_368890();
    }
    qsleep(30);
    --v13;
  }
  while ( v13 );
  qfwrite(v17, qword_2CCC3E0);
  qfclose(v17);
  if ( (a3 & 2) == 0 )
    *(__m128i *)(a1 + 12) = _mm_load_si128(&v25);
  if ( !(unsigned int)qstat(filename) )
    qword_2CCC3D0 = v24;
  return v27 - __readfsqword(0x28u);
}
