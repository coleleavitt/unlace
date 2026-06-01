__int64 __fastcall sub_3ECE00(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // ebx
  char *v3; // rdi
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v6; // [rsp+8h] [rbp-30h]
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  ptr = nullptr;
  v6 = 0;
  v2 = sub_3EC930(a1, (__int64 *)&ptr);
  if ( (_BYTE)v2 )
  {
    if ( (_QWORD)v6 != 1 || (v3 = (char *)ptr, *(_QWORD *)ptr >= *((_QWORD *)ptr + 1)) )
    {
      if ( !under_debugger )
        interr(1845);
      BUG();
    }
    *(__m128i *)a2 = _mm_loadu_si128((const __m128i *)ptr);
    *(__m128i *)(a2 + 12) = _mm_loadu_si128((const __m128i *)(v3 + 12));
  }
  else
  {
    v3 = (char *)ptr;
  }
  if ( v3 )
  {
    *(_QWORD *)&v6 = 0;
    qfree(v3);
  }
  return v2;
}

