/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100081410
// Address: 0x0000000100081410

//----- (0000000100081410) ----------------------------------------------------
char *__fastcall sub_100081410(char *a1, char *a2, __int64 a3)
{
  char *v4; // rbx
  char *v5; // r12
  char *v6; // r14
  char *v7; // r15
  char *v8; // r13
  int v9; // eax
  __int64 v10; // rcx
  char *v11; // r12
  __int64 v12; // rax
  _BYTE *v13; // r12
  char v14; // cl
  int v15; // eax
  int v16; // eax
  __int64 v17; // rsi
  int v18; // ecx
  char *v19; // rax
  char v20; // cl
  char *v21; // r13
  char *v22; // rax
  _BYTE v25[10]; // [rsp+16h] [rbp-3Ah] BYREF

  if ( a3 < 0 )
    goto LABEL_72;
  v4 = a2;
  v5 = a1;
  if ( strchr(a1, 37) )
  {
    v6 = &a2[a3];
    if ( v6 > a2 )
    {
      v7 = v6 - 1;
      while ( 1 )
      {
        v9 = (unsigned __int8)*v5;
        *v4++ = v9;
        if ( v4 >= v6 )
        {
          *v7 = 0;
          v4 = v6 - 1;
        }
        v8 = v5 + 1;
        if ( v9 == 37 )
          break;
        if ( !v9 )
          return a2;
LABEL_7:
        v5 = v8;
        if ( v4 >= v6 )
          goto LABEL_67;
      }
      v10 = (unsigned __int8)*v8;
      if ( v10 == 37 )
      {
        if ( v4 >= v6 )
          goto LABEL_67;
        v11 = v5 + 2;
        *v4++ = 37;
        if ( v4 >= v6 )
        {
          *v7 = 0;
          v4 = v6 - 1;
        }
        goto LABEL_34;
      }
      v12 = 1LL << v10;
      v13 = v5 + 1;
      while ( (unsigned __int8)v10 <= 0x3Fu && (v12 & 0x3FF6C0800000001LL) != 0 )
      {
        if ( v4 >= v6 )
          goto LABEL_67;
        *v4++ = v10;
        if ( v4 >= v6 )
        {
          *v7 = 0;
          v4 = v6 - 1;
        }
        LOBYTE(v10) = *++v13;
        v12 = 1LL << *v13;
      }
      if ( (_BYTE)v10 != 97 )
      {
        if ( v4 >= v6 )
          goto LABEL_67;
        *v4++ = v10;
        if ( v4 < v6 )
          goto LABEL_33;
        goto LABEL_32;
      }
      if ( v8 != v13 )
      {
        v4 += v8 - v13;
        while ( 1 )
        {
          v14 = *v8;
          if ( (unsigned __int8)*v8 > 0x3Fu || ((1LL << v14) & 0x16C0800000001LL) == 0 )
            break;
          if ( v4 >= v6 )
            goto LABEL_67;
          *v4++ = v14;
          if ( v4 >= v6 )
          {
            *v7 = 0;
            v4 = v6 - 1;
          }
          ++v8;
        }
        if ( v14 >= 0 )
        {
          v15 = 0;
          do
          {
            if ( (_DefaultRuneLocale.__runetype[(unsigned __int8)v14] & 0x400) == 0 )
              break;
            v15 = (unsigned __int8)v14 + 10 * v15 - 48;
            v14 = *++v8;
          }
          while ( v14 >= 0 );
          if ( v15 )
          {
            v16 = 2 * v15;
            v17 = 0;
            do
            {
              v18 = v16;
              v16 /= 10;
              v25[v17++] = v18 - 10 * v16 + 48;
            }
            while ( (unsigned int)(v18 + 9) > 0x12 );
            v25[v17] = 0;
            memrev(v25, v17);
            if ( v4 >= v6 )
              goto LABEL_70;
            if ( v4 == v7 )
            {
LABEL_47:
              *v4 = 0;
            }
            else
            {
              v19 = v25;
              while ( 1 )
              {
                v20 = *v19;
                *v4 = *v19;
                if ( !v20 )
                  break;
                ++v19;
                if ( ++v4 == v7 )
                  goto LABEL_47;
              }
            }
            v14 = *v8;
          }
          if ( (unsigned __int8)v14 <= 0x3Fu && ((1LL << v14) & 0x3FF6C0800000001LL) != 0 )
          {
            v21 = v8 + 1;
            while ( v4 < v6 )
            {
              *v4++ = v14;
              if ( v4 >= v6 )
              {
                *v7 = 0;
                v4 = v6 - 1;
              }
              v14 = *v21;
              if ( (unsigned __int8)*v21 <= 0x3Fu )
              {
                ++v21;
                if ( ((1LL << v14) & 0x3FF6C0800000001LL) != 0 )
                  continue;
              }
              goto LABEL_57;
            }
            goto LABEL_67;
          }
        }
      }
LABEL_57:
      if ( v4 >= v6 )
        goto LABEL_70;
      if ( v4 != v7 )
      {
        *v4 = 108;
        v22 = v4 + 1;
        if ( v4 + 1 == v7 )
          goto LABEL_62;
        v4[1] = 108;
        v4 += 2;
      }
      v22 = v4;
LABEL_62:
      *v22 = 0;
      if ( v22 >= v6 )
        goto LABEL_67;
      *v22 = 88;
      v4 = v22 + 1;
      if ( v22 + 1 < v6 )
        goto LABEL_33;
LABEL_32:
      *v7 = 0;
      v4 = v6 - 1;
LABEL_33:
      v11 = v13 + 1;
LABEL_34:
      v8 = v11;
      goto LABEL_7;
    }
LABEL_67:
    if ( under_debugger == 1 )
      goto LABEL_68;
    interr(0x206u);
LABEL_70:
    if ( under_debugger == 1 )
LABEL_68:
      BUG();
    interr(0x208u);
LABEL_72:
    if ( under_debugger != 1 )
      interr(0x4C9u);
    goto LABEL_68;
  }
  return v5;
}
// 1000AE23D: using guessed type char under_debugger;
