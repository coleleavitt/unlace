unsigned __int64 __fastcall sub_983BF0(__int64 a1)
{
  bool v1; // zf
  unsigned __int64 v2; // rbp
  _QWORD *v3; // rax
  _QWORD *v4; // r14
  _QWORD *v6; // rax
  __int64 v7; // [rsp+0h] [rbp-68h] BYREF
  _QWORD *v8; // [rsp+8h] [rbp-60h] BYREF
  __m128i v9; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-40h]

  v1 = *(_BYTE *)(a1 + 25) == 0;
  v10 = __readfsqword(0x28u);
  if ( !v1 )
  {
    v8 = nullptr;
    v6 = (_QWORD *)operator new(0x20u);
    v6[1] = a1;
    v6[2] = sub_9830D0;
    *v6 = &off_2B40148;
    v6[3] = 0;
    v9.m128i_i64[0] = (__int64)v6;
    std::thread::_M_start_thread(&v8, &v9, sub_9819D0);
    if ( v9.m128i_i64[0] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9.m128i_i64[0] + 8LL))(v9.m128i_i64[0]);
    if ( *(_QWORD *)(a1 + 40) )
      std::terminate();
    *(_QWORD *)(a1 + 40) = v8;
  }
  if ( *(_QWORD *)(a1 + 168) )
  {
    v2 = 0;
    do
    {
      while ( 1 )
      {
        v7 = a1;
        v4 = *(_QWORD **)(a1 + 192);
        if ( v4 != *(_QWORD **)(a1 + 200) )
          break;
        v9.m128i_i64[0] = (__int64)sub_982A20;
        v9.m128i_i64[1] = 0;
        ++v2;
        sub_983A00(a1 + 184, &v9, &v7);
        if ( v2 >= *(_QWORD *)(a1 + 168) )
          return v10 - __readfsqword(0x28u);
      }
      *v4 = 0;
      v3 = (_QWORD *)operator new(0x20u);
      v3[1] = a1;
      v3[2] = sub_982A20;
      *v3 = &off_2B40148;
      v3[3] = 0;
      v8 = v3;
      std::thread::_M_start_thread(v4, &v8, sub_9819D0);
      if ( v8 )
        (*(void (__fastcall **)(_QWORD *))(*v8 + 8LL))(v8);
      *(_QWORD *)(a1 + 192) += 8LL;
      ++v2;
    }
    while ( v2 < *(_QWORD *)(a1 + 168) );
  }
  return v10 - __readfsqword(0x28u);
}
