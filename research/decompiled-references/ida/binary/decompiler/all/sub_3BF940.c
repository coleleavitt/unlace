__int64 __fastcall sub_3BF940(__int64 a1, __int64 a2)
{
  int v2; // ebp
  __int64 v4; // r12
  __int64 v5; // r14
  size_t v6; // rax
  size_t v7; // r9
  size_t v8; // r10
  __int64 v9; // rsi
  size_t v10; // rdx
  __int64 v11; // r15
  unsigned __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v17; // [rsp+8h] [rbp-70h]
  size_t v18; // [rsp+8h] [rbp-70h]
  size_t v19; // [rsp+10h] [rbp-68h]
  size_t v20; // [rsp+18h] [rbp-60h]

  v2 = 0;
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = 0;
  *(_OWORD *)(a2 + 16) = 0;
  v4 = sub_255720(a1, a2);
  if ( *(_QWORD *)(v4 + 8) )
  {
    do
    {
      tag_remove();
      if ( s1 )
      {
        v5 = *(_QWORD *)(a2 + 16);
        v6 = strlen(s1);
        v7 = v6;
        v8 = v6;
        if ( v5 )
        {
          --v5;
          v8 = v6 + v5;
        }
        v9 = *(_QWORD *)(a2 + 8);
        v10 = v8 + 1;
        if ( *(_QWORD *)(a2 + 24) < v8 + 1 )
        {
          v20 = v6;
          v19 = v8;
          v18 = v8 + 1;
          v15 = qvector_reserve();
          *(_QWORD *)(a2 + 8) = v15;
          v7 = v20;
          v9 = v15;
          v8 = v19;
          v10 = v18;
        }
        *(_QWORD *)(a2 + 16) = v10;
        *(_BYTE *)(v9 + v8) = 0;
        memmove((void *)(v5 + *(_QWORD *)(a2 + 8)), s1, v7);
      }
      v11 = *(_QWORD *)(a2 + 16);
      v12 = 2;
      if ( v11 )
        v12 = v11-- + 1;
      v13 = *(_QWORD *)(a2 + 8);
      if ( *(_QWORD *)(a2 + 24) < v12 )
      {
        v17 = v12;
        v14 = qvector_reserve();
        *(_QWORD *)(a2 + 8) = v14;
        v12 = v17;
        v13 = v14;
      }
      *(_QWORD *)(a2 + 16) = v12;
      *(_BYTE *)(v13 + v11) = 10;
      *(_BYTE *)(*(_QWORD *)(a2 + 8) + v11 + 1) = 0;
      ++v2;
    }
    while ( (unsigned __int64)v2 < *(_QWORD *)(v4 + 8) );
  }
  return 0;
}
