__int64 __fastcall sub_1587D0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rbp
  char *v5; // r15
  char v6; // al
  bool v8; // r13
  int v9; // ebx
  char *v10; // rax

  v4 = -1;
  if ( *(_QWORD *)(a2 + 16) )
  {
    v5 = *(char **)(a2 + 8);
    v6 = *v5;
    if ( *v5 )
    {
      v8 = a4 == -1;
      v9 = 0;
      do
      {
        if ( (v8 || a4 >= v9) && v6 == 1 )
        {
          if ( v5[1] == 40 )
          {
            v4 = sub_120600(v5);
            if ( a4 == -1 )
              return v4;
            v10 = v5 + 2;
            v5 += 18;
            while ( *v10 )
            {
              if ( v5 == ++v10 )
                goto LABEL_5;
            }
            goto LABEL_4;
          }
        }
        else if ( v6 == 2 )
        {
          v4 = -1;
        }
        v10 = (char *)tag_skipcode();
        if ( v10 == v5 )
        {
          if ( a4 == v9 )
            return v4;
          ++v9;
          v10 += (unsigned int)get_utf8_char() == -1;
        }
LABEL_4:
        v5 = v10;
LABEL_5:
        v6 = *v5;
      }
      while ( *v5 );
    }
  }
  return v4;
}

