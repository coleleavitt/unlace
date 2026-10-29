unsigned __int64 __fastcall sub_81D560(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  __int64 v5; // rsi
  size_t v6; // rbp
  unsigned __int64 v7; // rax
  bool v8; // cf
  __int64 v9; // r12
  __int64 v10; // rax
  char *v11; // rcx
  __int64 v12; // rax
  unsigned __int64 result; // rax

  v5 = -1;
  v6 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v7 = 2 * ((__int64)((*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL) - *(_QWORD *)a1) >> 3);
  if ( v7 < a3 )
    v7 = a3;
  v8 = v7 > 0xFFFFFFFFFFFFFFFLL;
  v9 = 8 * v7;
  v10 = a2[274];
  if ( !v8 )
    v5 = v9;
  a2[284] += v5;
  v11 = (char *)((v10 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a2[275] >= (unsigned __int64)&v11[v5] && v10 )
    a2[274] = &v11[v5];
  else
    v11 = (char *)sub_804090((__int64)(a2 + 274), v5, 3);
  if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) )
    v11 = (char *)memcpy(v11, *(const void **)a1, v6);
  v12 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)a1 = v11;
  *(_QWORD *)(a1 + 8) = &v11[v6];
  result = (unsigned __int64)&v11[v9] | v12 & 7;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}

