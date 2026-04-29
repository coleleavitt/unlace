unsigned __int64 __fastcall sub_D1A80(_QWORD *a1, unsigned int a2)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rdx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rax
  _QWORD *v10; // rdi
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v19; // [rsp+8h] [rbp-20h]

  v19 = __readfsqword(0x28u);
  sub_D1380((__int64)a1, a2);
  v18 = -1;
  v3 = a1[2];
  v4 = a1[24];
  if ( v3 >= v4 )
  {
    if ( v4 >= v3 )
      goto LABEL_3;
    v11 = a1[23];
    v12 = a1[25];
    v13 = a1 + 23;
    if ( (unsigned __int64)&v18 < v11 || (unsigned __int64)&v18 >= v11 + 4 * v12 )
    {
      if ( v12 >= v3 || (v16 = qvector_reserve(v13, v11, a1[2], 4), v4 = a1[24], a1[23] = v16, v11 = v16, v4 < v3) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v11 + 4 * v4++) = -1;
          if ( v3 == v4 )
            break;
          v11 = a1[23];
        }
      }
    }
    else if ( v12 >= v3 || (v15 = qvector_reserve(v13, v11, a1[2], 4), v4 = a1[24], a1[23] = v15, v11 = v15, v4 < v3) )
    {
      while ( 1 )
      {
        *(_DWORD *)(v11 + 4 * v4++) = -1;
        if ( v3 == v4 )
          break;
        v11 = a1[23];
      }
    }
  }
  a1[24] = v3;
LABEL_3:
  v5 = a1[5];
  v6 = a1[27];
  v18 = -1;
  if ( v5 < v6 )
  {
LABEL_11:
    a1[27] = v5;
    return v19 - __readfsqword(0x28u);
  }
  if ( v6 < v5 )
  {
    v8 = a1[26];
    v9 = a1[28];
    v10 = a1 + 26;
    if ( (unsigned __int64)&v18 < v8 || (unsigned __int64)&v18 >= v8 + 4 * v9 )
    {
      if ( v9 >= v5 || (v17 = qvector_reserve(v10, v8, v5, 4), v6 = a1[27], a1[26] = v17, v8 = v17, v6 < v5) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v8 + 4 * v6++) = -1;
          if ( v5 == v6 )
            break;
          v8 = a1[26];
        }
      }
    }
    else if ( v9 >= v5 || (v14 = qvector_reserve(v10, v8, v5, 4), v6 = a1[27], a1[26] = v14, v8 = v14, v6 < v5) )
    {
      while ( 1 )
      {
        *(_DWORD *)(v8 + 4 * v6++) = -1;
        if ( v5 == v6 )
          break;
        v8 = a1[26];
      }
    }
    goto LABEL_11;
  }
  return v19 - __readfsqword(0x28u);
}
