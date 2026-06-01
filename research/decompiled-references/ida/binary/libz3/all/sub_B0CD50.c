__int64 __fastcall sub_B0CD50(__int64 a1, unsigned int *a2)
{
  __int64 *v2; // rbp
  int v3; // ebx
  unsigned int *v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // edx
  int v7; // ecx
  __int64 v8; // r12

  v2 = (__int64 *)a1;
  v3 = -*(_DWORD *)(a1 + 872);
  sub_B0CA60(a1);
  v4 = *(unsigned int **)(a1 + 864);
  if ( v4 )
  {
    v5 = *(v4 - 1);
    if ( (_DWORD)v5 )
    {
      a1 = *(_QWORD *)(a1 + 856);
      a2 = &v4[v5];
      if ( a1 )
      {
        do
        {
          while ( 1 )
          {
            v6 = *v4;
            if ( *v4 >= *(_DWORD *)(a1 - 4) )
              break;
            while ( 1 )
            {
              v7 = *(_DWORD *)(a1 + 4LL * v6);
              if ( v7 < 0 )
                break;
              if ( v7 && *(_BYTE *)(*(_QWORD *)(v2[2] + 8848) + 2 * v6) != 0xFF )
              {
                ++v4;
                v3 += v7;
                if ( a2 == v4 )
                  goto LABEL_8;
                v6 = *v4;
                if ( *v4 < *(_DWORD *)(a1 - 4) )
                  continue;
              }
              goto LABEL_15;
            }
            if ( *(_BYTE *)(*(_QWORD *)(v2[2] + 8848) + 2 * v6) == 1 )
              break;
            ++v4;
            v3 -= v7;
            if ( v4 == a2 )
              goto LABEL_8;
          }
LABEL_15:
          ++v4;
        }
        while ( a2 != v4 );
      }
      else if ( ((4 * (_BYTE)v5) & 4) == 0 || (++v4, a2 != v4) )
      {
        do
          v4 += 2;
        while ( a2 != v4 );
      }
    }
  }
LABEL_8:
  if ( v3 >= 0 )
  {
    v8 = sub_180B150(a1, a2);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_B0AB90(v2, v8);
  }
  return (unsigned int)v3 >> 31;
}

