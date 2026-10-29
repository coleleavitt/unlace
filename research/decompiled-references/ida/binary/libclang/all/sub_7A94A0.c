__int64 __fastcall sub_7A94A0(unsigned __int64 *a1, __int64 *a2, _QWORD *a3)
{
  char *v6; // rdx
  unsigned __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // r13
  __int64 v10; // rsi
  char *v11; // rbp
  unsigned __int64 v12; // rax
  __int64 v13; // r13
  bool v14; // cf
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  _QWORD *v17; // rsi
  unsigned __int64 v18; // rdx
  signed __int64 v19; // rdx
  unsigned __int64 v20; // rax

  v6 = (char *)a1[1];
  v7 = a1[2] & 0xFFFFFFFFFFFFFFF8LL;
  if ( (unsigned __int64)v6 >= v7 )
  {
    v9 = 1;
    v10 = -1;
    v11 = &v6[-*a1];
    v12 = 2 * ((__int64)(v7 - *a1) >> 3);
    if ( v12 )
      v9 = v12;
    v13 = 8 * v9;
    v14 = v12 > 0xFFFFFFFFFFFFFFFLL;
    v15 = a3[274];
    if ( !v14 )
      v10 = v13;
    a3[284] += v10;
    v16 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( a3[275] >= v10 + v16 && v15 )
      a3[274] = v10 + v16;
    else
      v16 = sub_7A1DE0((__int64)(a3 + 274), v10, 3);
    v17 = (_QWORD *)*a1;
    v18 = a1[1];
    if ( *a1 != v18 )
    {
      v19 = v18 - (_QWORD)v17;
      if ( v19 <= 8 )
      {
        if ( v19 == 8 )
          *(_QWORD *)v16 = *v17;
      }
      else
      {
        v16 = (unsigned __int64)memmove((void *)v16, v17, v19);
      }
    }
    v20 = a1[2];
    v6 = &v11[v16];
    *a1 = v16;
    a1[1] = (unsigned __int64)&v11[v16];
    a1[2] = (v13 + v16) | v20 & 7;
  }
  result = *a2;
  *(_QWORD *)v6 = *a2;
  a1[1] += 8LL;
  return result;
}

