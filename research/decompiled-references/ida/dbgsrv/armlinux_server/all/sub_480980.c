/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_480980
// Address: 0x0000000000480980

//----- (0000000000480980) ----------------------------------------------------
void *__fastcall sub_480980(_DWORD *a1, int a2, char **a3)
{
  char *v4; // x0
  char **v5; // x21
  __int64 v6; // x23
  char *v7; // t1
  void *v8; // x22
  void *v9; // x0
  unsigned __int64 v10; // x1
  char *v11; // x20
  FILE *v12; // x22
  void *v13; // x28
  void *v15; // x0
  unsigned __int64 v16; // x1
  void *v17; // x0
  unsigned __int64 v18; // x1
  unsigned __int64 v19; // x3
  unsigned __int64 v20; // x2
  void *result; // x0
  unsigned __int64 v22; // x1
  void *v23; // x0
  bool v24; // zf
  const char *v25; // x0
  void *v26; // [xsp+68h] [xbp-38h] BYREF
  unsigned __int64 v27; // [xsp+70h] [xbp-30h]
  unsigned __int64 v28; // [xsp+78h] [xbp-28h]
  void *ptr; // [xsp+80h] [xbp-20h] BYREF
  unsigned __int64 v30; // [xsp+88h] [xbp-18h]
  unsigned __int64 v31; // [xsp+90h] [xbp-10h]

  v26 = nullptr;
  v27 = 0;
  v28 = 0;
  if ( a2 > 0 )
  {
    v4 = *a3;
    if ( *a3 )
    {
      v5 = a3 + 1;
      v6 = (__int64)&a3[(unsigned int)(a2 - 1) + 1];
      while ( *v4 == 64 )
      {
        v11 = v4 + 1;
        v12 = sub_48DCD0(v4 + 1, (unsigned __int8 *)"r");
        if ( !v12 )
        {
          v25 = (const char *)sub_486DC8(v11, -1);
          sub_40A608("indirect file %s", v25);
        }
        ptr = nullptr;
        v30 = 0;
        v31 = 0;
        while ( (sub_490E28((__int64)&ptr, v12) & 0x8000000000000000LL) == 0 )
        {
          while ( (__int64)sub_49BBE8((__int64)&ptr, 0x3Bu, 3u) > 0 )
          {
            v13 = ptr;
            if ( v31 > v30 && v30 && ptr != nullptr )
            {
              v23 = sub_491148(ptr, v30);
              v13 = v23;
              if ( !v23 )
                v13 = ptr;
            }
            v15 = v26;
            v16 = v27;
            ptr = nullptr;
            v30 = 0;
            v31 = 0;
            if ( v28 < v27 + 1 )
            {
              v15 = sub_491288((__int64)&v26, v26, v27 + 1, 8u);
              v16 = v27;
              v26 = v15;
            }
            *((_QWORD *)v15 + v16) = v13;
            ++v27;
            if ( sub_490E28((__int64)&ptr, v12) < 0 )
              goto LABEL_23;
          }
        }
LABEL_23:
        sub_4906A0(v12);
        if ( !ptr )
          goto LABEL_5;
        v30 = 0;
        j__free(ptr);
        if ( (char **)v6 == v5 )
        {
LABEL_25:
          v17 = v26;
          v18 = v27;
          v19 = v28;
          v20 = v27 + 1;
          if ( a1 )
            *a1 = v27;
LABEL_27:
          ptr = nullptr;
          goto LABEL_28;
        }
LABEL_6:
        v7 = *v5++;
        v4 = v7;
        if ( !v7 )
          goto LABEL_25;
      }
      v8 = sub_4911C0(v4);
      v9 = v26;
      v10 = v27;
      ptr = v8;
      if ( v28 < v27 + 1 )
      {
        v9 = sub_491288((__int64)&v26, v26, v27 + 1, 8u);
        v10 = v27;
        v26 = v9;
      }
      *((_QWORD *)v9 + v10) = v8;
      ++v27;
LABEL_5:
      if ( (char **)v6 == v5 )
        goto LABEL_25;
      goto LABEL_6;
    }
  }
  if ( a1 )
  {
    v18 = 0;
    v20 = 1;
    v19 = 0;
    v17 = nullptr;
    *a1 = 0;
    goto LABEL_27;
  }
  v20 = 1;
  v19 = 0;
  v17 = nullptr;
  v18 = 0;
  ptr = nullptr;
LABEL_28:
  if ( v19 < v20 )
  {
    v17 = sub_491288((__int64)&v26, v17, v20, 8u);
    v18 = v27;
    v26 = v17;
  }
  *((_QWORD *)v17 + v18) = 0;
  result = v26;
  v22 = v27 + 1;
  v27 = v22;
  if ( v28 > v22 )
  {
    if ( v26 )
      v24 = v22 == 0;
    else
      v24 = 1;
    if ( !v24 )
    {
      result = sub_491148(v26, 8 * v22);
      if ( !result )
        return v26;
    }
  }
  return result;
}
