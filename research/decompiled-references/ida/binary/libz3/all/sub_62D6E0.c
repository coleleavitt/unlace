__int64 __fastcall sub_62D6E0(const __m128i *a1, _DWORD *a2, __int64 *a3, __int64 a4)
{
  __int64 v4; // r10
  __int64 result; // rax
  __int64 v7; // rdx
  _DWORD *v11; // rax
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // r10
  _QWORD *v15; // r12
  _QWORD *v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // rdi
  bool v19; // zf
  __int64 v20; // rbx
  unsigned int v21; // r12d
  __int64 v22; // rax
  __int64 v23; // rdi
  int v24; // edx
  __int64 v25; // rax
  __int64 v26; // rbp
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rsi
  int v33; // r8d
  int v34; // r9d
  __int64 v35; // rax
  __int64 v36; // rbx
  int v37; // [rsp+0h] [rbp-88h]
  __int64 v38; // [rsp+8h] [rbp-80h]
  __int64 v39; // [rsp+8h] [rbp-80h]
  __int64 v40; // [rsp+10h] [rbp-78h]
  __int64 v41; // [rsp+10h] [rbp-78h]
  int *v42; // [rsp+18h] [rbp-70h]
  int v43; // [rsp+20h] [rbp-68h]
  char v44[8]; // [rsp+28h] [rbp-60h] BYREF
  int v45[2]; // [rsp+30h] [rbp-58h] BYREF
  int v46[2]; // [rsp+38h] [rbp-50h] BYREF
  __m128i v47[4]; // [rsp+40h] [rbp-48h] BYREF

  v4 = *a3;
  result = a1->m128i_i64[0];
  v38 = a1->m128i_i64[0];
  if ( *(_WORD *)(*a3 + 4) )
    return result;
  v7 = *(_QWORD *)(v4 + 16);
  v11 = *(_DWORD **)(v7 + 24);
  if ( !v11 || *v11 || v11[1] != 8 || *(_DWORD *)(v4 + 24) != 1 )
  {
    result = (__int64)sub_629E80(*(_QWORD **)(a1->m128i_i64[1] + 2288), *(_DWORD *)(a1->m128i_i64[1] + 2296), v7);
    if ( !result )
      return result;
    v15 = (_QWORD *)a1[23].m128i_i64[1];
    if ( !v15 )
      goto LABEL_42;
    v16 = &v15[*((unsigned int *)v15 - 1)];
    if ( v15 >= v16 )
      goto LABEL_13;
    do
    {
      while ( 1 )
      {
        v17 = *v15;
        if ( *v15 )
        {
          v18 = a1[23].m128i_i64[0];
          v19 = (*(_DWORD *)(v17 + 8))-- == 1;
          if ( v19 )
            break;
        }
        if ( ++v15 >= v16 )
          goto LABEL_12;
      }
      sub_15D7BC0(v18, v17);
      ++v15;
    }
    while ( v15 < v16 );
LABEL_12:
    v15 = (_QWORD *)a1[23].m128i_i64[1];
    v14 = *a3;
    if ( v15 )
    {
LABEL_13:
      *((_DWORD *)v15 - 1) = 0;
      if ( !*(_DWORD *)(v14 + 24) )
      {
        v23 = a1->m128i_i64[0];
        v20 = 0;
LABEL_27:
        v24 = *((_DWORD *)v15 - 1);
LABEL_28:
        v25 = sub_15DC610(
                v23,
                *(_QWORD *)(v14 + 16),
                v24,
                (int)v15,
                v12,
                v13,
                v37,
                v38,
                v40,
                (int)v42,
                v43,
                v44[0],
                v45[0],
                v46[0],
                v47[0].m128i_i32[0],
                (void *)v47[0].m128i_i64[1]);
        v26 = v25;
        if ( v25 )
          ++*(_DWORD *)(v25 + 8);
        sub_629F20(*a3, a3[1]);
        *a3 = v26;
        return sub_629FE0(v20, v39);
      }
    }
    else
    {
LABEL_42:
      v24 = *(_DWORD *)(v14 + 24);
      if ( !v24 )
      {
        v23 = a1->m128i_i64[0];
        LODWORD(v15) = 0;
        v20 = 0;
        goto LABEL_28;
      }
    }
    v20 = *(_QWORD *)(v14 + 32);
    if ( v20 )
      ++*(_DWORD *)(v20 + 8);
    v21 = 0;
    v42 = v46;
    if ( *(_WORD *)(v20 + 4) )
      goto LABEL_25;
    while ( 1 )
    {
      if ( (unsigned __int8)sub_15D26C0(a1->m128i_i64[0], v20) )
      {
        ++*(_DWORD *)(v20 + 8);
        *(_QWORD *)v45 = v20;
        sub_62BD60(&a1[23].m128i_i64[1], v45);
      }
      else
      {
        v41 = a1->m128i_i64[0];
        v27 = sub_15D1F10(v20);
        v28 = (unsigned int)*a2;
        *a2 = v28 + 1;
        v29 = sub_15DB5C0(v41, v28, v27);
        *(_QWORD *)v46 = v29;
        if ( v29 )
          ++*(_DWORD *)(v29 + 8);
        LODWORD(v40) = v29;
        sub_62BD60(&a1[23].m128i_i64[1], v46);
        v30 = sub_15E1B70(a1->m128i_i64[0]);
        v47[0].m128i_i64[0] = v30;
        if ( v30 )
          ++*(_DWORD *)(v30 + 8);
        sub_62BCA0((_QWORD *)(a4 + 8), v47);
      }
      v14 = *a3;
      if ( ++v21 >= *(_DWORD *)(*a3 + 24) )
        break;
      while ( 1 )
      {
        v22 = *(_QWORD *)(v14 + 8LL * v21 + 32);
        if ( v22 )
          ++*(_DWORD *)(v22 + 8);
        v19 = (*(_DWORD *)(v20 + 8))-- == 1;
        if ( v19 )
        {
          v40 = v22;
          sub_15D7BC0(v38, v20);
          v22 = v40;
        }
        v20 = v22;
        if ( !*(_WORD *)(v22 + 4) )
          break;
LABEL_25:
        ++*(_DWORD *)(v20 + 8);
        *(_QWORD *)v44 = v20;
        sub_62BD60(&a1[23].m128i_i64[1], v44);
        v14 = *a3;
        if ( ++v21 >= *(_DWORD *)(*a3 + 24) )
          goto LABEL_26;
      }
    }
LABEL_26:
    v15 = (_QWORD *)a1[23].m128i_i64[1];
    v23 = a1->m128i_i64[0];
    if ( !v15 )
    {
      v24 = 0;
      goto LABEL_28;
    }
    goto LABEL_27;
  }
  sub_62A170(v47, a1, *(_QWORD *)(v4 + 32));
  v31 = *a3;
  v32 = v47[0].m128i_i64[1];
  *a3 = v47[0].m128i_i64[0];
  sub_629F20(v31, v32);
  sub_62D6E0((_DWORD)a1, (_DWORD)a2, (_DWORD)a3, a4, v33, v34);
  v35 = sub_15E1A70(a1->m128i_i64[0]);
  v36 = v35;
  if ( v35 )
    ++*(_DWORD *)(v35 + 8);
  result = sub_629F20(*a3, a3[1]);
  *a3 = v36;
  return result;
}

