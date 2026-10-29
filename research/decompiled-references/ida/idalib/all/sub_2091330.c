__int64 __fastcall sub_2091330(__int64 a1, unsigned int a2)
{
  unsigned __int8 *v2; // rcx
  int v3; // eax
  __int64 result; // rax
  unsigned int v5; // edx

  v2 = *(unsigned __int8 **)(*(_QWORD *)(a1 - 32LL * (*(_DWORD *)(a1 + 4) & 0x7FFFFFF)) + 24LL);
  v3 = *v2;
  if ( (_BYTE)v3 == 4 )
    return *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v2 + 16) + 8LL * a2) + 128LL);
  v5 = v3 - 5;
  result = 0;
  if ( v5 > 0x20 )
    return *((_QWORD *)v2 + 16);
  return result;
}
