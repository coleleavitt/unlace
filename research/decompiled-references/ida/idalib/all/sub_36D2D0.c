__int64 __fastcall sub_36D2D0(_QWORD *a1, __int64 a2)
{
  const char *v2; // rbp
  __int64 v3; // rax

  v2 = haystack;
  if ( a1[6] )
    v2 = (const char *)a1[5];
  v3 = getseg(a1[1]);
  *(_QWORD *)(a2 + 8) = (int)set_segm_class(v3, v2, 0);
  return 0;
}
