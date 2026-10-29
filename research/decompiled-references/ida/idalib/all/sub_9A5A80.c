unsigned __int64 *__fastcall sub_9A5A80(__m128i *a1, __int16 *a2, int a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 *v9; // r13
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r14
  __int64 v14; // rbx
  _WORD *v15; // rbp
  unsigned __int64 *v16; // rax
  _QWORD *v17; // rax
  unsigned __int64 *v18; // rax
  __int64 v20; // rsi
  void *ptr; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+70h] [rbp-48h]
  __int64 v24; // [rsp+78h] [rbp-40h]

  if ( (unsigned __int8)sub_99C080(a1, a2) || a3 == 1 )
  {
    v20 = a1[1].m128i_i64[0];
    if ( !v20 )
    {
      v20 = sub_999AE0((__int64)a1, 0, v5, v6, v7, v8);
      a1[1].m128i_i64[0] = v20;
    }
    sub_99C220(a1, v20, (unsigned __int64)a2);
  }
  v9 = (unsigned __int64 *)a1[1].m128i_i64[0];
  sub_997140((__int64)&ptr, a2, a1->m128i_i64[0]);
  v13 = v23;
  v14 = v23 + 8 * v24;
  if ( v23 != v14 )
  {
    do
    {
      v15 = *(_WORD **)(v14 - 8);
      if ( v15 )
      {
        v16 = sub_9A1D70(a1, *(_QWORD **)(v14 - 8), 0, v10, v11, v12);
        if ( v16 )
          v9 = v16;
        if ( *(_BYTE *)(a1[20].m128i_i64[1] + 67) )
        {
          if ( (*v15 & 0x1FF) == 0x6F )
          {
            v17 = (_QWORD *)sub_C94CC0(v15);
            if ( v17 )
            {
              v18 = sub_9A1D70(a1, v17, 0, v10, v11, v12);
              if ( v18 )
                v9 = v18;
            }
          }
        }
      }
      v14 -= 8;
    }
    while ( v13 != v14 );
  }
  if ( ptr != &v22 )
    free(ptr);
  return v9;
}
