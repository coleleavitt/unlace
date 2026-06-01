unsigned __int64 __fastcall sub_60BF80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  _QWORD *v5; // rax
  unsigned int v7; // ebp
  unsigned __int64 v8; // rbx
  _QWORD *v9; // r14
  __int64 v10; // r12
  int v11; // eax
  const char *v12; // r8
  int v13; // r15d
  __int32 v14; // eax
  size_t v15; // r14
  _QWORD *v16; // rax
  _QWORD *v17; // rdi
  _QWORD *v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // rbx
  __int32 v22; // r15d
  __int64 v23; // r13
  unsigned __int32 v24; // ebx
  __int64 v26; // rax
  unsigned __int32 v27; // ebp
  const char *src; // [rsp+8h] [rbp-80h]
  unsigned int v29; // [rsp+14h] [rbp-74h] BYREF
  __int32 v30; // [rsp+18h] [rbp-70h] BYREF
  int v31; // [rsp+1Ch] [rbp-6Ch] BYREF
  __m128i v32; // [rsp+20h] [rbp-68h] BYREF
  __int128 v33; // [rsp+30h] [rbp-58h]
  int v34; // [rsp+40h] [rbp-48h]
  unsigned __int64 v35; // [rsp+48h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  v4 = a2;
  v29 = a3;
  v5 = *(_QWORD **)(a2 + 56);
  if ( !v5 )
    goto LABEL_33;
  a2 += 48;
  v7 = a3;
  v8 = (unsigned int)a3;
  v9 = (_QWORD *)a2;
  do
  {
    while ( 1 )
    {
      a4 = v5[2];
      a3 = v5[3];
      if ( v5[4] < v8 )
        break;
      v9 = v5;
      v5 = (_QWORD *)v5[2];
      if ( !a4 )
        goto LABEL_6;
    }
    v5 = (_QWORD *)v5[3];
  }
  while ( a3 );
LABEL_6:
  if ( (_QWORD *)a2 == v9 || v8 < v9[4] )
LABEL_33:
    sub_606130(a1, a2, a3, a4);
  v10 = switch_dbctx(*(int *)(a1 + 8));
  v11 = sub_60AE40(*(_QWORD *)(a1 + 112), a1, *((_DWORD *)v9 + 18), v4);
  v12 = (const char *)v9[6];
  v13 = v11;
  v14 = *((_DWORD *)v9 + 10);
  v33 = 0;
  v32.m128i_i64[1] = 0;
  v32.m128i_i32[0] = v14;
  if ( v12 )
  {
    src = v12;
    v15 = strlen(v12);
    v32.m128i_i64[1] = qvector_reserve(&v32.m128i_u64[1], 0, v15 + 1, 1);
    *(_QWORD *)&v33 = v15 + 1;
    memmove((void *)v32.m128i_i64[1], src, v15);
    *(_BYTE *)(v32.m128i_i64[1] + v15) = 0;
  }
  v16 = *(_QWORD **)(a1 + 56);
  v17 = (_QWORD *)(a1 + 48);
  v34 = v13;
  v18 = (_QWORD *)(a1 + 48);
  if ( v16 )
  {
    do
    {
      while ( 1 )
      {
        v19 = v16[2];
        v20 = v16[3];
        if ( v16[4] < v8 )
          break;
        v18 = v16;
        v16 = (_QWORD *)v16[2];
        if ( !v19 )
          goto LABEL_15;
      }
      v16 = (_QWORD *)v16[3];
    }
    while ( v20 );
LABEL_15:
    if ( v17 != v18 && v8 >= v18[4] )
    {
      if ( v32.m128i_i64[1] )
      {
        *(_QWORD *)&v33 = 0;
        qfree((void *)v32.m128i_i64[1]);
      }
      if ( !under_debugger )
        interr(2448);
      BUG();
    }
  }
  v21 = sub_60BDC0((_QWORD *)(a1 + 40), v18, &v29, &v32);
  if ( v32.m128i_i64[1] )
  {
    *(_QWORD *)&v33 = 0;
    qfree((void *)v32.m128i_i64[1]);
  }
  v22 = -1;
  if ( (unsigned __int8)sub_79BBD0(*(_QWORD *)(v10 + 1480) + 2240LL, v10, &v32, *((unsigned int *)v21 + 18), 65) )
    v22 = v32.m128i_i32[0];
  v23 = v21[6];
  if ( v23 )
  {
    v32.m128i_i32[0] = v22;
    sub_606C20((_QWORD *)(*(_QWORD *)(v10 + 1480) + 2248LL), v7);
    sub_79B440(&v32, v10, v7, v23, 0, 339);
  }
  v24 = *((_DWORD *)v21 + 10);
  if ( v24 != -1 )
  {
    v26 = *(_QWORD *)(v10 + 1480);
    v30 = v22;
    sub_606C20((_QWORD *)(v26 + 2248), v7);
    v27 = sub_3B90A0(*(_QWORD **)(v10 + 1480), v7);
    if ( (unsigned __int8)sub_79BBD0(&v30, v10, &v31, v24, 65) )
    {
      if ( v27 != v31 )
      {
        v32.m128i_i32[0] = v24;
        sub_79B440(&v30, v10, v27, &v32, 4, 79);
      }
    }
    else
    {
      v32.m128i_i32[0] = v27;
      sub_79B440(&v30, v10, v24, &v32, 4, 65);
    }
  }
  return v35 - __readfsqword(0x28u);
}

