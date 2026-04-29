__int64 __fastcall sub_B9E80(__int64 a1, __int64 a2, const char *a3, char a4)
{
  const char *v4; // rbp
  char v5; // al
  __int64 v6; // r15
  _UNKNOWN **v7; // rbx
  int v8; // r12d
  unsigned __int64 v10; // rbp
  __int64 v11; // rax

  v4 = a3;
  v5 = *a3;
  if ( *a3 != 106 )
  {
LABEL_2:
    if ( v5 == 95 )
    {
      do
        ++v4;
      while ( *v4 == 95 );
    }
    goto LABEL_4;
  }
  if ( a3[1] == 95 )
  {
    v5 = a3[2];
    v4 = a3 + 2;
    goto LABEL_2;
  }
LABEL_4:
  v6 = *(int *)(a2 + 8);
  v7 = &off_4AECA0;
  v8 = *(_DWORD *)(a2 + 8);
  while ( *((_DWORD *)v7 + 3) != v8 || v6 != *(_QWORD *)(a2 + 32) || strcmp(v4, (const char *)*v7) )
  {
    v7 += 3;
    if ( v7 == (_UNKNOWN **)off_4AEDD8 )
      return 0;
  }
  if ( a4 && !*((_BYTE *)v7 + 17) )
    return 0;
  v10 = *((unsigned int *)v7 + 2);
  if ( get_tinfo_size(0, *(_QWORD *)(*(_QWORD *)(a2 + 24) + 24LL), 0) != *(_DWORD *)(a1 + 84) )
    return 0;
  if ( (unsigned int)v10 <= 0x26 )
  {
    v11 = 0x5400000160LL;
    if ( _bittest64(&v11, v10) )
    {
      if ( get_tinfo_size(0, *(_QWORD *)(*(_QWORD *)(a2 + 24) + 104LL), 0) != *(_DWORD *)(a1 + 84) )
        return 0;
    }
  }
  if ( *((_BYTE *)v7 + 16) )
    *(_DWORD *)(a2 + 280) |= 0x10u;
  *(_DWORD *)(a2 + 284) = *((_DWORD *)v7 + 2);
  return 1;
}
