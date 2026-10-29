void __fastcall sub_9C6380(__m128i *a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  char *v7; // r13
  unsigned int **v8; // r12
  unsigned int *v9; // rax
  unsigned int *v10; // rax
  char *v11; // r15
  char *v12; // r12
  unsigned int **v13; // r9
  char v14; // al
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 i; // r14
  char *v19; // r12
  unsigned int *v20; // rcx
  __int64 v21; // r13
  __m128d v22; // xmm0
  __int64 v23; // rax
  bool v24; // zf
  unsigned int *v25; // rax
  unsigned int **v26; // [rsp+8h] [rbp-50h]
  char *v27; // [rsp+10h] [rbp-48h]

  v5 = a2 - (char *)a1;
  if ( a2 - (char *)a1 > 128 )
  {
    if ( !a3 )
    {
      v27 = a2;
      goto LABEL_16;
    }
    v7 = a2;
    while ( 1 )
    {
      --a3;
      v8 = (unsigned int **)a1
         + ((__int64)(((v7 - (char *)a1) >> 3) + ((unsigned __int64)(v7 - (char *)a1) >> 63)) >> 1);
      if ( !(unsigned __int8)sub_1000980(a4, *(unsigned int *)a1->m128i_i64[1], **v8) )
        break;
      if ( !(unsigned __int8)sub_1000980(a4, **v8, **((unsigned int **)v7 - 1)) )
      {
        if ( (unsigned __int8)sub_1000980(a4, *(unsigned int *)a1->m128i_i64[1], **((unsigned int **)v7 - 1)) )
        {
          v23 = a1->m128i_i64[0];
          a1->m128i_i64[0] = *((_QWORD *)v7 - 1);
          *((_QWORD *)v7 - 1) = v23;
          v10 = (unsigned int *)a1->m128i_i64[0];
          goto LABEL_7;
        }
        goto LABEL_23;
      }
      v9 = (unsigned int *)a1->m128i_i64[0];
      a1->m128i_i64[0] = (__int64)*v8;
      *v8 = v9;
      v10 = (unsigned int *)a1->m128i_i64[0];
LABEL_7:
      v11 = &a1->m128i_i8[8];
      v12 = v7;
      while ( 1 )
      {
        v27 = v11;
        if ( (unsigned __int8)sub_1000980(a4, **(unsigned int **)v11, *v10) )
          goto LABEL_13;
        v13 = (unsigned int **)(v12 - 8);
        do
        {
          v12 = (char *)v13;
          v26 = v13;
          v14 = sub_1000980(a4, *(unsigned int *)a1->m128i_i64[0], **v13);
          v13 = v26 - 1;
        }
        while ( v14 );
        if ( v11 >= v12 )
          break;
        v16 = *(_QWORD *)v11;
        *(_QWORD *)v11 = *(_QWORD *)v12;
        *(_QWORD *)v12 = v16;
LABEL_13:
        v10 = (unsigned int *)a1->m128i_i64[0];
        v11 += 8;
      }
      sub_9C6380(v11, v7, a3, a4, v15, v13);
      v5 = v11 - (char *)a1;
      if ( v11 - (char *)a1 <= 128 )
        return;
      v7 = v11;
      if ( !a3 )
      {
LABEL_16:
        v17 = v5 >> 3;
        for ( i = ((v5 >> 3) - 2) >> 1; ; --i )
        {
          sub_9C5FA0((__int64)a1, i, v17, (unsigned int *)a1->m128i_i64[i], a4);
          if ( !i )
            break;
        }
        v19 = v27 - 8;
        do
        {
          v20 = *(unsigned int **)v19;
          v21 = v19 - (char *)a1;
          v19 -= 8;
          *((_QWORD *)v19 + 1) = a1->m128i_i64[0];
          sub_9C5FA0((__int64)a1, 0, v21 >> 3, v20, a4);
        }
        while ( v21 > 8 );
        return;
      }
    }
    if ( !(unsigned __int8)sub_1000980(a4, *(unsigned int *)a1->m128i_i64[1], **((unsigned int **)v7 - 1)) )
    {
      v24 = (unsigned __int8)sub_1000980(a4, **v8, **((unsigned int **)v7 - 1)) == 0;
      v25 = (unsigned int *)a1->m128i_i64[0];
      if ( v24 )
      {
        a1->m128i_i64[0] = (__int64)*v8;
        *v8 = v25;
      }
      else
      {
        a1->m128i_i64[0] = *((_QWORD *)v7 - 1);
        *((_QWORD *)v7 - 1) = v25;
      }
      v10 = (unsigned int *)a1->m128i_i64[0];
      goto LABEL_7;
    }
LABEL_23:
    v22 = (__m128d)_mm_loadu_si128(a1);
    v10 = (unsigned int *)a1->m128i_i64[1];
    *(__m128d *)a1 = _mm_shuffle_pd(v22, v22, 1);
    goto LABEL_7;
  }
}

