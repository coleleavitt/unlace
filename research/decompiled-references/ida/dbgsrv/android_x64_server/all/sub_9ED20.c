/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9ED20
// Address: 0x000000000009ED20

//----- (000000000009ED20) ----------------------------------------------------
__int64 __fastcall sub_9ED20(
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
  const char *v12; // r14
  char v13; // r15
  __int64 v14; // rbx
  __int64 v15; // r13
  size_t v16; // rax
  size_t v17; // r12
  size_t v18; // rbp
  void *v19; // rdi
  _BYTE *v20; // r13
  unsigned __int8 v21; // r14
  _BYTE *v22; // rax
  int v23; // ecx
  int *v24; // rax
  char *v25; // rax
  unsigned int v26; // ebx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  __int128 v30; // xmm0
  __int64 v31; // rcx
  __int64 v32; // rax
  const char *v33; // rdx
  unsigned int v35; // [rsp+8h] [rbp-1260h]
  _BYTE *v36; // [rsp+10h] [rbp-1258h]
  __int64 v37; // [rsp+18h] [rbp-1250h]
  void *ptr[2]; // [rsp+30h] [rbp-1238h] BYREF
  __int64 v40; // [rsp+40h] [rbp-1228h]
  __int64 v41; // [rsp+50h] [rbp-1218h] BYREF
  int v42; // [rsp+58h] [rbp-1210h]
  const char *v43; // [rsp+60h] [rbp-1208h]
  __int64 v44; // [rsp+68h] [rbp-1200h]
  __int128 v45; // [rsp+70h] [rbp-11F8h]
  __int64 v46; // [rsp+80h] [rbp-11E8h]
  __int128 v47; // [rsp+88h] [rbp-11E0h]
  __int64 v48; // [rsp+98h] [rbp-11D0h]
  _BYTE v49[4096]; // [rsp+A0h] [rbp-11C8h] BYREF
  struct utsname name; // [rsp+10A0h] [rbp-1C8h] BYREF
  unsigned __int64 v51; // [rsp+1230h] [rbp-38h]

  v12 = s;
  v51 = __readfsqword(0x28u);
  if ( *a5 && !qisabspath(s) )
  {
    qmake_full_path((unsigned __int64)v49, 4096, s);
    v12 = v49;
  }
  v13 = a6 & 1;
  if ( (a6 & 1) != 0 )
  {
    v36 = a5;
    v35 = a6;
    v14 = a1;
    v15 = a1 + 480;
    if ( !v12 )
    {
LABEL_12:
      *(_QWORD *)(v15 + 8) = 0;
      v20 = (_BYTE *)v14;
      goto LABEL_15;
    }
  }
  else
  {
    if ( *v12 && !qfileexist(v12) )
    {
      sub_40970(a1, "AUTOHIDE NONE\nInput file is missing: %s", v12);
      return (unsigned int)-3;
    }
    v36 = a5;
    v35 = a6;
    v14 = a1;
    v15 = a1 + 480;
  }
  v37 = a4;
  v16 = strlen(v12);
  if ( !v16 )
    goto LABEL_12;
  v17 = v16;
  v18 = v16 + 1;
  if ( *(_QWORD *)(v14 + 496) >= v16 + 1 )
  {
    v19 = *(void **)(v14 + 480);
  }
  else
  {
    v19 = qvector_reserve(v15, *(char **)(v14 + 480), v16 + 1, 1u);
    *(_QWORD *)(v14 + 480) = v19;
  }
  v20 = (_BYTE *)v14;
  *(_QWORD *)(v14 + 488) = v18;
  memmove(v19, v12, v17);
  *(_BYTE *)(*(_QWORD *)(v14 + 480) + v17) = 0;
  a4 = v37;
LABEL_15:
  v20[733] = v13;
  if ( !qfileexist(a2) )
  {
    v24 = (int *)__errno(a2);
    v25 = winerr(*v24);
    sub_391F0((__int64)v20, "%s: %s\n", a2, v25);
    return (unsigned int)-2;
  }
  v21 = (*(__int64 (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)v20 + 48LL))(v20, a8);
  v41 = 80;
  v45 = -1;
  v46 = -1;
  v47 = 0;
  v48 = 0;
  v43 = a2;
  v44 = a3;
  v22 = nullptr;
  if ( *v36 )
    v22 = v36;
  *((_QWORD *)&v47 + 1) = v22;
  v42 = 128;
  if ( uname(&name) )
  {
    v23 = 128;
  }
  else
  {
    v27 = strcasecmp(name.sysname, "VMkernel");
    v23 = 128;
    if ( !v27 )
    {
      v42 = 0;
      v23 = 0;
    }
  }
  v28 = (v23 | (v35 >> 3) & 2 | (8 * (_WORD)v35) & 0x100 | (8 * (_WORD)v35) & 0x200 | (v35 >> 1) & 0x40) ^ 2;
  if ( (v35 & 0xF0) != 0x10 )
    v42 = (v23 | (v35 >> 3) & 2 | (8 * (_WORD)v35) & 0x100 | (8 * (_WORD)v35) & 0x200 | (v35 >> 1) & 0x40) ^ 2;
  if ( (v35 & 8) != 0 )
  {
    v29 = v28 | 0x20;
LABEL_31:
    v42 = v29;
    goto LABEL_32;
  }
  if ( (v35 & 4) != 0 )
  {
    v29 = v28 | 0x10;
    goto LABEL_31;
  }
  v42 = v28 | 0x20;
  sub_391F0((__int64)v20, "Launching as %sbit process\n", "64");
LABEL_32:
  v30 = 0;
  memset(&name, 0, 24);
  if ( a4 )
  {
    if ( !*(_BYTE *)(a4 + 24) )
      BYTE1(v42) |= 8u;
    sub_9F1E0((__int64)&name, (__int64 *)a4);
    v31 = *(_QWORD *)name.sysname;
    v30 = 0;
  }
  else
  {
    v31 = 0;
  }
  *(_QWORD *)&v47 = v31;
  *(_OWORD *)ptr = v30;
  v40 = 0;
  v32 = launch_process((__int64)&v41, (__m128i *)ptr);
  *a9 = v32;
  if ( v32 )
  {
    v26 = 2 - v21;
  }
  else
  {
    if ( ptr[1] )
      v33 = (const char *)ptr[0];
    else
      v33 = s1;
    v26 = -2;
    sub_391F0((__int64)v20, "launch_process: %s", v33);
  }
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v40 = 0;
  }
  if ( *(_QWORD *)name.sysname )
  {
    *(_QWORD *)&name.sysname[8] = 0;
    qfree(*(void **)name.sysname);
    *(_QWORD *)name.sysname = 0;
    *(_QWORD *)&name.sysname[16] = 0;
  }
  return v26;
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
