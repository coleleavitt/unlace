unsigned __int64 __fastcall sub_7A96A0(_QWORD *a1, _QWORD *a2, unsigned __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rbp
  unsigned __int64 v7; // rax
  bool v8; // cf
  __int64 v9; // r12
  __int64 v10; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rsi
  __int64 v13; // rdx
  signed __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 result; // rax

  v5 = -1;
  v6 = a1[1] - *a1;
  v7 = 2 * ((__int64)((a1[2] & 0xFFFFFFFFFFFFFFF8LL) - *a1) >> 3);
  if ( v7 < a3 )
    v7 = a3;
  v8 = v7 > 0xFFFFFFFFFFFFFFFLL;
  v9 = v7;
  v10 = a2[274];
  if ( !v8 )
    v5 = v9 * 8;
  a2[284] += v5;
  v11 = (_QWORD *)((v10 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a2[275] >= (unsigned __int64)v11 + v5 && v10 )
    a2[274] = (char *)v11 + v5;
  else
    v11 = (_QWORD *)sub_7A1DE0((__int64)(a2 + 274), v5, 3);
  v12 = (_QWORD *)*a1;
  v13 = a1[1];
  if ( *a1 != v13 )
  {
    v14 = v13 - (_QWORD)v12;
    if ( v14 <= 8 )
    {
      if ( v14 == 8 )
        *v11 = *v12;
    }
    else
    {
      v11 = memmove(v11, v12, v14);
    }
  }
  v15 = a1[2];
  *a1 = v11;
  a1[1] = (char *)v11 + v6;
  result = (unsigned __int64)&v11[v9] | v15 & 7;
  a1[2] = result;
  return result;
}

