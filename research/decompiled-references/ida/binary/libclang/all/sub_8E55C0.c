__int64 __fastcall sub_8E55C0(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v3; // rdx

  v1 = *a1;
  if ( *((_DWORD *)a1 + 12) != 1 )
    return a1[3] + v1;
  v3 = a1[3];
  if ( v3 )
    v1 *= *(unsigned int *)(v3 + 8);
  return a1[4] + v1;
}

