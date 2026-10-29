unsigned __int64 __fastcall sub_5A8180(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbx
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // rsi
  unsigned __int64 v12; // r13
  __int64 v13; // rax
  void *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // [rsp+0h] [rbp-58h] BYREF
  __int128 v18; // [rsp+8h] [rbp-50h]
  int v19; // [rsp+18h] [rbp-40h]
  unsigned __int64 v20; // [rsp+28h] [rbp-30h]

  v3 = a1[1];
  v20 = __readfsqword(0x28u);
  v19 = 0;
  v17 = 0;
  v18 = 0;
  if ( a2 < v3 )
  {
    v12 = a2;
    do
    {
      v13 = *a1 + 32 * v12;
      v14 = *(void **)v13;
      if ( *(_QWORD *)v13 )
      {
        *(_QWORD *)(v13 + 8) = 0;
        qfree(v14);
      }
      ++v12;
    }
    while ( v3 != v12 );
    a1[1] = a2;
  }
  else
  {
    if ( v3 >= a2 )
      return v20 - __readfsqword(0x28u);
    v6 = *a1;
    v7 = a1[2];
    if ( (unsigned __int64)&v17 >= *a1 && (unsigned __int64)&v17 < v6 + 32 * v7 )
    {
      if ( v7 >= a2 || (v16 = qvector_reserve(a1, v6, a2, 32), v3 = a1[1], *a1 = v16, v6 = v16, v3 < a2) )
      {
        while ( 1 )
        {
          v8 = v3++;
          v9 = 32 * v8 + v6;
          *(_QWORD *)v9 = 0;
          *(_DWORD *)(v9 + 24) = 0;
          *(_OWORD *)(v9 + 8) = 0;
          if ( a2 == v3 )
            break;
          v6 = *a1;
        }
      }
      goto LABEL_10;
    }
    if ( v7 < a2 )
    {
      v15 = qvector_reserve(a1, v6, a2, 32);
      v3 = a1[1];
      *a1 = v15;
      v6 = v15;
      if ( v3 >= a2 )
      {
LABEL_10:
        a1[1] = a2;
        return v20 - __readfsqword(0x28u);
      }
    }
    while ( 1 )
    {
      v10 = v3++;
      v11 = 32 * v10 + v6;
      *(_QWORD *)v11 = 0;
      *(_DWORD *)(v11 + 24) = 0;
      *(_OWORD *)(v11 + 8) = 0;
      if ( a2 == v3 )
        break;
      v6 = *a1;
    }
    a1[1] = a2;
  }
  return v20 - __readfsqword(0x28u);
}
