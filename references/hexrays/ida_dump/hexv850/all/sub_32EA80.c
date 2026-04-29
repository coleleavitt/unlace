__int64 __fastcall sub_32EA80(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  const __m128i *v7; // r14
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 v13; // [rsp+0h] [rbp-58h] BYREF
  __int128 v14; // [rsp+8h] [rbp-50h]
  unsigned __int64 v15; // [rsp+18h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  v7 = (const __m128i *)a4;
  v13 = 0;
  v14 = 0;
  if ( a2 > 0 )
  {
    v8 = qvector_reserve(&v13, 0, a2 + 1LL, 1);
    v9 = v14;
    v13 = v8;
    if ( (unsigned __int64)v14 < a2 + 1LL )
    {
      do
      {
        a4 = v9;
        *(_BYTE *)(v8 + v9++) = 32;
        v8 = v13;
      }
      while ( a2 != a4 );
    }
    *(_QWORD *)&v14 = a2 + 1LL;
    *(_BYTE *)(v8 + a2) = 0;
  }
  sub_F5E50(&v13, a3, v7, a4, a5, a6);
  if ( (unsigned __int64)v14 <= 1 )
  {
    v11 = 0;
  }
  else
  {
    v10 = tag_remove(&v13, v13, 0);
    v11 = v10;
    if ( v10 > 0 )
      qfputs(v13, *(_QWORD *)(a1 + 40));
  }
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13);
  }
  return v11;
}
