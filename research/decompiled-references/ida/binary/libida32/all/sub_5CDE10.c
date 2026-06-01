__int64 __fastcall sub_5CDE10(_QWORD *a1, const char *a2)
{
  __int64 v2; // rbx
  __int64 *v3; // rdi
  __int64 v5; // rax

  v2 = a1[15];
  if ( !v2 )
  {
    v2 = a1[16];
    if ( !v2 )
      v2 = a1[13];
  }
  v3 = *(__int64 **)(v2 + 16);
  if ( !v3 )
  {
    v5 = qalloc_or_throw(24, a2);
    *(_QWORD *)v5 = 0;
    v3 = (__int64 *)v5;
    *(_OWORD *)(v5 + 8) = 0;
    *(_QWORD *)(v2 + 16) = v5;
  }
  sub_5203F0(v3, (__int64)a2, 1);
  return 0;
}

