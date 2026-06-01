__int64 __fastcall sub_DA3D80(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // r13
  __int128 v5; // kr00_16
  __int64 v6; // rbp
  __int64 *v7; // rbx
  unsigned __int64 v8; // rbp
  __int64 v9; // rsi
  __int64 v11; // [rsp+8h] [rbp-70h] BYREF
  __m128 v12; // [rsp+10h] [rbp-68h] BYREF
  __int64 v13; // [rsp+20h] [rbp-58h] BYREF
  __int128 v14; // [rsp+28h] [rbp-50h]
  __int128 v15; // [rsp+38h] [rbp-40h]

  v2 = *a1;
  v11 = *(_QWORD *)(a2 + 8);
  v13 = *(_QWORD *)(v2 + 104);
  v12 = _mm_loadh_ps((const double *)&v13);
  v14 = 0;
  v15 = 0;
  result = sub_DAC7E0(&v12, &v11);
  v4 = v13;
  v5 = v14;
  v6 = v15;
  if ( *((_QWORD *)&v15 + 1) )
    result = sub_186B220((void *)(*((_QWORD *)&v15 + 1) - 8LL));
  if ( v6 )
    result = sub_186B220((void *)(v6 - 8));
  if ( *((_QWORD *)&v5 + 1) )
    result = sub_186B220((void *)(*((_QWORD *)&v5 + 1) - 8LL));
  if ( (_QWORD)v5 )
  {
    v7 = (__int64 *)v5;
    v8 = v5 + 8LL * *(unsigned int *)(v5 - 4);
    if ( (unsigned __int64)v5 < v8 )
    {
      do
      {
        while ( 1 )
        {
          v9 = *v7;
          if ( *v7 )
          {
            if ( (*(_DWORD *)(v9 + 8))-- == 1 )
              break;
          }
          if ( (unsigned __int64)++v7 >= v8 )
            return sub_186B220((void *)(v5 - 8));
        }
        ++v7;
        sub_15D7BC0(v4, v9);
      }
      while ( (unsigned __int64)v7 < v8 );
    }
    return sub_186B220((void *)(v5 - 8));
  }
  return result;
}

