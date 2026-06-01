__int64 *__fastcall sub_4784B0(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // r14
  unsigned int *v6; // r13
  _QWORD *v7; // rax
  __m128i v8; // xmm0
  char *v9; // rdx
  __int64 v10; // r12
  __int64 v11; // rbx
  char *v12; // rax
  void *v13; // rdi
  void *v15; // [rsp+0h] [rbp-A8h] BYREF
  int v16[4]; // [rsp+8h] [rbp-A0h]
  void *ptr[4]; // [rsp+20h] [rbp-88h] BYREF
  __int128 v18; // [rsp+40h] [rbp-68h] BYREF
  __m128i v19; // [rsp+50h] [rbp-58h]
  unsigned __int64 v20; // [rsp+68h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  v15 = nullptr;
  *(_OWORD *)v16 = 0;
  if ( (unsigned __int8)sub_471630((unsigned __int64 *)a2, a3) )
  {
    v5 = switch_dbctx(*(int *)(a2 + 8));
    v6 = (unsigned int *)(**(_QWORD **)(a2 + 40) + 8 * a3);
    sub_46FB40((__int64)ptr, v6);
    sub_464BE0((__int64 *)&v15, (unsigned __int64)ptr);
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
    }
    v19 = 0u;
    v18 = 0;
    v7 = (_QWORD *)operator new(0x18u);
    v7[2] = v5;
    v8 = _mm_loadl_epi64((const __m128i *)&off_2B02470);
    *v7 = a2;
    v7[1] = &v15;
    *(_QWORD *)&v18 = v7;
    v19 = _mm_unpacklo_epi64(v8, (__m128i)(unsigned __int64)sub_477270);
    sub_471910(a2, v6, (__int64)&v18);
    if ( v19.m128i_i64[0] )
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v19.m128i_i64[0])(&v18, &v18, 3);
  }
  sub_40E680(a1, (__int64 *)&v15, ", ");
  v9 = (char *)v15;
  if ( v15 )
  {
    v10 = *(_QWORD *)v16;
    if ( *(_QWORD *)v16 )
    {
      v11 = 0;
      do
      {
        v12 = &v9[24 * v11];
        v13 = *(void **)v12;
        if ( *(_QWORD *)v12 )
        {
          *((_QWORD *)v12 + 1) = 0;
          qfree(v13);
          v9 = (char *)v15;
        }
        ++v11;
      }
      while ( v10 != v11 );
    }
    *(_QWORD *)v16 = 0;
    qfree(v9);
  }
  return a1;
}

