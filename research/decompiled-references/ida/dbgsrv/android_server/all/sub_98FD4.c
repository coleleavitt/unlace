/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_98FD4
// Address: 0x0000000000098FD4

//----- (0000000000098FD4) ----------------------------------------------------
__int64 __fastcall sub_98FD4(
        __int64 a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5,
        unsigned int a6,
        char *s,
        unsigned int a8,
        __int64 *a9)
{
  char *v10; // x26
  __int64 v17; // x28
  size_t v18; // x0
  __int64 v19; // x20
  unsigned __int64 v20; // x29
  size_t v21; // x27
  void *v22; // x0
  _BOOL8 v23; // x0
  char v24; // w0
  unsigned int v25; // w22
  _BYTE *v26; // x8
  int v27; // w8
  unsigned int v28; // w8
  int *v29; // x0
  const char *v30; // x0
  int v31; // w8
  __int64 v32; // x8
  __int64 v33; // x0
  void *v34; // x0
  void *v35; // x0
  const char *v36; // x2
  void *ptr; // [xsp+18h] [xbp-1258h] BYREF
  __int64 v39; // [xsp+20h] [xbp-1250h]
  __int64 v40; // [xsp+28h] [xbp-1248h]
  __int64 v41; // [xsp+30h] [xbp-1240h] BYREF
  int v42; // [xsp+38h] [xbp-1238h]
  const char *v43; // [xsp+40h] [xbp-1230h]
  __int64 v44; // [xsp+48h] [xbp-1228h]
  __int64 v45; // [xsp+50h] [xbp-1220h]
  __int64 v46; // [xsp+58h] [xbp-1218h]
  __int64 v47; // [xsp+60h] [xbp-1210h]
  __int64 v48; // [xsp+68h] [xbp-1208h]
  _BYTE *v49; // [xsp+70h] [xbp-1200h]
  __int64 v50; // [xsp+78h] [xbp-11F8h]
  _BYTE v51[4096]; // [xsp+80h] [xbp-11F0h] BYREF
  struct utsname v52; // [xsp+1080h] [xbp-1F0h] BYREF
  __int64 v53; // [xsp+1208h] [xbp-68h]

  v10 = s;
  v53 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *a5 && (qisabspath((unsigned __int8 *)s) & 1) == 0 )
  {
    qmake_full_path((unsigned __int64)v51, 4096, v10);
    v10 = v51;
  }
  if ( (a6 & 1) != 0 )
  {
    v17 = a1 + 480;
    if ( !v10 )
    {
LABEL_12:
      *(_QWORD *)(v17 + 8) = 0;
      goto LABEL_15;
    }
  }
  else
  {
    if ( *v10 && !qfileexist(v10) )
    {
      sub_40F34(a1, "AUTOHIDE NONE\nInput file is missing: %s", v10);
      return (unsigned int)-3;
    }
    v17 = a1 + 480;
  }
  v18 = strlen(v10);
  if ( !v18 )
    goto LABEL_12;
  v19 = a4;
  v20 = v18 + 1;
  v21 = v18;
  if ( *(_QWORD *)(a1 + 496) >= v18 + 1 )
  {
    v22 = *(void **)(a1 + 480);
  }
  else
  {
    v22 = qvector_reserve((pthread_mutex_t *)v17, *(void **)(a1 + 480), v20, 1u);
    *(_QWORD *)(a1 + 480) = v22;
  }
  *(_QWORD *)(a1 + 488) = v20;
  memmove(v22, v10, v21);
  a4 = v19;
  *(_BYTE *)(*(_QWORD *)(a1 + 480) + v21) = 0;
LABEL_15:
  *(_BYTE *)(a1 + 733) = a6 & 1;
  v23 = qfileexist(a2);
  if ( !v23 )
  {
    v29 = (int *)__errno(v23);
    v30 = (const char *)winerr(*v29);
    sub_3A0D8(a1, "%s: %s\n", a2, v30);
    return (unsigned int)-2;
  }
  v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 48LL))(a1, a8);
  v41 = 80;
  v46 = -1;
  v47 = -1;
  v44 = a3;
  v45 = -1;
  v49 = nullptr;
  v50 = 0;
  v43 = a2;
  if ( (v24 & 1) != 0 )
    v25 = 1;
  else
    v25 = 2;
  if ( *a5 )
    v26 = a5;
  else
    v26 = nullptr;
  v48 = 0;
  v49 = v26;
  v42 = 128;
  if ( !uname(&v52) && !strcasecmp(v52.sysname, "VMkernel") )
  {
    v27 = 0;
    v42 = 0;
  }
  else
  {
    v27 = 128;
  }
  v28 = ((a6 >> 3) & 2
       | v27 & 0xFFFFFCFF
       | (((a6 >> 5) & 1) << 8) & 0xFFFFFDFF
       | (((a6 >> 6) & 1) << 9)
       | (a6 >> 1) & 0x40)
      ^ 2;
  if ( (a6 & 0xF0) != 0x10 )
    v42 = v28;
  if ( (a6 & 8) != 0 )
  {
    v31 = v28 | 0x20;
LABEL_34:
    v42 = v31;
    goto LABEL_35;
  }
  if ( (a6 & 4) != 0 )
  {
    v31 = v28 | 0x10;
    goto LABEL_34;
  }
  v42 = v28 | 0x20;
  sub_3A0D8(a1, "Launching as %sbit process\n", "64");
LABEL_35:
  memset(&v52, 0, 24);
  if ( a4 )
  {
    if ( !*(_BYTE *)(a4 + 24) )
      v42 |= 0x800u;
    sub_993BC(&v52, (__int64 *)a4);
    v32 = *(_QWORD *)v52.sysname;
  }
  else
  {
    v32 = 0;
  }
  v48 = v32;
  ptr = nullptr;
  v39 = 0;
  v40 = 0;
  v33 = launch_process((__int64)&v41, (__int64)&ptr);
  *a9 = v33;
  if ( v33 )
  {
    v34 = ptr;
    if ( ptr )
      goto LABEL_42;
  }
  else
  {
    if ( v39 )
      v36 = (const char *)ptr;
    else
      v36 = &byte_F154B;
    sub_3A0D8(a1, "launch_process: %s", v36);
    v25 = -2;
    v34 = ptr;
    if ( ptr )
    {
LABEL_42:
      v39 = 0;
      qfree(v34);
      ptr = nullptr;
      v40 = 0;
      v35 = *(void **)v52.sysname;
      if ( !*(_QWORD *)v52.sysname )
        return v25;
      goto LABEL_49;
    }
  }
  v35 = *(void **)v52.sysname;
  if ( *(_QWORD *)v52.sysname )
  {
LABEL_49:
    *(_QWORD *)&v52.sysname[8] = 0;
    qfree(v35);
    *(_QWORD *)v52.sysname = 0;
    *(_QWORD *)&v52.sysname[16] = 0;
  }
  return v25;
}
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
// F154B: using guessed type char byte_F154B;
