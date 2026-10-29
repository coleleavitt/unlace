/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37F30
// Address: 0x0000000000037F30

//----- (0000000000037F30) ----------------------------------------------------
__int64 __fastcall sub_37F30(__int64 a1, int a2, char *a3, size_t a4)
{
  int v5; // w21
  int v7; // w0
  __int64 v8; // x8
  unsigned int v9; // w20
  FILE *v10; // x0
  FILE *v11; // x23
  int v12; // w24
  bool v13; // w0
  int v14; // w0
  FILE *v15; // x0
  FILE *v16; // x25
  int v17; // w26
  __int64 v18; // x8
  void *v19; // x0
  char *v20; // x1
  void *ptr; // [xsp+8h] [xbp-1088h] BYREF
  __int64 v23; // [xsp+10h] [xbp-1080h]
  __int64 v24; // [xsp+18h] [xbp-1078h]
  int v25; // [xsp+24h] [xbp-106Ch] BYREF
  pthread_mutex_t path[102]; // [xsp+28h] [xbp-1068h] BYREF
  __int64 v27; // [xsp+1028h] [xbp-68h]

  v5 = a2;
  v27 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  qsnprintf(path, 4096, "/proc/%u/exe", a2);
  v7 = readlink((const char *)path, a3, a4 - 1);
  if ( v7 >= 1 )
  {
    v8 = v7;
LABEL_3:
    a3[v8] = 0;
    return 1;
  }
  v10 = qfopen((const char *)path, "r");
  if ( v10 )
  {
    v11 = v10;
    v12 = qfread(v10, a3, a4);
    qfclose(v11);
    if ( v12 >= 2 )
    {
      v8 = v12;
      if ( v12 < a4 && *a3 == 47 )
        goto LABEL_3;
    }
  }
  *a3 = 0;
  ptr = nullptr;
  v23 = 0;
  v24 = 0;
  while ( 1 )
  {
    v13 = sub_38188(&v25, (__int64)&ptr, v5);
    v5 = v25;
    if ( v25 == 1 || !v13 )
    {
      v9 = 0;
      *a3 = 0;
      v19 = ptr;
      if ( !ptr )
        return v9;
      goto LABEL_24;
    }
    qsnprintf(path, 4096, "/proc/%u/exe", v25);
    v14 = readlink((const char *)path, a3, a4 - 1);
    if ( v14 >= 1 )
      break;
    v15 = qfopen((const char *)path, "r");
    v16 = v15;
    if ( v15 )
    {
      v17 = qfread(v15, a3, a4);
      qfclose(v16);
      if ( v17 >= 2 )
      {
        v18 = v17;
        if ( v17 < a4 && *a3 == 47 )
          goto LABEL_20;
      }
    }
    *a3 = 0;
  }
  v18 = v14;
LABEL_20:
  a3[v18] = 0;
  if ( v23 )
    v20 = (char *)ptr;
  else
    v20 = &byte_F154B;
  memcpy(a3, v20, a4);
  v9 = 1;
  v19 = ptr;
  if ( ptr )
  {
LABEL_24:
    v23 = 0;
    qfree(v19);
    ptr = nullptr;
    v24 = 0;
  }
  return v9;
}
// F154B: using guessed type char byte_F154B;
