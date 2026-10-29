/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CB930
// Address: 0x00000000000CB930

//----- (00000000000CB930) ----------------------------------------------------
char *__fastcall sub_CB930(const char *a1, char *a2, __int64 a3)
{
  const char *v4; // rbp
  char *v5; // rbx
  char *v6; // r14
  char *v7; // r13
  char v8; // al
  int v9; // ecx
  char *v10; // r12
  __int64 v11; // rsi
  const char *v12; // rbp
  char *v13; // rbp
  __int64 v14; // rsi
  __int64 i; // rsi
  char v16; // cl
  int v17; // eax
  int v18; // eax
  char *v19; // rsi
  int v20; // ecx
  char *v21; // rax
  char v22; // cl
  char *v23; // r12
  char v27[10]; // [rsp+16h] [rbp-42h] BYREF
  unsigned __int64 v28; // [rsp+20h] [rbp-38h]

  v28 = __readfsqword(0x28u);
  if ( a3 < 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1225);
LABEL_70:
    BUG();
  }
  v4 = a1;
  if ( strchr(a1, 37) )
  {
    v5 = &a2[a3];
    if ( v5 <= a2 )
    {
LABEL_63:
      if ( !(_BYTE)under_debugger )
        interr(518);
      goto LABEL_70;
    }
    v6 = v5 - 1;
    v7 = a2;
    while ( 1 )
    {
      v8 = *v4;
      v9 = *v4;
      *v7++ = *v4;
      if ( v7 >= v5 )
      {
        *v6 = 0;
        v7 = v5 - 1;
      }
      v10 = (char *)(v4 + 1);
      if ( v9 == 37 )
      {
        v11 = (unsigned int)*v10;
        if ( (_DWORD)v11 == 37 )
        {
          if ( v7 >= v5 )
            goto LABEL_63;
          v12 = v4 + 2;
          *v7++ = v8;
          if ( v7 >= v5 )
          {
            *v6 = 0;
            v7 = v5 - 1;
          }
        }
        else
        {
          v13 = (char *)(v4 + 1);
          if ( __strchr_chk("+-0123456789*#.", v11, 16) )
          {
            while ( v7 < v5 )
            {
              *v7++ = *v13;
              if ( v7 >= v5 )
              {
                *v6 = 0;
                v7 = v5 - 1;
              }
              v14 = (unsigned int)*++v13;
              if ( !__strchr_chk("+-0123456789*#.", v14, 16) )
                goto LABEL_20;
            }
            goto LABEL_63;
          }
LABEL_20:
          if ( *v13 == 97 )
          {
            if ( v10 != v13 )
            {
              v7 += v10 - v13;
              for ( i = (unsigned int)*v10; __strchr_chk("+-0*#.", i, 7); i = (unsigned int)*++v10 )
              {
                if ( v7 >= v5 )
                  goto LABEL_63;
                *v7++ = *v10;
                if ( v7 >= v5 )
                {
                  *v6 = 0;
                  v7 = v5 - 1;
                }
              }
              v16 = *v10;
              if ( *v10 >= 0 )
              {
                v17 = 0;
                do
                {
                  if ( (unsigned int)(unsigned __int8)v16 - 48 > 9 )
                    break;
                  v17 = v16 + 10 * v17 - 48;
                  v16 = *++v10;
                }
                while ( v16 >= 0 );
                if ( v17 )
                {
                  v18 = 2 * v17;
                  v19 = v27;
                  do
                  {
                    v20 = v18;
                    v18 /= 10;
                    *v19++ = v20 - 10 * v18 + 48;
                  }
                  while ( (unsigned int)(v20 + 9) > 0x12 );
                  *v19 = 0;
                  memrev(v27, v19 - v27);
                  if ( v7 >= v5 )
                  {
LABEL_66:
                    if ( !(_BYTE)under_debugger )
                      interr(520);
                    goto LABEL_70;
                  }
                  if ( v7 == v6 )
                  {
LABEL_42:
                    *v6 = 0;
                    v7 = v5 - 1;
                  }
                  else
                  {
                    v21 = v27;
                    while ( 1 )
                    {
                      v22 = *v21;
                      *v7 = *v21;
                      if ( !v22 )
                        break;
                      ++v21;
                      if ( v6 == ++v7 )
                        goto LABEL_42;
                    }
                  }
                  v16 = *v10;
                }
              }
              if ( __strchr_chk("+-0123456789*#.", (unsigned int)v16, 16) )
              {
                v23 = v10 + 1;
                while ( v7 < v5 )
                {
                  *v7++ = *(v23 - 1);
                  if ( v7 >= v5 )
                  {
                    *v6 = 0;
                    v7 = v5 - 1;
                  }
                  if ( !__strchr_chk("+-0123456789*#.", (unsigned int)*v23++, 16) )
                    goto LABEL_50;
                }
                goto LABEL_63;
              }
            }
LABEL_50:
            if ( v7 >= v5 )
              goto LABEL_66;
            if ( v7 == v6 || (*v7 = 108, v7 + 1 == v6) || (v7[1] = 108, v7 += 2, v7 == v6) )
            {
              *v6 = 0;
              v7 = v5 - 1;
              if ( v6 >= v5 )
                goto LABEL_63;
            }
            else
            {
              *v7 = 0;
              if ( v7 >= v5 )
                goto LABEL_63;
            }
            *v7 = 88;
          }
          else
          {
            if ( v7 >= v5 )
              goto LABEL_63;
            *v7 = *v13;
          }
          if ( ++v7 >= v5 )
          {
            *v6 = 0;
            v7 = v5 - 1;
          }
          v12 = v13 + 1;
        }
        v10 = (char *)v12;
      }
      else if ( !v9 )
      {
        return a2;
      }
      v4 = v10;
      if ( v7 >= v5 )
        goto LABEL_63;
    }
  }
  return (char *)a1;
}
// 33BA0: using guessed type __int64 __strchr_chk(const char *, ...);
// 158B40: using guessed type __int64 under_debugger;
