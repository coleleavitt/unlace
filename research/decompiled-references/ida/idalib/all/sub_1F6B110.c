void __fastcall sub_1F6B110(__int64 a1, int *a2)
{
  int *v2; // rdx
  int v3; // ecx
  __int64 v4; // r9
  int *v5; // r8
  __int64 v6; // r10
  int *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  int *v10; // rax

  if ( (int *)a1 != a2 )
  {
    v2 = (int *)(a1 + 16);
    if ( a2 != (int *)(a1 + 16) )
    {
      do
      {
        v3 = *v2;
        v4 = *((_QWORD *)v2 + 1);
        v5 = v2 + 4;
        if ( *v2 >= *(_DWORD *)a1 )
        {
          v10 = v2 - 4;
          if ( v3 < *(v2 - 4) )
          {
            while ( 1 )
            {
              v10[4] = *v10;
              *((_QWORD *)v10 + 3) = *((_QWORD *)v10 + 1);
              if ( v3 >= *(v10 - 4) )
                break;
              v10 -= 4;
            }
            *v10 = v3;
            *((_QWORD *)v10 + 1) = v4;
          }
          else
          {
            *v2 = v3;
            *((_QWORD *)v2 + 1) = v4;
          }
        }
        else
        {
          v6 = *(_QWORD *)v2;
          v7 = v2 + 4;
          v8 = (__int64)v2 - a1;
          v9 = ((__int64)v2 - a1) >> 4;
          if ( v8 > 0 )
          {
            do
            {
              v7 -= 4;
              *v7 = *(v7 - 4);
              *((_QWORD *)v7 + 1) = *((_QWORD *)v7 - 1);
              --v9;
            }
            while ( v9 );
          }
          *(_DWORD *)a1 = v6;
          *(_QWORD *)(a1 + 8) = v4;
        }
        v2 = v5;
      }
      while ( a2 != v5 );
    }
  }
}
