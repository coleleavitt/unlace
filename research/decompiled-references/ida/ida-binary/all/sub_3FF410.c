unsigned __int64 __fastcall sub_3FF410(__m128i *a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool v12; // zf
  __int64 v13; // rax
  char *v14; // rdi
  __int64 v15; // rdx
  char *v16; // rsi
  __int64 v17; // rdi
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  char *v21; // r12
  __int64 v22; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  char v27; // r12
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v32; // [rsp+8h] [rbp-20h]

  v32 = __readfsqword(0x28u);
  v9 = a1->m128i_i64[0];
  if ( !a1->m128i_i64[0] || (v10 = *a3, *(int *)v9 > 1) )
  {
    v11 = *a3;
    *a3 = 0;
    v12 = a1[1].m128i_i64[0] == 0;
    v31 = v11;
    if ( v12 || a2 )
    {
LABEL_5:
      v13 = a1->m128i_i64[0];
      if ( a1->m128i_i64[0] )
        goto LABEL_6;
      goto LABEL_15;
    }
LABEL_20:
    v24 = a1->m128i_i64[0];
    if ( !a1->m128i_i64[0] || *(int *)v24 > 1 )
      goto LABEL_22;
    v14 = (char *)a1->m128i_i64[1];
    v29 = (__int64)&v14[-((v24 + 31) & 0xFFFFFFFFFFFFFFF0LL)];
    if ( v29 > 0 )
      goto LABEL_23;
    a5 = *(_QWORD *)(v24 + 8);
    v15 = a1[1].m128i_i64[0];
    v26 = v29 >> 3;
    if ( a5 - v15 - v26 <= 0 || 3 * v15 >= a5 )
    {
LABEL_22:
      sub_3FED00(a1, 1u, 1, 0, a5, a6);
      v14 = (char *)a1->m128i_i64[1];
      goto LABEL_23;
    }
    v27 = 1;
    v30 = (*(_QWORD *)(v24 + 8) - v15 - 1) / 2;
    if ( v30 < 0 )
      v30 = 0;
    v16 = (char *)a1->m128i_i64[1];
    v28 = v30 + 1;
LABEL_32:
    v14 = &v16[8 * (v28 - v26)];
    if ( v15 && v16 != v14 && v16 && v14 )
      v14 = (char *)memmove(v14, v16, 8 * v15);
    a1->m128i_i64[1] = (__int64)v14;
    if ( !v27 )
      goto LABEL_8;
LABEL_23:
    v25 = v31;
    v31 = 0;
    *((_QWORD *)v14 - 1) = v25;
    a1->m128i_i64[1] -= 8;
    ++a1[1].m128i_i64[0];
    goto LABEL_17;
  }
  if ( a1[1].m128i_i64[0] != a2 )
  {
    if ( !a2 )
    {
      v17 = a1->m128i_i64[1];
      v18 = (v9 + 31) & 0xFFFFFFFFFFFFFFF0LL;
      goto LABEL_12;
    }
LABEL_26:
    *a3 = 0;
    v13 = a1->m128i_i64[0];
    v31 = v10;
    if ( v13 )
    {
LABEL_6:
      if ( *(int *)v13 > 1 )
        goto LABEL_7;
      v16 = (char *)a1->m128i_i64[1];
      v15 = a1[1].m128i_i64[0];
      a5 = (__int64)&v16[-((v13 + 31) & 0xFFFFFFFFFFFFFFF0LL)];
      v26 = a5 >> 3;
      if ( *(_QWORD *)(v13 + 8) - v15 - (a5 >> 3) > 0 )
        goto LABEL_16;
      if ( a5 <= 0 || 3 * v15 >= 2LL * *(_QWORD *)(v13 + 8) )
      {
LABEL_7:
        sub_3FED00(a1, 0, 1, 0, a5, a6);
        v14 = (char *)a1->m128i_i64[1];
LABEL_8:
        v15 = a1[1].m128i_i64[0];
        v16 = v14;
LABEL_16:
        v21 = &v16[8 * a2];
        memmove(v21 + 8, v21, 8 * (v15 - a2));
        v22 = v31;
        v31 = 0;
        *(_QWORD *)v21 = v22;
        ++a1[1].m128i_i64[0];
LABEL_17:
        QT::QPersistentModelIndex::~QPersistentModelIndex((QT::QPersistentModelIndex *)&v31);
        return v32 - __readfsqword(0x28u);
      }
      v27 = 0;
      v28 = 0;
      goto LABEL_32;
    }
LABEL_15:
    sub_3FED00(a1, 0, 1, 0, a5, a6);
    v16 = (char *)a1->m128i_i64[1];
    v15 = a1[1].m128i_i64[0];
    goto LABEL_16;
  }
  v17 = a1->m128i_i64[1];
  v18 = (v9 + 31) & 0xFFFFFFFFFFFFFFF0LL;
  a5 = (__int64)(v17 - v18) >> 3;
  if ( a2 != *(_QWORD *)(v9 + 8) - a5 )
  {
    *a3 = 0;
    *(_QWORD *)(v17 + 8 * a2) = v10;
    v20 = a1[1].m128i_i64[0] + 1;
    goto LABEL_14;
  }
  if ( a2 )
    goto LABEL_26;
LABEL_12:
  *a3 = 0;
  if ( v17 == v18 )
  {
    v12 = a1[1].m128i_i64[0] == 0;
    v31 = v10;
    if ( v12 )
      goto LABEL_5;
    goto LABEL_20;
  }
  *(_QWORD *)(v17 - 8) = v10;
  v19 = a1[1].m128i_i64[0];
  a1->m128i_i64[1] -= 8;
  v20 = v19 + 1;
LABEL_14:
  a1[1].m128i_i64[0] = v20;
  return v32 - __readfsqword(0x28u);
}
