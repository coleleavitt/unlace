__m128 *__fastcall sub_847A00(__m128 *a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // r14
  unsigned int v5; // r13d
  __int64 v6; // r12
  __int64 v8; // rbx
  unsigned int v9; // esi
  unsigned int v10; // eax
  __int64 v11; // rax
  unsigned int v13; // eax
  __int16 v14; // ax
  __int64 v15; // [rsp+0h] [rbp-48h]

  v4 = (__int64 *)a3;
  v5 = 0;
  v6 = 0;
  v8 = a3;
  v9 = *(_DWORD *)(a3 + 40) + 1;
  while ( 1 )
  {
    if ( a3 != v6 )
    {
      v10 = *(_DWORD *)(v8 + 40);
      if ( v10 < v9 )
      {
        v4 = (__int64 *)v8;
        v5 = 0;
        goto LABEL_5;
      }
      goto LABEL_13;
    }
LABEL_9:
    if ( a3 == v8 )
      break;
    v10 = *(_DWORD *)(v8 + 40);
    if ( v10 >= v9 )
    {
      while ( 1 )
      {
LABEL_13:
        if ( v9 == v10 )
        {
          ++v5;
          v15 = a2;
          v13 = sub_7E5950(*(_QWORD *)(a2 + 8));
          a2 = v15;
          if ( !(v13 % v5) )
          {
            v14 = *(_WORD *)(*(_QWORD *)v8 + 4LL);
            if ( v14 )
            {
              if ( v14 == 2 )
                v4 = (__int64 *)v8;
            }
            else if ( (*(_BYTE *)(*(_QWORD *)v8 + 30LL) & 2) != 0 )
            {
              v4 = (__int64 *)v8;
            }
          }
        }
        if ( *(_DWORD *)(a2 + 252) < v5 )
          goto LABEL_15;
LABEL_5:
        if ( !v6 )
        {
          v6 = v8;
          goto LABEL_12;
        }
        v8 = *(_QWORD *)(v8 + 56);
        if ( a3 == v6 )
          goto LABEL_9;
        while ( 1 )
        {
          v10 = *(_DWORD *)(v8 + 40);
          if ( v10 >= v9 )
            break;
          v4 = (__int64 *)v8;
          v5 = 0;
          v8 = *(_QWORD *)(v8 + 56);
          if ( a3 == v6 )
            goto LABEL_9;
        }
      }
    }
    v4 = (__int64 *)v8;
    v5 = 0;
LABEL_12:
    v8 = *(_QWORD *)(v8 + 56);
  }
LABEL_15:
  v11 = *v4;
  *a1 = _mm_loadh_ps((const double *)(a2 + 16));
  if ( v11 )
    ++*(_DWORD *)(v11 + 8);
  return a1;
}

