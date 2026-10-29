/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005FA84
// Address: 0x000000010005FA84

//----- (000000010005FA84) ----------------------------------------------------
__int64 __fastcall sub_10005FA84(__int64 a1, __int64 a2)
{
  __int64 v4; // x3
  __int64 v5; // x4
  __int64 v6; // x5
  __int64 v7; // x6
  __int64 v8; // x7
  unsigned __int64 v9; // x27
  __int64 v10; // x19
  __int64 v11; // x22
  char *v12; // x22
  std::__shared_weak_count *v13; // x19
  _QWORD *v14; // x22
  _opaque_pthread_t *v15; // x23
  unsigned int (__fastcall *v16)(__int64); // x28
  int v17; // w24
  __int64 v18; // x25
  __int64 v19; // x22
  int v20; // w8
  std::__shared_weak_count *v21; // x19
  int v22; // w8
  addrinfo *v23; // x23
  __int64 v24; // x24
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  __int64 v28; // x5
  __int64 v29; // x6
  __int64 v30; // x7
  char v31; // w8
  char *v32; // x8
  size_t v33; // x22
  unsigned __int8 *v34; // x1
  __int64 v35; // x2
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  __int64 v39; // x5
  __int64 v40; // x6
  __int64 v41; // x7
  char *v42; // x8
  _BYTE *v43; // x1
  __int64 v44; // x23
  __int64 v45; // x21
  const char *v46; // x22
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  __int64 v50; // x5
  __int64 v51; // x6
  __int64 v52; // x7
  const char *v53; // x9
  __int64 v55; // [xsp+18h] [xbp-508h] BYREF
  __int64 v56; // [xsp+20h] [xbp-500h]
  __int64 v57; // [xsp+28h] [xbp-4F8h]
  int v58; // [xsp+34h] [xbp-4ECh]
  std::__shared_weak_count *v59; // [xsp+38h] [xbp-4E8h]
  std::__shared_weak_count *v60; // [xsp+40h] [xbp-4E0h]
  __int64 v61; // [xsp+48h] [xbp-4D8h] BYREF
  __int128 v62; // [xsp+50h] [xbp-4D0h]
  __int128 v63; // [xsp+60h] [xbp-4C0h]
  __int64 v64; // [xsp+70h] [xbp-4B0h]
  char v65[8]; // [xsp+78h] [xbp-4A8h] BYREF
  size_t v66; // [xsp+80h] [xbp-4A0h]
  size_t v67; // [xsp+88h] [xbp-498h]
  char v68; // [xsp+477h] [xbp-A9h]
  char v69[8]; // [xsp+478h] [xbp-A8h] BYREF
  __int64 v70; // [xsp+480h] [xbp-A0h]
  unsigned __int64 v71; // [xsp+488h] [xbp-98h]
  char v72[33]; // [xsp+49Fh] [xbp-81h] BYREF

  signal(13, (void (__cdecl *)(int))1);
  v9 = *(_QWORD *)(a2 + 96);
  if ( v9 <= 1 )
    v10 = 8;
  else
    v10 = 88;
  if ( v9 <= 1 )
    v11 = a2 + 8;
  else
    v11 = a2 + 88;
  v62 = 0u;
  v63 = 0u;
  v64 = 0;
  v61 = 2;
  LODWORD(v62) = 1;
  qsnprintf(v72, 0x21u, "%d", v4, v5, v6, v7, v8, *(_WORD *)(v11 + 24));
  if ( *(_QWORD *)(v11 + 8) )
    v12 = *(char **)(a2 + v10);
  else
    v12 = &byte_100075A30;
  v13 = (std::__shared_weak_count *)operator new(0x98u);
  v13->__shared_owners_ = 0;
  v13->__shared_weak_owners_ = 0;
  v13->__vftable = (std::__shared_weak_count_vtbl *)off_10009BC58;
  sub_100060CBC((__int64)&v13[1], v12, v72, (__int128 *)&v61);
  v59 = v13 + 1;
  v60 = v13;
  v14 = operator new(0x10u);
  *v14 = v13 + 1;
  v14[1] = v13;
  atomic_fetch_add_explicit(&v13->__shared_owners_, 1u, memory_order_relaxed);
  v15 = qthread_create((void *(__cdecl *)(void *))sub_1000600C8, v14);
  if ( !v15 )
  {
    *(_QWORD *)(a1 + 88) = "qthread_create";
    *(_DWORD *)(a1 + 96) = *__error();
    v21 = (std::__shared_weak_count *)v14[1];
    if ( v21 && !atomic_fetch_add(&v21->__shared_owners_, 0xFFFFFFFFFFFFFFFFLL) )
    {
      ((void (__fastcall *)(std::__shared_weak_count *))v21->__on_zero_shared)(v21);
      std::__shared_weak_count::__release_weak(v21);
    }
    operator delete(v14);
    v19 = 0;
    v13 = v60;
    if ( v60 )
      goto LABEL_80;
    return v19;
  }
  v16 = *(unsigned int (__fastcall **)(__int64))(a2 + 168);
  v17 = *(_DWORD *)(a2 + 184);
  v18 = *(_QWORD *)(a2 + 176);
  while ( (qsem_wait(v13[1].__shared_weak_owners_, v17) & 1) == 0 )
  {
    if ( !v16 || v16(v18) )
    {
      qmutex_lock((pthread_mutex_t *)v13[1].__shared_owners_);
      BYTE4(v13[6].__vftable) = 1;
      qmutex_unlock((pthread_mutex_t *)v13[1].__shared_owners_);
      qthread_free(v15);
      v19 = 0;
      *(_QWORD *)(a1 + 88) = "getaddrinfo";
      if ( v16 )
        v20 = 89;
      else
        v20 = 101;
      goto LABEL_18;
    }
  }
  qthread_join(v15);
  v22 = (int)v13[6].__vftable;
  *(_DWORD *)(a1 + 96) = v22;
  v23 = (addrinfo *)v13[1].__vftable;
  v13[1].__vftable = nullptr;
  if ( v22 == 11 )
  {
    *(_QWORD *)(a1 + 88) = "getaddrinfo";
    v19 = 0;
    v20 = *__error();
LABEL_18:
    *(_DWORD *)(a1 + 96) = v20;
    goto LABEL_80;
  }
  if ( v22 )
  {
    v19 = 0;
    *(_QWORD *)(a1 + 88) = "gai_strerror";
    goto LABEL_80;
  }
  if ( !v23 )
  {
LABEL_36:
    v19 = 0;
    goto LABEL_37;
  }
  v24 = (__int64)v23;
  while ( getnameinfo(*(const sockaddr **)(v24 + 32), *(_DWORD *)(v24 + 16), v65, 0x2Fu, v69, 0x21u, 10) )
  {
    *(_QWORD *)(a1 + 88) = "getnameinfo";
    *(_DWORD *)(a1 + 96) = *__error();
LABEL_29:
    v24 = *(_QWORD *)(v24 + 40);
    if ( !v24 )
      goto LABEL_36;
  }
  if ( !sub_10005F690(a1, *(_DWORD *)(v24 + 4), *(_DWORD *)(v24 + 8), *(_DWORD *)(v24 + 12)) )
    goto LABEL_29;
  if ( (sub_10005F840(a1, v24, a2 + 168) & 1) == 0 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, 0xFFFFFFFFLL);
    goto LABEL_29;
  }
  v19 = 1;
