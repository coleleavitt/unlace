unsigned __int64 __fastcall sub_81080(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int8 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        unsigned __int64 *a8)
{
  unsigned __int8 *v11; // rcx
  unsigned __int8 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // [rsp+8h] [rbp-1B0h]
  _QWORD v28[45]; // [rsp+10h] [rbp-1A8h] BYREF
  unsigned __int64 v29; // [rsp+178h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  memset(v28, 0, 8LL * ((unsigned int)(8 * a2 + 8) >> 3));
  v11 = &a3[a1];
  v12 = a3;
  do
  {
    v13 = *v12++;
    ++v28[v13];
  }
  while ( v12 != v11 );
  v14 = 1;
  while ( 1 )
  {
    v15 = v28[v14];
    v16 = v14++;
    if ( v15 )
      break;
    if ( a2 == v16 )
      goto LABEL_6;
  }
  v14 = v16;
LABEL_6:
  while ( !v28[a2] )
  {
    if ( !--a2 )
    {
      v28[v14 + 22] = 0;
      *(_QWORD *)(a5 + 8 * v14) = 0;
      *(_QWORD *)(a6 + 8 * v14) = v28[v14] - 1LL;
      v17 = 0;
      if ( !a1 )
        goto LABEL_9;
      goto LABEL_15;
    }
  }
  v28[v14 + 22] = 0;
  *(_QWORD *)(a5 + 8 * v14) = 0;
  *(_QWORD *)(a6 + 8 * v14) = v28[v14] - 1LL;
  v19 = v14 + 1;
  if ( a2 >= v14 + 1 )
  {
    v27 = v14;
    v20 = v28[v14];
    v21 = v28[v14 + 22];
    do
    {
      v22 = *(_QWORD *)(a6 + 8 * v19 - 8);
      v21 += v20;
      v20 = v28[v19];
      v28[v19 + 22] = v21;
      v23 = 2 * v22 + 2;
      *(_QWORD *)(a6 + 8 * v19) = v23 + v20 - 1;
      *(_QWORD *)(a5 + 8 * v19) = v23 - v21;
      v24 = v19++;
    }
    while ( a2 != v24 );
    v14 = v27;
  }
  v17 = 0;
  if ( a1 )
  {
    do
    {
LABEL_15:
      v25 = a3[v17];
      if ( a3[v17] )
      {
        v26 = v28[v25 + 22];
        v28[v25 + 22] = v26 + 1;
        *(_BYTE *)(a4 + v26) = v17;
      }
      ++v17;
    }
    while ( v17 != a1 );
  }
LABEL_9:
  *a7 = v14;
  *a8 = a2;
  return v29 - __readfsqword(0x28u);
}

