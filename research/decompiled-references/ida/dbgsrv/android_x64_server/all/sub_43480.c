/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43480
// Address: 0x0000000000043480

//----- (0000000000043480) ----------------------------------------------------
__int64 __fastcall sub_43480(unsigned __int64 a1, int a2, int a3, double a4, double a5)
{
  void *v7; // rdi
  int v8; // ecx
  __int64 v9; // rsi
  unsigned __int64 *v10; // rbx
  void *v11; // rax
  FILE *v12; // rax
  const char *v13; // r14
  const void **v14; // r12
  int *v15; // rax
  char *v16; // rax
  size_t v17; // rax
  size_t v18; // r13
  void *v19; // rdi
  char **v20; // r13
  const void *v21; // r12
  char *v22; // rdi
  __int64 v23; // rax
  const char *v24; // r12
  void *v25; // r13
  int v26; // ebp
  unsigned __int64 v27; // rax
  __int64 v28; // r15
  const char *v29; // rdi
  __int64 v30; // rbp
  int v31; // r14d
  __int64 v32; // rcx
  __int64 v33; // rdx
  unsigned __int64 v34; // rsi
  __int64 v35; // rdi
  int v36; // edx
  __int64 v37; // rcx
  __int64 v38; // rdx
  unsigned __int64 v39; // rsi
  __int64 v40; // rdi
  const char *v41; // rdi
  __int64 v42; // r14
  const char *v43; // rsi
  int v45; // [rsp+Ch] [rbp-117Ch]
  __int64 v46; // [rsp+10h] [rbp-1178h]
  void *ptr[3]; // [rsp+18h] [rbp-1170h] BYREF
  void *v48[2]; // [rsp+30h] [rbp-1158h] BYREF
  __int64 v49; // [rsp+40h] [rbp-1148h]
  void *v50[2]; // [rsp+50h] [rbp-1138h] BYREF
  __int64 v51; // [rsp+60h] [rbp-1128h]
  int v52; // [rsp+74h] [rbp-1114h] BYREF
  __int64 (__fastcall **v53)(); // [rsp+78h] [rbp-1110h] BYREF
  int v54; // [rsp+80h] [rbp-1108h]
  void **v55; // [rsp+88h] [rbp-1100h]
  __int64 v56; // [rsp+108h] [rbp-1080h] BYREF
  __int64 v57; // [rsp+110h] [rbp-1078h]
  char v58; // [rsp+118h] [rbp-1070h]
  _BYTE dest[52]; // [rsp+11Ch] [rbp-106Ch] BYREF
  char src[4096]; // [rsp+150h] [rbp-1038h] BYREF
  unsigned __int64 v61; // [rsp+1150h] [rbp-38h]

  v61 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 528) = a2;
  v7 = *(void **)(a1 + 1056);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 1064) = 0;
    qfree(v7);
    *(_QWORD *)(a1 + 1056) = 0;
    *(_QWORD *)(a1 + 1072) = 0;
    a2 = *(_DWORD *)(a1 + 528);
  }
  *(_DWORD *)(a1 + 1140) = a2;
  *(_BYTE *)(a1 + 1148) = 0;
  *(_DWORD *)(a1 + 1224) = 0;
  sub_3C720(a1, a2);
  qwait_timed(&v52, *(_DWORD *)(a1 + 528), a3 == 2, (a3 == 2) - 1);
  sub_9FDA0(a1, "process pid/tid: %d\n", *(_DWORD *)(a1 + 528));
  *(_BYTE *)(a1 + 1228) = 0;
  v56 = 0xFFFFFFFFLL;
  v57 = -1;
  v58 = 0;
  memset(dest, 0, sizeof(dest));
  set_debug_event_code((__int64)&v56, 1);
  if ( (*(_DWORD *)dest & 0xFFFFFFFu) > 0xB || (v8 = 2306, !_bittest(&v8, *(_DWORD *)dest & 0xFFFFFFF)) )
  {
    if ( !(_BYTE)under_debugger )
      interr(3295);
LABEL_92:
    BUG();
  }
  v9 = *(unsigned int *)(a1 + 528);
  LODWORD(v56) = v9;
  HIDWORD(v56) = v9;
  v57 = ptrace(PTRACE_PEEKUSER, v9, 128, 0);
  v58 = 1;
  (*(void (__fastcall **)(unsigned __int64, _QWORD, char *, __int64))(*(_QWORD *)a1 + 624LL))(
    a1,
    *(unsigned int *)(a1 + 528),
    src,
    4096);
  v10 = (unsigned __int64 *)__strlen_chk(src, 4096);
  if ( v10 )
  {
    v11 = *(void **)&dest[4];
    if ( *(_QWORD *)&dest[20] < (unsigned __int64)v10 + 1 )
    {
      v11 = qvector_reserve((__int64)&dest[4], *(char **)&dest[4], (unsigned __int64)v10 + 1, 1u);
      *(_QWORD *)&dest[4] = v11;
    }
    *(_QWORD *)&dest[12] = (char *)v10 + 1;
    memmove(v11, src, (size_t)v10);
    *((_BYTE *)v10 + *(_QWORD *)&dest[4]) = 0;
  }
  else
  {
    *(_QWORD *)&dest[12] = 0;
  }
  *(_OWORD *)&dest[28] = 0xFFFFFFFFFFFFFFFFLL;
  *(_QWORD *)&dest[44] = -1;
  qsnprintf(src, 4096, "/proc/%u/maps", *(_DWORD *)(a1 + 528));
  v12 = fopenRT(src);
  *(_QWORD *)(a1 + 1216) = v12;
  if ( !v12 )
  {
    v15 = (int *)__errno(src);
    v16 = winerr(*v15);
    LODWORD(v10) = 0;
    sub_391F0(a1, "%s: %s\n", src, v16);
    goto LABEL_83;
  }
  if ( *(_QWORD *)&dest[12] )
  {
    v13 = *(const char **)&dest[4];
    v14 = (const void **)(a1 + 1256);
    if ( !*(_QWORD *)&dest[4] )
    {
LABEL_19:
      v14[1] = nullptr;
      if ( *(_BYTE *)(a1 + 733) )
        goto LABEL_29;
      goto LABEL_23;
    }
  }
  else
  {
    v14 = (const void **)(a1 + 1256);
    v13 = s1;
  }
  v17 = strlen(v13);
  if ( !v17 )
    goto LABEL_19;
  v10 = (unsigned __int64 *)v17;
  v18 = v17 + 1;
  if ( *(_QWORD *)(a1 + 1272) >= v17 + 1 )
  {
    v19 = *(void **)(a1 + 1256);
  }
  else
  {
    v19 = qvector_reserve((__int64)v14, *(char **)(a1 + 1256), v17 + 1, 1u);
    *(_QWORD *)(a1 + 1256) = v19;
  }
  *(_QWORD *)(a1 + 1264) = v18;
  memmove(v19, v13, (size_t)v10);
  *((_BYTE *)v10 + *(_QWORD *)(a1 + 1256)) = 0;
  if ( !*(_BYTE *)(a1 + 733) )
  {
LABEL_23:
    v10 = (unsigned __int64 *)v14[1];
    if ( (unsigned __int64)v10 < 2 )
    {
      *(_QWORD *)(a1 + 488) = 0;
    }
    else
    {
      v20 = (char **)(a1 + 480);
      v21 = *v14;
      if ( *(_QWORD *)(a1 + 496) >= (unsigned __int64)v10 )
      {
        v22 = *v20;
      }
      else
      {
        v22 = (char *)qvector_reserve(a1 + 480, *v20, (unsigned __int64)v10, 1u);
        *v20 = v22;
      }
      *(_QWORD *)(a1 + 488) = v10;
      memmove(v22, v21, (size_t)v10 - 1);
      *((_BYTE *)v10 + *(_QWORD *)(a1 + 480) - 1) = 0;
    }
  }
