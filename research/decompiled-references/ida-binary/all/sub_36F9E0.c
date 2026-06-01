__int64 __fastcall sub_36F9E0(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdx
  char *v3; // r8
  __int64 v4; // rdx
  char *v5; // r9
  char *v6; // rax
  __int64 i; // rdx
  char *v8; // rcx

  v2 = *(_QWORD *)(a1 + 208);
  if ( a2 == -1 || !v2 )
    return -1;
  v3 = *(char **)(a1 + 200);
  v4 = 16 * v2;
  v5 = &v3[v4];
  v6 = v3;
  for ( i = v4 >> 4; i > 0; i >>= 1 )
  {
    while ( 1 )
    {
      v8 = &v6[16 * (i >> 1)];
      if ( *(_QWORD *)v8 >= a2 )
        break;
      v6 = v8 + 16;
      i = i - 1 - (i >> 1);
      if ( i <= 0 )
        goto LABEL_7;
    }
  }
LABEL_7:
  if ( v5 == v6 || v3 != v6 && *(_QWORD *)v6 != a2 )
    v6 -= 16;
  return (v6 - v3) >> 4;
}
