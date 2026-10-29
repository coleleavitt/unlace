__int64 __fastcall sub_1805A60(_QWORD *a1)
{
  unsigned __int64 v1; // rbp
  _WORD *v3; // r12
  size_t v4; // rax
  _WORD *v5; // r12
  unsigned __int64 v6; // rax

  v1 = a1[1];
  if ( v1 <= 4 )
    return 0;
  v3 = (_WORD *)*a1;
  if ( *(_WORD *)*a1 != 24415 )
    return 0;
  v4 = j__strlen("__");
  if ( v1 < v4 || v4 && memcmp((char *)v3 + v1 - v4, "__", v4) )
    return 0;
  v5 = v3 + 1;
  v6 = v1 - 4;
  if ( v1 - 4 > v1 - 2 )
    v6 = v1 - 2;
  a1[1] = v6;
  *a1 = v5;
  return 1;
}
