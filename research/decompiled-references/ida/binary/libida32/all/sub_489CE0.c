unsigned __int64 __fastcall sub_489CE0(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r12
  unsigned int v5; // ebp
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int32 v8; // eax
  _QWORD *v9; // r14
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  _QWORD *v14; // [rsp+8h] [rbp-70h]
  __m128i v15[2]; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  if ( *(int *)(a1 + 28) > 0 )
  {
    v1 = 0;
    do
    {
      v2 = switch_dbctx(*(int *)(a1 + 4 * v1 + 16));
      v3 = *(_QWORD *)(a1 + 8);
      v4 = *(_QWORD *)(v2 + 1480);
      v5 = sub_630AA0(v4, 0);
      if ( v5 > 1 )
      {
        v6 = v3 + 48 * v1 + 744;
        v7 = 1;
        v14 = (_QWORD *)v6;
        do
        {
          v8 = sub_630920(v4, 0, v7);
          if ( v8 != v7 )
          {
            v15[0].m128i_i32[0] = v8;
            v15[0].m128i_i64[1] = 0;
            v15[1] = 0;
            v9 = (_QWORD *)sub_489B80(v14, v15);
            if ( v15[0].m128i_i64[1] )
              qfree((void *)v15[0].m128i_i64[1]);
            v10 = v9[6];
            v11 = v9[5];
            if ( v9[7] < (unsigned __int64)(v10 + 1) )
            {
              v12 = qvector_reserve(v9 + 5, v11, v10 + 1, 4);
              v9[5] = v12;
              v11 = v12;
              v10 = v9[6];
            }
            *(_DWORD *)(v11 + 4 * v10) = v7;
            ++v9[6];
          }
          ++v7;
        }
        while ( v7 != v5 );
      }
      ++v1;
    }
    while ( *(_DWORD *)(a1 + 28) > (int)v1 );
  }
  return v16 - __readfsqword(0x28u);
}

