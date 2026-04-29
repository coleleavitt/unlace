unsigned __int64 __fastcall sub_1D0C50(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 i; // rbp
  int v6; // r13d
  _QWORD *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v14; // [rsp+0h] [rbp-48h] BYREF
  __int64 v15; // [rsp+8h] [rbp-40h]
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v1 = *(_QWORD **)(a1 + 520);
  if ( !v1 )
    goto LABEL_16;
  do
  {
    v3 = v1[43];
    if ( v3 )
    {
      v1[44] = 0;
      qfree(v3);
      v1[43] = 0;
      v1[45] = 0;
    }
    v1 = (_QWORD *)v1[1];
  }
  while ( v1 );
  v4 = *(_QWORD *)(a1 + 520);
  if ( !v4 )
  {
LABEL_16:
    v14 = 0;
    v15 = 0;
LABEL_17:
    v12 = 0;
    goto LABEL_15;
  }
  do
  {
    for ( i = 0; *(_DWORD *)(v4 + 376) > (int)i; ++v7[44] )
    {
      v6 = *(_DWORD *)(v4 + 72);
      v7 = *(_QWORD **)(*(_QWORD *)(a1 + 528) + 8LL * *(int *)(*(_QWORD *)(v4 + 368) + 4 * i));
      v8 = v7[44];
      v9 = v7[43];
      if ( v7[45] < (unsigned __int64)(v8 + 1) )
      {
        v10 = qvector_reserve(v7 + 43, v9, v8 + 1, 4);
        v7[43] = v10;
        v9 = v10;
        v8 = v7[44];
      }
      *(_DWORD *)(v9 + 4 * v8) = v6;
      ++i;
    }
    v4 = *(_QWORD *)(v4 + 8);
  }
  while ( v4 );
  v11 = *(_QWORD *)(a1 + 520);
  v14 = 0;
  v15 = 0;
  if ( !v11 )
    goto LABEL_17;
  do
  {
    sub_1CF9C0(v11, &v14);
    v11 = *(_QWORD *)(v11 + 8);
  }
  while ( v11 );
  v12 = v14;
LABEL_15:
  qfree(v12);
  return v16 - __readfsqword(0x28u);
}
