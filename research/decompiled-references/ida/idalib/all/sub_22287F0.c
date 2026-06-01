void __fastcall sub_22287F0(_QWORD *a1)
{
  __int64 v1; // r14
  _QWORD *v2; // rbx
  size_t v3; // r13
  __int64 v4; // r12
  size_t v5; // rdx
  size_t v6; // rbp
  int v7; // eax

  v1 = *a1;
  v2 = a1;
  v3 = *(_QWORD *)(*a1 + 16LL);
  while ( 1 )
  {
    v4 = *(v2 - 1);
    v5 = v3;
    v6 = *(_QWORD *)(v4 + 16);
    if ( v6 <= v3 )
      v5 = *(_QWORD *)(v4 + 16);
    if ( !v5 )
      break;
    v7 = memcmp(*(const void **)(v1 + 8), *(const void **)(v4 + 8), v5);
    if ( !v7 )
      break;
    if ( v7 >= 0 )
      goto LABEL_8;
LABEL_10:
    *v2-- = v4;
  }
  if ( v6 != v3 && v6 > v3 )
    goto LABEL_10;
LABEL_8:
  *v2 = v1;
}
