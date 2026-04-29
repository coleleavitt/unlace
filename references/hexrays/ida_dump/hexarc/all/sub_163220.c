__int64 __fastcall sub_163220(const __m128i *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbp
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // r14
  unsigned int *v7; // rbp
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // r13d
  __int64 v13; // r14
  __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // r9d
  __int64 v23; // rbp
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rsi
  __int64 v31; // [rsp-28h] [rbp-28h]
  __int64 v32; // [rsp-20h] [rbp-20h]
  __int64 v33; // [rsp-18h] [rbp-18h]
  __int64 v34; // [rsp-10h] [rbp-10h]
  __int64 v35; // [rsp-8h] [rbp-8h]

  if ( a1[4].m128i_i32[3] != 4 )
    return 0;
  v35 = v5;
  v34 = v4;
  v33 = v3;
  v32 = v2;
  v31 = v1;
  v7 = (unsigned int *)a1[3].m128i_i64[1];
  if ( *((_BYTE *)v7 + 64) != 7 )
    return 0;
  v9 = *v7;
  if ( (unsigned __int8)sub_3277C0(v9) )
  {
    v10 = a1[4].m128i_i64[0];
    v11 = v7[18];
    if ( (unsigned int)v11 >= *(_DWORD *)(v10 + 64) )
      goto LABEL_40;
    v9 = a1->m128i_i64[1];
    v12 = 1;
    v13 = *(_QWORD *)(*(_QWORD *)(v10 + 528) + 8 * v11);
    v14 = *(_QWORD *)(v13 + 48);
    if ( v14 && *(_DWORD *)v14 == 44 && *(_BYTE *)(v14 + 64) == 7 && *(_DWORD *)(v14 + 72) == *(_DWORD *)(v9 + 72) )
    {
      if ( (unsigned __int8)sub_3277C0(*v7) )
      {
        if ( sub_162030(a1, v7, v14) )
        {
          *v7 = sub_327720(*v7);
          if ( *(_DWORD *)(v13 + 352) == 1
            && sub_329780(v13) == 1
            && (unsigned __int8)sub_162BB0(*(_QWORD *)(a1[30].m128i_i64[0] + 112), (_BYTE *)v14, v28, v25, v26, v27) )
          {
            sub_116EE0(v14);
            v29 = *(_DWORD *)(v13 + 24);
            v30 = *(_QWORD *)(v13 + 8);
            BYTE1(v29) &= ~2u;
            LOBYTE(v29) = v29 | 0x80;
            *(_DWORD *)(v13 + 24) = v29;
            sub_10BE90(v13, v30, a1->m128i_i64[1]);
          }
          goto LABEL_27;
        }
        v9 = a1->m128i_i64[1];
        v12 = 1;
      }
      else
      {
        v9 = a1->m128i_i64[1];
      }
    }
  }
  else
  {
    if ( !(unsigned __int8)sub_3277E0(*v7) )
      return 0;
    v9 = a1->m128i_i64[1];
    v12 = 0;
  }
  if ( *(_DWORD *)(v9 + 352) != 1 || sub_329780(v9) != 1 )
    return 0;
  v15 = a1->m128i_i64[1];
  v16 = *(_QWORD *)(v15 + 56);
  if ( *(_DWORD *)v16 == 44 )
  {
    if ( !v12 && v7[18] != *(_DWORD *)(v16 + 72) )
      return 0;
  }
  else if ( v12 || *(_DWORD *)v16 != 43 || v7[18] != *(_DWORD *)(*(_QWORD *)(v15 + 8) + 72LL) )
  {
    return 0;
  }
  v17 = a1[4].m128i_i64[0];
  v18 = *(unsigned int *)(v16 + 72);
  if ( (unsigned int)v18 >= *(_DWORD *)(v17 + 64) )
LABEL_40:
    sub_161430(v9);
  v19 = *(_QWORD *)(*(_QWORD *)(v17 + 528) + 8 * v18);
  if ( !sub_162030(a1, v7, v16)
    || (*(_BYTE *)(v16 + 6) & 2) != 0
    || (unsigned __int8)sub_119EE0((_BYTE *)v16, *(_QWORD *)(a1[30].m128i_i64[0] + 112), 0, v20, v21, v22) )
  {
    return 0;
  }
  if ( *(_DWORD *)v16 == 43 )
  {
    sub_161D60((__int64)a1, *(_QWORD *)(a1->m128i_i64[1] + 8), v19);
    *v7 = sub_3274C0(*v7);
    sub_116350((char *)v7 + 64, (char *)(v16 + 64));
  }
  else if ( !v12 )
  {
    *v7 = sub_327680(*v7);
  }
  v23 = a1->m128i_i64[1];
  sub_116EE0(v16);
  v24 = *(_DWORD *)(v23 + 24);
  BYTE1(v24) &= ~2u;
  LOBYTE(v24) = v24 | 0x80;
  *(_DWORD *)(v23 + 24) = v24;
  sub_134C00(*(_QWORD *)(a1->m128i_i64[1] + 8));
  sub_10BE90(a1->m128i_i64[1], *(_QWORD *)(a1->m128i_i64[1] + 8), v19);
LABEL_27:
  sub_60A20(a1[4].m128i_i64[0], 1u, (__int64)"REMOVE_USELESS_JZ_JNZ", v25, v26, v27, v31, v32, v33, v34, v35);
  return 1;
}
