/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3C53C
// Address: 0x000000000003C53C

//----- (000000000003C53C) ----------------------------------------------------
void __fastcall sub_3C53C(__int64 a1)
{
  const char *v2; // x0
  DIR *v3; // x0
  DIR *v4; // x20
  int v5; // w21
  __int64 *v6; // x27
  char v7; // w28
  struct dirent *v8; // x0
  const char *d_name; // x24
  unsigned __int64 v10; // x0
  unsigned __int64 v11; // x25
  __int64 v12; // x9
  __int64 v13; // x8
  char v14; // w0
  void *v15; // x0
  void *ptr; // [xsp+0h] [xbp-80h] BYREF
  __int64 v17; // [xsp+8h] [xbp-78h]
  __int64 v18; // [xsp+10h] [xbp-70h]
  __int64 v19; // [xsp+18h] [xbp-68h]

  v19 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v17 = 0;
  v18 = 0;
  ptr = nullptr;
  sub_3C748((__int64)&ptr, "/proc/%d/task", *(_DWORD *)(a1 + 1844));
  if ( v17 )
    v2 = (const char *)ptr;
  else
    v2 = &byte_F154B;
  v3 = opendir(v2);
  if ( !v3 )
  {
    sub_39FA0((__int64)"Could not open /proc/%d/task", *(_DWORD *)(a1 + 1844));
    v15 = ptr;
    if ( !ptr )
      return;
    goto LABEL_27;
  }
  v4 = v3;
  v5 = 0;
  v6 = (__int64 *)(a1 + 1744);
  do
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = readdir(v4);
      if ( !v8 )
        break;
      d_name = v8->d_name;
      v10 = strtoul(v8->d_name, nullptr, 10);
      if ( v10 )
      {
        v11 = v10;
        sub_99D18(a1, "DBG: %d found %s thread\n", v5, d_name);
        v12 = *v6;
        if ( !*v6 )
          goto LABEL_16;
        v13 = a1 + 1744;
        do
        {
          if ( *(_DWORD *)(v12 + 32) >= (int)v11 )
            v13 = v12;
          v12 = *(_QWORD *)(v12 + 8LL * (*(_DWORD *)(v12 + 32) < (int)v11));
        }
        while ( v12 );
        if ( (__int64 *)v13 == v6 || *(_DWORD *)(v13 + 32) > (int)v11 )
        {
LABEL_16:
          if ( v11 != *(_DWORD *)(a1 + 1844) )
            sub_3B6B4(a1, v11, 0);
          sub_3B234(a1, v11, -1);
          if ( (v14 & 1) != 0 )
          {
            v7 = 1;
            sub_99D18(a1, "DBG: %d collected %s thread\n", v5, d_name);
          }
        }
      }
    }
    rewinddir(v4);
    if ( (v7 & 1) != 0 )
      v5 = 0;
    else
      ++v5;
  }
  while ( v5 < 2 );
  closedir(v4);
  v15 = ptr;
  if ( ptr )
  {
LABEL_27:
    v17 = 0;
    qfree(v15);
  }
}
// 3C660: variable 'v14' is possibly undefined
// F154B: using guessed type char byte_F154B;
