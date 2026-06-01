/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: next_idcv_attr
// Address: 0x00000000000753F0

//----- (00000000000753F0) ----------------------------------------------------
const char *__fastcall next_idcv_attr(__int64 a1, const char *a2)
{
  __int64 v2; // r15
  __int64 v3; // rbx
  __int64 v4; // r15
  void *v5; // r14
  const char *v6; // r12
  __int64 v7; // r13
  const char *v8; // rsi
  int v9; // eax
  void *ptr; // [rsp+8h] [rbp-50h] BYREF
  __int64 v12; // [rsp+10h] [rbp-48h]
  __int64 v13; // [rsp+18h] [rbp-40h]
  unsigned __int64 v14; // [rsp+20h] [rbp-38h]

  v14 = __readfsqword(0x28u);
  if ( !a1 || *(_BYTE *)a1 != 5 )
    return nullptr;
  v2 = *(_QWORD *)(a1 + 8);
  sub_37F60((__int64)&ptr, a2);
  v3 = *(_QWORD *)(v2 + 8);
  v4 = v2 + 8;
  if ( !v3 )
  {
    v5 = ptr;
    v7 = v4;
    if ( ptr )
      goto LABEL_13;
LABEL_17:
    if ( v7 == v4 )
      return nullptr;
    goto LABEL_18;
  }
  v5 = ptr;
  v6 = (const char *)ptr;
  if ( !v12 )
    v6 = s1;
  v7 = v4;
  do
  {
    v8 = s1;
    if ( *(_QWORD *)(v3 + 40) )
      v8 = *(const char **)(v3 + 32);
    v9 = strcmp(v6, v8);
    if ( v9 < 0 )
      v7 = v3;
    v3 = *(_QWORD *)(v3 + 8LL * (v9 >= 0));
  }
  while ( v3 );
  if ( !v5 )
    goto LABEL_17;
LABEL_13:
  v12 = 0;
  qfree(v5);
  ptr = nullptr;
  v13 = 0;
  if ( v7 == v4 )
    return nullptr;
LABEL_18:
  if ( *(_QWORD *)(v7 + 40) )
    return *(const char **)(v7 + 32);
  else
    return s1;
}
