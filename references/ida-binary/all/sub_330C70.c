__int64 __fastcall sub_330C70(char *a1, int a2)
{
  unsigned int v2; // r10d
  int v3; // ecx
  int v4; // r8d
  char v5; // al
  char *v6; // rdx
  unsigned int v8; // r9d
  char *v9; // rax
  _BYTE v10[104]; // [rsp+0h] [rbp-78h]
  unsigned __int64 v11; // [rsp+68h] [rbp-10h]

  v2 = 1;
  v3 = 0;
  v4 = 0;
  v11 = __readfsqword(0x28u);
  if ( a2 >= 0 )
  {
    while ( 1 )
    {
      v5 = *a1;
      if ( !*a1 )
        return v2;
      v6 = a1 + 1;
      if ( v5 == 3 )
        break;
      if ( v5 > 3 )
      {
        ++a1;
        if ( v5 != 4 )
          goto LABEL_14;
        goto LABEL_9;
      }
      if ( v5 == 1 )
      {
        v8 = (unsigned __int8)a1[1];
        v9 = a1 + 2;
        if ( (_BYTE)v8 == 40 )
        {
          a1 += 18;
          while ( *v9 )
          {
            if ( ++v9 == a1 )
              goto LABEL_9;
          }
          goto LABEL_25;
        }
        if ( (char)v8 > 40 )
        {
          if ( (unsigned __int8)(v8 - 41) <= 7u )
          {
            a1 += 2;
            if ( (unsigned __int64)v4 <= 0x63 )
              v10[v4++] = v2;
            goto LABEL_9;
          }
LABEL_22:
          if ( (unsigned __int64)v4 <= 0x63 )
            v10[v4++] = v2;
          v2 = v8;
LABEL_25:
          a1 = v9;
          goto LABEL_9;
        }
        ++a1;
        if ( (_BYTE)v8 )
          goto LABEL_22;
LABEL_9:
        if ( v3 > a2 )
          return v2;
      }
      else
      {
        if ( v5 == 2 )
        {
          if ( v4 > 0 )
            v2 = (unsigned __int8)v10[--v4];
          if ( a1[1] )
            a1 += 2;
          else
            ++a1;
          goto LABEL_9;
        }
LABEL_14:
        ++v3;
        a1 = v6;
LABEL_15:
        if ( v3 > a2 )
          return v2;
      }
    }
    if ( a1[1] )
    {
      ++v3;
      a1 += 2;
      goto LABEL_15;
    }
    goto LABEL_14;
  }
  return v2;
}