LABEL_37:
  freeaddrinfo(v23);
  v31 = v19 ^ 1;
  if ( v9 < 2 )
    v31 = 1;
  if ( (v31 & 1) != 0 )
    goto LABEL_80;
  *(_QWORD *)v69 = 0;
  v70 = 0;
  v71 = 0;
  v58 = 0;
  if ( *(_QWORD *)(a2 + 16) )
    v32 = *(char **)(a2 + 8);
  else
    v32 = &byte_100075A30;
  sub_10000273C((char **)v69, "CONNECT %s:%d HTTP/1.1\n", v25, v26, v27, v28, v29, v30, (char)v32);
  v33 = *(_QWORD *)(a2 + 128);
  if ( v33 >= 2 )
  {
    *(_QWORD *)v65 = 0;
    v66 = 0;
    v67 = 0;
    *(_QWORD *)v65 = qalloc_or_throw(v33);
    v67 = v33;
    memcpy(*(void **)v65, *(const void **)(a2 + 120), v33);
    v66 = v33;
    sub_10005C25C(v65, 58);
    sub_100037568((_QWORD **)v65, a2 + 144);
    v55 = 0;
    v56 = 0;
    v57 = 0;
    if ( v66 )
      v34 = *(unsigned __int8 **)v65;
    else
      v34 = (unsigned __int8 *)&byte_100075A30;
    if ( v66 )
      v35 = v66 - 1;
    else
      v35 = 0;
    base64_encode(&v55, v34, v35);
    if ( v56 )
      LOBYTE(v42) = v55;
    else
      v42 = &byte_100075A30;
    sub_100028C68((char **)v69, "Proxy-Authorization: Basic %s\n", v36, v37, v38, v39, v40, v41, (char)v42);
    sub_100006228(&v55);
    sub_100006228(v65);
  }
  v43 = *(_BYTE **)v69;
  if ( v70 )
    v44 = v70 - 1;
  else
    v44 = 0;
  if ( v71 < v44 + 2 )
  {
    v43 = qvector_reserve(v69, *(_QWORD **)v69, v44 + 2, 1u);
    *(_QWORD *)v69 = v43;
  }
  v70 = v44 + 2;
  v43[v44] = 10;
  *(_BYTE *)(*(_QWORD *)v69 + v44 + 1) = 0;
  if ( (debug & 0x100000) != 0 )
    sub_100011BD4();
  if ( v70 )
    v45 = v70 - 1;
  else
    v45 = 0;
  v46 = "connecting to proxy";
  if ( sub_10005E4B4(a1, *(__int64 *)v69, v45) != v45 || sub_10006028C(v65, a1) <= 0 )
  {
LABEL_77:
    *(_QWORD *)(a1 + 88) = v46;
    v19 = 0;
    *(_DWORD *)(a1 + 96) = *__error();
    goto LABEL_78;
  }
  v68 = 0;
  if ( (debug & 0x100000) != 0 )
    sub_100011BD4();
  if ( (unsigned int)qsscanf(v65, "HTTP/1.%d %d", v47, v48, v49, v50, v51, v52, (char)&v55) != 2 || v58 != 200 )
  {
    v53 = "connecting to proxy (authentication required)";
    if ( v58 != 407 )
      v53 = "connecting to proxy";
    if ( v58 == 401 )
      v46 = "connecting to proxy (unauthorized)";
    else
      v46 = v53;
    goto LABEL_77;
  }
  v19 = 1;
