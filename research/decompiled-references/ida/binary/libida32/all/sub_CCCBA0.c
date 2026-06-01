__int64 __fastcall sub_CCCBA0(__int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // r8
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
      sub_22134E0(a1, a1 + 2, v2 + 1, 8);
      v2 = *((unsigned int *)a1 + 2);
    }
    *(_QWORD *)(*a1 + 8 * v2) = a2;
    v7 = *a1;
    v8 = (unsigned int)(*((_DWORD *)a1 + 2) + 1);
    *((_DWORD *)a1 + 2) = v8;
    return v7 + 8 * v8 - 8;
  }
  else
  {
    v4 = *a1;
    v5 = (unsigned int)(v2 + 1);
    *(_QWORD *)(v4 + 8 * v2) = a2;
    *((_DWORD *)a1 + 2) = v5;
    return v4 + 8 * v5 - 8;
  }
}

