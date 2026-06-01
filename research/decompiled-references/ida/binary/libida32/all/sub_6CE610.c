__int64 __fastcall sub_6CE610(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx
  __int64 v3; // rax

  v1 = *(_QWORD *)(a1 + 96);
  v2 = 0;
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 112);
    if ( v3 )
      return *(unsigned int *)(v3 + 17528);
  }
  return v2;
}

