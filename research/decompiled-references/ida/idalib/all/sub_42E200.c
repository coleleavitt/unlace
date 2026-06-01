__int64 __fastcall sub_42E200(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdx
  __int64 *v3; // rax
  __int64 v4; // rbx
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v7; // [rsp+8h] [rbp-40h]
  __int64 v8; // [rsp+18h] [rbp-30h]
  int v9; // [rsp+20h] [rbp-28h]
  unsigned __int64 v10; // [rsp+28h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  ptr = nullptr;
  v8 = 0;
  v9 = -1;
  v7 = 0;
  ptr = (void *)qvector_reserve(&ptr, 0, 1, 16);
  *((__m128i *)ptr + v7) = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
  *(_QWORD *)&v7 = v7 + 1;
  rangeset_t_sub2((int)&ptr);
  v2 = v7;
  if ( (_QWORD)v7 )
  {
    while ( 1 )
    {
      v3 = (__int64 *)((char *)ptr + 16 * (int)v2 - 16);
      v4 = *v3;
      if ( v3[1] - *v3 >= a2 )
        break;
      if ( !--v2 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v4 = -1;
  }
  if ( ptr )
  {
    *(_QWORD *)&v7 = 0;
    qfree(ptr);
  }
  return v4;
}
