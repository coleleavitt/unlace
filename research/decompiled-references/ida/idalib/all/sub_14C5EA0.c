void __fastcall sub_14C5EA0(__int64 *a1)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  char *v6; // rdi
  char *v7; // rax

  v2 = *a1;
  v3 = a1[9];
  v4 = *(unsigned int *)(*a1 + 2712);
  if ( v3 != v4 )
  {
    if ( v3 >= v4 )
    {
      if ( v3 > *(unsigned int *)(v2 + 2716) )
      {
        sub_2237220(v2 + 2704, v2 + 2720, v3, 8);
        v4 = *(unsigned int *)(v2 + 2712);
      }
      v5 = *(_QWORD *)(v2 + 2704);
      v6 = (char *)(v5 + 8 * v4);
      v7 = (char *)(v5 + 8 * v3);
      if ( v6 != v7 )
        memset(v6, 0, 8 * ((unsigned __int64)(v7 - 8 - v6) >> 3) + 8);
    }
    *(_DWORD *)(v2 + 2712) = v3;
    v2 = *a1;
  }
  sub_1417B70(*(_QWORD *)(v2 + 8));
  *((_BYTE *)a1 + 86) = 0;
}
