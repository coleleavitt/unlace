__int64 __fastcall sub_145A0C0(__int64 *a1, _DWORD *a2)
{
  __int64 v2; // rax
  bool v3; // zf
  int v4; // r12d
  __int64 *v5; // rsi
  __int64 *v6; // r15
  __int64 *v7; // r13
  int v8; // r14d
  __int64 *v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 *v12; // r13
  _QWORD *v14; // rsi
  __int64 v15; // [rsp+8h] [rbp-50h]
  __int64 v16[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = (__int64)a2;
  v3 = *a2 == 2;
  v4 = a2[1];
  v16[0] = (__int64)a2;
  v5 = (__int64 *)a1[15];
  if ( v3 )
  {
    if ( (__int64 *)a1[16] != v5 )
      goto LABEL_18;
    goto LABEL_21;
  }
  if ( (__int64 *)a1[14] == v5 )
  {
LABEL_16:
    if ( (__int64 *)a1[16] != v5 )
    {
      v2 = v16[0];
LABEL_18:
      *v5 = v2;
      v14 = v5 + 1;
      a1[15] = (__int64)v14;
      return ((__int64)v14 - a1[14]) >> 3;
    }
LABEL_21:
    sub_1459ED0((__int64)(a1 + 14), v5, v16);
    v14 = (_QWORD *)a1[15];
    return ((__int64)v14 - a1[14]) >> 3;
  }
  if ( !sub_10246C0(a1[1], v4, *(_DWORD *)(*(v5 - 1) + 4)) )
  {
    v5 = (__int64 *)a1[15];
    goto LABEL_16;
  }
  v6 = (__int64 *)a1[15];
  v7 = (__int64 *)a1[14];
  v8 = 0;
  if ( v7 != v6 )
  {
    while ( 1 )
    {
      v9 = v6 - 1;
      if ( !sub_10246C0(a1[1], v4, *(_DWORD *)(*(v6 - 1) + 4)) )
        break;
      ++v8;
      --v6;
      if ( v8 == 4 || v7 == v9 )
      {
        v6 = (__int64 *)a1[14];
        v15 = a1[1];
        v10 = (a1[15] - (__int64)v6) >> 3;
        if ( a1[15] - (__int64)v6 > 0 )
        {
          while ( 1 )
          {
            v11 = v10 >> 1;
            v12 = &v6[v10 >> 1];
            if ( sub_10246C0(v15, v4, *(_DWORD *)(*v12 + 4)) )
            {
              if ( !v11 )
                return (unsigned int)(((__int64)sub_145A020(a1 + 14, v6, v16) - a1[14]) >> 3) + 1;
            }
            else
            {
              v6 = v12 + 1;
              v11 = v10 - v11 - 1;
              if ( v11 <= 0 )
                return (unsigned int)(((__int64)sub_145A020(a1 + 14, v6, v16) - a1[14]) >> 3) + 1;
            }
            v10 = v11;
          }
        }
        return (unsigned int)(((__int64)sub_145A020(a1 + 14, v6, v16) - a1[14]) >> 3) + 1;
      }
    }
  }
  return (unsigned int)(((__int64)sub_145A020(a1 + 14, v6, v16) - a1[14]) >> 3) + 1;
}
