__int64 __fastcall sub_5AAD60(__int64 a1, _QWORD *a2, __m128i a3)
{
  __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // r13
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rbp
  __int64 v12; // rax
  void (***v13)(void); // rdi

  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 16LL))(v5, a2[13]);
  sub_5A3680((__int64)a2, 0, a3);
  result = a2[14];
  if ( result )
  {
    v7 = *(unsigned int *)(result - 4);
    if ( (_DWORD)v7 )
    {
      v8 = 8 * v7;
      v9 = 0;
      while ( 1 )
      {
        v10 = *(_QWORD *)(result + v9);
        if ( v10 )
        {
          v11 = *(_QWORD *)(a1 + 16);
          if ( !v11 )
          {
            v12 = sub_4C4AC0(*(_QWORD *)(a2[1] + 24LL), v10);
            v13 = *(void (****)(void))(a1 + 16);
            v11 = v12;
            if ( (void (***)(void))v12 != v13 )
            {
              sub_4CF1F0(v13);
              *(_QWORD *)(a1 + 16) = v11;
            }
          }
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
        v9 += 8;
        if ( v8 == v9 )
          break;
        result = a2[14];
      }
    }
  }
  return result;
}

