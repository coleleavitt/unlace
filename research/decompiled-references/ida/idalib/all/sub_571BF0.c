__int64 __fastcall sub_571BF0(_QWORD *a1, unsigned __int8 *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // eax
  __int64 v5; // rsi
  __int64 v6; // rsi
  unsigned int v7; // ebp
  unsigned __int64 v9; // rbp
  size_t v10; // r13
  __int64 v11; // r12
  size_t v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rax
  void *src; // [rsp+0h] [rbp-48h] BYREF
  __int128 v16; // [rsp+8h] [rbp-40h]
  unsigned __int64 v17; // [rsp+18h] [rbp-30h]

  v4 = *a2;
  v5 = (char)a2[2];
  v17 = __readfsqword(0x28u);
  v6 = a1[2] + v5;
  src = nullptr;
  v16 = 0;
  v7 = 0;
  if ( get_name_expr(&src, v6, v4, a3, a4, 1) > 0 )
  {
    v9 = v16;
    if ( (_QWORD)v16 )
    {
      v10 = v16 - 1;
      if ( (_QWORD)v16 != 1 )
      {
        v11 = a1[4];
        v12 = v16 - 1;
        if ( v11 )
        {
          --v11;
          v12 = v10 + v11;
          v9 = v16 + v11;
        }
        v13 = a1[3];
        if ( a1[5] < v9 )
        {
          v14 = qvector_reserve(a1 + 3, v13, v9, 1);
          a1[3] = v14;
          v13 = v14;
        }
        a1[4] = v9;
        *(_BYTE *)(v13 + v12) = 0;
        memcpy((void *)(v11 + a1[3]), src, v10);
      }
    }
    v7 = 1;
  }
  if ( src )
  {
    *(_QWORD *)&v16 = 0;
    qfree(src);
  }
  return v7;
}
