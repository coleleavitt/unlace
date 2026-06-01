unsigned __int64 __fastcall sub_388120(int a1, __int64 a2, __int64 a3)
{
  const char *v3; // rcx
  const char *v4; // rax

  v3 = &s1;
  if ( *(_QWORD *)(a3 + 8) )
    v3 = *(const char **)a3;
  v4 = &s1;
  if ( *(_QWORD *)(a2 + 8) )
    v4 = *(const char **)a2;
  return sub_388000(a1, v4, v3);
}
