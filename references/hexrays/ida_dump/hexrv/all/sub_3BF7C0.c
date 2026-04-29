__int64 __fastcall sub_3BF7C0(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  _QWORD *v5; // r12
  __int64 v6; // rax
  const char *v7; // rsi
  __int64 v8; // rax
  const char *v9; // r15
  __int64 v10; // r14
  size_t v11; // rax
  size_t v12; // r9
  size_t v13; // r10
  __int64 v14; // rsi
  size_t v15; // rdx
  __int64 v16; // r15
  unsigned __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v22; // [rsp+8h] [rbp-70h]
  size_t v23; // [rsp+8h] [rbp-70h]
  size_t v24; // [rsp+10h] [rbp-68h]
  size_t v25; // [rsp+18h] [rbp-60h]
  const char *v26; // [rsp+20h] [rbp-58h] BYREF
  __int128 v27; // [rsp+28h] [rbp-50h]
  unsigned __int64 v28; // [rsp+38h] [rbp-40h]

  v3 = 0;
  v28 = __readfsqword(0x28u);
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = 0;
  *(_OWORD *)(a2 + 16) = 0;
  v5 = (_QWORD *)sub_2535E0(a1, a2, a3);
  v6 = 0;
  if ( v5[1] )
  {
    do
    {
      v7 = s1;
      v26 = nullptr;
      v27 = 0;
      v8 = *v5 + 32 * v6;
      if ( *(_QWORD *)(v8 + 8) )
        v7 = *(const char **)v8;
      tag_remove(&v26, v7, 0);
      v9 = s1;
      if ( (_QWORD)v27 )
        v9 = v26;
      if ( v9 )
      {
        v10 = *(_QWORD *)(a2 + 16);
        v11 = strlen(v9);
        v12 = v11;
        v13 = v11;
        if ( v10 )
        {
          --v10;
          v13 = v11 + v10;
        }
        v14 = *(_QWORD *)(a2 + 8);
        v15 = v13 + 1;
        if ( *(_QWORD *)(a2 + 24) < v13 + 1 )
        {
          v25 = v11;
          v24 = v13;
          v23 = v13 + 1;
          v20 = qvector_reserve(a2 + 8, v14, v15, 1);
          *(_QWORD *)(a2 + 8) = v20;
          v12 = v25;
          v14 = v20;
          v13 = v24;
          v15 = v23;
        }
        *(_QWORD *)(a2 + 16) = v15;
        *(_BYTE *)(v14 + v13) = 0;
        memmove((void *)(v10 + *(_QWORD *)(a2 + 8)), v9, v12);
      }
      v16 = *(_QWORD *)(a2 + 16);
      v17 = 2;
      if ( v16 )
        v17 = v16-- + 1;
      v18 = *(_QWORD *)(a2 + 8);
      if ( *(_QWORD *)(a2 + 24) < v17 )
      {
        v22 = v17;
        v19 = qvector_reserve(a2 + 8, v18, v17, 1);
        *(_QWORD *)(a2 + 8) = v19;
        v17 = v22;
        v18 = v19;
      }
      *(_QWORD *)(a2 + 16) = v17;
      *(_BYTE *)(v18 + v16) = 10;
      *(_BYTE *)(*(_QWORD *)(a2 + 8) + v16 + 1) = 0;
      if ( v26 )
      {
        *(_QWORD *)&v27 = 0;
        qfree(v26);
      }
      v6 = ++v3;
    }
    while ( (unsigned __int64)v3 < v5[1] );
  }
  return 0;
}
