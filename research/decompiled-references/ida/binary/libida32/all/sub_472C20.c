unsigned __int64 __fastcall sub_472C20(int *a1, _DWORD *a2, char a3)
{
  __int64 v4; // rdi
  unsigned int i; // r15d
  __int64 v6; // rax
  __int64 v7; // rax
  char *v8; // rbx
  __int64 v9; // rbp
  char *v10; // r12
  __int64 (__fastcall **v13)(); // [rsp+8h] [rbp-C8h] BYREF
  __int64 v14; // [rsp+10h] [rbp-C0h]
  int *v15; // [rsp+18h] [rbp-B8h]
  _DWORD *v16; // [rsp+20h] [rbp-B0h]
  void *v17; // [rsp+28h] [rbp-A8h]
  __int128 v18; // [rsp+30h] [rbp-A0h]
  void *ptr; // [rsp+40h] [rbp-90h] BYREF
  __int128 v20; // [rsp+48h] [rbp-88h]
  __int64 v21; // [rsp+58h] [rbp-78h]
  int v22; // [rsp+60h] [rbp-70h]
  _QWORD v23[2]; // [rsp+68h] [rbp-68h] BYREF
  __m128i v24; // [rsp+78h] [rbp-58h]
  unsigned __int64 v25; // [rsp+90h] [rbp-40h]

  v4 = a1[2];
  v25 = __readfsqword(0x28u);
  v16 = a2;
  v14 = 0;
  v15 = nullptr;
  v13 = &off_2B01710;
  v17 = nullptr;
  ptr = nullptr;
  v21 = 0;
  v22 = -1;
  v18 = 0;
  v20 = 0;
  v14 = switch_dbctx(v4);
  v15 = a1;
  v23[0] = &v13;
  v23[1] = 0;
  v24 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)sub_46BE20, (__m128i)(unsigned __int64)sub_46AC70);
  if ( sub_46BE20 )
  {
    for ( i = *a2; i < a2[1]; i = (*(__int64 (__fastcall **)(int *, _QWORD))(*(_QWORD *)a1 + 176LL))(a1, i) )
    {
      v6 = (*(__int64 (__fastcall **)(int *, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, i);
      if ( v6 )
      {
        if ( !v24.m128i_i64[0] )
          std::__throw_bad_function_call();
        if ( ((unsigned int (__fastcall *)(_QWORD *, __int64))v24.m128i_i64[1])(v23, v6) )
          break;
      }
    }
    if ( v24.m128i_i64[0] )
      ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v24.m128i_i64[0])(v23, v23, 3);
  }
  if ( (_QWORD)v18 )
  {
    if ( a3 )
      sub_445720(*((_QWORD *)a1 + 4), 1u, a1[3], 0xFFFFFFFF, &ptr);
    v7 = switch_dbctx(a1[2]);
    v8 = (char *)v17;
    v9 = v7;
    v10 = (char *)v17 + 8 * v18;
    if ( v10 != v17 )
    {
      do
      {
        sub_666DD0(*(_QWORD *)(v9 + 1480));
        v8 += 8;
      }
      while ( v10 != v8 );
    }
  }
  v13 = &off_2B01710;
  if ( ptr )
  {
    *(_QWORD *)&v20 = 0;
    qfree(ptr);
  }
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v17);
  }
  return v25 - __readfsqword(0x28u);
}

