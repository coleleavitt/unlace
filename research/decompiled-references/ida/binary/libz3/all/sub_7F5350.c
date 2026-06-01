__int64 __fastcall sub_7F5350(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // r10
  __int64 v5; // rax
  unsigned __int64 v6; // r8
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 i; // rax
  int v13; // ecx
  int v15; // eax

  if ( a2 && !*(_WORD *)(a2 + 4) )
  {
    v3 = *(_QWORD *)(a1 + 16);
    v4 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 16LL);
    v5 = *(unsigned int *)(a1 + 24);
    if ( v4 )
    {
      if ( (*(_QWORD *)(*(_QWORD *)(a2 + 16) + 16LL) & 7LL) == 1 )
        v6 = v4 >> 3;
      else
        LODWORD(v6) = *(_DWORD *)(v4 - 8);
    }
    else
    {
      LODWORD(v6) = -1640531495;
    }
    v7 = v5 - 1;
    v8 = 24 * v5;
    v9 = v3 + v8;
    v10 = 24LL * ((unsigned int)v6 & v7);
    v11 = v3 + v10;
    if ( v10 != v8 )
    {
      for ( i = v3 + v10; v9 != i; i += 24 )
      {
        v13 = *(_DWORD *)(i + 4);
        if ( v13 == 2 )
        {
          if ( (_DWORD)v6 == *(_DWORD *)i && *(_QWORD *)(i + 8) == v4 )
            return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(i + 16) + 16LL))(*(_QWORD *)(i + 16), a2);
        }
        else if ( !v13 )
        {
          return 0;
        }
      }
    }
    for ( ; v11 != v3; v3 += 24 )
    {
      v15 = *(_DWORD *)(v3 + 4);
      if ( v15 == 2 )
      {
        if ( (_DWORD)v6 == *(_DWORD *)v3 && v4 == *(_QWORD *)(v3 + 8) )
        {
          i = v3;
          return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(i + 16) + 16LL))(*(_QWORD *)(i + 16), a2);
        }
      }
      else if ( !v15 )
      {
        return 0;
      }
    }
  }
  return 0;
}

