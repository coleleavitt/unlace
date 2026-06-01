/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4559B0
// Address: 0x00000000004559B0

//----- (00000000004559B0) ----------------------------------------------------
__int64 __fastcall sub_4559B0(
        __int64 a1,
        char *a2,
        __int64 a3,
        __int64 *a4,
        _BYTE *a5,
        char a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14,
        char *s,
        unsigned int a16,
        _QWORD *a17)
{
  _BYTE *v18; // r12
  const char *v21; // r15
  int v22; // ecx
  size_t v23; // rax
  size_t v24; // r8
  bool (__fastcall *v25)(__int64, int); // rax
  unsigned int v26; // r15d
  const char *v27; // rdi
  __int64 v28; // rax
  int v29; // r15d
  bool v30; // al
  unsigned __int64 v31; // rdx
  __int64 v32; // rcx
  size_t v33; // r8
  __int64 v34; // r9
  __m128 v35; // xmm4
  __m128 v36; // xmm5
  int v37; // r12d
  int v38; // eax
  int v39; // eax
  int v40; // eax
  __int64 v41; // rbx
  __int64 v42; // r13
  void *v43; // r14
  unsigned __int64 v44; // r12
  unsigned __int64 v45; // rdx
  size_t v46; // r9
  void *v47; // rdi
  unsigned __int64 v48; // rdx
  void *v49; // rax
  char v51; // al
  void *v52; // rax
  const char *v53; // rdx
  int *v54; // rax
  const char *v55; // rax
  unsigned __int64 v57; // [rsp+0h] [rbp-1288h]
  unsigned __int64 v58; // [rsp+0h] [rbp-1288h]
  void *v59; // [rsp+10h] [rbp-1278h]
  _BYTE *v60; // [rsp+10h] [rbp-1278h]
  int v61; // [rsp+10h] [rbp-1278h]
  void *v62; // [rsp+10h] [rbp-1278h]
  void *v63; // [rsp+10h] [rbp-1278h]
  size_t v64; // [rsp+18h] [rbp-1270h]
  size_t v65; // [rsp+18h] [rbp-1270h]
  void *v66; // [rsp+20h] [rbp-1268h] BYREF
  __int128 v67; // [rsp+28h] [rbp-1260h]
  void *ptr; // [rsp+40h] [rbp-1248h] BYREF
  __int128 v69; // [rsp+48h] [rbp-1240h]
  __int64 v70; // [rsp+60h] [rbp-1228h] BYREF
  int v71; // [rsp+68h] [rbp-1220h]
  char *v72; // [rsp+70h] [rbp-1218h]
  __int64 v73; // [rsp+78h] [rbp-1210h]
  __int128 v74; // [rsp+80h] [rbp-1208h]
  __int64 v75; // [rsp+90h] [rbp-11F8h]
  void *v76; // [rsp+98h] [rbp-11F0h]
  _BYTE *v77; // [rsp+A0h] [rbp-11E8h]
  __int64 v78; // [rsp+A8h] [rbp-11E0h]
  struct utsname name; // [rsp+B0h] [rbp-11D8h] BYREF
  unsigned __int8 v80[4104]; // [rsp+240h] [rbp-1048h] BYREF
  unsigned __int64 v81; // [rsp+1248h] [rbp-40h]

  v18 = a5;
  v21 = s;
  v81 = __readfsqword(0x28u);
  v22 = a6 & 1;
  if ( !*a5 || (v61 = a6 & 1, v51 = sub_480670(s), v22 = v61, v51) )
  {
    if ( !v22 && *s && !sub_480B00(s) )
      goto LABEL_78;
    if ( !s )
      goto LABEL_6;
  }
  else
  {
    sub_4806D0(v80, 4096, (unsigned __int8 *)s);
    if ( !v61 && v80[0] && !sub_480B00((char *)v80) )
    {
      v21 = (const char *)v80;
LABEL_78:
      sub_411BD0(a1, "AUTOHIDE NONE\nInput file is missing: %s", v21);
      return (unsigned int)-3;
    }
    v21 = (const char *)v80;
  }
  v23 = strlen(v21);
  v24 = v23;
  if ( !v23 )
  {
LABEL_6:
    *(_QWORD *)(a1 + 592) = 0;
    goto LABEL_7;
  }
  v47 = *(void **)(a1 + 584);
  v48 = v23 + 1;
  if ( *(_QWORD *)(a1 + 600) < v23 + 1 )
  {
    v65 = v23;
    v63 = (void *)(v23 + 1);
    v52 = sub_481540(a1 + 584, v47, v48, 1u);
    v24 = v65;
    v48 = (unsigned __int64)v63;
    *(_QWORD *)(a1 + 584) = v52;
    v47 = v52;
  }
  *(_QWORD *)(a1 + 592) = v48;
  v60 = (_BYTE *)v24;
  memmove(v47, v21, v24);
  v60[*(_QWORD *)(a1 + 584)] = 0;
LABEL_7:
  *(_BYTE *)(a1 + 861) = a6;
  *(_BYTE *)(a1 + 861) &= 1u;
  if ( !sub_480B00(a2) )
  {
    v54 = __errno_location();
    v26 = -2;
    v55 = (const char *)sub_481FB0(*v54);
    sub_411B10(a1, "%s: %s\n", a2, v55);
    return v26;
  }
  v25 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 48LL);
  if ( v25 == sub_453CB0 )
  {
    v26 = 1;
    if ( !a16 )
      goto LABEL_15;
    v27 = s1;
    if ( *(_QWORD *)(a1 + 592) )
      v27 = *(const char **)(a1 + 584);
    v26 = 2;
    v28 = sub_47F560(v27, 0);
    if ( !v28 )
      goto LABEL_15;
    v59 = (void *)v28;
    v29 = sub_476CD0(v28);
    sub_47F680(v59);
    v30 = a16 == v29;
  }
  else
  {
    v30 = v25(a1, a16);
  }
  v26 = 2 - v30;
