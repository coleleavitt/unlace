__int64 __fastcall sub_1748C0(__int64 a1, _DWORD *a2, __int64 a3)
{
  int v3; // eax
  int v5; // esi
  _DWORD *v6; // rax
  __int64 v7; // rdx
  int v9; // eax

  v3 = *(_DWORD *)(a3 + 84);
  if ( v3 == 2 )
  {
    v9 = reg_int_op();
    if ( v9 != -1 )
    {
      *a2 = v9;
      return 1;
    }
    return 0;
  }
  if ( v3 != 3 || !(_QWORD)xmmword_2565B8 )
    return 0;
  v5 = *(_DWORD *)(a3 + 80);
  v6 = (_DWORD *)qword_2565B0;
  v7 = 0;
  while ( *v6 != v5 )
  {
    ++v7;
    v6 += 2;
    if ( v7 == (_QWORD)xmmword_2565B8 )
      return 0;
  }
  *a2 = v6[1];
  return 1;
}

