unsigned __int64 __fastcall sub_485A30(__int64 a1, int *a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v6; // rdi
  unsigned __int64 *v7; // r12
  unsigned __int64 i; // r14
  __int64 v9; // rax
  void *ptr; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v12; // [rsp+18h] [rbp-B0h]
  int *v13; // [rsp+20h] [rbp-A8h]
  __int64 v14; // [rsp+28h] [rbp-A0h]
  unsigned __int64 *v15; // [rsp+30h] [rbp-98h]
  void *v16; // [rsp+38h] [rbp-90h]
  __int128 v17; // [rsp+40h] [rbp-88h]
  __int64 v18; // [rsp+50h] [rbp-78h]
  int v19; // [rsp+58h] [rbp-70h]
  _QWORD v20[2]; // [rsp+60h] [rbp-68h] BYREF
  __m128i v21; // [rsp+70h] [rbp-58h]
  unsigned __int64 v22; // [rsp+88h] [rbp-40h]

  v4 = *(_QWORD *)a2;
  v22 = __readfsqword(0x28u);
  (*(void (**)(void))(v4 + 64))();
  if ( ptr )
  {
    v12 = 0;
    qfree(ptr);
  }
  v6 = a2[2];
  v7 = (unsigned __int64 *)(**(_QWORD **)(a1 + 40) + 16 * a3);
  v14 = a1;
  v12 = 0;
  v13 = nullptr;
  ptr = &off_2B2B6A8;
  v15 = v7;
  v16 = nullptr;
  v18 = 0;
  v19 = -1;
  v17 = 0;
  v12 = switch_dbctx(v6);
  v13 = a2;
  v20[0] = &ptr;
  v20[1] = 0;
  v21 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)sub_4803E0, (__m128i)(unsigned __int64)sub_47F1C0);
  if ( sub_4803E0 )
  {
    for ( i = *v7; i < v7[1]; i = (*(__int64 (__fastcall **)(int *, unsigned __int64))(*(_QWORD *)a2 + 176LL))(a2, i) )
    {
      v9 = (*(__int64 (__fastcall **)(int *, unsigned __int64))(*(_QWORD *)a2 + 168LL))(a2, i);
      if ( v9 )
      {
        if ( !v21.m128i_i64[0] )
          std::__throw_bad_function_call();
        if ( ((unsigned int (__fastcall *)(_QWORD *, __int64))v21.m128i_i64[1])(v20, v9) )
          break;
      }
    }
    if ( v21.m128i_i64[0] )
      ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v21.m128i_i64[0])(v20, v20, 3);
  }
  rangeset_t_add2(a1 + 48);
  ptr = &off_2B2B6A8;
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16);
  }
  return v22 - __readfsqword(0x28u);
}
