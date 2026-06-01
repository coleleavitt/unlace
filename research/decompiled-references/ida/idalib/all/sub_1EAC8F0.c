unsigned __int64 __fastcall sub_1EAC8F0(__int64 *a1, _DWORD *a2)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  unsigned __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // rax

  v2 = *a1;
  v3 = (unsigned int)*a2;
  result = *(_QWORD *)(v2 + 8 * v3);
  v5 = *(_QWORD *)(v2 + 8LL * (unsigned int)(v3 + 1));
  *a2 = v3 + 3;
  if ( !(_DWORD)v5 )
    return (unsigned int)result;
  v6 = *(_QWORD *)(v2 + 8LL * (unsigned int)(v3 + 2));
  v7 = ((_DWORD)v5 - 1) & 0x7FFFFFFF;
  if ( !(_DWORD)v6 )
    return (((((v7 << 32) | (unsigned __int64)(unsigned int)result) >> 56) | 0x80) << 56)
         | ((v7 << 32) | (unsigned int)result) & 0xFFFFFFFFFFFFFFLL;
  v8 = ((unsigned __int64)(v7 & 0x7FFFFFFF) << 32) | (unsigned int)result;
  return ((HIBYTE(v8) | ((unsigned __int64)(((_DWORD)v6 - 1) & 0x7FFFFFFF) << 8) | 0x8000000080LL) << 56)
       | v8 & 0xFFFFFFFFFFFFFFLL;
}
