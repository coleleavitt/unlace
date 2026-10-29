__int64 *__fastcall sub_477EF0(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int *v5; // r12
  __int64 v6; // rax
  __int64 v7; // r14
  _QWORD *v8; // rax
  __m128i v9; // xmm0
  char *v10; // rdx
  __int64 v11; // r12
  __int64 v12; // rbx
  char *v13; // rax
  void *v14; // rdi
  void *v16; // [rsp+0h] [rbp-98h] BYREF
  int v17[4]; // [rsp+8h] [rbp-90h]
  void *ptr[4]; // [rsp+20h] [rbp-78h] BYREF
  __int128 v19; // [rsp+40h] [rbp-58h] BYREF
  __m128i v20; // [rsp+50h] [rbp-48h]
  unsigned __int64 v21; // [rsp+68h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  v16 = nullptr;
  *(_OWORD *)v17 = 0;
  if ( (unsigned __int8)sub_471630((unsigned __int64 *)a2, a3) )
  {
    v5 = (unsigned int *)(**(_QWORD **)(a2 + 40) + 8 * a3);
    sub_46FB40((__int64)ptr, v5);
    sub_464BE0((__int64 *)&v16, (unsigned __int64)ptr);
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
    }
    v6 = switch_dbctx(*(int *)(a2 + 8));
    v20 = 0u;
    v7 = *(_QWORD *)(v6 + 1480);
    v19 = 0;
    v8 = (_QWORD *)operator new(0x18u);
    v8[2] = v7;
    v9 = _mm_loadl_epi64((const __m128i *)&off_2B02458);
    *v8 = a2;
    v8[1] = &v16;
    *(_QWORD *)&v19 = v8;
    v20 = _mm_unpacklo_epi64(v9, (__m128i)(unsigned __int64)sub_478E10);
    sub_471910(a2, v5, (__int64)&v19);
    if ( v20.m128i_i64[0] )
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v20.m128i_i64[0])(&v19, &v19, 3);
  }
  sub_40E680(a1, (__int64 *)&v16, ", ");
  v10 = (char *)v16;
  if ( v16 )
  {
    v11 = *(_QWORD *)v17;
    if ( *(_QWORD *)v17 )
    {
      v12 = 0;
      do
      {
        v13 = &v10[24 * v12];
        v14 = *(void **)v13;
        if ( *(_QWORD *)v13 )
        {
          *((_QWORD *)v13 + 1) = 0;
          qfree(v14);
          v10 = (char *)v16;
        }
        ++v12;
      }
      while ( v11 != v12 );
    }
    *(_QWORD *)v17 = 0;
    qfree(v10);
  }
  return a1;
}

