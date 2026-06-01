__int64 __fastcall sub_B219B0(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v5; // ebp
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _DWORD *v9; // rsi
  _DWORD *v10; // rdx
  _DWORD *v11; // rdi

  v5 = sub_B21620(a1, a2);
  result = sub_B21620(a1, a3);
  if ( v5 != (_DWORD)result )
  {
    v7 = *(_QWORD *)(a1 + 96);
    v8 = 4LL * (unsigned int)result;
    v9 = (_DWORD *)(v7 + 4LL * v5);
    v10 = (_DWORD *)(v8 + v7);
    if ( *v10 >= *v9 )
    {
      v8 = 4LL * v5;
      v11 = v9;
      v5 = result;
      v9 = v10;
      v10 = v11;
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 88) + v8) = v5;
    result = (unsigned int)*v10;
    *v9 += result;
  }
  return result;
}

