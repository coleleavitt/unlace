void __fastcall sub_1F6B7B0(__int64 a1, int *a2)
{
  unsigned int *v2; // rax
  unsigned int v3; // r8d
  int *v4; // r9
  __int64 v5; // r10
  __int64 v6; // rdx
  unsigned int v7; // ecx
  int *v8; // rdx
  char v9; // al

  if ( (int *)a1 != a2 )
  {
    v2 = (unsigned int *)(a1 + 8);
    if ( a2 != (int *)(a1 + 8) )
    {
      do
      {
        v3 = *v2;
        v4 = (int *)(v2 + 2);
        v5 = *(_QWORD *)v2;
        if ( *v2 >= *(_DWORD *)a1 )
        {
          v7 = *(v2 - 2);
          v8 = (int *)(v2 - 2);
          if ( v3 < v7 )
          {
            while ( 1 )
            {
              v9 = *((_BYTE *)v8 + 4);
              v8[2] = v7;
              v7 = *(v8 - 2);
              *((_BYTE *)v8 + 12) = v9;
              if ( v3 >= v7 )
                break;
              v8 -= 2;
            }
            *v8 = v3;
            *((_BYTE *)v8 + 4) = BYTE4(v5);
          }
          else
          {
            *v2 = v3;
            *((_BYTE *)v2 + 4) = BYTE4(v5);
          }
        }
        else
        {
          v6 = ((__int64)v2 - a1) >> 3;
          if ( (__int64)v2 - a1 > 0 )
          {
            do
            {
              v2 -= 2;
              v2[2] = *v2;
              *((_BYTE *)v2 + 12) = *((_BYTE *)v2 + 4);
              --v6;
            }
            while ( v6 );
          }
          *(_DWORD *)a1 = v3;
          *(_BYTE *)(a1 + 4) = BYTE4(v5);
        }
        v2 = (unsigned int *)v4;
      }
      while ( a2 != v4 );
    }
  }
}
