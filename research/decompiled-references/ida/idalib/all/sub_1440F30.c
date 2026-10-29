_BOOL8 __fastcall sub_1440F30(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r8

  v2 = sub_1440A00(a2, *a1);
  if ( v2 && (v3 = *(_QWORD *)(*a1 + 56), *(char *)(v3 + 3) < 0) )
    return (unsigned int)sub_FBCE00(4u, 0, v2, *(_QWORD *)(*a1 + 64), v3) != 0;
  else
    return 0;
}
