__int64 __fastcall sub_2FCF50(_QWORD *a1, __int64 *a2, unsigned int a3)
{
  int v3; // ecx
  __int64 v4; // rbx
  __int64 i; // rax

  v3 = 18;
  v4 = a3;
  for ( i = *a2; ; i = *(_QWORD *)(i + 16) )
  {
    if ( !--v3 )
    {
      sub_236900(a1, a2);
      return *(_QWORD *)(*a2 + 16) + 8 * v4;
    }
    if ( *(char *)(i + 3) >= 0 )
      break;
    if ( *(_BYTE *)(i + 3) >> 6 != 2 )
      return *(_QWORD *)(i + 16) + 8LL * a3;
LABEL_7:
    ;
  }
  if ( a3 != *(_DWORD *)(i + 4) )
    goto LABEL_7;
  return i + 8;
}

