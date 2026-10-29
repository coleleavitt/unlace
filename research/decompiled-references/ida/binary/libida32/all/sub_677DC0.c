unsigned __int64 __fastcall sub_677DC0(__int64 a1, const __m128i *a2, char a3)
{
  __int64 v3; // rax
  __int64 v5; // rbx
  __m128i *v7; // r13
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  int v10; // r13d
  __int64 v11; // rax
  int user_idadir; // eax
  int v13; // r9d
  FILE *v14; // rbx
  char *v15; // rsi
  char *v16; // r8
  char *v17; // rcx
  bool v18; // al
  __m128i *v19; // rax
  __m128i v20; // [rsp+0h] [rbp-10A8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-1058h]
  __m128i v22; // [rsp+60h] [rbp-1048h] BYREF
  char filename[4104]; // [rsp+70h] [rbp-1038h] BYREF
  unsigned __int64 v24; // [rsp+1078h] [rbp-30h]

  v3 = *(_QWORD *)a1;
  v24 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(v3 + 1480);
  if ( (unsigned int)sub_677D40(a1) != 1 )
    return v24 - __readfsqword(0x28u);
  if ( a2 )
    v22 = _mm_loadu_si128(a2);
  else
    v22 = 0;
  if ( *(_BYTE *)(a1 + 28) )
  {
    if ( *(_OWORD *)(a1 + 12) - *(_OWORD *)&v22 == 0 )
      return v24 - __readfsqword(0x28u);
    v7 = (__m128i *)dest;
    v8 = xmmword_2CA24E8;
    if ( (a3 & 1) == 0 )
    {
      v15 = (char *)dest;
      v16 = (char *)dest + 16 * xmmword_2CA24E8;
      if ( dest != v16 )
      {
        while ( 1 )
        {
          v17 = v15;
          v18 = *(_OWORD *)v15 != *(_OWORD *)(a1 + 12);
          v15 += 16;
          if ( !v18 )
            break;
          if ( v15 == v16 )
            goto LABEL_7;
        }
        memmove(v17, v15, v16 - v17 - 16);
        v9 = xmmword_2CA24E8;
        v7 = (__m128i *)dest;
        v8 = xmmword_2CA24E8 - 1;
        *(_QWORD *)&xmmword_2CA24E8 = xmmword_2CA24E8 - 1;
        goto LABEL_8;
      }
    }
  }
  else
  {
    v7 = (__m128i *)dest;
    v8 = xmmword_2CA24E8;
  }
LABEL_7:
  v9 = v8 + 1;
LABEL_8:
  v20 = _mm_load_si128(&v22);
  if ( *((_QWORD *)&xmmword_2CA24E8 + 1) < v9 )
  {
    v19 = (__m128i *)qvector_reserve(&dest, v7, v9, 16);
    v8 = xmmword_2CA24E8;
    dest = v19;
    v7 = v19;
  }
  memmove(&v7[1], v7, 16 * v8);
  *v7 = _mm_load_si128(&v20);
  v10 = 10;
  v11 = xmmword_2CA24E8 + 1;
  if ( *(_QWORD *)(v5 + 440) < (unsigned __int64)(xmmword_2CA24E8 + 1) )
    v11 = xmmword_2CA24E8;
  *(_QWORD *)&xmmword_2CA24E8 = v11;
  user_idadir = get_user_idadir();
  qmakepath((int)filename, 4096, user_idadir, (int)"trusted_idb_list.bin", 0, v13, v20.m128i_i8[0]);
  do
  {
    v14 = (FILE *)fopenWB(filename);
    if ( v14 )
      break;
    if ( *__errno_location() != 11 )
    {
      get_errdesc(filename);
      sub_365330();
    }
    qsleep(30);
    --v10;
  }
  while ( v10 );
  qfwrite(v14, dest);
  qfclose(v14);
  if ( (a3 & 2) == 0 )
    *(__m128i *)(a1 + 12) = _mm_load_si128(&v22);
  if ( !(unsigned int)qstat(filename) )
    qword_2CA24D0 = v21;
  return v24 - __readfsqword(0x28u);
}

