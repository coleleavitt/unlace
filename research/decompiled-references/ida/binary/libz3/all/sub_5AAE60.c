__int64 __fastcall sub_5AAE60(__int64 a1, __int64 a2, __m128i a3)
{
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // r14
  __int64 v11; // rbp
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rax
  void (***v15)(void); // rdi

  result = *(_QWORD *)(a1 + 8);
  if ( result )
  {
    if ( *(_DWORD *)(result - 4) <= 1u )
    {
      v7 = *(_QWORD *)(a1 + 16);
      if ( !v7 )
        return result;
      if ( *(_DWORD *)(v7 - 4) <= 1u )
        goto LABEL_6;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 16LL))(
        *(_QWORD *)(a1 + 24),
        *(_QWORD *)(a2 + 104));
      v6 = *(_QWORD *)(a1 + 16);
      if ( !v6 || *(_DWORD *)(v6 - 4) <= 1u )
        goto LABEL_5;
    }
  }
  else
  {
    result = *(_QWORD *)(a1 + 16);
    if ( !result || *(_DWORD *)(result - 4) <= 1u )
      return result;
  }
  sub_5A3680(a2, 1, a3);
  v8 = *(_QWORD *)(a2 + 112);
  if ( v8 )
  {
    v9 = *(unsigned int *)(v8 - 4);
    if ( (_DWORD)v9 )
    {
      v10 = 8 * v9;
      v11 = 0;
      while ( 1 )
      {
        v12 = *(_QWORD *)(v8 + v11);
        if ( v12 )
        {
          v13 = *(_QWORD *)(a1 + 32);
          if ( !v13 )
          {
            v14 = sub_4C4AB0(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 24LL), v12);
            v15 = *(void (****)(void))(a1 + 32);
            v13 = v14;
            if ( (void (***)(void))v14 != v15 )
            {
              sub_4CF1F0(v15);
              *(_QWORD *)(a1 + 32) = v13;
            }
          }
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
        v11 += 8;
        if ( v10 == v11 )
          break;
        v8 = *(_QWORD *)(a2 + 112);
      }
    }
  }
LABEL_5:
  result = *(_QWORD *)(a1 + 8);
  if ( !result )
    return result;
LABEL_6:
  if ( *(_DWORD *)(result - 4) )
  {
    result = *(_QWORD *)(a1 + 16);
    if ( result )
    {
      result = *(unsigned int *)(result - 4);
      if ( (_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 40) + 16LL))(*(_QWORD *)(a1 + 40), a2);
    }
  }
  return result;
}

