__int64 __fastcall sub_671640(int *a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  __int64 *v8; // r13
  unsigned __int64 v9; // rax
  int *v10; // rdi
  __int64 v11; // rsi
  int v12; // ecx
  __int64 v13; // rax
  unsigned int v14; // r15d
  __int64 *v15; // rbx
  bool v16; // cf
  unsigned int v17; // esi
  int v18; // eax
  int v19; // esi
  __int64 result; // rax
  unsigned int v21; // eax
  unsigned int v22; // edx
  __int64 v23; // rax
  _DWORD *v24; // r13
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // [rsp+8h] [rbp-50h] BYREF
  int v28; // [rsp+10h] [rbp-48h]
  unsigned __int64 v29; // [rsp+18h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  v6 = (unsigned int)unpack_dd(a3);
  if ( a3[1] - *a3 < v6 )
    return 0;
  v7 = *((_QWORD *)a1 + 2);
  v8 = *((__int64 **)a1 + 1);
  if ( v6 != v7 )
  {
    v28 = 0;
    v27 = 0xFFFFFFFFLL;
    if ( v6 >= v7 )
    {
      v9 = *((_QWORD *)a1 + 3);
      v10 = a1 + 2;
      if ( &v27 < v8 || &v27 >= (__int64 *)((char *)v8 + 12 * v9) )
      {
        if ( v9 < v6 )
        {
          v25 = qvector_reserve(v10, v8, v6, 12);
          v7 = *((_QWORD *)a1 + 2);
          *((_QWORD *)a1 + 1) = v25;
          v8 = (__int64 *)v25;
        }
        if ( v7 < v6 )
        {
          v11 = v27;
          v12 = v28;
          v13 = 12 * v7;
          do
          {
            ++v7;
            *(__int64 *)((char *)v8 + v13) = v11;
            *(_DWORD *)((char *)v8 + v13 + 8) = v12;
            v13 += 12;
            v8 = *((__int64 **)a1 + 1);
          }
          while ( v6 != v7 );
        }
      }
      else
      {
        if ( v9 < v6 )
        {
          v26 = qvector_reserve(v10, v8, v6, 12);
          v7 = *((_QWORD *)a1 + 2);
          *((_QWORD *)a1 + 1) = v26;
          v8 = (__int64 *)v26;
        }
        if ( v7 < v6 )
        {
          v23 = 12 * v7;
          do
          {
            v24 = (_DWORD *)((char *)v8 + v23);
            ++v7;
            v23 += 12;
            *v24 = -1;
            *(_QWORD *)(v24 + 1) = 0;
            v8 = *((__int64 **)a1 + 1);
          }
          while ( v6 != v7 );
        }
      }
    }
    *((_QWORD *)a1 + 2) = v6;
    v7 = v6;
  }
  v14 = -1;
  v15 = (__int64 *)((char *)v8 + 12 * v7);
  if ( v15 != v8 )
  {
    do
    {
      v19 = unpack_dd(a3);
      if ( v14 == -1 )
      {
        v17 = sub_3B9110(*(_QWORD **)(a2 + 1480), v19);
      }
      else
      {
        v16 = __CFADD__(v14, v19);
        v17 = v14 + v19;
        if ( v16 )
          return 0;
      }
      *(_DWORD *)v8 = v17;
      v8 = (__int64 *)((char *)v8 + 12);
      *((_DWORD *)v8 - 2) = unpack_dd(a3);
      v18 = unpack_dd(a3);
      v14 = *((_DWORD *)v8 - 3);
      *((_DWORD *)v8 - 1) = v18;
    }
    while ( v15 != v8 );
    v7 = *((_QWORD *)a1 + 2);
  }
  result = 1;
  if ( v7 )
  {
    v21 = *a1;
    if ( *a1 == -1 || **((_DWORD **)a1 + 1) >= v21 )
    {
      v22 = a1[1];
      LOBYTE(v21) = v22 != -1;
      LOBYTE(v22) = v14 >= v22;
      return v22 & v21 ^ 1;
    }
    return 0;
  }
  return result;
}

