void __fastcall sub_66F720(char *src, char *a2)
{
  char *v2; // rbp
  char *v3; // r15
  unsigned int v4; // ebx
  __int64 v5; // r14
  char *v6; // rax
  char *v7; // rdx

  if ( src != a2 )
  {
    v2 = src + 12;
    if ( a2 != src + 12 )
    {
      v3 = &src[((a2 - 24 - src) & 0xFFFFFFFFFFFFFFFCLL) + 24];
      do
      {
        while ( 1 )
        {
          v4 = *(_DWORD *)v2;
          v5 = *(_QWORD *)(v2 + 4);
          if ( *(_DWORD *)v2 < *(_DWORD *)src )
            break;
          v6 = v2 - 12;
          if ( v4 >= *((_DWORD *)v2 - 3) )
          {
            *(_DWORD *)v2 = v4;
            *(_QWORD *)(v2 + 4) = v5;
          }
          else
          {
            do
            {
              *(_QWORD *)(v6 + 12) = *(_QWORD *)v6;
              *((_DWORD *)v6 + 5) = *((_DWORD *)v6 + 2);
              v7 = v6;
              v6 -= 12;
            }
            while ( v4 < *(_DWORD *)v6 );
            *(_DWORD *)v7 = v4;
            *(_QWORD *)(v7 + 4) = v5;
          }
          v2 += 12;
          if ( v2 == v3 )
            return;
        }
        if ( v2 - src <= 12 )
        {
          if ( v2 - src == 12 )
          {
            *(_QWORD *)v2 = *(_QWORD *)src;
            *((_DWORD *)v2 + 2) = *((_DWORD *)src + 2);
          }
        }
        else
        {
          memmove(src + 12, src, v2 - src);
        }
        v2 += 12;
        *(_DWORD *)src = v4;
        *(_QWORD *)(src + 4) = v5;
      }
      while ( v2 != v3 );
    }
  }
}

