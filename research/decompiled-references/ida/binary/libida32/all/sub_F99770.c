__int64 __fastcall sub_F99770(__int64 *a1, unsigned int a2)
{
  int v2; // edx
  __int64 v3; // rax
  unsigned __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 i; // rdi

  v2 = *((_DWORD *)a1 + 42);
  if ( a2 < v2 + 1499 )
  {
    v3 = *a1;
    if ( a2 > 0x5DA )
    {
      v3 = a1[7];
      a2 -= 1499;
    }
  }
  else
  {
    v3 = a1[14];
    a2 = a2 - 1499 - v2;
  }
  v4 = *(_QWORD *)(v3 + 16);
  v5 = a2;
  for ( i = v3 + 40; a2 >= v4; v5 = a2 )
  {
    v3 = i;
    i += 40;
    a2 -= v4;
    v4 = *(_QWORD *)(i - 24);
  }
  return **(_QWORD **)v3 + *(unsigned int *)(*(_QWORD *)(v3 + 8) + 20 * v5 + 8);
}

