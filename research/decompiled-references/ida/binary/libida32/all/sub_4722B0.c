__int64 __fastcall sub_4722B0(int *a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  _QWORD *v4; // rbx
  __int64 v6; // rdi
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 (__fastcall *v11)(_QWORD *); // rdx
  unsigned int v12; // r13d
  __int64 v13; // rax
  int v15; // [rsp+0h] [rbp-E8h]
  int v16[2]; // [rsp+8h] [rbp-E0h]
  __int64 (__fastcall **v17)(); // [rsp+10h] [rbp-D8h] BYREF
  __int64 v18; // [rsp+18h] [rbp-D0h]
  int *v19; // [rsp+20h] [rbp-C8h]
  void *v20; // [rsp+28h] [rbp-C0h] BYREF
  __int128 v21; // [rsp+30h] [rbp-B8h]
  __int64 v22; // [rsp+40h] [rbp-A8h]
  int v23; // [rsp+48h] [rbp-A0h]
  void *ptr; // [rsp+50h] [rbp-98h] BYREF
  __int128 v25; // [rsp+58h] [rbp-90h]
  __int64 v26; // [rsp+68h] [rbp-80h]
  int v27; // [rsp+70h] [rbp-78h]
  _QWORD v28[2]; // [rsp+80h] [rbp-68h] BYREF
  __m128i v29; // [rsp+90h] [rbp-58h]
  unsigned __int64 v30; // [rsp+A8h] [rbp-40h]

  v6 = a1[2];
  v15 = a2;
  *(_QWORD *)v16 = a3;
  v30 = __readfsqword(0x28u);
  v17 = &off_2B015F0;
  v18 = 0;
  v19 = nullptr;
  v20 = nullptr;
  v22 = 0;
  v23 = -1;
  ptr = nullptr;
  v26 = 0;
  v27 = -1;
  v21 = 0;
  v25 = 0;
  v18 = switch_dbctx(v6);
  v11 = sub_46AC70;
  v19 = a1;
  v28[0] = &v17;
  v28[1] = 0;
  v29 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)sub_46BE20, (__m128i)(unsigned __int64)sub_46AC70);
  if ( sub_46BE20 )
  {
    v12 = *a4;
    v4 = v28;
    while ( v12 < a4[1] )
    {
      v13 = (*(__int64 (__fastcall **)(int *, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v12);
      if ( v13 )
      {
        if ( !v29.m128i_i64[0] )
          std::__throw_bad_function_call();
        if ( ((unsigned int (__fastcall *)(_QWORD *, __int64))v29.m128i_i64[1])(v28, v13) )
          break;
      }
      v12 = (*(__int64 (__fastcall **)(int *, _QWORD))(*(_QWORD *)a1 + 176LL))(a1, v12);
    }
    if ( v29.m128i_i64[0] )
      ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v29.m128i_i64[0])(v28, v28, 3);
  }
  LOBYTE(v4) = (_QWORD)v25 != 0;
  if ( a2 )
    rangeset_t_swap(
      a2,
      (int)&v20,
      (int)v11,
      v8,
      v9,
      v10,
      a2,
      v16[0],
      (int)v17,
      v18,
      (int)v19,
      (int)v20,
      v21,
      *((void **)&v21 + 1),
      v22,
      v23,
      (int)ptr,
      v25,
      *((__int64 *)&v25 + 1));
  if ( *(_QWORD *)v16 )
    rangeset_t_swap(
      v16[0],
      (int)&ptr,
      (int)v11,
      v8,
      v9,
      v10,
      v15,
      v16[0],
      (int)v17,
      v18,
      (int)v19,
      (int)v20,
      v21,
      *((void **)&v21 + 1),
      v22,
      v23,
      (int)ptr,
      v25,
      *((__int64 *)&v25 + 1));
  v17 = &off_2B015F0;
  if ( ptr )
  {
    *(_QWORD *)&v25 = 0;
    qfree(ptr);
  }
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v20);
  }
  return (unsigned int)v4;
}

