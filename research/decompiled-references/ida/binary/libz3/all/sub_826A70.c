void __fastcall sub_826A70(_DWORD *a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rax
  int *v5; // rbx
  __int64 v6; // r13
  int v7; // edx

  if ( a1[5] != -2 || a1[4] == -2 )
  {
    v2 = a1[15];
    v3 = (unsigned int)a1[8];
    a1[5] = -2;
    v4 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v4 > (unsigned int)v3 )
      v4 = v3;
    if ( (_DWORD)v4 )
    {
      v5 = a1 + 16;
      v6 = (__int64)&a1[v4 + 16];
      do
      {
        v7 = *v5++;
        sub_7E4390((__int64)a1, a2, v7);
      }
      while ( (int *)v6 != v5 );
    }
  }
}

