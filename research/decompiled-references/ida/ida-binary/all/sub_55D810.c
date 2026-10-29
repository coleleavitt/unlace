__int64 __fastcall sub_55D810(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 result; // rax
  int v4; // edx

  v1 = *(unsigned int *)(a1 + 164);
  if ( (_DWORD)v1 != *(_DWORD *)(a1 + 160)
    && (_DWORD)v1
    && (v2 = *(_QWORD *)(a1 + 96) + 24 * v1, *(_DWORD *)(a1 + 56) == *(_DWORD *)(v2 + 16)) )
  {
    v4 = *(_DWORD *)(v2 - 4);
    result = *(_QWORD *)(v2 - 16);
    *(_DWORD *)(a1 + 80) = v4;
    *(_QWORD *)(a1 + 84) = result;
  }
  else
  {
    *(_QWORD *)(a1 + 80) = *(_QWORD *)(a1 + 56);
    result = *(unsigned int *)(a1 + 64);
    *(_DWORD *)(a1 + 88) = result;
  }
  return result;
}
