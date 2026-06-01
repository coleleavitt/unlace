unsigned __int64 __fastcall sub_17A2EE0(__int64 a1, char *a2, unsigned __int64 a3)
{
  char *v4; // rbp
  unsigned __int64 result; // rax
  unsigned int v6; // r13d
  unsigned int v7; // eax
  bool v8; // zf
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax

  v4 = a2;
  result = sub_1CB3C80();
  if ( a2 )
  {
    v6 = result;
    if ( a2[8] < 0 )
    {
      do
      {
        if ( a3 )
        {
          v9 = a3;
          while ( 1 )
          {
            v10 = sub_B8C1B0(v9);
            v11 = sub_B8BFE0(v10);
            if ( v11 )
            {
              v7 = sub_BBD7B0(v11) + 1;
              v8 = v7 == v6;
              if ( v7 <= v6 )
                break;
            }
            v9 = sub_B8ED10(v9);
            if ( !v9 )
            {
              result = a3;
              a3 = 0;
              goto LABEL_7;
            }
          }
          result = a3;
          a3 = v9;
          if ( v8 )
          {
            result = sub_B8ED10(v9);
            a3 = result;
          }
        }
        else
        {
          result = 0;
        }
LABEL_7:
        *((_QWORD *)v4 + 45) = result;
        v4 = *(char **)v4;
        --v6;
      }
      while ( v4 && v4[8] < 0 );
    }
  }
  return result;
}
