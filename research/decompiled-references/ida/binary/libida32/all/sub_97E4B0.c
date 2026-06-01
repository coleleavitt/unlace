unsigned __int64 *__fastcall sub_97E4B0(__m128i *a1, __int16 *a2)
{
  unsigned __int64 *v2; // rbp
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r14
  __int64 v7; // rbx
  _QWORD *v8; // rsi
  unsigned __int64 *v9; // rax
  void *ptr; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+10h] [rbp-98h] BYREF
  __int64 v13; // [rsp+70h] [rbp-38h]
  __int64 v14; // [rsp+78h] [rbp-30h]

  v2 = (unsigned __int64 *)a1[1].m128i_i64[0];
  sub_973400((__int64)&ptr, a2, a1->m128i_i64[0]);
  v6 = v13;
  v7 = v13 + 8 * v14;
  if ( v13 != v7 )
  {
    do
    {
      v8 = *(_QWORD **)(v7 - 8);
      if ( v8 )
      {
        v9 = sub_97E030(a1, v8, 0, v3, v4, v5);
        if ( v9 )
          v2 = v9;
      }
      v7 -= 8;
    }
    while ( v6 != v7 );
  }
  if ( ptr != &v12 )
    free(ptr);
  return v2;
}

