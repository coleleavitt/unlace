__int64 __fastcall sub_8BAA80(__int64 **a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r13
  unsigned __int64 *v5; // rax
  char *v6; // rcx
  unsigned __int64 v7; // rdx
  char *v8; // r14
  __int64 *v9; // rax
  unsigned __int64 *v10; // r15
  unsigned __int64 *v11; // rax
  unsigned __int64 *v12; // rbx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  char *v19; // rdx
  unsigned __int64 v20; // rcx
  char *v21; // rsi
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r8
  unsigned __int64 *v24; // rax
  char *v25; // [rsp+0h] [rbp-68h]
  unsigned __int64 v26; // [rsp+8h] [rbp-60h]
  __m128i v27; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v28; // [rsp+28h] [rbp-40h]

  v3 = a2;
  v28 = __readfsqword(0x28u);
  v5 = sub_8B8C20(a1, a2);
  v6 = (char *)a1[11];
  v7 = 0;
  v8 = (char *)v5;
  v9 = a1[2];
  if ( v6 != v8 )
    v7 = 0xAAAAAAAAAAAAAAABLL * ((v8 - (char *)v9) >> 3);
  v10 = (unsigned __int64 *)(v8 + 24);
  v11 = sub_8B8B40(a1, a3, v7, 0xAAAAAAAAAAAAAAABLL * ((v6 - (char *)v9) >> 3));
  v12 = (unsigned __int64 *)a1[11];
  v25 = (char *)v11;
  if ( v12 == (unsigned __int64 *)v8 )
  {
    v10 = (unsigned __int64 *)a1[2];
    if ( v10 != v11 )
    {
LABEL_5:
      if ( a1[2] != (__int64 *)v11 )
        v12 = v11 - 3;
      if ( a2 >= *v10 && a2 < v10[1] )
        v3 = *v10;
      v13 = v12[1];
      v14 = *v12;
      v15 = v13;
      if ( a3 >= v13 )
        v15 = a3;
      if ( a3 >= v14 )
        a3 = v15;
      v16 = v3 + ((v12[2] - v10[2] + 4 * (v13 - v14)) >> 2);
      v17 = a3 - v16;
      if ( a3 == v16 )
        return 0;
      if ( !(v17 >> 62) )
      {
        v26 = a3 - v16;
        if ( !(unsigned int)sub_8B9E50((__int64)a1, 4 * v17) )
        {
          v19 = (char *)a1[11];
          v20 = v26;
          v21 = v25;
          v22 = a3 - v12[1];
          while ( 1 )
          {
            v20 = sub_8B99A0((__int64)a1, v21, v19, v20, v22);
            if ( v10 == v12 )
              break;
            v23 = *v12;
            v21 = (char *)v12;
            v12 -= 3;
            v24 = v12;
            if ( a1[2] == (__int64 *)(v12 + 3) )
              v24 = (unsigned __int64 *)a1[11];
            v22 = v23 - v24[1];
            v19 = v21;
          }
          if ( sub_8B99A0((__int64)a1, v10, v10, v20, *v10 - v3) )
          {
            if ( !under_debugger )
              interr(801);
            BUG();
          }
          v27.m128i_i64[0] = v3;
          v27.m128i_i64[1] = a3;
          sub_8B9BF0(a1, v8, v25, &v27);
          return 0;
        }
      }
      return 4;
    }
  }
  else if ( v10 != v11 )
  {
    goto LABEL_5;
  }
  if ( !(unsigned int)sub_8BA980(a1, v10, a3 - a2) )
  {
    v27.m128i_i64[0] = a2;
    v27.m128i_i64[1] = a3;
    sub_8B9BF0(a1, v8, (char *)v10, &v27);
    return 0;
  }
  return 4;
}
