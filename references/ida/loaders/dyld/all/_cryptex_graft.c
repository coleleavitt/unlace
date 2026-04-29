__int64 __fastcall cryptex_graft(const char ***a1, _DWORD *a2)
{
  const char **v4; // x9
  int v5; // w10
  const char *v6; // x21
  const char **v7; // x0
  __int64 v8; // x22
  __int64 v9; // x23
  __int64 v10; // x24
  __int64 v11; // x0
  pid_t v12; // w0
  __int64 v13; // x23
  pid_t v14; // w0
  __int64 v15; // x22
  pid_t v16; // w0
  pid_t v17; // w0
  pid_t v18; // w0
  __int64 v19; // x0
  __int64 unsafe; // x0
  __int64 v21; // x19
  __int64 v22; // x20
  __int64 v23; // x21
  pid_t v24; // w0
  __int64 v25; // x0
  __int64 v27; // x0
  __int64 v28; // x19
  __int64 v29; // x20
  __int64 v30; // x21
  int v31; // [xsp+3Ch] [xbp-1264h] BYREF
  _DWORD v32[2]; // [xsp+40h] [xbp-1260h] BYREF
  __int64 v33; // [xsp+48h] [xbp-1258h]
  int v34; // [xsp+50h] [xbp-1250h]
  __int128 v35; // [xsp+54h] [xbp-124Ch]
  __int128 v36; // [xsp+64h] [xbp-123Ch]
  __int128 v37; // [xsp+74h] [xbp-122Ch]
  __int128 v38; // [xsp+84h] [xbp-121Ch]
  __int128 v39; // [xsp+94h] [xbp-120Ch]
  __int128 v40; // [xsp+A4h] [xbp-11FCh]
  __int128 v41; // [xsp+B4h] [xbp-11ECh]
  __int128 v42; // [xsp+C4h] [xbp-11DCh]
  __int128 v43; // [xsp+D4h] [xbp-11CCh]
  __int128 v44; // [xsp+E4h] [xbp-11BCh]
  __int128 v45; // [xsp+F4h] [xbp-11ACh]
  __int128 v46; // [xsp+104h] [xbp-119Ch]
  __int128 v47; // [xsp+114h] [xbp-118Ch]
  __int128 v48; // [xsp+124h] [xbp-117Ch]
  __int128 v49; // [xsp+134h] [xbp-116Ch]
  __int128 v50; // [xsp+144h] [xbp-115Ch]
  __int128 v51; // [xsp+154h] [xbp-114Ch]
  __int128 v52; // [xsp+164h] [xbp-113Ch]
  __int128 v53; // [xsp+174h] [xbp-112Ch]
  __int128 v54; // [xsp+184h] [xbp-111Ch]
  __int128 v55; // [xsp+194h] [xbp-110Ch]
  __int128 v56; // [xsp+1A4h] [xbp-10FCh]
  __int128 v57; // [xsp+1B4h] [xbp-10ECh]
  __int128 v58; // [xsp+1C4h] [xbp-10DCh]
  __int128 v59; // [xsp+1D4h] [xbp-10CCh]
  __int128 v60; // [xsp+1E4h] [xbp-10BCh]
  __int128 v61; // [xsp+1F4h] [xbp-10ACh]
  __int128 v62; // [xsp+204h] [xbp-109Ch]
  __int128 v63; // [xsp+214h] [xbp-108Ch]
  _BYTE v64[28]; // [xsp+224h] [xbp-107Ch] BYREF
  char v65[1024]; // [xsp+244h] [xbp-105Ch] BYREF
  char v66[1024]; // [xsp+644h] [xbp-C5Ch] BYREF
  char v67[1024]; // [xsp+A44h] [xbp-85Ch] BYREF
  char v68[1024]; // [xsp+E44h] [xbp-45Ch] BYREF
  _DWORD v69[3]; // [xsp+1244h] [xbp-5Ch] BYREF

  arguments();
  v69[0] = -1;
  __bzero(v68, 0x400u);
  __bzero(v67, 0x400u);
  __bzero(v66, 0x400u);
  __bzero(v65, 0x400u);
  v63 = 0u;
  memset(v64, 0, sizeof(v64));
  v61 = 0u;
  v62 = 0u;
  v59 = 0u;
  v60 = 0u;
  v57 = 0u;
  v58 = 0u;
  v55 = 0u;
  v56 = 0u;
  v53 = 0u;
  v54 = 0u;
  v51 = 0u;
  v52 = 0u;
  v50 = 0u;
  v49 = 0u;
  v48 = 0u;
  v47 = 0u;
  v46 = 0u;
  v45 = 0u;
  v44 = 0u;
  v43 = 0u;
  v42 = 0u;
  v41 = 0u;
  v40 = 0u;
  v39 = 0u;
  v38 = 0u;
  v37 = 0u;
  v36 = 0u;
  v35 = 0u;
  v4 = *a1;
  v5 = *((_DWORD *)*a1 + 5);
  v32[0] = 1;
  v32[1] = v5;
  v33 = -1;
  v34 = -1;
  v6 = v4[8];
  v31 = -1;
  v7 = a1[13];
  if ( v7 )
  {
    v8 = object_getfd(v7, a1 + 4);
    v9 = object_getfd(a1[14], a1 + 4);
    v10 = object_getfd(a1[12], a1 + 4);
    realpathfd(v8, v68, "dmg");
    realpathfd(v9, v67, "seal im4p");
    realpathfd(v10, v65, "chosen im4m");
    v11 = openat(*((_DWORD *)a1[1] + 5), v6, 537919488);
    v69[0] = v11;
    if ( (v11 & 0x80000000) != 0 )
    {
      v13 = (unsigned int)*__error();
      __getpid();
      dlog(0xFFFFFFFFLL, "libignition: %d: %12s: %s: failed to open graft point: %s: %d\n");
    }
    else
    {
      realpathfd(v11, v66, "uncovered graft point");
      v34 = v9;
      LODWORD(v33) = v10;
      *(_QWORD *)&v35 = *((unsigned int *)*a1 + 3);
      v12 = __getpid();
      dlog(
        0xFFFFFFFFLL,
        "libignition: %d: %12s: %s: grafting: method = syscall, dmg = %s, seal = %s, graft point = %s, im4m = %s\n",
        v12,
        *a1[2],
        **a1,
        v68,
        v67,
        v66,
        v65);
      if ( (unsigned int)graftdmg(v8, v66, *((unsigned int *)*a1 + 2), v32) )
      {
        v13 = (unsigned int)*__error();
        __getpid();
        dlog(0xFFFFFFFFLL, "libignition: %d: %12s: %s: graftdmg: %d\n");
      }
      else
      {
        v13 = 0;
      }
    }
  }
  else
  {
    v14 = __getpid();
    dlog(0xFFFFFFFFLL, "libignition: %d: %12s: %s: cryptex has no associated disk image\n", v14, *a1[2], **a1);
    v13 = 21;
  }
  v15 = ((__int64 (__fastcall *)(const char ***, __int64))(*a1)[17])(a1, v13);
  if ( (_DWORD)v15 )
  {
    v16 = __getpid();
    dlog(0xFFFFFFFFLL, "libignition: %d: %12s: %s: graft failed [%s]: %d\n", v16, *a1[2], **a1, "syscall", v15);
  }
  else
  {
    if ( (_DWORD)v13 == 37 )
    {
      v18 = __getpid();
      dlog(
        0xFFFFFFFFLL,
        "libignition: %d: %12s: %s: cryptex content already available: dmg = %s, graft point = %s, ignored error = %d\n",
        v18,
        *a1[2],
        **a1,
        v68,
        v66,
        37);
      v19 = openat(*((_DWORD *)a1[1] + 5), v6, 537919488);
      v31 = v19;
      if ( (v19 & 0x80000000) != 0 )
      {
        unsafe = boot_get_unsafe(v19);
        v21 = *(_QWORD *)(*(_QWORD *)unsafe + 8LL);
        v22 = *(_QWORD *)(*(_QWORD *)unsafe + 16LL);
        v23 = (unsigned int)*__error();
        __error();
        ignition_halt(v21, v23, v22, "failed to open covered graft point: %d");
      }
    }
    else if ( (_DWORD)v13 )
    {
      v24 = __getpid();
      dlog(
        0xFFFFFFFFLL,
        "libignition: %d: %12s: %s: cryptex not grafted; ignoring failure: dmg = %s, ignored error = %d\n",
        v24,
        *a1[2],
        **a1,
        v68,
        v13);
      v25 = open("/dev/null", 0);
      v31 = v25;
      if ( (v25 & 0x80000000) != 0 )
      {
        v27 = boot_get_unsafe(v25);
        v28 = *(_QWORD *)(*(_QWORD *)v27 + 8LL);
        v29 = *(_QWORD *)(*(_QWORD *)v27 + 16LL);
        v30 = (unsigned int)*__error();
        __error();
        ignition_halt(v28, v30, v29, "failed to open /dev/null for fallback: %d");
      }
    }
    else
    {
      v17 = __getpid();
      dlog(
        0xFFFFFFFFLL,
        "libignition: %d: %12s: %s: grafted cryptex: dmg = %s, graft point = %s, ignored error = %d\n",
        v17,
        *a1[2],
        **a1,
        v68,
        v66,
        0);
      v31 = xferfd(v69);
    }
    *a2 = xferfd(&v31);
  }
  closefd_optional(v69, "uncovered graft point");
  closefd_optional(&v31, "covered graft point");
  if ( (unsigned int)v15 >= 0x6A )
    dyld_halt("error not set to valid posix code: %d", v15);
  return v15;
}
