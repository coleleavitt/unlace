bool __fastcall sub_31A3D0(__int64 a1, __int64 *a2, _QWORD *a3)
{
  bool result; // al
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r14
  __int64 v6; // r13
  __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rbp
  const char *v10; // rsi
  const char *v11; // rdi
  unsigned __int64 v12; // rbx
  unsigned __int64 *v13; // rdx
  unsigned __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v20; // [rsp+18h] [rbp-50h]
  __int64 v22; // [rsp+28h] [rbp-40h]

  result = 0;
  a2[1] = 0;
  if ( *(_QWORD *)(a1 + 192) )
  {
    v4 = a3[1];
    if ( v4 )
    {
      v22 = 0;
      if ( a2[2] < v4 )
      {
        *a2 = qvector_reserve(a2, *a2, v4, 8);
        v22 = a2[1];
        if ( !a3[1] )
          return v22 != 0;
      }
      v5 = 0;
      while ( 1 )
      {
        v6 = *a3 + 24 * v5;
        v20 = *(_QWORD *)(a1 + 184);
        v7 = v20;
        v8 = v20 + 24LL * *(_QWORD *)(a1 + 192);
        if ( v20 == v8 )
          goto LABEL_20;
        v9 = *(_QWORD *)(v6 + 8);
        while ( 1 )
        {
          if ( *(_QWORD *)(v7 + 8) )
          {
            v10 = *(const char **)v7;
            v11 = &s1;
            if ( !v9 )
              goto LABEL_8;
            goto LABEL_13;
          }
          if ( !v9 )
            break;
          v10 = &s1;
LABEL_13:
          v11 = *(const char **)v6;
LABEL_8:
          if ( !strcmp(v11, v10) )
            break;
          v7 += 24;
          if ( v8 == v7 )
            goto LABEL_20;
        }
        if ( v8 == v7 )
          goto LABEL_20;
        v12 = 0xAAAAAAAAAAAAAAABLL * ((v7 - v20) >> 3);
        v13 = (unsigned __int64 *)(*a2 + 8 * v22);
        if ( (unsigned __int64 *)*a2 != v13 )
        {
          v14 = (unsigned __int64 *)*a2;
          while ( v12 != *v14 )
          {
            if ( v13 == ++v14 )
              goto LABEL_23;
          }
          if ( v14 != v13 )
          {
LABEL_20:
            if ( ++v5 >= a3[1] )
              return v22 != 0;
            continue;
          }
        }
LABEL_23:
        if ( a2[2] < (unsigned __int64)(v22 + 1) )
        {
          v16 = qvector_reserve(a2, *a2, v22 + 1, 8);
          v17 = a2[1];
          *a2 = v16;
          v13 = (unsigned __int64 *)(v16 + 8 * v17);
        }
        *v13 = v12;
        ++v5;
        v15 = a2[1] + 1;
        a2[1] = v15;
        v22 = v15;
        if ( v5 >= a3[1] )
          return v22 != 0;
      }
    }
  }
  return result;
}
