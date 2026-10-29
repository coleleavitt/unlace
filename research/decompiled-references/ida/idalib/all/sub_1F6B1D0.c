void __fastcall sub_1F6B1D0(__int64 a1, int *a2)
{
  int *v2; // rax
  unsigned __int64 v3; // r9
  int *i; // rdx
  unsigned int v5; // ecx
  unsigned int v6; // r8d
  int *v7; // r9
  __int64 v8; // r10
  __int64 v9; // rcx
  int *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx

  if ( (int *)a1 != a2 )
  {
    v2 = (int *)(a1 + 16);
    if ( a2 != (int *)(a1 + 16) )
    {
      do
      {
        while ( 1 )
        {
          v6 = *v2;
          if ( (unsigned int)*v2 < *(_DWORD *)a1 )
            break;
          v3 = *((_QWORD *)v2 + 1);
          if ( v6 == *(_DWORD *)a1 && *(_QWORD *)(a1 + 8) > v3 )
            break;
          for ( i = v2; ; *((_QWORD *)i + 3) = v12 )
          {
            v5 = *(i - 4);
            if ( v6 >= v5 && (v6 != v5 || *((_QWORD *)i - 1) <= v3) )
              break;
            *i = v5;
            v12 = *((_QWORD *)i - 1);
            i -= 4;
          }
          *((_QWORD *)i + 1) = v3;
          *i = v6;
          v2 += 4;
          if ( a2 == v2 )
            return;
        }
        v7 = v2 + 4;
        v8 = *((_QWORD *)v2 + 1);
        v9 = (__int64)v2 - a1;
        v10 = v2 + 4;
        v11 = v9 >> 4;
        if ( v9 > 0 )
        {
          do
          {
            v10 -= 4;
            *v10 = *(v10 - 4);
            *((_QWORD *)v10 + 1) = *((_QWORD *)v10 - 1);
            --v11;
          }
          while ( v11 );
        }
        *(_DWORD *)a1 = v6;
        v2 = v7;
        *(_QWORD *)(a1 + 8) = v8;
      }
      while ( a2 != v7 );
    }
  }
}
