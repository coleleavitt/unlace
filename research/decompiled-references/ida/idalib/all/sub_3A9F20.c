_QWORD *__fastcall sub_3A9F20(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  char v4; // r12
  int v6; // r13d
  __int64 i; // rbp
  _QWORD *result; // rax
  unsigned __int64 v9; // rsi
  int v10; // r14d
  unsigned __int64 item_end; // rdx
  __int64 v12; // rbp
  __int64 v13; // r8
  __int64 v14; // r9
  size_t v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // r10
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  char *v22; // [rsp+8h] [rbp-60h]
  __int64 v24; // [rsp+18h] [rbp-50h]
  __int64 v25; // [rsp+18h] [rbp-50h]
  __int64 v26; // [rsp+20h] [rbp-48h]
  __int64 v27; // [rsp+20h] [rbp-48h]
  __int64 v28; // [rsp+28h] [rbp-40h]

  v4 = 0;
  if ( dbg )
    v4 = *(_BYTE *)(dbg + 35LL) >> 7;
  v6 = 0;
  for ( i = *(_QWORD *)(qword_2CCB598 + 1576) + 72LL; ; i = *(_QWORD *)(qword_2CCB598 + 1576) + 120LL )
  {
    result = (_QWORD *)(*(_DWORD *)(a3 + 20) & 0xFFFFFFF);
    if ( (_DWORD)result != 5 )
    {
      if ( !under_debugger )
        interr(3298);
      BUG();
    }
    v9 = *(_QWORD *)(a3 + 24);
    v10 = 2;
    if ( v9 == -1 )
    {
LABEL_8:
      while ( 1 )
      {
        if ( *(_DWORD *)(a3 + 20) == 5 )
        {
          v9 = *(_QWORD *)(a3 + 32);
          if ( v9 != -1 )
            break;
        }
        if ( !--v10 )
          goto LABEL_15;
        v9 = *(_QWORD *)(a3 + 8);
        if ( v9 != -1 )
        {
          item_end = -1;
          if ( !v4 )
            goto LABEL_7;
          goto LABEL_12;
        }
      }
      if ( --v10 )
        goto LABEL_6;
    }
    else
    {
LABEL_6:
      item_end = -1;
      if ( v4 )
LABEL_12:
        item_end = get_item_end(v9, v9, -1, a4);
LABEL_7:
      result = sub_3A98A0(i, v9, item_end);
      if ( result == (_QWORD *)(i + 8) )
        goto LABEL_8;
      a4 = result[6];
      v12 = 8 * a4;
      v13 = (8 * a4) >> 3;
      if ( v13 )
      {
        v14 = result[5];
        v15 = 0;
        v16 = a2[1];
        v17 = *a2;
        v18 = 8 * v16;
        v19 = v13 + v16;
        if ( a2[2] < v19 )
        {
          v28 = (8 * a4) >> 3;
          v27 = v14;
          v25 = v18;
          v21 = qvector_reserve(a2, v17, v19, 8);
          v18 = v25;
          v13 = v28;
          *a2 = v21;
          v17 = v21;
          v14 = v27;
          v15 = 8 * a2[1] - v25;
        }
        v26 = v13;
        v24 = v14;
        v22 = (char *)(v18 + v17);
        memmove(&v22[v12], v22, v15);
        v20 = 0;
        if ( v12 )
        {
          do
          {
            *(_QWORD *)&v22[v20] = *(_QWORD *)(v24 + v20);
            v20 += 8;
          }
          while ( v12 != v20 );
        }
        result = a2;
        a2[1] += v26;
      }
    }
LABEL_15:
    if ( v6 == 1 )
      break;
    v6 = 1;
  }
  return result;
}
