__int64 __fastcall sub_20B10(__int64 a1)
{
  int v1; // eax
  _WORD *v2; // rdx
  int v4; // ebp
  unsigned int v5; // r13d
  int v6; // eax
  _WORD *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdi

  v1 = *(_DWORD *)(a1 + 16);
  if ( !v1 )
    return 0;
  v2 = *(_WORD **)(a1 + 8);
  if ( *v2 != 60 )
    return 0;
  v4 = 0;
  *(_DWORD *)(a1 + 16) = v1 - 1;
  *(_QWORD *)(a1 + 8) = v2 + 1;
  sub_1F840(a1);
LABEL_4:
  v5 = sub_20AA0(a1);
  if ( !(_BYTE)v5 )
    return 0;
  while ( 1 )
  {
    v6 = *(_DWORD *)(a1 + 16);
    if ( v6 )
    {
      v7 = *(_WORD **)(a1 + 8);
      if ( *v7 == 62 )
        break;
    }
    v4 += 2;
    if ( !v4 )
      goto LABEL_4;
    v8 = *(_QWORD *)(a1 + 24);
    if ( v8 <= 1 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 48))(*(_QWORD *)a1, *(_QWORD *)(a1 + 40));
      *(_QWORD *)(a1 + 24) = v8;
      if ( !v8 )
        return 0;
      ++*(_DWORD *)(a1 + 20);
    }
    v9 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 24) = v8 - 2;
    (*(void (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)v9 + 56LL))(v9, ", ", 0);
    v5 = sub_20AA0(a1);
    if ( !(_BYTE)v5 )
      return 0;
  }
  *(_DWORD *)(a1 + 16) = v6 - 1;
  *(_QWORD *)(a1 + 8) = v7 + 1;
  sub_1F840(a1);
  return v5;
}
