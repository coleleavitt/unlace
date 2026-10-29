__int64 __fastcall sub_7990B0(_BYTE *a1)
{
  _BYTE *v1; // rbx
  __int64 v2; // rax

  if ( (a1[29] & 8) != 0 )
    return 1;
  v1 = a1;
  while ( 1 )
  {
    v2 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 40LL))(a1);
    a1 = (_BYTE *)v2;
    if ( v1 == (_BYTE *)v2 || !v2 )
      break;
    if ( (*(_BYTE *)(v2 + 29) & 8) != 0 )
      return 1;
  }
  return 0;
}

