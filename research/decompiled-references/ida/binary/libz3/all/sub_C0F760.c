__int64 __fastcall sub_C0F760(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // ebp
  __int64 i; // r12
  int v4; // eax

  v1 = *(_QWORD *)(a1 + 936);
  if ( !v1 )
    return 0;
  v2 = 0;
  for ( i = v1 + 24LL * *(unsigned int *)(v1 - 4); v1 != i; v2 += v4 )
  {
    v4 = sub_167E6B0(*(_QWORD *)(v1 + 8));
    v1 += 24;
  }
  return v2;
}

