unsigned __int64 __fastcall sub_471230(__int64 a1, int *a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  _DWORD *v8; // r12
  unsigned int i; // r14d
  __int64 v10; // rax
  void *ptr; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v13; // [rsp+18h] [rbp-B0h]
  int *v14; // [rsp+20h] [rbp-A8h]
  __int64 v15; // [rsp+28h] [rbp-A0h]
  _DWORD *v16; // [rsp+30h] [rbp-98h]
  void *v17; // [rsp+38h] [rbp-90h]
  __int128 v18; // [rsp+40h] [rbp-88h]
  __int64 v19; // [rsp+50h] [rbp-78h]
  int v20; // [rsp+58h] [rbp-70h]
  _QWORD v21[2]; // [rsp+60h] [rbp-68h] BYREF
  __m128i v22; // [rsp+70h] [rbp-58h]
  unsigned __int64 v23; // [rsp+88h] [rbp-40h]

  v4 = *(_QWORD *)a2;
  v23 = __readfsqword(0x28u);
  (*(void (**)(void))(v4 + 64))();
  if ( ptr )
  {
    v13 = 0;
    qfree(ptr);
  }
  v6 = a2[2];
  v7 = **(_QWORD **)(a1 + 40);
  v15 = a1;
  v13 = 0;
  v8 = (_DWORD *)(v7 + 8 * a3);
  v14 = nullptr;
  ptr = &off_2B016E8;
  v16 = v8;
  v17 = nullptr;
  v19 = 0;
  v20 = -1;
  v18 = 0;
  v13 = switch_dbctx(v6);
  v14 = a2;
  v21[0] = &ptr;
  v21[1] = 0;
  v22 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)sub_46BE20, (__m128i)(unsigned __int64)sub_46AC70);
  if ( sub_46BE20 )
  {
    for ( i = *v8; i < v8[1]; i = (*(__int64 (__fastcall **)(int *, _QWORD))(*(_QWORD *)a2 + 176LL))(a2, i) )
    {
      v10 = (*(__int64 (__fastcall **)(int *, _QWORD))(*(_QWORD *)a2 + 168LL))(a2, i);
      if ( v10 )
      {
        if ( !v22.m128i_i64[0] )
          std::__throw_bad_function_call();
        if ( ((unsigned int (__fastcall *)(_QWORD *, __int64))v22.m128i_i64[1])(v21, v10) )
          break;
      }
    }
    if ( v22.m128i_i64[0] )
      ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v22.m128i_i64[0])(v21, v21, 3);
  }
  rangeset_t_add2(a1 + 48);
  ptr = &off_2B016E8;
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v17);
  }
  return v23 - __readfsqword(0x28u);
}

