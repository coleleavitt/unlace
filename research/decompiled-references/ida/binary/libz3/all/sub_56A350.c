__int64 __fastcall sub_56A350(__int64 a1)
{
  __int64 result; // rax
  char *v2; // r12
  __int64 v3; // rbp
  __int64 v4; // rbx
  char *v5; // rbp
  __int64 v6; // rdi

  *(_QWORD *)a1 = &off_1C51318;
  result = sub_56A0A0(a1);
  v2 = *(char **)(a1 + 32);
  if ( v2 )
  {
    v3 = *(unsigned int *)(a1 + 40);
    if ( (_DWORD)v3 )
    {
      v4 = *(_QWORD *)(a1 + 32);
      v5 = &v2[32 * v3];
      do
      {
        while ( 1 )
        {
          v6 = *(_QWORD *)(v4 + 8);
          if ( !v6 )
            break;
          v4 += 32;
          sub_186B220((void *)(v6 - 8));
          if ( (char *)v4 == v5 )
            return sub_186B220(v2);
        }
        v4 += 32;
      }
      while ( (char *)v4 != v5 );
    }
    return sub_186B220(v2);
  }
  return result;
}

