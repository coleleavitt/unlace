__int64 __fastcall sub_1506690(__int64 *a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v6; // rdx
  __int64 v7; // rax

  v1 = *((unsigned int *)a1 + 2);
  v2 = *((unsigned int *)a1 + 3);
  if ( v1 >= v2 )
  {
    if ( v2 < v1 + 1 )
    {
      sub_2237220(a1, a1 + 2, v1 + 1, 4);
      v1 = *((unsigned int *)a1 + 2);
    }
    *(_DWORD *)(*a1 + 4 * v1) = 0;
    v6 = *a1;
    v7 = (unsigned int)(*((_DWORD *)a1 + 2) + 1);
    *((_DWORD *)a1 + 2) = v7;
    return v6 + 4 * v7 - 4;
  }
  else
  {
    v3 = *a1;
    *(_DWORD *)(v3 + 4 * v1) = 0;
    v4 = (unsigned int)(*((_DWORD *)a1 + 2) + 1);
    *((_DWORD *)a1 + 2) = v4;
    return v3 + 4 * v4 - 4;
  }
}
