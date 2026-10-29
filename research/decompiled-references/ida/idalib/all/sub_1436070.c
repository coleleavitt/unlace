__int64 __fastcall sub_1436070(__int64 a1, __m128i *a2, double a3, double a4)
{
  __int64 v4; // rdx
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rax
  char v9; // di
  unsigned int **v10; // rax
  __int64 i; // rcx
  __int64 v12; // r13
  unsigned int *v13; // r12
  __int64 v14; // r13
  char v15; // al
  _BYTE *v16; // rax
  __int16 v17; // dx
  char v19; // al
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // rdi
  unsigned __int64 v23; // rsi
  __int64 v24; // rdx
  unsigned int v25; // edx
  __int64 v26; // rax
  __int64 v27; // rdi

  v27 = *(_QWORD *)(a1 + 1112);
  v4 = *(_QWORD *)(v27 + 120);
  if ( *(_QWORD *)(v27 + 152) == v4 )
    return sub_13D5B70(v27, (__int64)a2, *(_QWORD *)(v27 + 152));
  v6 = v27;
  v7 = *(unsigned int *)(v27 + 200);
  v8 = *(_QWORD *)(v27 + 184);
  if ( *(_QWORD *)(v8 + 8) == v7 )
  {
    v9 = *(_BYTE *)(v8 + 16);
    if ( v9 == 27 )
      return sub_13D5B70(v6, (__int64)a2, v4);
    v10 = (unsigned int **)(v8 + 24);
    for ( i = *(_QWORD *)(v6 + 192) - 1LL; ; --i )
    {
      if ( v9 == 26 )
        *(_WORD *)(v6 + 32) = 1;
      *(_DWORD *)(v6 + 200) = 0;
      *(_QWORD *)(v6 + 184) = v10;
      *(_QWORD *)(v6 + 192) = i;
      if ( v10[1] )
        break;
      v9 = *((_BYTE *)v10 + 16);
      v10 += 3;
      if ( v9 == 27 )
        return sub_13D5B70(v6, (__int64)a2, v4);
    }
    *(_DWORD *)(v6 + 200) = 1;
    v12 = *(_QWORD *)(v6 + 112);
    v13 = *v10;
LABEL_10:
    v14 = *v13 + v12;
    if ( *((_WORD *)v13 + 4) == 67 )
      goto LABEL_12;
    v15 = *(_BYTE *)(v6 + 25);
    *(_WORD *)(v6 + 32) = 1;
    if ( !v15 )
      goto LABEL_12;
    goto LABEL_19;
  }
  v12 = *(_QWORD *)(v27 + 112);
  *(_DWORD *)(v27 + 200) = v7 + 1;
  v13 = (unsigned int *)(*(_QWORD *)v8 + 12 * v7);
  v19 = *(_BYTE *)(v27 + 25);
  if ( (unsigned int)(v7 + 1) <= 1 )
    goto LABEL_10;
  v20 = *v13;
  *(_WORD *)(v27 + 32) = 1;
  v14 = v20 + v12;
  if ( !v19 )
    goto LABEL_12;
LABEL_19:
  if ( *((_WORD *)v13 + 4) == 47 )
  {
    *(_QWORD *)(v6 + 152) = v14;
    sub_13D44E0(v6, (__int64)a2, (unsigned __int8 *)(v14 + 1));
    if ( a2[1].m128i_i16[0] == 16 )
    {
      v21 = *(_QWORD **)(v6 + 184);
      v22 = *(_QWORD *)(v6 + 112);
      v23 = *(_QWORD *)(v6 + 152);
      v24 = *(unsigned int *)(v6 + 200);
      if ( v23 > v22 + (unsigned __int64)*(unsigned int *)(*v21 + 12 * v24) )
      {
        v25 = v24 + 1;
        do
        {
          *(_DWORD *)(v6 + 200) = v25;
          v26 = v25++;
        }
        while ( v22 + (unsigned __int64)*(unsigned int *)(*v21 + 12 * v26) < v23 );
      }
    }
    return 1;
  }
LABEL_12:
  a2->m128i_i64[0] = 0;
  a2->m128i_i64[1] = 0;
  a2[1].m128i_i32[0] = 0;
  a2->m128i_i32[0] = sub_13D1500(v6, v14, 1);
  a2[1].m128i_i16[0] = *((_WORD *)v13 + 4);
  a2[1].m128i_i16[1] |= *((_WORD *)v13 + 5);
  a2->m128i_i32[1] = v13[1];
  v16 = (_BYTE *)(v14 + v13[1]);
  *(_QWORD *)(v6 + 152) = v16;
  v17 = a2[1].m128i_i16[0];
  if ( v17 == 67 )
  {
    if ( (a2[1].m128i_i8[2] & 1) != 0 )
    {
      sub_142AA40(*(_QWORD *)(v6 + 8), a2, a3, a4);
      return *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 112LL) + 9LL);
    }
    return 1;
  }
  if ( v17 == 6 )
  {
    a2->m128i_i64[1] = v14;
    if ( !*(_BYTE *)(v6 + 26) && *(char *)(sub_1460F90(*(_QWORD *)(v6 + 8), a2) + 3) < 0 )
      return sub_1461090(*(_QWORD *)(v6 + 8), a2);
    return 1;
  }
  if ( ((v17 - 7) & 0xFFFD) == 0 || (unsigned __int16)(v17 - 10) <= 9u || v17 == 8 )
  {
    a2->m128i_i64[1] = v14;
    return 1;
  }
  if ( v17 == 62 )
  {
    if ( *v16 == 58 )
    {
      ++*(_DWORD *)(v6 + 200);
      a2[1].m128i_i16[0] = 72;
    }
    return 1;
  }
  if ( v17 != 2 )
    return 1;
  *(_BYTE *)(v6 + 24) = 0;
  return 1;
}
