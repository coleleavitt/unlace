__int64 __fastcall sub_7E9C0(__int64 a1, _QWORD *a2)
{
  int v4; // eax
  int v5; // r13d
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r15
  __int64 *v8; // rax
  __int64 *v9; // rsi
  unsigned __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 *v13; // rsi
  __int64 *v14; // r13
  __int64 *v15; // r12
  int *v16; // rax
  __int64 v17; // rcx
  __int64 v19; // rax
  __int64 *v20; // rsi
  unsigned __int64 v21; // r12
  __int64 *v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // [rsp+0h] [rbp-58h] BYREF
  __int128 v27; // [rsp+8h] [rbp-50h]
  unsigned __int64 v28; // [rsp+18h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v4 = sub_7D4F0(a2);
  if ( v4 < 0 )
    return 0;
  v5 = v4;
  v6 = v4;
  v7 = *(_QWORD *)(a1 + 80);
  v8 = *(__int64 **)(a1 + 72);
  v9 = v8;
  if ( v6 != v7 )
  {
    v26 = 0;
    v27 = 0;
    if ( v6 < v7 )
    {
      v21 = v6;
      do
      {
        v22 = &v8[3 * v21];
        v23 = *v22;
        if ( *v22 )
        {
          v22[1] = 0;
          qfree(v23);
          v8 = *(__int64 **)(a1 + 72);
        }
        ++v21;
      }
      while ( v21 < v7 );
      *(_QWORD *)(a1 + 80) = v6;
      v9 = v8;
    }
    else
    {
      v10 = *(_QWORD *)(a1 + 88);
      v11 = a1 + 72;
      if ( &v26 < v8 || &v26 >= &v8[3 * v10] )
      {
        if ( v10 < v6 )
        {
          v24 = qvector_reserve(v11, (__int64)v8, v6, 24);
          v7 = *(_QWORD *)(a1 + 80);
          *(_QWORD *)(a1 + 72) = v24;
          v9 = (__int64 *)v24;
        }
        if ( v7 < v6 )
        {
          v12 = 3 * v7;
          do
          {
            v13 = &v9[v12];
            ++v7;
            v12 += 3;
            *v13 = 0;
            *(_OWORD *)(v13 + 1) = 0;
            v9 = *(__int64 **)(a1 + 72);
          }
          while ( v6 != v7 );
        }
      }
      else
      {
        if ( v10 < v6 )
        {
          v25 = qvector_reserve(v11, (__int64)v8, v6, 24);
          v7 = *(_QWORD *)(a1 + 80);
          *(_QWORD *)(a1 + 72) = v25;
          v9 = (__int64 *)v25;
        }
        if ( v7 < v6 )
        {
          v19 = 3 * v7;
          do
          {
            v20 = &v9[v19];
            ++v7;
            v19 += 3;
            *v20 = 0;
            *(_OWORD *)(v20 + 1) = 0;
            v9 = *(__int64 **)(a1 + 72);
          }
          while ( v6 != v7 );
        }
      }
      *(_QWORD *)(a1 + 80) = v6;
    }
  }
  *(_DWORD *)(a1 + 144) = v5;
  v14 = v9;
  v15 = &v9[3 * v6];
  if ( v15 != v9 )
  {
    while ( (unsigned __int8)sub_7D530(a2, v14) )
    {
      v16 = (int *)*v14;
      v17 = *v14 + 4 * v14[1];
      if ( v17 != *v14 )
      {
        while ( *v16 >= 0 && *v16 < *(_DWORD *)(a1 + 144) )
        {
          if ( (int *)v17 == ++v16 )
            goto LABEL_19;
        }
        return 0;
      }
LABEL_19:
      v14 += 3;
      if ( v15 == v14 )
        return 1;
    }
    return 0;
  }
  return 1;
}
