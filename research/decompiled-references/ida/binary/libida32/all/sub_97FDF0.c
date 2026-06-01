unsigned __int64 *__fastcall sub_97FDF0(__m128i *a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 *v8; // r15
  __int64 v9; // rbx
  _QWORD *v10; // rbp
  __int64 i; // r12
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 *v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  unsigned __int64 *v26; // rax
  unsigned __int64 v28; // [rsp+0h] [rbp-58h]
  __int64 v29; // [rsp+10h] [rbp-48h] BYREF
  int v30; // [rsp+18h] [rbp-40h]
  int v31; // [rsp+1Ch] [rbp-3Ch]

  if ( (unsigned __int8)sub_978340(a1, (_WORD *)a2) || a3 == 1 )
  {
    v21 = a1[1].m128i_i64[0];
    if ( !v21 )
    {
      v21 = sub_975DA0((__int64)a1, a2, v4, v5, v6, v7);
      a1[1].m128i_i64[0] = v21;
    }
    if ( (unsigned __int8)sub_978340(a1, (_WORD *)a2) )
    {
      v25 = a1[22].m128i_i64[0];
      if ( v25 )
        *(_QWORD *)(v25 + 8) = v21;
    }
    v26 = *(unsigned __int64 **)(v21 + 8);
    if ( (unsigned __int64)v26 >= *(_QWORD *)(v21 + 16) )
    {
      sub_975850((const __m128i **)v21, (_QWORD *)(a1->m128i_i64[1] + 32), 1u, v22, v23, v24);
      v26 = *(unsigned __int64 **)(v21 + 8);
    }
    *v26 = a2 & 0xFFFFFFFFFFFFFFFCLL | 2;
    v26[1] = 1;
    *(_QWORD *)(v21 + 8) += 16LL;
  }
  v8 = (unsigned __int64 *)a1[1].m128i_i64[0];
  if ( a2 + 8LL * *(unsigned __int16 *)(a2 + 4) + 32 != a2 + 32 )
  {
    v9 = 0;
    v28 = (8 * (unsigned __int64)*(unsigned __int16 *)(a2 + 4) - 8) >> 3;
    while ( 1 )
    {
      v10 = *(_QWORD **)(a2 + 8 * v9 + 32);
      if ( v10 )
      {
        i = *(_QWORD *)(a2 + 8 * v9 + 32);
        if ( (*(_WORD *)v10 & 0x1FF) == 0x7D )
        {
          for ( i = v10[3]; (*(_WORD *)i & 0x1FF) == 0x7D; i = *(_QWORD *)(i + 24) )
            ;
        }
        v12 = a1->m128i_i64[1];
        v31 = v9;
        v29 = a2;
        v30 = 8;
        v13 = sub_985780(v12 + 32, &v29, 0);
        sub_978C10((__int64)a1, v13, i, v14, v15, v16);
        v20 = sub_97E030(a1, v10, 0, v17, v18, v19);
        if ( v20 )
          v8 = v20;
      }
      if ( v28 == v9 )
        break;
      ++v9;
    }
  }
  return v8;
}

