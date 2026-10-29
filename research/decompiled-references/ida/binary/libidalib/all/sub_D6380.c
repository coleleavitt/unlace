_BOOL8 __fastcall sub_D6380(__int64 a1)
{
  int v1; // edx
  unsigned __int8 v2; // cl
  int v3; // esi
  int *v4; // rdi
  __int64 v5; // rax

  v1 = *(_DWORD *)(a1 + 16);
  v2 = *(_BYTE *)(a1 + 12);
  v3 = *(_DWORD *)(a1 + 24);
  if ( !v1 )
    return sub_D62F0(nullptr, v3, v2);
  v4 = (int *)qword_252590;
  v5 = qword_252590 + ((_QWORD)xmmword_252598 << 8);
  if ( qword_252590 == v5 )
    return sub_D62F0(nullptr, v3, v2);
  while ( v1 != *v4 )
  {
    v4 += 64;
    if ( (int *)v5 == v4 )
      return sub_D62F0(nullptr, v3, v2);
  }
  return sub_D62F0(v4, v3, v2);
}

