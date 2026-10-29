__int64 __fastcall sub_1AF2DE0(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  unsigned int v5; // edx
  unsigned int v6; // ecx

  v1 = *(_QWORD *)(a1 + 8);
  result = 0xFFFFFFFFLL;
  v3 = *(unsigned int *)(v1 + 344);
  if ( (_DWORD)v3 )
  {
    v4 = *(_QWORD *)(v1 + 336) + 6776 * v3 - 6776;
    if ( *(_QWORD *)(v4 + 6768) == *(_QWORD *)(v1 + 328) )
    {
      v5 = *(_DWORD *)(v4 + 8);
      v6 = *(_DWORD *)(v1 + 27504);
      if ( v5 > v6 )
        return v5 - v6 - 1;
    }
  }
  return result;
}
