bool __fastcall sub_3716E0(_QWORD *a1, __int64 a2, __int64 *a3)
{
  __int64 *v4; // r13
  _QWORD *v5; // rbx
  _QWORD *v6; // r14
  __int64 v7; // rbp
  _QWORD *v8; // rsi
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  bool result; // al
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // [rsp+8h] [rbp-40h]

  v4 = *(__int64 **)a2;
  v16 = *(_QWORD *)a2 + 40LL * *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)a2 != v16 )
  {
    do
    {
      v5 = (_QWORD *)v4[2];
      v6 = &v5[v4[3]];
      if ( v6 != v5 )
      {
        while ( 2 )
        {
          while ( *v5 != *a1 )
          {
LABEL_4:
            if ( ++v5 == v6 )
              goto LABEL_16;
          }
          if ( !a3 )
            return 1;
LABEL_7:
          v7 = *v4;
          v8 = (_QWORD *)*a3;
          v9 = a3[1];
          do
          {
            v10 = &v8[v9];
            if ( v8 == v10 )
              goto LABEL_19;
            v11 = (_QWORD *)*a3;
            while ( v7 != *v11 )
            {
              if ( v10 == ++v11 )
                goto LABEL_19;
            }
            if ( v11 == v10 )
            {
LABEL_19:
              v13 = v9 + 1;
              if ( a3[2] < v13 )
              {
                v14 = qvector_reserve(a3, v8, v13, 8);
                v15 = a3[1];
                *a3 = v14;
                v10 = (_QWORD *)(v14 + 8 * v15);
              }
              ++v5;
              *v10 = v7;
              ++a3[1];
              if ( v5 == v6 )
                goto LABEL_16;
              if ( *a1 != *v5 )
                goto LABEL_4;
              goto LABEL_7;
            }
            if ( v6 == ++v5 )
              goto LABEL_16;
          }
          while ( *v5 == *a1 );
          if ( ++v5 != v6 )
            continue;
          break;
        }
      }
LABEL_16:
      v4 += 5;
    }
    while ( (__int64 *)v16 != v4 );
  }
  result = 0;
  if ( a3 )
    return a3[1] != 0;
  return result;
}
