/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C61D8
// Address: 0x00000000000C61D8

//----- (00000000000C61D8) ----------------------------------------------------
const char *__fastcall sub_C61D8(const char *a1, unsigned __int8 *a2, __int64 a3)
{
  const char *v5; // x22
  unsigned __int8 *v6; // x24
  unsigned __int8 *v7; // x27
  unsigned __int8 *v8; // x25
  unsigned __int8 *v9; // x26
  int v10; // w8
  int v11; // t1
  __int64 v12; // x1
  unsigned __int8 *v13; // x23
  int v15; // w8
  int v17; // w8
  unsigned int v18; // w9
  unsigned int v19; // w10
  int v20; // t1
  char *v21; // x8
  int v22; // w9
  unsigned int v23; // w11
  char *v24; // x8
  int v25; // w9
  unsigned __int8 *v26; // x26
  unsigned int v27; // t1
  char *v28; // x8
  int v29; // w9
  char v31[12]; // [xsp+Ch] [xbp-74h] BYREF
  __int64 v32; // [xsp+18h] [xbp-68h]

  v32 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a3 < 0 )
    goto LABEL_65;
  v5 = a1;
  if ( !strchr(a1, 37) )
    return v5;
  v6 = &a2[a3];
  if ( &a2[a3] <= a2 )
    goto LABEL_59;
  v7 = v6 - 1;
  v8 = a2;
  v9 = (unsigned __int8 *)v5;
  while ( 1 )
  {
    v11 = *v9++;
    v10 = v11;
    *v8++ = v11;
    if ( v8 >= v6 )
    {
      v8 = v6 - 1;
      *v7 = 0;
    }
    if ( v10 != 37 )
    {
      if ( !v10 )
        return (const char *)a2;
      goto LABEL_58;
    }
    v12 = *v9;
    if ( (_DWORD)v12 == 37 )
    {
      if ( v8 >= v6 )
        goto LABEL_59;
      *v8++ = 37;
      v9 = (unsigned __int8 *)(v5 + 2);
      if ( v8 >= v6 )
      {
        *v7 = 0;
        v8 = v6 - 1;
      }
      goto LABEL_58;
    }
    v13 = v9;
    if ( __strchr_chk("+-0123456789*#.", v12, 16) )
      break;
LABEL_19:
    v15 = *v13;
    if ( v15 == 97 )
    {
      if ( v9 != v13 )
      {
        v8 += v9 - v13;
        if ( __strchr_chk("+-0*#.", *v9, 7) )
        {
          while ( v8 < v6 )
          {
            *v8++ = *v9;
            if ( v8 >= v6 )
            {
              v8 = v6 - 1;
              *v7 = 0;
            }
            if ( !__strchr_chk("+-0*#.", *++v9, 7) )
              goto LABEL_26;
          }
          goto LABEL_59;
        }
LABEL_26:
        v17 = (char)*v9;
        if ( (v17 & 0x80000000) == 0 )
        {
          v18 = 0;
          do
          {
            v19 = (unsigned __int8)v17 - 48;
            if ( v19 > 9 )
              break;
            v20 = (char)*++v9;
            LOBYTE(v17) = v20;
            v18 = v19 + 10 * v18;
          }
          while ( (v20 & 0x80000000) == 0 );
          if ( v18 )
          {
            v21 = v31;
            v22 = 2 * v18;
            do
            {
              v23 = v22 + 9;
              *v21++ = (char)v22 % 10 + 48;
              v22 /= 10;
            }
            while ( v23 > 0x12 );
            *v21 = 0;
            memrev(v31, v21 - v31);
            if ( v8 >= v6 )
            {
LABEL_63:
              if ( !under_debugger )
              {
                interr(520);
LABEL_65:
                if ( !under_debugger )
                  interr(1225);
              }
LABEL_67:
              __break(1u);
            }
            if ( v8 == v7 )
            {
LABEL_38:
              v8 = v6 - 1;
              *v7 = 0;
            }
            else
            {
              v24 = v31;
              while ( 1 )
              {
                v25 = (unsigned __int8)*v24;
                *v8 = v25;
                if ( !v25 )
                  break;
                ++v8;
                ++v24;
                if ( v7 == v8 )
                  goto LABEL_38;
              }
            }
            LOBYTE(v17) = *v9;
          }
        }
        if ( __strchr_chk("+-0123456789*#.", (unsigned __int8)v17, 16) )
        {
          v26 = v9 + 1;
          while ( v8 < v6 )
          {
            *v8++ = *(v26 - 1);
            if ( v8 >= v6 )
            {
              v8 = v6 - 1;
              *v7 = 0;
            }
            v27 = *v26++;
            if ( !__strchr_chk("+-0123456789*#.", v27, 16) )
              goto LABEL_46;
          }
          goto LABEL_59;
        }
      }
LABEL_46:
      if ( v8 >= v6 )
        goto LABEL_63;
      if ( v8 == v7 )
      {
LABEL_51:
        v8 = v6 - 1;
        *v7 = 0;
      }
      else
      {
        v28 = "ll";
        while ( 1 )
        {
          v29 = (unsigned __int8)*v28;
          *v8 = v29;
          if ( !v29 )
            break;
          ++v8;
          ++v28;
          if ( v7 == v8 )
            goto LABEL_51;
        }
      }
      if ( v8 >= v6 )
        goto LABEL_59;
      LOBYTE(v15) = 88;
    }
    else if ( v8 >= v6 )
    {
      goto LABEL_59;
    }
    *v8++ = v15;
    if ( v8 >= v6 )
    {
      v8 = v6 - 1;
      *v7 = 0;
    }
    v9 = v13 + 1;
LABEL_58:
    v5 = (const char *)v9;
    if ( v8 >= v6 )
      goto LABEL_59;
  }
  while ( v8 < v6 )
  {
    *v8++ = *v13;
    if ( v8 >= v6 )
    {
      v8 = v6 - 1;
      *v7 = 0;
    }
    if ( !__strchr_chk("+-0123456789*#.", *++v13, 16) )
      goto LABEL_19;
  }
LABEL_59:
  if ( under_debugger )
    goto LABEL_67;
  interr(518);
  return (const char *)a2;
}
// 36CE0: using guessed type __int64 __strchr_chk(const char *, ...);
// 168DF0: using guessed type char under_debugger;
