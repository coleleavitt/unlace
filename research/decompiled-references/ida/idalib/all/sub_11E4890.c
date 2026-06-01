__int64 __fastcall sub_11E4890(__int64 a1)
{
  char *v1; // rbp
  size_t v2; // rax

  v1 = getenv("RC_DEBUG_PREFIX_MAP");
  *(_QWORD *)a1 = a1 + 16;
  if ( v1 )
  {
    v2 = strlen(v1);
    sub_11E46A0((_QWORD *)a1, v1, (__int64)&v1[v2]);
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
    *(_BYTE *)(a1 + 16) = 0;
  }
  return a1;
}
