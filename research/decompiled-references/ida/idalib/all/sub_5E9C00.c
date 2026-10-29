__int64 __fastcall sub_5E9C00(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 *v3; // rdi
  __int64 v5; // rax

  v2 = a1[16];
  if ( !v2 )
  {
    v2 = a1[17];
    if ( !v2 )
      v2 = a1[14];
  }
  v3 = *(__int64 **)(v2 + 16);
  if ( !v3 )
  {
    v5 = qalloc_or_throw(24);
    *(_QWORD *)v5 = 0;
    v3 = (__int64 *)v5;
    *(_OWORD *)(v5 + 8) = 0;
    *(_QWORD *)(v2 + 16) = v5;
  }
  sub_538F30(v3, a2, 1);
  return 0;
}
