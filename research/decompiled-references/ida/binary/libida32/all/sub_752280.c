__int64 sub_752280()
{
  bool v0; // sf
  unsigned int v1; // eax
  __int64 v2; // rcx
  unsigned int v3; // r8d
  __int64 v4; // rax
  __int64 v5; // rcx
  _BYTE *v6; // rsi

  v0 = dword_2CAA4F0 - 1 < 0;
  v1 = --dword_2CAA4F0;
  if ( v0 )
    __longjmp_chk();
  v2 = v1;
  HIWORD(v3) = 0;
  v4 = 7;
  v5 = 16 * (v2 + 125);
  v6 = &byte_2CA2EE0[v5];
  *(_QWORD *)v6 = "operator";
  *((_DWORD *)v6 + 2) = 0x80000;
  do
    v6[v4] = aConditionalOpe[v4 + 12];
  while ( v4-- != 0 );
  LOWORD(v3) = v5;
  return v3;
}

