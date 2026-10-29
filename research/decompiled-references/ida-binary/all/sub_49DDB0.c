__int64 __fastcall sub_49DDB0(__int64 a1, __int64 a2, char *a3, __int64 a4)
{
  __int64 v4; // rax
  _QWORD *v6; // rdi
  const char *v7; // rsi
  __int64 v8; // rbp
  unsigned int v9; // edx
  unsigned int v10; // r12d
  __int64 *v12; // rdi
  __int64 v13; // rax
  _QWORD *v14; // rsi
  __int64 v15; // rax

  v4 = -1;
  if ( *(_QWORD *)(a1 + 8) )
    v4 = **(_QWORD **)a1;
  v6 = (_QWORD *)(a2 + a4);
  if ( ((unsigned __int8)a3 & 1) != 0 )
    a3 = *(char **)&a3[*v6 - 1];
  v7 = (const char *)v4;
  v8 = ((__int64 (__fastcall *)(_QWORD *, __int64))a3)(v6, v4);
  v10 = v9;
  if ( v9 )
  {
    v12 = *(__int64 **)a1;
    if ( *(_QWORD *)a1 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      qfree(v12, v7);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 16) = 0;
    }
    if ( v8 >= 0 )
    {
      v13 = *(_QWORD *)(a1 + 8);
      v14 = *(_QWORD **)a1;
      if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v13 + 1) )
      {
        v15 = qvector_reserve(a1, v14, v13 + 1, 8);
        *(_QWORD *)a1 = v15;
        v14 = (_QWORD *)v15;
        v13 = *(_QWORD *)(a1 + 8);
      }
      v14[v13] = v8;
      ++*(_QWORD *)(a1 + 8);
    }
  }
  return v10;
}
