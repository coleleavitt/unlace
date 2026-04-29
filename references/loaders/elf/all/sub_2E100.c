__int64 __fastcall sub_2E100(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // rcx

  v2 = *(_QWORD *)(a1 + 232);
  v3 = -1;
  if ( *(_BYTE *)(v2 + 24) )
  {
    v4 = *a2;
    if ( v4 < *(_QWORD *)(v2 + 8) )
      return *(_QWORD *)v2 + v4;
  }
  return v3;
}
