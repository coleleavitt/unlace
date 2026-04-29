__int64 __fastcall sub_334570(_QWORD *a1, int a2)
{
  void *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  unsigned __int64 v7; // r12
  size_t v8; // r14
  __int64 v9; // r13
  size_t v10; // r15
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  void *src; // [rsp+0h] [rbp-58h] BYREF
  __int128 v15; // [rsp+8h] [rbp-50h]
  unsigned __int64 v16; // [rsp+18h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  src = nullptr;
  v15 = 0;
  if ( a2 > 0 )
  {
    v2 = (void *)qvector_reserve((__int64)&src, 0, a2 + 1LL, 1);
    v3 = v15;
    src = v2;
    if ( (unsigned __int64)v15 < a2 + 1LL )
    {
      do
      {
        v4 = v3;
        *((_BYTE *)v2 + v3++) = 32;
        v2 = src;
      }
      while ( v4 != a2 );
    }
    *(_QWORD *)&v15 = a2 + 1LL;
    *((_BYTE *)v2 + a2) = 0;
  }
  sub_FAA10((__int64 *)&src);
  if ( (unsigned __int64)v15 <= 1 )
  {
    LODWORD(v5) = 0;
  }
  else
  {
    v5 = tag_remove();
    if ( v5 > 0 )
    {
      v7 = v15;
      if ( (_QWORD)v15 )
      {
        v8 = v15 - 1;
        if ( (_QWORD)v15 != 1 )
        {
          v9 = a1[2];
          v10 = v15 - 1;
          if ( v9 )
          {
            --v9;
            v10 = v8 + v9;
            v7 = v15 + v9;
          }
          v11 = a1[1];
          if ( a1[3] < v7 )
          {
            v13 = qvector_reserve((__int64)(a1 + 1), v11, v7, 1);
            a1[1] = v13;
            v11 = v13;
          }
          a1[2] = v7;
          *(_BYTE *)(v11 + v10) = 0;
          memcpy((void *)(v9 + a1[1]), src, v8);
        }
      }
      v12 = a1[2];
      if ( v12 > 1 && *(_BYTE *)(a1[1] + v12 - 2) == 10 )
      {
        sub_6D0A0((__int64)&unk_4190BD);
        a1[2] = 0;
      }
    }
  }
  if ( src )
  {
    *(_QWORD *)&v15 = 0;
    qfree((__int64)src);
  }
  return (unsigned int)v5;
}