LABEL_29:
  *(_OWORD *)v50 = 0;
  v51 = 0;
  if ( *(_BYTE *)(a1 + 36) )
  {
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 32) = 4;
  }
  *(_DWORD *)(a1 + 244) = 4;
  if ( (int)sub_3E150(a1, (__int64)v50, 0, 0.0, a5) <= 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(30065);
    goto LABEL_92;
  }
  sub_3DB60((_QWORD *)a1);
  sub_38C30((_QWORD *)a1);
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)a1 + 592LL))(a1);
  if ( *(_DWORD *)(a1 + 652) == -1 || *(_DWORD *)(a1 + 656) == -1 )
    goto LABEL_86;
  v23 = *(_QWORD *)(a1 + 552);
  if ( !v23 )
    LODWORD(v23) = *(_DWORD *)(a1 + 648);
  if ( (int)v23 <= 0 )
  {
LABEL_86:
    if ( !(_BYTE)under_debugger )
      interr(30016);
    goto LABEL_92;
  }
  nullsub_12(1);
  v45 = a3;
  v46 = a1;
  if ( *(_QWORD *)&dest[12] )
    v24 = *(const char **)&dest[4];
  else
    v24 = s1;
  v25 = v50[1];
  if ( !v50[1] )
    goto LABEL_50;
  v26 = 1;
  v10 = (unsigned __int64 *)v50[0];
  v27 = 0;
  while ( 1 )
  {
    v28 = 10 * v27;
    v29 = s1;
    if ( v10[10 * v27 + 3] )
      v29 = (const char *)v10[v28 + 2];
    if ( !strcmp(v29, v24) )
      break;
    v27 = v26++;
    if ( (unsigned __int64)v25 <= v27 )
      goto LABEL_50;
  }
  v10 = (unsigned __int64 *)((char *)v10 + v28 * 8);
  if ( v10 )
  {
    *(_QWORD *)&dest[28] = *v10;
    v30 = v46;
    v31 = v45;
    *(_QWORD *)&dest[36] = sub_433A0((__int64)v29, v50, v10);
    if ( !*(_BYTE *)(v46 + 733) )
      *(_QWORD *)&dest[44] = *v10;
  }
  else
  {
LABEL_50:
    v30 = v46;
    v31 = v45;
    if ( !*(_BYTE *)(v46 + 733) )
      sub_391F0(v46, "%s: nowhere in the process memory?!\n", v24);
  }
  if ( !(unsigned __int8)sub_42BE0(v30, (__int64 *)v50) )
    sub_391F0(v30, "Could not set the shlib bpt, shared object events will not be handled\n");
  if ( (*(_DWORD *)dest & 0xFFFFFFF) != 0 )
  {
    v32 = *(_QWORD *)(v30 + 128);
    v33 = 56 * ((*(_QWORD *)(v30 + 136) - v32) >> 3) - 1;
    if ( *(_QWORD *)(v30 + 136) == v32 )
      v33 = *(_QWORD *)(v30 + 136) - v32;
    v34 = *(_QWORD *)(v30 + 152) + *(_QWORD *)(v30 + 160);
    if ( v33 == v34 )
    {
      sub_496D0(v30 + 120);
      v32 = *(_QWORD *)(v30 + 128);
      v34 = *(_QWORD *)(v30 + 160) + *(_QWORD *)(v30 + 152);
    }
    v35 = *(_QWORD *)(v32 + 8 * (v34 / 0x38)) + 72 * (v34 % 0x38);
    *(_QWORD *)v35 = 0xFFFFFFFFLL;
    *(_QWORD *)(v35 + 8) = -1;
    *(_BYTE *)(v35 + 16) = 0;
    *(_DWORD *)(v35 + 20) = 0;
    copy_debug_event(v35, (__int64)&v56);
    ++*(_QWORD *)(v30 + 160);
    *(_BYTE *)(v30 + 1228) = 0;
  }
  if ( !v31 )
    goto LABEL_80;
  set_debug_event_code((__int64)&v56, 11);
  if ( (*(_DWORD *)dest & 0xFFFFFFFu) > 0xB || (v36 = 2306, !_bittest(&v36, *(_DWORD *)dest & 0xFFFFFFF)) )
  {
    if ( !(_BYTE)under_debugger )
      interr(3295);
    goto LABEL_92;
  }
  if ( (*(_DWORD *)dest & 0xFFFFFFF) != 0 )
  {
    v37 = *(_QWORD *)(v30 + 128);
    v38 = 56 * ((*(_QWORD *)(v30 + 136) - v37) >> 3) - 1;
    if ( *(_QWORD *)(v30 + 136) == v37 )
      v38 = *(_QWORD *)(v30 + 136) - v37;
    v39 = *(_QWORD *)(v30 + 152) + *(_QWORD *)(v30 + 160);
    if ( v38 == v39 )
    {
      sub_496D0(v30 + 120);
      v37 = *(_QWORD *)(v30 + 128);
      v39 = *(_QWORD *)(v30 + 160) + *(_QWORD *)(v30 + 152);
    }
    v40 = *(_QWORD *)(v37 + 8 * (v39 / 0x38)) + 72 * (v39 % 0x38);
    *(_QWORD *)v40 = 0xFFFFFFFFLL;
    *(_QWORD *)(v40 + 8) = -1;
    *(_BYTE *)(v40 + 16) = 0;
    *(_DWORD *)(v40 + 20) = 0;
    copy_debug_event(v40, (__int64)&v56);
    ++*(_QWORD *)(v30 + 160);
    *(_BYTE *)(v30 + 1228) = 0;
  }
  if ( !(unsigned __int8)qgetenv("IDA_SKIP_SYMS", 0) )
  {
    *(_OWORD *)v48 = 0;
    v49 = 0;
    if ( *(_QWORD *)&dest[12] )
      v41 = *(const char **)&dest[4];
    else
      v41 = s1;
    v54 = 4;
    v53 = off_146E90;
    v55 = v48;
    sub_5B480(v41, &v53, 0);
    v10 = *(unsigned __int64 **)&dest[28];
    v42 = *(_QWORD *)&dest[36];
    if ( *(_QWORD *)&dest[12] )
      v43 = *(const char **)&dest[4];
    else
      v43 = s1;
    sub_37F60((__int64)ptr, v43);
    sub_414E0((__int64)&v53, (__int64)v10, v42, (__int64)ptr, (__int64)v48);
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
      ptr[2] = nullptr;
    }
    sub_41760(v30, (__int64)&v53);
    sub_415E0((__int64)&v53);
    if ( v48[0] )
    {
      v48[1] = nullptr;
      qfree(v48[0]);
      v48[0] = nullptr;
      v49 = 0;
    }
  }
LABEL_80:
  if ( v50[0] )
  {
    sub_385C0((__int64 *)v50, 0);
    qfree(v50[0]);
    v50[0] = nullptr;
    v51 = 0;
  }
  LOBYTE(v10) = 1;
LABEL_83:
  free_debug_event((__int64)&v56);
  return (unsigned int)v10;
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
// 33AE0: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// A3F50: using guessed type __int64 __fastcall nullsub_12(_QWORD);
// 146E90: using guessed type __int64 (__fastcall *off_146E90[3])();
// 158B40: using guessed type __int64 under_debugger;
