__int64 __fastcall sub_689C80(__int64 a1)
{
  std::_V2 **v2; // rax
  std::_V2 *v3; // r12
  __int64 v4; // rax
  __m128i **v5; // r13
  __m128i *v6; // rbp
  void (__fastcall *v7)(__m128i *); // rax
  void *v8; // rdi
  void *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdi
  std::_V2 *v12; // rdi
  std::_V2 *v14; // [rsp+8h] [rbp-30h] BYREF

  v2 = (std::_V2 **)(*(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)(a1 + 40) - 8);
  v3 = *v2;
  *v2 = nullptr;
  v4 = (unsigned int)(*(_DWORD *)(a1 + 40) - 1);
  v5 = (__m128i **)(*(_QWORD *)(a1 + 32) + 8 * v4);
  *(_DWORD *)(a1 + 40) = v4;
  v6 = *v5;
  if ( *v5 )
  {
    v7 = *(void (__fastcall **)(__m128i *))(v6->m128i_i64[0] + 8);
    if ( v7 == sub_689960 )
    {
      v8 = (void *)v6[6].m128i_i64[1];
      v6->m128i_i64[0] = (__int64)&off_47D01C0;
      if ( v8 )
        operator delete(v8, v6[7].m128i_i64[1] - (_QWORD)v8);
      v9 = (void *)v6[5].m128i_i64[0];
      if ( v9 )
        operator delete(v9, v6[6].m128i_i64[0] - (_QWORD)v9);
      sub_62FED0(v6);
      operator delete(v6, 0xB0u);
    }
    else
    {
      v7(*v5);
    }
  }
  *v5 = nullptr;
  v10 = *(unsigned int *)(a1 + 40);
  if ( (_DWORD)v10 )
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v10 - 8) + 8LL;
  else
    v11 = *(_QWORD *)(a1 + 24);
  v14 = v3;
  sub_631F70(v11, (__int64 *)&v14);
  v12 = v14;
  if ( v14 )
    (*(void (__fastcall **)(std::_V2 *))(*(_QWORD *)v14 + 8LL))(v14);
  std::_V2::system_category(v12);
  return 0;
}

