__int64 __fastcall sub_405EA0(__int64 a1)
{
  int *v2; // rdi
  int v3; // eax
  bool v4; // zf

  sub_4C7330();
  v2 = *(int **)(a1 + 112);
  v3 = *v2 - 1;
  v4 = *v2 == 1;
  *v2 = v3;
  if ( v3 < 0 || v4 )
    sub_47B120(v2);
  return Tcl_Free(a1);
}

