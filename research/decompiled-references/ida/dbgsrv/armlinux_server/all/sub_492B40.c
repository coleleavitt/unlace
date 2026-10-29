/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_492B40
// Address: 0x0000000000492B40

//----- (0000000000492B40) ----------------------------------------------------
bool __fastcall sub_492B40(__int64 a1)
{
  unsigned __int64 v2; // x0
  size_t v4; // x0
  size_t v5; // x21
  int v6; // w21
  unsigned __int64 v7; // x27
  int v8; // w22
  size_t v9; // x19
  __uid_t v10; // w0
  int v11; // w0
  unsigned __int64 v12; // x3
  char *v13; // x0
  char *pw_name; // x19
  size_t v15; // x0
  size_t v16; // x21
  unsigned __int64 v17; // x22
  void *v18; // x0
  unsigned __int64 v19; // x22
  void *v20; // x0
  struct passwd *v21; // [xsp+58h] [xbp-68h] BYREF
  char *buffer; // [xsp+60h] [xbp-60h] BYREF
  unsigned __int64 v23; // [xsp+68h] [xbp-58h]
  unsigned __int64 v24; // [xsp+70h] [xbp-50h]
  struct passwd v25; // [xsp+78h] [xbp-48h] BYREF
  char name[16]; // [xsp+A8h] [xbp-18h] BYREF

  if ( getlogin_r(name, 9u) )
  {
    v2 = *(_QWORD *)(a1 + 8);
    goto LABEL_3;
  }
  v4 = strlen(name);
  v5 = v4;
  if ( v4 )
  {
    v17 = v4 + 1;
    v18 = *(void **)a1;
    if ( v17 > *(_QWORD *)(a1 + 16) )
    {
      v18 = sub_491288(a1, *(void **)a1, v17, 1u);
      *(_QWORD *)a1 = v18;
    }
    *(_QWORD *)(a1 + 8) = v17;
    memmove(v18, name, v5);
    *(_BYTE *)(*(_QWORD *)a1 + v5) = 0;
    v2 = *(_QWORD *)(a1 + 8);
LABEL_3:
    if ( v2 > 1 )
      return v2 > 1;
    goto LABEL_7;
  }
  *(_QWORD *)(a1 + 8) = 0;
LABEL_7:
  v6 = sysconf(70);
  v7 = v6;
  if ( v6 <= 0 )
  {
    v7 = 0x4000;
    v6 = 0x4000;
  }
  buffer = nullptr;
  v23 = 0;
  v24 = 0;
  buffer = (char *)sub_491288((__int64)&buffer, nullptr, v7, 1u);
  v8 = 10;
  v9 = v6;
  memset(&buffer[v23], 0, v7 - v23);
  v23 = v7;
  while ( 1 )
  {
    v10 = getuid();
    v11 = getpwuid_r(v10, &v25, buffer, v9, &v21);
    if ( v11 != 34 )
      break;
    v6 *= 2;
    v12 = v23;
    v9 = v6;
    if ( v6 <= v23 )
    {
      if ( v6 < v23 )
        v23 = v6;
      if ( !--v8 )
        goto LABEL_18;
    }
    else
    {
      v13 = buffer;
      if ( v6 > v24 )
      {
        v13 = (char *)sub_491288((__int64)&buffer, buffer, v6, 1u);
        v12 = v23;
        buffer = v13;
      }
      memset(&v13[v12], 0, v6 - v12);
      v23 = v6;
      if ( !--v8 )
        goto LABEL_18;
    }
  }
  if ( !v11 )
  {
    if ( v21 )
    {
      pw_name = v21->pw_name;
      if ( v21->pw_name )
      {
        v15 = strlen(v21->pw_name);
        v16 = v15;
        if ( v15 )
        {
          v19 = v15 + 1;
          v20 = *(void **)a1;
          if ( v19 > *(_QWORD *)(a1 + 16) )
          {
            v20 = sub_491288(a1, *(void **)a1, v19, 1u);
            *(_QWORD *)a1 = v20;
          }
          *(_QWORD *)(a1 + 8) = v19;
          memmove(v20, pw_name, v16);
          *(_BYTE *)(*(_QWORD *)a1 + v16) = 0;
        }
        else
        {
          *(_QWORD *)(a1 + 8) = 0;
        }
      }
    }
  }
LABEL_18:
  if ( buffer )
  {
    v23 = 0;
    j__free(buffer);
  }
  v2 = *(_QWORD *)(a1 + 8);
  return v2 > 1;
}
// 492B40: could not find valid save-restore pair for x21
// 492B40: could not find valid save-restore pair for x27
