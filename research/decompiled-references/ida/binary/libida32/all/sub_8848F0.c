__int64 __fastcall sub_8848F0(char *s1)
{
  __int64 result; // rax
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx

  result = 0;
  if ( s1 )
  {
    v2 = strcmp(s1, "ida-pro");
    result = 1;
    if ( v2 )
    {
      v3 = strcmp(s1, "ida-pro-classroom");
      result = 2;
      if ( v3 )
      {
        v4 = strcmp(s1, "ida-home-pc");
        result = 3;
        if ( v4 )
        {
          v5 = strcmp(s1, "ida-home-arm");
          result = 4;
          if ( v5 )
          {
            v6 = strcmp(s1, "ida-home-mips");
            result = 5;
            if ( v6 )
            {
              v7 = strcmp(s1, "ida-home-ppc");
              result = 6;
              if ( v7 )
              {
                v8 = strcmp(s1, "ida-home-riscv");
                result = 7;
                if ( v8 )
                {
                  v9 = strcmp(s1, "ida-free");
                  result = 8;
                  if ( v9 )
                  {
                    v10 = strcmp(s1, "teams-server");
                    result = 9;
                    if ( v10 )
                    {
                      v11 = strcmp(s1, "lumina-server");
                      result = 10;
                      if ( v11 )
                        return strcmp(s1, "license-server") == 0 ? 0xB : 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}