LABEL_15:
  v72 = a2;
  v70 = 80;
  v73 = a3;
  if ( !*v18 )
    v18 = nullptr;
  v75 = -1;
  v76 = nullptr;
  v77 = v18;
  v78 = 0;
  v74 = -1;
  v37 = 128;
  if ( !uname(&name) )
  {
    v31 = (unsigned int)strcasecmp(name.sysname, "VMkernel");
    v38 = 128;
    if ( !(_DWORD)v31 )
    {
      LOBYTE(v38) = 0;
      v37 = v38;
    }
  }
  if ( (a6 & 0x10) == 0 )
    v37 |= 2u;
  v39 = v37;
  if ( (a6 & 0x20) != 0 )
  {
    BYTE1(v39) = BYTE1(v37) | 1;
    v37 = v39;
  }
  v40 = v37;
  if ( (a6 & 0x40) != 0 )
  {
    BYTE1(v40) = BYTE1(v37) | 2;
    v37 = v40;
  }
  if ( a6 < 0 )
    v37 |= 0x40u;
  if ( (a6 & 8) != 0 )
  {
    v71 = v37 | 0x20;
  }
  else if ( (a6 & 4) != 0 )
  {
    v71 = v37 | 0x10;
  }
  else
  {
    v71 = v37 | 0x20;
    sub_411B10(a1, "Launching as %sbit process\n", "64");
  }
  v66 = nullptr;
  v67 = 0;
  if ( !a4 )
    goto LABEL_68;
  if ( !*((_BYTE *)a4 + 24) )
    v71 |= 0x800u;
  v41 = *a4;
  v42 = *a4 + 24 * a4[1];
  if ( v41 == v42 )
  {
LABEL_68:
    v43 = nullptr;
  }
  else
  {
    v43 = nullptr;
    v44 = 0;
    do
    {
      if ( strchr(*(const char **)v41, 61) )
      {
        v45 = *(_QWORD *)(v41 + 8);
        if ( v45 )
        {
          v33 = v45 - 1;
          if ( v45 != 1 )
          {
            v46 = v45 - 1;
            if ( v44 )
            {
              --v44;
              v46 = v33 + v44;
              v45 += v44;
            }
            if ( *((_QWORD *)&v67 + 1) < v45 )
            {
              v64 = v46;
              v62 = (void *)v33;
              v58 = v45;
              v66 = sub_481540((__int64)&v66, v43, v45, 1u);
              v46 = v64;
              v43 = v66;
              v33 = (size_t)v62;
              v45 = v58;
            }
            *(_QWORD *)&v67 = v45;
            *((_BYTE *)v43 + v46) = 0;
            memcpy((char *)v66 + v44, *(const void **)v41, v33);
            v44 = v67;
            v43 = v66;
          }
        }
        v31 = 2;
        if ( v44 )
          v31 = v44-- + 1;
        if ( *((_QWORD *)&v67 + 1) < v31 )
        {
          v57 = v31;
          v66 = sub_481540((__int64)&v66, v43, v31, 1u);
          v31 = v57;
          v43 = v66;
        }
        *(_QWORD *)&v67 = v31;
        *((_BYTE *)v43 + v44) = 0;
        *((_BYTE *)v66 + v44 + 1) = 0;
        v44 = v67;
        v43 = v66;
      }
      v41 += 24;
    }
    while ( v42 != v41 );
    if ( v44 > 1 )
    {
      if ( *((_QWORD *)&v67 + 1) < v44 + 1 )
      {
        v66 = sub_481540((__int64)&v66, v43, v44 + 1, 1u);
        v43 = v66;
      }
      *(_QWORD *)&v67 = v44 + 1;
      *((_BYTE *)v43 + v44 - 1) = 0;
      *((_BYTE *)v66 + v44) = 0;
      v43 = v66;
    }
  }
  v76 = v43;
  ptr = nullptr;
  v69 = 0;
  v49 = sub_483900((__int64)&v70, (__int64)&ptr, (__m128)0LL, a8, a9, a10, v35, v36, a13, a14, v31, v32, v33, v34);
  *a17 = v49;
  if ( !v49 )
  {
    v53 = s1;
    if ( (_QWORD)v69 )
      v53 = (const char *)ptr;
    sub_411B10(a1, "launch_process: %s", v53);
    v26 = -2;
  }
  if ( ptr )
  {
    *(_QWORD *)&v69 = 0;
    j__free(ptr);
  }
  if ( v66 )
  {
    *(_QWORD *)&v67 = 0;
    j__free(v66);
  }
  return v26;
}
// 455D86: variable 'v35' is possibly undefined
// 455D86: variable 'v36' is possibly undefined
// 455D86: variable 'v31' is possibly undefined
// 455D86: variable 'v32' is possibly undefined
// 455D86: variable 'v33' is possibly undefined
// 455D86: variable 'v34' is possibly undefined
