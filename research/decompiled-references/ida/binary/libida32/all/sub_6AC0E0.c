__int64 __fastcall sub_6AC0E0(_QWORD *a1, int *a2, __int64 a3)
{
  int v4; // r12d
  const char *v6; // rdx
  void *v7; // rdi
  void *v8; // rax
  __int64 v9; // rdx
  __m128i v10; // xmm0
  unsigned int v11; // ebx
  void *v13; // [rsp+8h] [rbp-78h] BYREF
  __int128 v14; // [rsp+10h] [rbp-70h]
  void *ptr; // [rsp+28h] [rbp-58h] BYREF
  __int64 v16[2]; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v17; // [rsp+40h] [rbp-40h]

  v4 = 0;
  v17 = __readfsqword(0x28u);
  v14 = 0;
  v13 = nullptr;
  do
  {
    v11 = sub_6ABA30(a1, *a2, nullptr, 0, 0);
    if ( (_BYTE)v11 )
      break;
    if ( (unsigned __int64)v14 <= 1 )
      sub_517DD0(*(__int64 **)(*a1 + 1680LL), &v13, *a2);
    ptr = nullptr;
    *(_OWORD *)v16 = 0;
    sub_3573A0((char **)&ptr);
    v6 = haystack;
    if ( v16[0] )
      v6 = (const char *)ptr;
    sub_517140(*(__int64 **)(*a1 + 1680LL), (__int64)a2, v6);
    v7 = ptr;
    a2[6] = 0;
    v8 = v7;
    if ( a3 )
    {
      v7 = *(void **)a3;
      v9 = *(_QWORD *)(a3 + 16);
      *(_QWORD *)a3 = v8;
      v10 = _mm_loadu_si128((const __m128i *)v16);
      ptr = v7;
      v16[1] = v9;
      *(__m128i *)(a3 + 8) = v10;
    }
    if ( v7 )
    {
      v16[0] = 0;
      qfree(v7);
    }
    ++v4;
  }
  while ( v4 != 10 );
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13);
  }
  return v11;
}

