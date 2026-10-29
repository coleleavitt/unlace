/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100053AC0
// Address: 0x0000000100053AC0

//----- (0000000100053AC0) ----------------------------------------------------
__int64 __fastcall sub_100053AC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  char *v5; // r12
  _QWORD *v6; // r15
  _QWORD *v7; // r13
  int v8; // eax
  const char *v9; // rdi
  const char *v10; // rsi
  __int64 v12; // rcx
  size_t v13; // r12
  bool v14; // cf
  size_t v15; // rcx
  const void *v16; // r14
  void *v17; // rax
  char *v19; // [rsp+8h] [rbp-58h]
  __int128 v20; // [rsp+10h] [rbp-50h] BYREF
  __int64 v21; // [rsp+20h] [rbp-40h]

  v20 = 0;
  v21 = 0;
  sub_100053400(a3, (__int64)&v20);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = (char *)v20;
  if ( !v4 )
  {
    LODWORD(v6) = 0;
    if ( !(_QWORD)v20 )
      return (unsigned int)v6;
    goto LABEL_19;
  }
  v6 = (_QWORD *)(a1 + 8);
  v19 = (char *)v20;
  if ( !*((_QWORD *)&v20 + 1) )
    v5 = (char *)_s1;
  v7 = (_QWORD *)(a1 + 8);
  do
  {
    v9 = _s1;
    if ( *(_QWORD *)(v4 + 40) )
      v9 = *(const char **)(v4 + 32);
    v8 = strcmp(v9, v5);
    if ( v8 >= 0 )
      v7 = (_QWORD *)v4;
    v4 = *(_QWORD *)(v4 + 8LL * ((unsigned int)v8 >> 31));
  }
  while ( v4 );
  if ( v7 == v6 || (!v7[5] ? (v10 = _s1) : (v10 = (const char *)v7[4]), strcmp(v5, v10) < 0 || a2 == 0) )
  {
    LODWORD(v6) = 0;
  }
  else
  {
    LOBYTE(v6) = 1;
    if ( v7 + 7 != (_QWORD *)a2 )
    {
      v12 = v7[8];
      v13 = 0;
      v14 = v12 == 0;
      v15 = v12 - 1;
      if ( !v14 )
        v13 = v15;
      if ( !v14 && v15 != 0 )
      {
        v16 = (const void *)v7[7];
        v17 = *(void **)a2;
        if ( *(_QWORD *)(a2 + 16) <= v13 )
        {
          v17 = qvector_reserve(a2, *(void **)a2, v13 + 1, 1u);
          *(_QWORD *)a2 = v17;
        }
        *(_QWORD *)(a2 + 8) = v13 + 1;
        memmove(v17, v16, v13);
        *(_BYTE *)(*(_QWORD *)a2 + v13) = 0;
        v5 = (char *)v20;
        if ( (_QWORD)v20 )
          goto LABEL_19;
        return (unsigned int)v6;
      }
      *(_QWORD *)(a2 + 8) = 0;
    }
  }
  v5 = v19;
  if ( v19 )
  {
LABEL_19:
    *((_QWORD *)&v20 + 1) = 0;
    qfree(v5);
  }
  return (unsigned int)v6;
}
