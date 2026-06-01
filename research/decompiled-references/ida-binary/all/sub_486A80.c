void __fastcall sub_486A80(char *src, char *a2)
{
  char *v2; // rbx
  char v3; // r15
  char v4; // al
  unsigned __int64 v5; // r12
  char v6; // cl
  char *i; // rax
  __int64 v8; // rdx

  if ( src != a2 )
  {
    v2 = src + 9;
    if ( a2 != src + 9 )
    {
      while ( 1 )
      {
        v4 = v2[8];
        v5 = *(_QWORD *)v2;
        if ( v4 == src[8] )
        {
          if ( v5 < *(_QWORD *)src )
            goto LABEL_5;
LABEL_10:
          v6 = v2[8];
          for ( i = v2; v6 == *(i - 1); i[17] = i[8] )
          {
            if ( v5 >= *(_QWORD *)(i - 9) )
              goto LABEL_15;
LABEL_12:
            v8 = *(_QWORD *)(i - 9);
            i -= 9;
            *(_QWORD *)(i + 9) = v8;
          }
          if ( v6 )
            goto LABEL_12;
LABEL_15:
          v2 += 9;
          *(_QWORD *)i = v5;
          i[8] = v6;
          if ( a2 == v2 )
            return;
        }
        else
        {
          if ( !v4 )
            goto LABEL_10;
LABEL_5:
          v3 = v2[8];
          if ( v2 - src <= 9 )
          {
            if ( v2 - src == 9 )
            {
              *(_QWORD *)v2 = *(_QWORD *)src;
              v2[8] = src[8];
            }
          }
          else
          {
            memmove(src + 9, src, v2 - src);
          }
          v2 += 9;
          *(_QWORD *)src = v5;
          src[8] = v3;
          if ( a2 == v2 )
            return;
        }
      }
    }
  }
}
