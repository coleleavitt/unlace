void __fastcall sub_982700(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  unsigned __int64 v5; // rbp
  __int64 v6; // rdx
  unsigned __int64 v7; // rbp
  __int64 v8; // r13
  __int64 v9; // r12
  _BYTE *v10; // rdi
  _BYTE *v11; // rax
  __int64 *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rsi

  *(_QWORD *)a1 = &off_2B40120;
  *(_BYTE *)(a1 + 25) = a3;
  *(_QWORD *)(a1 + 32) = a4;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_BYTE *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  std::condition_variable::condition_variable((std::condition_variable *)(a1 + 88));
  *(_QWORD *)(a1 + 168) = a2;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  *(_OWORD *)(a1 + 136) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 208) = 0;
  *(_OWORD *)(a1 + 224) = 0;
  std::condition_variable::condition_variable((std::condition_variable *)(a1 + 248));
  v5 = *(_QWORD *)(a1 + 168);
  *(_QWORD *)(a1 + 312) = 0;
  *(_OWORD *)(a1 + 296) = 0;
  if ( v5 >> 60 )
    std::__throw_length_error("vector::reserve");
  v6 = *(_QWORD *)(a1 + 184);
  if ( (*(_QWORD *)(a1 + 200) - v6) >> 3 < v5 )
  {
    v7 = 8 * v5;
    v8 = *(_QWORD *)(a1 + 192) - v6;
    v9 = operator new(v7);
    v10 = *(_BYTE **)(a1 + 192);
    v11 = *(_BYTE **)(a1 + 184);
    if ( v10 != v11 )
    {
      v12 = *(__int64 **)(a1 + 184);
      v13 = v9;
      v14 = v9 + v10 - v11;
      do
      {
        v15 = *v12;
        v13 += 8;
        ++v12;
        *(_QWORD *)(v13 - 8) = v15;
      }
      while ( v14 != v13 );
    }
    if ( v11 )
      operator delete(v11, *(_QWORD *)(a1 + 200) - (_QWORD)v11);
    *(_QWORD *)(a1 + 184) = v9;
    *(_QWORD *)(a1 + 192) = v9 + v8;
    *(_QWORD *)(a1 + 200) = v7 + v9;
  }
}
