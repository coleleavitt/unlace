/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_840A0
// Address: 0x000840A0

//----- (000840A0) --------------------------------------------------------
const char *__fastcall sub_840A0(const char *a1, _BYTE *a2, int a3)
{
  const char *v5; // r5
  _BYTE *v6; // r4
  int v7; // r1
  int v8; // r7
  _BYTE *v10; // [sp+0h] [bp-Ch]
  _BYTE *v11; // [sp+8h] [bp-4h]

  if ( a3 < 0 )
  {
    if ( !under_debugger )
      interr(1225);
LABEL_35:
    __debugbreak();
  }
  v5 = a1;
  if ( strchr(a1, 37) )
  {
    v6 = &a2[a3];
    v10 = a2;
    if ( &a2[a3] <= a2 )
    {
LABEL_28:
      if ( !under_debugger )
        interr(518);
      goto LABEL_35;
    }
    v11 = v6 - 1;
    while ( 1 )
    {
      v7 = *(unsigned __int8 *)v5;
      *a2++ = v7;
      if ( a2 >= v6 )
      {
        a2 = v6 - 1;
        *v11 = 0;
      }
      if ( v7 == 37 )
      {
        v8 = *((unsigned __int8 *)v5 + 1);
        if ( v8 == 37 )
        {
          v5 += 2;
          if ( a2 >= v6 )
            goto LABEL_28;
          *a2++ = 37;
          if ( a2 >= v6 )
          {
            a2 = v6 - 1;
            *v11 = 0;
          }
        }
        else
        {
          if ( memchr("+-0123456789*#.", v8, 0x10u) )
          {
            while ( a2 < v6 )
            {
              *a2++ = v8;
              if ( a2 >= v6 )
              {
                a2 = v6 - 1;
                *v11 = 0;
              }
              v8 = *((unsigned __int8 *)v5++ + 2);
              if ( !memchr("+-0123456789*#.", v8, 0x10u) )
                goto LABEL_15;
            }
            goto LABEL_28;
          }
LABEL_15:
          if ( v8 == 97 )
          {
            if ( a2 >= v6 )
            {
              if ( !under_debugger )
                interr(520);
              goto LABEL_35;
            }
            *a2 = 88;
          }
          else
          {
            if ( a2 >= v6 )
              goto LABEL_28;
            *a2 = v8;
          }
          if ( ++a2 >= v6 )
          {
            a2 = v6 - 1;
            *v11 = 0;
          }
          v5 += 2;
        }
      }
      else
      {
        ++v5;
        if ( !v7 )
          return v10;
      }
      if ( a2 >= v6 )
        goto LABEL_28;
    }
  }
  return v5;
}
// E0550: using guessed type char under_debugger;
