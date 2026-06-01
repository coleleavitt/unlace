/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100044A00
// Address: 0x0000000100044A00

//----- (0000000100044A00) ----------------------------------------------------
__int64 __fastcall sub_100044A00(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r15
  const char *v3; // r12
  _QWORD *v4; // r14
  _QWORD *v5; // rbx
  int v6; // eax
  const char *v7; // rdi
  const char *v8; // rsi
  _QWORD *v10; // rcx
  __int64 *v11; // rdi
  _QWORD *v12; // rax
  _QWORD *v13; // rcx
  bool v14; // zf
  int v15; // eax
  void *v16; // rdi
  void *v17; // rdi
  __int64 *v19; // [rsp+10h] [rbp-30h]

  v2 = a1[1];
  if ( !v2 )
    return 0;
  v3 = _s1;
  if ( *(_QWORD *)(a2 + 8) )
    v3 = *(const char **)a2;
  v4 = a1 + 1;
  v5 = a1 + 1;
  v19 = (__int64 *)a1[1];
  do
  {
    v7 = _s1;
    if ( *(_QWORD *)(v2 + 40) )
      v7 = *(const char **)(v2 + 32);
    v6 = strcmp(v7, v3);
    if ( v6 >= 0 )
      v5 = (_QWORD *)v2;
    v2 = *(_QWORD *)(v2 + 8LL * ((unsigned int)v6 >> 31));
  }
  while ( v2 );
  if ( v5 == v4 )
    return 0;
  v8 = v5[5] ? (const char *)v5[4] : _s1;
  if ( strcmp(v3, v8) < 0 )
    return 0;
  v10 = (_QWORD *)v5[1];
  if ( v10 )
  {
    v11 = v19;
    do
    {
      v12 = v10;
      v10 = (_QWORD *)*v10;
    }
    while ( v10 );
  }
  else
  {
    v13 = v5;
    v11 = v19;
    do
    {
      v12 = (_QWORD *)v13[2];
      v14 = *v12 == (_QWORD)v13;
      v13 = v12;
    }
    while ( !v14 );
  }
  if ( (_QWORD *)*a1 == v5 )
    *a1 = v12;
  --a1[2];
  sub_10000C9E0(v11, v5);
  v15 = *((unsigned __int8 *)v5 + 56);
  if ( v15 == 5 )
  {
    sub_1000380B0((unsigned __int8 **)v5[8], (unsigned __int8 *)v5 + 56);
  }
  else if ( v15 == 7 )
  {
    v16 = (void *)v5[8];
    if ( v16 )
    {
      v5[9] = 0;
      qfree(v16);
      v5[8] = 0;
      v5[10] = 0;
    }
  }
  *((_BYTE *)v5 + 56) = 2;
  v5[8] = 0;
  v17 = (void *)v5[4];
  if ( v17 )
  {
    v5[5] = 0;
    qfree(v17);
    v5[4] = 0;
    v5[6] = 0;
  }
  operator delete(v5);
  return 1;
}
