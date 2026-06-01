unsigned __int64 __fastcall sub_1CBF0(const char *src, __int16 a2, __int64 a3, int a4, int a5, int a6, double a7)
{
  const char *v8; // rsi
  bool v9; // zf
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  const char *v18; // rsi
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  const char *v23; // rsi
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  const char *v27; // rsi
  int v28; // edx
  int v29; // ecx
  int v30; // r8d
  int v31; // r9d
  char *v32; // rdx
  const char *v33; // rsi
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  int v37; // r9d
  const char *v38; // rsi
  int v39; // edx
  int v40; // ecx
  int v41; // r8d
  int v42; // r9d
  const char *v43; // rsi
  int v44; // edx
  int v45; // ecx
  int v46; // r8d
  int v47; // r9d
  const char *v48; // rsi
  int v49; // edx
  int v50; // ecx
  int v51; // r8d
  int v52; // r9d
  int v53; // edx
  int v54; // ecx
  int v55; // r8d
  int v56; // r9d
  int v58; // edx
  int v59; // r9d
  void *v60; // r15
  int v61; // edx
  int v62; // ecx
  int v63; // r8d
  int v64; // r9d
  const char *v65; // rsi
  void *v66; // rdi
  _BYTE *v67; // r12
  char *v68; // rax
  size_t n; // [rsp+0h] [rbp-C8h]
  size_t na; // [rsp+0h] [rbp-C8h]
  void *srca; // [rsp+10h] [rbp-B8h] BYREF
  __int128 v72; // [rsp+18h] [rbp-B0h]
  void *ptr; // [rsp+30h] [rbp-98h] BYREF
  __int128 v74; // [rsp+38h] [rbp-90h]
  _BYTE v75[32]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v76[24]; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v77; // [rsp+88h] [rbp-40h]

  v8 = haystack;
  v9 = *(_QWORD *)(a3 + 256) == 0;
  v77 = __readfsqword(0x28u);
  if ( !v9 )
    v8 = *(const char **)(a3 + 248);
  sub_708D0((unsigned int)"%s\n", (_DWORD)v8, a3, a4, a5, a6);
  sub_65BE0(v75, 20, "%F %T", *(_QWORD *)(a3 + 280));
  sub_65BE0(v76, 20, "%F %T", *(_QWORD *)(a3 + 272));
  sub_708D0((unsigned int)"Vault time: %s, up since %s\n", (unsigned int)v75, (unsigned int)v76, v11, v12, v13);
  sub_65BE0(v75, 20, "%F", a7);
  v18 = haystack;
  if ( *(_QWORD *)(a3 + 152) )
    v18 = *(const char **)(a3 + 144);
  sub_708D0((unsigned int)"License user : %s\n", (_DWORD)v18, v14, v15, v16, v17);
  v23 = haystack;
  if ( *(_QWORD *)(a3 + 176) )
    v23 = *(const char **)(a3 + 168);
  sub_708D0((unsigned int)"License email: %s\n", (_DWORD)v23, v19, v20, v21, v22);
  v27 = haystack;
  if ( *(_QWORD *)(a3 + 128) )
    v27 = *(const char **)(a3 + 120);
  sub_708D0((unsigned int)"License: %s; expires on %s\n", (_DWORD)v27, (unsigned int)v75, v24, v25, v26);
  if ( *(_QWORD *)(a3 + 208) > 1u )
    sub_708D0((unsigned int)"MAC address: %s\n", *(_QWORD *)(a3 + 200), v28, v29, v30, v31);
  if ( *(_QWORD *)(a3 + 232) > 1u )
    sub_708D0((unsigned int)"Vault directory: %s\n", *(_QWORD *)(a3 + 224), v28, v29, v30, v31);
  if ( src && *src )
  {
    srca = nullptr;
    v72 = 0;
    n = strlen(src);
    srca = (void *)sub_96080(&srca, 0, n + 1, 1);
    *(_QWORD *)&v72 = n + 1;
    memmove(srca, src, n);
    *((_BYTE *)srca + n) = 0;
    if ( !(_QWORD)v72 )
    {
      ptr = nullptr;
      v74 = 0;
      if ( !a2 )
      {
        sub_708D0((unsigned int)"Server name: %s\n", (unsigned int)haystack, v58, n, 0, v59);
        v66 = ptr;
        v60 = nullptr;
        if ( !ptr )
        {
LABEL_36:
          if ( srca )
          {
            *(_QWORD *)&v72 = 0;
            j__free(srca);
          }
          goto LABEL_15;
        }
LABEL_33:
        *(_QWORD *)&v74 = 0;
        j__free(v66);
LABEL_34:
        if ( v60 )
          j__free(v60);
        goto LABEL_36;
      }
      v60 = nullptr;
      goto LABEL_29;
    }
    na = v72;
    v67 = (_BYTE *)sub_96030(v72);
    memcpy(v67, srca, na);
    ptr = nullptr;
    v63 = na;
    v74 = 0;
    if ( a2 )
    {
      if ( *v67 == 91 || (v68 = strchr(v67, 58)) == nullptr || v68 - v67 == -1 )
      {
        v60 = v67;
LABEL_29:
        sub_17D80((char **)&ptr);
        goto LABEL_30;
      }
      sub_17D80((char **)&ptr);
    }
    else
    {
      v60 = v67;
      v65 = haystack;
      v64 = na - 1;
      if ( na == 1 )
        goto LABEL_32;
      ptr = (void *)sub_96080(&ptr, 0, na, 1);
      *(_QWORD *)&v74 = na;
      memmove(ptr, v67, na - 1);
      v63 = na;
      *((char *)ptr + na - 1) = 0;
    }
    v60 = v67;
LABEL_30:
    v65 = haystack;
    if ( (_QWORD)v74 )
      LODWORD(v65) = (_DWORD)ptr;
LABEL_32:
    sub_708D0((unsigned int)"Server name: %s\n", (_DWORD)v65, v61, v62, v63, v64);
    v66 = ptr;
    if ( !ptr )
      goto LABEL_34;
    goto LABEL_33;
  }
LABEL_15:
  v32 = "";
  if ( *(_BYTE *)(a3 + 88) )
    v32 = " *ADMIN*";
  v33 = haystack;
  if ( *(_QWORD *)(a3 + 8) )
    v33 = *(const char **)a3;
  sub_708D0((unsigned int)"Client name: %s%s\n", (_DWORD)v33, (_DWORD)v32, v29, v30, v31);
  v38 = haystack;
  if ( *(_QWORD *)(a3 + 32) )
    v38 = *(const char **)(a3 + 24);
  sub_708D0((unsigned int)"Client site: %s\n", (_DWORD)v38, v34, v35, v36, v37);
  v43 = haystack;
  if ( *(_QWORD *)(a3 + 56) )
    v43 = *(const char **)(a3 + 48);
  sub_708D0((unsigned int)"Client host: %s\n", (_DWORD)v43, v39, v40, v41, v42);
  v48 = haystack;
  if ( *(_QWORD *)(a3 + 104) )
    v48 = *(const char **)(a3 + 96);
  sub_708D0((unsigned int)"Client root: %s\n", (_DWORD)v48, v44, v45, v46, v47);
  sub_65BE0(v75, 20, "%F %T", *(_QWORD *)(a3 + 72));
  sub_65BE0(v76, 20, "%F %T", *(_QWORD *)(a3 + 80));
  sub_708D0((unsigned int)"Login time : %s\n", (unsigned int)v75, v49, v50, v51, v52);
  sub_708D0((unsigned int)"Last active: %s\n", (unsigned int)v75, v53, v54, v55, v56);
  return v77 - __readfsqword(0x28u);
}

