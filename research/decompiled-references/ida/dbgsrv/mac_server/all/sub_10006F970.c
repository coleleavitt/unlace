/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006F970
// Address: 0x000000010006F970

//----- (000000010006F970) ----------------------------------------------------
__int64 __fastcall sub_10006F970(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // rax
  void *v4; // r12
  size_t v5; // r15
  __int64 v6; // r13
  _BYTE *v7; // rax
  unsigned __int64 v8; // rcx
  char *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rsi
  void *__src; // [rsp+8h] [rbp-38h] BYREF

  v1 = (*(__int64 (**)(void))(xmmword_1000AE410 + 48))();
  v2 = (*(__int64 (__fastcall **)(__int64))(xmmword_1000AE410 + 24))(v1);
  (*(void (__fastcall **)(__int64))(xmmword_1000AE410 + 72))(v2);
  __src = nullptr;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, void **))(xmmword_1000AE410 + 8))(v2, 3, 0, &__src);
  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  v4 = __src;
  if ( __src )
  {
    v5 = v3;
    if ( v3 > 0 )
    {
      v6 = v3 + 1;
      v7 = qvector_reserve(a1, nullptr, v3 + 1, 1u);
      *(_QWORD *)a1 = v7;
      *(_QWORD *)(a1 + 8) = v6;
      v7[v5] = 0;
      memmove(*(void **)a1, v4, v5);
      v8 = *(_QWORD *)(a1 + 8);
      if ( v8 >= 2 )
      {
        v9 = *(char **)a1;
        v10 = v8 - 1;
        do
        {
          v11 = v10;
          if ( &v9[v10] <= v9 )
            break;
          --v10;
        }
        while ( v9[v11 - 1] == 10 );
        sub_100012FB0(a1, v11);
      }
    }
  }
  (*(void (__fastcall **)(__int64))(xmmword_1000AE410 + 16))(v2);
  return a1;
}
// 1000AE410: using guessed type __int128 xmmword_1000AE410;
