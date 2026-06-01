__int64 __fastcall sub_9EBE30(int a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // r14
  unsigned int v6; // ebx
  unsigned int v7; // eax

  v3 = *a2;
  v4 = *a2 + 40LL * *((unsigned int *)a2 + 2);
  if ( v4 == *a2 )
  {
    return (unsigned int)-1;
  }
  else
  {
    v6 = -1;
    do
    {
      v7 = sub_9EBD00(a1, *(_QWORD *)(v3 + 32), a3);
      if ( v6 > v7 )
        v6 = v7;
      if ( !v6 )
        break;
      v3 += 40;
    }
    while ( v3 != v4 );
  }
  return v6;
}

