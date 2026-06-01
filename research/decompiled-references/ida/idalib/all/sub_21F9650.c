bool __fastcall sub_21F9650(_QWORD *a1)
{
  _QWORD *v1; // rsi
  unsigned int v2; // eax
  unsigned int v3; // ecx
  unsigned int v5; // edi
  __int64 v6; // r8
  _QWORD *v7; // rax
  char v8; // di

  v1 = a1 + 1;
  v2 = *(_DWORD *)(*a1 + 8LL);
  if ( v2 + 64 > 0x7F )
    v1 = (_QWORD *)a1[1];
  v3 = v2 + 63;
  if ( v2 + 63 > 0x7F )
  {
    v5 = v3 >> 6;
    v6 = (v3 >> 6) - 1;
    if ( *v1 != -1 )
      return 0;
    v7 = v1 + 1;
    while ( v7 != &v1[v5 - 1] )
    {
      if ( *v7++ != -1 )
        return 0;
    }
    v8 = (_BYTE)v5 << 6;
  }
  else
  {
    if ( v2 <= 1 )
      return 0;
    v6 = 0;
    v8 = 64;
  }
  return (v1[v6] | (-1LL << ((unsigned __int8)v3 - v8))) == -1;
}
