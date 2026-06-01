__int64 __fastcall sub_11E5F00(__int64 a1, __int64 **a2, __int64 **a3, void *a4, void *a5)
{
  const void *v6; // r13
  size_t v9; // rax
  bool v10; // r15
  size_t v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // r13
  __int64 v18; // r12
  size_t v20; // rax
  size_t v21; // rax
  _BYTE *v22; // r15
  size_t v23; // r14
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  size_t v27; // rax
  size_t v28; // rax
  size_t v29; // rax
  size_t v30; // rax
  size_t v31; // rax
  char v32; // al
  size_t v33; // rax
  bool v34; // al
  __int64 *v35; // rcx
  bool v36; // r13
  __int64 *v37; // rax
  __int64 v38; // r14
  __int64 v39; // rdx
  __int64 v40; // rsi
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // r14
  __int64 v44; // r12
  size_t v45; // rax
  size_t v46; // rax
  __int64 v47; // rax
  size_t v48; // rax
  void *s1[2]; // [rsp+10h] [rbp-158h] BYREF
  char v50; // [rsp+23h] [rbp-145h] BYREF
  unsigned int v51; // [rsp+24h] [rbp-144h] BYREF
  int v52; // [rsp+28h] [rbp-140h] BYREF
  int v53; // [rsp+2Ch] [rbp-13Ch] BYREF
  __int128 v54; // [rsp+30h] [rbp-138h] BYREF
  unsigned int v55; // [rsp+40h] [rbp-128h] BYREF
  unsigned int v56; // [rsp+44h] [rbp-124h]
  __int64 v57; // [rsp+48h] [rbp-120h]
  void *v58[2]; // [rsp+50h] [rbp-118h] BYREF
  _BYTE v59[16]; // [rsp+60h] [rbp-108h] BYREF
  void *v60[2]; // [rsp+70h] [rbp-F8h] BYREF
  _DWORD v61[8]; // [rsp+80h] [rbp-E8h] BYREF
  char v62; // [rsp+A0h] [rbp-C8h]
  __int64 v63; // [rsp+E0h] [rbp-88h]
  __int64 v64; // [rsp+E8h] [rbp-80h]

  v6 = a4;
  s1[0] = a4;
  s1[1] = a5;
  v9 = j__strlen("iPhoneOS");
  if ( v9 <= (unsigned __int64)a5 && (!v9 || !memcmp(v6, "iPhoneOS", v9))
    || (v20 = j__strlen("iPhoneSimulator"), v20 <= (unsigned __int64)a5)
    && ((v6 = s1[0], !v20) || !memcmp(s1[0], "iPhoneSimulator", v20)) )
  {
    v10 = 0;
    v11 = j__strlen("iPhoneSimulator");
    if ( v11 <= (unsigned __int64)a5 )
    {
      v10 = 1;
      if ( v11 )
        v10 = memcmp(v6, "iPhoneSimulator", v11) == 0;
    }
    v14 = *a2;
    v15 = (*a3)[1];
    v16 = **a3;
    v17 = **a2;
    v18 = (*a2)[1];
    *(_OWORD *)v60 = 0;
    sub_22578D0(v60, v16, v15, v14, v12, v13);
    sub_11E3F60((__int64)v60, 4, 1, (__int64)v60[0], (__int64)v60[1], 0);
    if ( v10 )
      LODWORD(v60[1]) = 1;
    v62 = 0;
    v63 = v17;
    goto LABEL_10;
  }
  v21 = j__strlen("MacOSX");
  if ( sub_9C7D00((__int64)s1, "MacOSX", v21) )
  {
    v22 = (_BYTE *)**a3;
    v23 = (*a3)[1];
    sub_22A4A80(v58);
    sub_22B9ED0(v60, v58);
    if ( v58[0] != v59 )
      operator delete(v58[0]);
    if ( (v61[7] & 0xFFFFFFF7) == 1
      && (v54 = 0, sub_22B7D00(v60, &v54), (unsigned __int8)sub_10DB810(v22, v23, &v51, &v52, &v53, &v50))
      && (v55 = v51,
          v56 = v52 & 0x7FFFFFFF | v56 & 0x80000000,
          HIBYTE(v56) |= 0x80u,
          LODWORD(v57) = v53 & 0x7FFFFFFF | v57 & 0x80000000,
          v57 = v57 & 0x7FFFFFFF | 0x80000000LL,
          (unsigned __int8)sub_A09E20((unsigned int *)&v54, &v55)) )
    {
      sub_2257830(v58, &v54);
    }
    else
    {
      v58[0] = v59;
      sub_11E46A0(v58, v22, (__int64)&v22[v23]);
    }
    if ( v60[0] != v61 )
      operator delete(v60[0]);
    v43 = **a2;
    v44 = (*a2)[1];
    *(_OWORD *)v60 = 0;
    sub_22578D0(v60, v58[0], v58[1], v24, v25, v26);
    sub_11E3F60((__int64)v60, 4, 0, (__int64)v60[0], (__int64)v60[1], 0);
    v62 = 0;
    v63 = v43;
    v64 = v44;
    sub_11E4450(a1, (__int64)v60);
    *(_BYTE *)(a1 + 192) = 1;
    sub_11E3F10((__int64)v60);
    if ( v58[0] != v59 )
      operator delete(v58[0]);
    return a1;
  }
  v27 = j__strlen("WatchOS");
  if ( sub_9C7D00((__int64)s1, "WatchOS", v27)
    || (v28 = j__strlen("WatchSimulator"), sub_9C7D00((__int64)s1, "WatchSimulator", v28)) )
  {
    v33 = j__strlen("WatchSimulator");
    v34 = sub_9C7D00((__int64)s1, "WatchSimulator", v33);
    v35 = *a2;
    v36 = v34;
    v37 = *a3;
    v18 = (*a2)[1];
    v38 = **a2;
    v39 = v37[1];
    v40 = *v37;
    *(_OWORD *)v60 = 0;
    sub_22578D0(v60, v40, v39, v35, v41, v42);
    sub_11E3F60((__int64)v60, 4, 3, (__int64)v60[0], (__int64)v60[1], 0);
    if ( v36 )
      LODWORD(v60[1]) = 1;
    v62 = 0;
    v63 = v38;
LABEL_10:
    v64 = v18;
    sub_11E4450(a1, (__int64)v60);
    *(_BYTE *)(a1 + 192) = 1;
    sub_11E3F10((__int64)v60);
    return a1;
  }
  v29 = j__strlen("AppleTVOS");
  if ( sub_9C7D00((__int64)s1, "AppleTVOS", v29)
    || (v30 = j__strlen("AppleTVSimulator"), sub_9C7D00((__int64)s1, "AppleTVSimulator", v30)) )
  {
    v31 = j__strlen("AppleTVSimulator");
    v32 = sub_9C7D00((__int64)s1, "AppleTVSimulator", v31);
    sub_11E4900((__int64)v60, **a2, (*a2)[1], 2, **a3, (*a3)[1], v32);
  }
  else
  {
    v45 = j__strlen("XR");
    if ( sub_9C7D00((__int64)s1, "XR", v45) )
    {
      v46 = j__strlen("Simulator");
      v47 = sub_2246AB0(s1, "Simulator", v46, 0);
      sub_11E4900((__int64)v60, **a2, (*a2)[1], 5, **a3, (*a3)[1], v47 != -1);
    }
    else
    {
      v48 = j__strlen("DriverKit");
      if ( !sub_9C7D00((__int64)s1, "DriverKit", v48) )
      {
        *(_BYTE *)(a1 + 192) = 0;
        return a1;
      }
      sub_11E4900((__int64)v60, **a2, (*a2)[1], 4, **a3, (*a3)[1], 0);
    }
  }
  sub_11E4450(a1, (__int64)v60);
  *(_BYTE *)(a1 + 192) = 1;
  sub_11E3F10((__int64)v60);
  return a1;
}
