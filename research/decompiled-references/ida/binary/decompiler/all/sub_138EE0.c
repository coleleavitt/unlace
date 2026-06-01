__int64 __fastcall sub_138EE0(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // ebp
  int v3; // eax

  v1 = *(_QWORD *)(a1 + 520);
  if ( !v1 )
    return 0;
  v2 = 0;
  do
  {
    v3 = sub_138DE0(v1);
    v1 = *(_QWORD *)(v1 + 8);
    v2 += v3;
  }
  while ( v1 );
  if ( v2 > 0 )
    sub_666A0(a1, 1u, (__int64)"delete_assertions");
  return (unsigned int)v2;
}
