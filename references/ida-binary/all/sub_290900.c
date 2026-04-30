unsigned __int64 __fastcall sub_290900(__int64 *a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rbx
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rsi
  const char *v16; // rbp
  __int64 v17; // rdx
  __int64 *v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+0h] [rbp-48h] BYREF
  __int128 v23; // [rsp+8h] [rbp-40h]
  unsigned __int64 v24; // [rsp+18h] [rbp-30h]

  v7 = a1[1];
  v24 = __readfsqword(0x28u);
  v22 = 0;
  v23 = 0;
  if ( (unsigned __int64)a2 < v7 )
  {
    v16 = a2;
    do
    {
      v17 = *a1;
      v18 = (__int64 *)(*a1 + 24LL * (_QWORD)v16);
      v19 = *v18;
      if ( *v18 )
      {
        v18[1] = 0;
        qfree(v19, a2, v17, a4, a5, a6, v22, v23);
      }
      ++v16;
    }
    while ( (const char *)v7 != v16 );
    a1[1] = (__int64)a2;
  }
  else
  {
    if ( v7 >= (unsigned __int64)a2 )
      return v24 - __readfsqword(0x28u);
    v10 = *a1;
    v11 = a1[2];
    if ( (unsigned __int64)&v22 >= *a1 && (unsigned __int64)&v22 < v10 + 24 * v11 )
    {
      if ( v11 >= (unsigned __int64)a2
        || (v21 = qvector_reserve(a1, v10, a2, 24), v7 = a1[1], *a1 = v21, v10 = v21, v7 < (unsigned __int64)a2) )
      {
        v12 = 24 * v7;
        while ( 1 )
        {
          v13 = v12 + v10;
          ++v7;
          v12 += 24;
          *(_QWORD *)v13 = 0;
          *(_OWORD *)(v13 + 8) = 0;
          if ( a2 == (const char *)v7 )
            break;
          v10 = *a1;
        }
      }
      goto LABEL_10;
    }
    if ( v11 < (unsigned __int64)a2 )
    {
      v20 = qvector_reserve(a1, v10, a2, 24);
      v7 = a1[1];
      *a1 = v20;
      v10 = v20;
      if ( v7 >= (unsigned __int64)a2 )
      {
LABEL_10:
        a1[1] = (__int64)a2;
        return v24 - __readfsqword(0x28u);
      }
    }
    v14 = 24 * v7;
    while ( 1 )
    {
      v15 = v14 + v10;
      ++v7;
      v14 += 24;
      *(_QWORD *)v15 = 0;
      *(_OWORD *)(v15 + 8) = 0;
      if ( a2 == (const char *)v7 )
        break;
      v10 = *a1;
    }
    a1[1] = (__int64)a2;
  }
  return v24 - __readfsqword(0x28u);
}
