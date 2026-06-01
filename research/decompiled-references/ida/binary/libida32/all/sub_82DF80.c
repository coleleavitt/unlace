__int64 __fastcall sub_82DF80(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  void *v5; // rdi
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rsi
  void *v8; // rdi
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v10; // [rsp+8h] [rbp-30h]
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 12) )
    return 0;
  v3 = *(_QWORD *)a1;
  ptr = nullptr;
  v10 = 0;
  if ( (unsigned int)sub_82DDD0(v3, &ptr) != 1 )
  {
    if ( ptr )
    {
      *(_QWORD *)&v10 = 0;
      qfree(ptr);
    }
    return 0;
  }
  v5 = *(void **)a2;
  v6 = v10;
  if ( *(_QWORD *)a2 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    qfree(v5);
    *(_QWORD *)a2 = 0;
    v7 = v10;
    *(_QWORD *)(a2 + 16) = 0;
  }
  else
  {
    v7 = v10;
  }
  v8 = ptr;
  if ( v7 )
  {
    if ( v7 < *((_QWORD *)&v10 + 1) )
    {
      if ( ptr )
      {
        v8 = (void *)qrealloc(ptr);
        if ( !v8 )
          v8 = ptr;
      }
    }
    *(_QWORD *)a2 = v8;
    *(__m128i *)(a2 + 8) = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v6);
  }
  else if ( ptr )
  {
    *(_QWORD *)&v10 = 0;
    qfree(ptr);
  }
  return 1;
}

