/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: prev_idcv_attr
// Address: 0x0000000000075510

//----- (0000000000075510) ----------------------------------------------------
const char *__fastcall prev_idcv_attr(__int64 a1, const char *a2)
{
  const char *v2; // r14
  _QWORD *v3; // r13
  _QWORD *v4; // rbx
  __int64 v5; // rbp
  void *v6; // r15
  const char *v7; // r12
  const char *v8; // rdi
  int v9; // eax
  const char *v10; // r15
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rbp
  const char *v15; // rdi
  int v16; // eax
  void *ptr; // [rsp+8h] [rbp-50h] BYREF
  __int64 v18; // [rsp+10h] [rbp-48h]
  __int64 v19; // [rsp+18h] [rbp-40h]
  unsigned __int64 v20; // [rsp+20h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  if ( !a1 || *(_BYTE *)a1 != 5 )
    return nullptr;
  v2 = a2;
  v3 = *(_QWORD **)(a1 + 8);
  sub_37F60((__int64)&ptr, a2);
  v4 = v3 + 1;
  v5 = v3[1];
  if ( !v5 )
  {
    v6 = ptr;
    if ( ptr )
      goto LABEL_12;
LABEL_16:
    if ( v4 == (_QWORD *)*v3 )
      return nullptr;
    goto LABEL_17;
  }
  v6 = ptr;
  v7 = (const char *)ptr;
  if ( !v18 )
    v7 = s1;
  do
  {
    v8 = s1;
    if ( *(_QWORD *)(v5 + 40) )
      v8 = *(const char **)(v5 + 32);
    v9 = strcmp(v8, v7);
    if ( v9 >= 0 )
      v4 = (_QWORD *)v5;
    v5 = *(_QWORD *)(v5 + 8LL * (v9 < 0));
  }
  while ( v5 );
  v2 = a2;
  if ( !v6 )
    goto LABEL_16;
LABEL_12:
  v18 = 0;
  qfree(v6);
  ptr = nullptr;
  v19 = 0;
  if ( v4 == (_QWORD *)*v3 )
    return nullptr;
LABEL_17:
  v12 = (_QWORD *)*v4;
  if ( *v4 )
  {
    do
    {
      v4 = v12;
      v12 = (_QWORD *)v12[1];
    }
    while ( v12 );
  }
  else
  {
    do
    {
      v13 = v4;
      v4 = (_QWORD *)v4[2];
    }
    while ( (_QWORD *)*v4 == v13 );
  }
  v14 = v4[5];
  v10 = s1;
  v15 = s1;
  if ( v14 )
    v15 = (const char *)v4[4];
  v16 = strcmp(v15, v2);
  if ( v16 >= 0 )
    v10 = nullptr;
  if ( v14 && v16 < 0 )
    return (const char *)v4[4];
  return v10;
}
