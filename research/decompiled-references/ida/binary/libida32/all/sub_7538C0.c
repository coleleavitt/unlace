void __fastcall sub_7538C0(char *src, char *a2)
{
  char *v2; // rbx
  char v3; // r15
  char v4; // al
  unsigned int v5; // r12d
  char v6; // cl
  char *i; // rax
  int v8; // edx

  if ( src != a2 )
  {
    v2 = src + 5;
    if ( a2 != src + 5 )
    {
      while ( 1 )
      {
        v4 = v2[4];
        v5 = *(_DWORD *)v2;
        if ( v4 == src[4] )
        {
          if ( v5 < *(_DWORD *)src )
            goto LABEL_5;
LABEL_10:
          v6 = v2[4];
          for ( i = v2; v6 == *(i - 1); i[9] = i[4] )
          {
            if ( v5 >= *(_DWORD *)(i - 5) )
              goto LABEL_15;
LABEL_12:
            v8 = *(_DWORD *)(i - 5);
            i -= 5;
            *(_DWORD *)(i + 5) = v8;
          }
          if ( v6 )
            goto LABEL_12;
LABEL_15:
          v2 += 5;
          *(_DWORD *)i = v5;
          i[4] = v6;
          if ( a2 == v2 )
            return;
        }
        else
        {
          if ( !v4 )
            goto LABEL_10;
LABEL_5:
          v3 = v2[4];
          if ( v2 - src <= 5 )
          {
            if ( v2 - src == 5 )
            {
              *(_DWORD *)v2 = *(_DWORD *)src;
              v2[4] = src[4];
            }
          }
          else
          {
            memmove(src + 5, src, v2 - src);
          }
          v2 += 5;
          *(_DWORD *)src = v5;
          src[4] = v3;
          if ( a2 == v2 )
            return;
        }
      }
    }
  }
}

