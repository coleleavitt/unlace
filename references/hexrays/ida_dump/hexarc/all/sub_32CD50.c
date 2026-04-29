__int64 __fastcall sub_32CD50(_QWORD *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  const __m128i *v7; // r14
  void *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  unsigned __int64 v12; // r12
  size_t v13; // r14
  __int64 v14; // r13
  size_t v15; // r15
  __int64 v16; // rsi
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  void *src; // [rsp+0h] [rbp-58h] BYREF
  __int128 v20; // [rsp+8h] [rbp-50h]
  unsigned __int64 v21; // [rsp+18h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v7 = (const __m128i *)a4;
  src = nullptr;
  v20 = 0;
  if ( a2 > 0 )
  {
    v8 = (void *)qvector_reserve(&src, 0, a2 + 1LL, 1);
    v9 = v20;
    src = v8;
    if ( (unsigned __int64)v20 < a2 + 1LL )
    {
      do
      {
        a4 = v9;
        *((_BYTE *)v8 + v9++) = 32;
        v8 = src;
      }
      while ( a4 != a2 );
    }
    *(_QWORD *)&v20 = a2 + 1LL;
    *((_BYTE *)v8 + a2) = 0;
  }
  sub_F4350((__int64 *)&src, a3, v7, a4, a5, a6);
  if ( (unsigned __int64)v20 <= 1 )
  {
    LODWORD(v10) = 0;
  }
  else
  {
    v10 = tag_remove(&src, src, 0);
    if ( v10 > 0 )
    {
      v12 = v20;
      if ( (_QWORD)v20 )
      {
        v13 = v20 - 1;
        if ( (_QWORD)v20 != 1 )
        {
          v14 = a1[2];
          v15 = v20 - 1;
          if ( v14 )
          {
            --v14;
            v15 = v13 + v14;
            v12 = v20 + v14;
          }
          v16 = a1[1];
          if ( a1[3] < v12 )
          {
            v18 = qvector_reserve(a1 + 1, v16, v12, 1);
            a1[1] = v18;
            v16 = v18;
          }
          a1[2] = v12;
          *(_BYTE *)(v16 + v15) = 0;
          memcpy((void *)(v14 + a1[1]), src, v13);
        }
      }
      v17 = a1[2];
      if ( v17 > 1 && *(_BYTE *)(a1[1] + v17 - 2) == 10 )
      {
        sub_66B20((__int64)&unk_3F00D2);
        a1[2] = 0;
      }
    }
  }
  if ( src )
  {
    *(_QWORD *)&v20 = 0;
    qfree(src);
  }
  return (unsigned int)v10;
}