LABEL_78:
  if ( *(_QWORD *)v69 )
  {
    v70 = 0;
    qfree(*(void **)v69);
  }
LABEL_80:
  if ( !atomic_fetch_add(&v13->__shared_owners_, 0xFFFFFFFFFFFFFFFFLL) )
  {
    ((void (__fastcall *)(std::__shared_weak_count *))v13->__on_zero_shared)(v13);
    std::__shared_weak_count::__release_weak(v13);
  }
  return v19;
}
// 10005FB20: variable 'v4' is possibly undefined
// 10005FB20: variable 'v5' is possibly undefined
// 10005FB20: variable 'v6' is possibly undefined
// 10005FB20: variable 'v7' is possibly undefined
// 10005FB20: variable 'v8' is possibly undefined
// 10005FDB0: variable 'v25' is possibly undefined
// 10005FDB0: variable 'v26' is possibly undefined
// 10005FDB0: variable 'v27' is possibly undefined
// 10005FDB0: variable 'v28' is possibly undefined
// 10005FDB0: variable 'v29' is possibly undefined
// 10005FDB0: variable 'v30' is possibly undefined
// 10005FE40: variable 'v36' is possibly undefined
// 10005FE40: variable 'v37' is possibly undefined
// 10005FE40: variable 'v38' is possibly undefined
// 10005FE40: variable 'v39' is possibly undefined
// 10005FE40: variable 'v40' is possibly undefined
// 10005FE40: variable 'v41' is possibly undefined
// 10005FF54: variable 'v47' is possibly undefined
// 10005FF54: variable 'v48' is possibly undefined
// 10005FF54: variable 'v49' is possibly undefined
// 10005FF54: variable 'v50' is possibly undefined
// 10005FF54: variable 'v51' is possibly undefined
// 10005FF54: variable 'v52' is possibly undefined
// 100075A30: using guessed type char byte_100075A30;
// 10009BC58: using guessed type __int64 (__fastcall *off_10009BC58[3])();
// 10009D908: using guessed type int debug;
