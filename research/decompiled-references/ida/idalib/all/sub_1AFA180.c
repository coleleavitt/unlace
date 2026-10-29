__int64 __fastcall sub_1AFA180(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  bool v7; // cf
  __int64 v8; // r13
  __int64 result; // rax
  unsigned int v10; // edx
  char v12; // al
  _QWORD *v13; // rsi
  __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbp
  __int64 v17; // rsi
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rax
  __m128 v23[4]; // [rsp+0h] [rbp-48h] BYREF

  v2 = *(unsigned int *)(a1 + 344);
  if ( !(_DWORD)v2
    || (v3 = *(_QWORD *)(a1 + 336) + 6776 * v2 - 6776, *(_QWORD *)(v3 + 6768) != *(_QWORD *)(a1 + 328))
    || (v4 = *(unsigned int *)(v3 + 8), v5 = *(unsigned int *)(a1 + 27504), (unsigned int)v4 <= (unsigned int)v5)
    || (v7 = v4 == v5, v6 = v4 - v5, v7 || v6 == 1) )
  {
    BUG();
  }
  v8 = *(_QWORD *)v3 + 1688 * (v6 - 2);
  result = 0;
  v10 = *(_DWORD *)(v8 + 728) >> 1;
  if ( a2 <= v10 )
  {
    v12 = *(_BYTE *)(v8 + 728) & 1;
    if ( v10 )
    {
      if ( v12 )
      {
        v13 = (_QWORD *)(v8 + 736);
        v14 = 24;
      }
      else
      {
        v13 = *(_QWORD **)(v8 + 736);
        v14 = 3LL * *(unsigned int *)(v8 + 744);
      }
      sub_1AF9650(v23, v13, &v13[v14], v8 + 728, 0);
      v15 = v23[0].m128_u64[1];
      v16 = v23[0].m128_u64[0];
    }
    else
    {
      if ( v12 )
      {
        v21 = v8 + 736;
        v22 = 192;
      }
      else
      {
        v21 = *(_QWORD *)(v8 + 736);
        v22 = 24LL * *(unsigned int *)(v8 + 744);
      }
      sub_1AF9650(v23, (_QWORD *)(v22 + v21), (_QWORD *)(v22 + v21), v8 + 728, 1);
      v15 = v23[0].m128_u64[1];
      v16 = v23[0].m128_u64[0];
    }
    if ( (*(_BYTE *)(v8 + 728) & 1) != 0 )
    {
      v17 = v8 + 736;
      v18 = 192;
    }
    else
    {
      v17 = *(_QWORD *)(v8 + 736);
      v18 = 24LL * *(unsigned int *)(v8 + 744);
    }
    sub_1AF9650(v23, (_QWORD *)(v18 + v17), (_QWORD *)(v18 + v17), v8 + 728, 1);
    if ( v16 == v23[0].m128_u64[0] )
    {
      return 0;
    }
    else
    {
      while ( *(_DWORD *)(v16 + 8) != a2 )
      {
        v19 = (_QWORD *)(v16 + 24);
        if ( v16 + 24 != v15 )
        {
          v20 = *(_QWORD *)(v16 + 24);
          if ( v20 != -4096 && v20 != -8192 )
          {
LABEL_20:
            v16 = (unsigned __int64)v19;
            if ( (_QWORD *)v23[0].m128_u64[0] == v19 )
              return 0;
            continue;
          }
          while ( 1 )
          {
            v19 += 3;
            if ( v19 == (_QWORD *)v15 )
              break;
            if ( *v19 != -8192 && *v19 != -4096 )
              goto LABEL_20;
          }
        }
        v16 = v15;
        if ( v23[0].m128_u64[0] == v15 )
          return 0;
      }
      return *(_QWORD *)v16;
    }
  }
  return result;
}
