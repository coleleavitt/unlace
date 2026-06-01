/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_440448
// Address: 0x0000000000440448

//----- (0000000000440448) ----------------------------------------------------
__int64 __fastcall sub_440448(const char *a1, const char *a2, __int64 a3, __int64 a4, char a5)
{
  size_t v8; // x0
  const char *v9; // x19
  int v10; // w1
  int v11; // w0
  const char *v12; // x20
  unsigned __int64 v13; // x19
  const char *v14; // x0
  int v15; // w4
  int v16; // w5
  int v17; // w2
  unsigned int v18; // w1
  int v19; // w19
  unsigned int v20; // w19
  int v21; // w1
  int v23; // w1
  int v24; // w3
  int v25; // w27
  __int64 v26; // x19
  const char *v27; // x27
  size_t v28; // x24
  int v29; // w1
  bool v30; // zf
  int v31; // w1
  int v32; // t1
  bool v33; // zf
  void *ptr; // [xsp+70h] [xbp-20h] BYREF
  __int64 v36; // [xsp+78h] [xbp-18h]
  __int64 v37; // [xsp+80h] [xbp-10h]

  if ( !a2 )
    return 0;
  ptr = nullptr;
  v36 = 0;
  v37 = 0;
  sub_40CD68((__int64)&ptr, "static %s(){", a1);
  v8 = strlen(a2);
  v9 = &a2[v8];
  if ( a2 >= &a2[v8] )
  {
LABEL_8:
    if ( a2 == v9 )
      goto LABEL_28;
    v10 = *((unsigned __int8 *)v9 - 1);
    goto LABEL_10;
  }
  v10 = *((unsigned __int8 *)v9 - 1);
  v11 = v10;
  if ( (v10 & 0x80) == 0 )
  {
    while ( isspace(v11) )
    {
      if ( a2 == --v9 )
        goto LABEL_28;
      v11 = *((unsigned __int8 *)v9 - 1);
      v10 = v11;
      if ( (v11 & 0x80) != 0 )
        goto LABEL_10;
    }
    goto LABEL_8;
  }
LABEL_10:
  if ( v10 == 125 )
    goto LABEL_28;
  v12 = a2;
  v13 = (unsigned __int64)&v9[-(v10 == 59)];
  if ( (unsigned __int64)a2 >= v13 )
    goto LABEL_18;
  v14 = a2;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  do
  {
    v18 = *(unsigned __int8 *)v14;
    if ( v17 )
    {
      if ( v18 == v17 )
      {
        ++v14;
        v17 = 0;
        continue;
      }
      if ( v18 != 92 )
        goto LABEL_41;
      if ( !v14[1] )
        break;
      goto LABEL_61;
    }
    if ( v18 == 41 )
    {
      --v16;
      ++v14;
      if ( v16 < 0 )
        v15 = 1;
    }
    else if ( v18 <= 0x29 )
    {
      if ( v18 != 39 )
      {
        if ( v18 > 0x27 )
        {
          ++v16;
          ++v14;
          continue;
        }
        if ( v18 != 34 )
          goto LABEL_41;
      }
      v17 = *(unsigned __int8 *)v14++;
    }
    else
    {
      if ( v18 == 59 )
        goto LABEL_53;
      if ( v18 > 0x3B )
      {
        if ( v18 == 123 )
        {
          ++v14;
          v12 = nullptr;
          continue;
        }
        if ( v18 != 125 )
        {
LABEL_41:
          ++v14;
          continue;
        }
LABEL_53:
        v12 = v14 + 1;
        v15 = 0;
        ++v14;
        v16 = 0;
        continue;
      }
      if ( v18 != 47 )
        goto LABEL_41;
      v21 = *((unsigned __int8 *)v14 + 1);
      if ( v21 == 47 )
      {
        v29 = *((unsigned __int8 *)v14 + 2);
        v14 += 2;
        if ( v29 )
          v30 = v29 == 10;
        else
          v30 = 1;
        if ( !v30 )
        {
          do
          {
            v32 = *(unsigned __int8 *)++v14;
            v31 = v32;
            if ( v32 )
              v33 = v31 == 10;
            else
              v33 = 1;
          }
          while ( !v33 );
        }
      }
      else
      {
        if ( v21 != 42 )
          goto LABEL_41;
        v23 = *((unsigned __int8 *)v14 + 2);
        v14 += 2;
        if ( v23 )
        {
          while ( 1 )
          {
            v24 = *((unsigned __int8 *)v14 + 1);
            if ( v23 == 42 && v24 == 47 )
              break;
            ++v14;
            v23 = v24;
            if ( !v24 )
              goto LABEL_42;
          }
LABEL_61:
          v14 += 2;
        }
      }
    }
LABEL_42:
    ;
  }
  while ( v13 > (unsigned __int64)v14 );
  if ( ((v12 != nullptr) & (v15 ^ 1)) != 0 )
  {
LABEL_18:
    v19 = *(unsigned __int8 *)v12;
LABEL_19:
    while ( (v19 & 0x80) == 0 )
    {
      if ( !isspace(v19) )
        break;
      v19 = *(unsigned __int8 *)++v12;
    }
    if ( v19 == 47 )
    {
      v19 = *((unsigned __int8 *)v12 + 1);
      if ( v19 != 47 )
      {
        v26 = 0;
        v27 = "if";
        v28 = 2;
        goto LABEL_64;
      }
      while ( 1 )
      {
        ++v12;
        if ( !v19 )
          break;
        if ( v19 == 10 )
          goto LABEL_19;
        v19 = *((unsigned __int8 *)v12 + 1);
      }
    }
    else
    {
      v27 = "if";
      v26 = 0;
      v28 = 2;
LABEL_64:
      while ( 1 )
      {
        if ( !strncmp(v12, v27, v28) )
        {
          v25 = (unsigned __int8)v12[v28];
          if ( ((v25 & 0x80) != 0 || !isalnum(v25)) && v25 != 95 )
            break;
        }
        if ( ++v26 == 11 )
        {
          if ( !v12 )
            break;
          sub_42D148((__int64)&ptr, "%*.*sreturn %s\n;}", (_DWORD)v12 - (_DWORD)a2, (_DWORD)v12 - (_DWORD)a2, a2, v12);
          goto LABEL_29;
        }
        v27 = off_51A588[v26];
        v28 = strlen(v27);
      }
    }
  }
LABEL_28:
  sub_42D148((__int64)&ptr, "%s\n;}", a2);
LABEL_29:
  v20 = (unsigned __int8)sub_43A7D8((__int64)ptr, a3, a4, a5);
  if ( ptr )
  {
    v36 = 0;
    j__free(ptr);
  }
  return v20;
}
// 51A588: using guessed type char *off_51A588[7];
