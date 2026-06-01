unsigned __int64 __fastcall sub_850010(__int64 *a1, const char *a2)
{
  size_t v2; // rax
  size_t v3; // r13
  size_t v4; // rbx
  __int64 i; // rax
  __int64 v7; // rbx
  __int64 v8; // r13
  unsigned __int64 v9; // rdx
  __int64 v10; // rsi
  size_t v11; // rax
  __int64 v12; // r13
  size_t v13; // r8
  size_t v14; // r9
  __int64 v15; // rsi
  size_t v16; // rdx
  const char *v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  size_t v23; // [rsp+0h] [rbp-80h]
  unsigned __int64 v24; // [rsp+0h] [rbp-80h]
  size_t v25; // [rsp+8h] [rbp-78h]
  size_t v26; // [rsp+10h] [rbp-70h]
  void *ptr; // [rsp+28h] [rbp-58h] BYREF
  __int128 v28; // [rsp+30h] [rbp-50h]
  unsigned __int64 v29; // [rsp+40h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  v28 = 0;
  ptr = nullptr;
  v2 = strlen(a2);
  v3 = v2 + 1;
  v4 = v2;
  ptr = (void *)qvector_reserve(&ptr, 0, v2 + 1, 1);
  *(_QWORD *)&v28 = v3;
  memmove(ptr, a2, v4);
  *((_BYTE *)ptr + v4) = 0;
  if ( (unsigned __int64)v28 > 1 )
  {
    for ( i = qstrtok((char *)ptr, (char *)"\\"); ; i = qstrtok(nullptr, (char *)"\\") )
    {
      v17 = (const char *)i;
      if ( !i )
        break;
      v18 = a1[1];
      v19 = *a1;
      if ( a1[2] < (unsigned __int64)(v18 + 1) )
      {
        v20 = qvector_reserve(a1, v19, v18 + 1, 24);
        *a1 = v20;
        v18 = a1[1];
        v19 = v20;
      }
      v7 = v19 + 24 * v18;
      *(_QWORD *)v7 = 0;
      *(_OWORD *)(v7 + 8) = 0;
      ++a1[1];
      if ( *v17 != 1 )
      {
        v8 = *(_QWORD *)(v7 + 8);
        v9 = 2;
        if ( v8 )
          v9 = v8-- + 1;
        v10 = *(_QWORD *)v7;
        if ( *(_QWORD *)(v7 + 16) < v9 )
        {
          v24 = v9;
          v22 = qvector_reserve(v7, v10, v9, 1);
          *(_QWORD *)v7 = v22;
          v9 = v24;
          v10 = v22;
        }
        *(_QWORD *)(v7 + 8) = v9;
        *(_BYTE *)(v10 + v8) = 1;
        *(_BYTE *)(*(_QWORD *)v7 + v8 + 1) = 0;
      }
      v11 = strlen(v17);
      v12 = *(_QWORD *)(v7 + 8);
      v13 = v11;
      v14 = v11;
      if ( v12 )
      {
        --v12;
        v14 = v11 + v12;
      }
      v15 = *(_QWORD *)v7;
      v16 = v14 + 1;
      if ( *(_QWORD *)(v7 + 16) < v14 + 1 )
      {
        v26 = v11;
        v25 = v14;
        v23 = v14 + 1;
        v21 = qvector_reserve(v7, v15, v16, 1);
        v13 = v26;
        v14 = v25;
        *(_QWORD *)v7 = v21;
        v15 = v21;
        v16 = v23;
      }
      *(_QWORD *)(v7 + 8) = v16;
      *(_BYTE *)(v15 + v14) = 0;
      memmove((void *)(v12 + *(_QWORD *)v7), v17, v13);
    }
  }
  if ( ptr )
  {
    *(_QWORD *)&v28 = 0;
    qfree(ptr);
  }
  return v29 - __readfsqword(0x28u);
}
