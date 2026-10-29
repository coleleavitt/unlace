__int64 __fastcall sub_E4F350(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // r8
  int v6; // esi
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  __int64 result; // rax
  int v10; // esi
  int i; // eax

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  v4 = v3;
  if ( (*(_BYTE *)(a1 + 88) & 1) != 0 )
  {
    v5 = a1 + 96;
    v6 = 3;
  }
  else
  {
    v10 = *(_DWORD *)(a1 + 104);
    v5 = *(_QWORD *)(a1 + 96);
    if ( !v10 )
      return 0;
    v6 = v10 - 1;
  }
  v7 = v6 & (((unsigned int)v3 >> 9) ^ ((unsigned int)v3 >> 4));
  v8 = (_QWORD *)(v5 + 16 * v7);
  if ( v3 == *v8 )
    return v8[1];
  result = 0;
  if ( *v8 != -4096 )
  {
    for ( i = 1; ; ++i )
    {
      LODWORD(v7) = v6 & (i + v7);
      v8 = (_QWORD *)(v5 + 16LL * (unsigned int)v7);
      if ( v4 == *v8 )
        break;
      if ( *v8 == -4096 )
        return 0;
    }
    return v8[1];
  }
  return result;
}

