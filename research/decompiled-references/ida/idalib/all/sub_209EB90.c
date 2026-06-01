void __fastcall sub_209EB90(__int64 a1, int *a2)
{
  unsigned int *v2; // rax
  unsigned int v3; // r8d
  __int64 v4; // r10
  int *v5; // r9
  __int64 v6; // rdx
  unsigned int v7; // ecx
  int *v8; // rdx
  __int64 v9; // rax

  if ( (int *)a1 != a2 )
  {
    v2 = (unsigned int *)(a1 + 16);
    if ( a2 != (int *)(a1 + 16) )
    {
      do
      {
        v3 = *v2;
        v4 = *((_QWORD *)v2 + 1);
        v5 = (int *)(v2 + 4);
        if ( *v2 >= *(_DWORD *)a1 )
        {
          v7 = *(v2 - 4);
          v8 = (int *)(v2 - 4);
          if ( v3 < v7 )
          {
            while ( 1 )
            {
              v9 = *((_QWORD *)v8 + 1);
              v8[4] = v7;
              v7 = *(v8 - 4);
              *((_QWORD *)v8 + 3) = v9;
              if ( v3 >= v7 )
                break;
              v8 -= 4;
            }
            *v8 = v3;
            *((_QWORD *)v8 + 1) = v4;
          }
          else
          {
            *v2 = v3;
            *((_QWORD *)v2 + 1) = v4;
          }
        }
        else
        {
          v6 = ((__int64)v2 - a1) >> 4;
          if ( (__int64)v2 - a1 > 0 )
          {
            do
            {
              v2 -= 4;
              v2[4] = *v2;
              *((_QWORD *)v2 + 3) = *((_QWORD *)v2 + 1);
              --v6;
            }
            while ( v6 );
          }
          *(_DWORD *)a1 = v3;
          *(_QWORD *)(a1 + 8) = v4;
        }
        v2 = (unsigned int *)v5;
      }
      while ( a2 != v5 );
    }
  }
}
