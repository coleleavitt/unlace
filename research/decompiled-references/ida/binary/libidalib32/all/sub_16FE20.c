void __fastcall sub_16FE20(char *src, char *a2)
{
  char *v3; // rbp
  unsigned __int8 v4; // dl
  unsigned int v5; // ebx
  unsigned __int8 v6; // cl
  unsigned __int8 v7; // al
  unsigned __int8 v8; // si
  char *i; // rax
  unsigned int v10; // edx
  __int64 v11; // rdx
  __int16 v12; // r15

  if ( src != a2 )
  {
    v3 = src + 8;
    if ( a2 != src + 8 )
    {
      while ( 1 )
      {
        v5 = *(_DWORD *)v3;
        if ( *(_DWORD *)v3 < *(_DWORD *)src )
          goto LABEL_17;
        v6 = v3[5];
        if ( *(_DWORD *)src < v5 )
        {
          v8 = v3[4];
          goto LABEL_14;
        }
        v7 = src[5];
        if ( v6 < v7 || (v8 = v3[4], v7 >= v6) && v8 < (unsigned __int8)src[4] )
        {
LABEL_17:
          v12 = *((_WORD *)v3 + 2);
          if ( v3 - src <= 8 )
          {
            if ( v3 - src == 8 )
              *(_QWORD *)v3 = *(_QWORD *)src;
          }
          else
          {
            memmove(src + 8, src, v3 - src);
          }
          v3 += 8;
          *(_DWORD *)src = v5;
          *((_WORD *)src + 2) = v12;
          if ( a2 == v3 )
            return;
        }
        else
        {
LABEL_14:
          for ( i = v3; ; *((_QWORD *)i + 1) = v11 )
          {
            v10 = *((_DWORD *)i - 2);
            if ( v5 >= v10 )
            {
              if ( v10 < v5 )
                break;
              v4 = *(i - 3);
              if ( v6 >= v4 && (v4 < v6 || v8 >= (unsigned __int8)*(i - 4)) )
                break;
            }
            v11 = *((_QWORD *)i - 1);
            i -= 8;
          }
          v3 += 8;
          *(_DWORD *)i = v5;
          i[4] = v8;
          i[5] = v6;
          if ( a2 == v3 )
            return;
        }
      }
    }
  }
}

