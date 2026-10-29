__int64 __fastcall sub_1AE60B0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  int v5; // r8d

  v1 = *(unsigned int *)(a1 + 344);
  result = 4;
  if ( (_DWORD)v1 )
  {
    v3 = *(_QWORD *)(a1 + 336) + 6776 * v1 - 6776;
    if ( *(_QWORD *)(v3 + 6768) == *(_QWORD *)(a1 + 328) && *(_DWORD *)(v3 + 8) > *(_DWORD *)(a1 + 27504) )
    {
      v4 = sub_1AE5FF0(a1);
      return *(unsigned int *)(v4 + 8LL * v5 + 936);
    }
  }
  return result;
}
