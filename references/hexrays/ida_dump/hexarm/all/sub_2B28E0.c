__int64 __fastcall sub_2B28E0(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v3; // r12
  unsigned __int64 v4; // rbx
  const char *v5; // rsi
  unsigned __int64 v6; // rdx
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx

  result = sub_3324A0(a1, *((unsigned int *)a2 + 2));
  v3 = *a2;
  if ( *a2 )
  {
    if ( a2[1] )
    {
      v4 = *(_QWORD *)(v3 + 8);
      if ( v3 != v4 )
      {
        while ( 1 )
        {
LABEL_4:
          sub_3324A0(a1, *(unsigned int *)(v4 + 24));
          v5 = s1;
          if ( *(_QWORD *)(v4 + 40) )
            v5 = *(const char **)(v4 + 32);
          sub_332620(a1, v5);
          result = *(_QWORD *)v4;
          if ( (*(_QWORD *)v4 & 2) != 0 )
            goto LABEL_9;
          v6 = *(_QWORD *)(v4 + 16);
          if ( (*(_BYTE *)v6 & 2) != 0 )
          {
            result &= 0xFFFFFFFFFFFFFFFCLL;
            v7 = *(_QWORD *)result;
            if ( (*(_QWORD *)result & 2) == 0 )
            {
              while ( *(_QWORD *)(result + 16) == v4 )
              {
                v4 = result;
                v8 = v7 & 0xFFFFFFFFFFFFFFFCLL;
                v7 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v7 & 2) != 0 )
                {
                  v4 = v8;
                  if ( v3 != v8 )
                    goto LABEL_4;
                  return result;
                }
                result = v8;
              }
            }
            v4 = result;
            if ( v3 == result )
              return result;
          }
          else
          {
            do
            {
              v4 = v6;
              v6 = *(_QWORD *)(v6 + 8);
            }
            while ( (*(_BYTE *)v6 & 2) == 0 );
LABEL_9:
            if ( v3 == v4 )
              return result;
          }
        }
      }
    }
  }
  return result;
}
