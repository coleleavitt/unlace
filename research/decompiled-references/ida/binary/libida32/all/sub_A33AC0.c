__int64 __fastcall sub_A33AC0(__int64 *a1, int a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v7; // rdx
  __int64 v8; // rax

  v2 = *((unsigned int *)a1 + 2);
  v3 = *((unsigned int *)a1 + 3);
  if ( v2 >= v3 )
  {
    if ( v3 < v2 + 1 )
    {
      sub_22134E0(a1, a1 + 2, v2 + 1, 4);
      v2 = *((unsigned int *)a1 + 2);
    }
    *(_DWORD *)(*a1 + 4 * v2) = a2;
    v7 = *a1;
    v8 = (unsigned int)(*((_DWORD *)a1 + 2) + 1);
    *((_DWORD *)a1 + 2) = v8;
    return v7 + 4 * v8 - 4;
  }
  else
  {
    v4 = *a1;
    *(_DWORD *)(v4 + 4 * v2) = a2;
    v5 = (unsigned int)(*((_DWORD *)a1 + 2) + 1);
    *((_DWORD *)a1 + 2) = v5;
    return v4 + 4 * v5 - 4;
  }
}

