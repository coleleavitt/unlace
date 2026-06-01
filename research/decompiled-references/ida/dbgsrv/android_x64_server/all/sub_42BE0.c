/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42BE0
// Address: 0x0000000000042BE0

//----- (0000000000042BE0) ----------------------------------------------------
__int64 __fastcall sub_42BE0(__int64 a1, __int64 *a2)
{
  unsigned __int64 v2; // rbp
  __int128 v4; // xmm0
  char **v5; // r15
  const char *v6; // rbp
  const char *v7; // rax
  const char *v8; // rbp
  size_t v9; // rax
  size_t v10; // r14
  void *v11; // r13
  void *v12; // rax
  int v13; // eax
  const char *v14; // rdx
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  size_t v17; // rbp
  __int64 v18; // r14
  char *v19; // rdi
  const char *v20; // rcx
  const char *v21; // rdx
  const char *v22; // r14
  unsigned __int64 v23; // r15
  __int64 v24; // rbp
  int v25; // r13d
  unsigned __int64 v26; // rax
  __int64 v27; // rbx
  const char *v28; // rdi
  unsigned __int64 *v29; // rbp
  void *v30; // rax
  __int64 v31; // rbx
  const char *v32; // r8
  const char *v33; // rcx
  const char *v34; // rsi
  const char *v35; // rdx
  _QWORD *v38; // rax
  unsigned __int64 v39; // r14
  __int64 v40; // r13
  int v41; // r15d
  __int64 v42; // rdx
  const char *v43; // r13
  unsigned __int64 v44; // r15
  const char *v45; // r12
  _QWORD *v47; // rax
  unsigned __int64 v48; // rbx
  __int64 v49; // r13
  int v50; // r14d
  unsigned __int64 v51; // [rsp+8h] [rbp-10A0h]
  const char **v52; // [rsp+10h] [rbp-1098h]
  __int64 v53; // [rsp+20h] [rbp-1088h]
  __int64 (__fastcall **v54)(); // [rsp+28h] [rbp-1080h] BYREF
  int v55; // [rsp+30h] [rbp-1078h]
  void *ptr[2]; // [rsp+38h] [rbp-1070h]
  unsigned __int64 v57; // [rsp+48h] [rbp-1060h]
  void *dest[2]; // [rsp+50h] [rbp-1058h] BYREF
  unsigned __int64 v59; // [rsp+60h] [rbp-1048h]
  _BYTE src[16]; // [rsp+70h] [rbp-1038h] BYREF
  int v61; // [rsp+80h] [rbp-1028h]
  unsigned __int64 v62; // [rsp+1070h] [rbp-38h]

  v62 = __readfsqword(0x28u);
  LOBYTE(v2) = 1;
  if ( *(_QWORD *)(a1 + 864) )
    return (unsigned int)v2;
  *(_QWORD *)&v4 = 0;
  *(_OWORD *)dest = 0;
  v59 = 0;
  v5 = (char **)(a1 + 1232);
  if ( *(_QWORD *)(a1 + 1240) > 1u )
  {
    v7 = qbasename(*v5);
    v8 = v7;
    if ( v7 && (v9 = strlen(v7)) != 0 )
    {
      v10 = v9;
      v11 = (void *)(v9 + 1);
      v12 = dest[0];
      if ( v59 < (unsigned __int64)v11 )
      {
        v12 = qvector_reserve((__int64)dest, (char *)dest[0], (unsigned __int64)v11, 1u);
        dest[0] = v12;
      }
      dest[1] = v11;
      memmove(v12, v8, v10);
      *((_BYTE *)dest[0] + v10) = 0;
    }
    else
    {
      dest[1] = nullptr;
    }
  }
  else
  {
    v55 = 2;
    v54 = &off_146E18;
    *(_OWORD *)ptr = 0;
    v57 = 0;
    if ( *(_QWORD *)(a1 + 1264) )
      v6 = *(const char **)(a1 + 1256);
    else
      v6 = s1;
    v13 = sub_5B480(v6, &v54, 0);
    if ( v13 != 2 )
    {
      if ( v13 )
      {
        sub_40970(a1, "%s: could not read symbols on remote computer", v6);
      }
      else if ( !*(_BYTE *)(a1 + 880) )
      {
        *(_BYTE *)(a1 + 880) = 1;
        sub_40970(
          a1,
          "AUTOHIDE DATABASE\n%s:\nCould not find the elf interpreter name,\nshared object events will not be reported",
          v6);
      }
      v54 = &off_146E18;
      if ( ptr[0] )
      {
        ptr[1] = nullptr;
        qfree(ptr[0]);
        ptr[0] = nullptr;
        v57 = 0;
      }
LABEL_21:
      LODWORD(v2) = 0;
      goto LABEL_56;
    }
    if ( ptr[1] )
      v14 = (const char *)ptr[0];
    else
      v14 = s1;
    qmake_full_path((unsigned __int64)src, 4096, v14);
    v4 = *(_OWORD *)dest;
    v15 = v59;
    *(_OWORD *)dest = *(_OWORD *)ptr;
    v59 = v57;
    *(_OWORD *)ptr = v4;
    v57 = v15;
    v16 = __strlen_chk(src, 4096);
    v17 = v16;
    if ( v16 )
    {
      v18 = v16 + 1;
      if ( *(_QWORD *)(a1 + 1248) >= (unsigned __int64)(v16 + 1) )
      {
        v19 = *v5;
      }
      else
      {
        v19 = (char *)qvector_reserve((__int64)v5, *v5, v16 + 1, 1u);
        *v5 = v19;
      }
      *(_QWORD *)(a1 + 1240) = v18;
      memmove(v19, src, v17);
      *(_BYTE *)(*(_QWORD *)(a1 + 1232) + v17) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 1240) = 0;
    }
    v54 = &off_146E18;
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
      v57 = 0;
    }
  }
  v20 = s1;
  v21 = s1;
  if ( *(_QWORD *)(a1 + 1240) )
    v21 = *v5;
  if ( dest[1] )
    v20 = (const char *)dest[0];
  sub_9FDA0(a1, "INTERP: %s, SONAME: %s\n", v21, v20);
  v51 = a1;
  v53 = *(_QWORD *)(a1 + 1240);
  v52 = (const char **)v5;
  if ( v53 )
    v22 = *v5;
  else
    v22 = s1;
  v23 = a2[1];
  if ( !v23 )
    goto LABEL_52;
  v24 = *a2;
  v25 = 1;
  v26 = 0;
  while ( 1 )
  {
    v27 = 80 * v26;
    v28 = s1;
    if ( *(_QWORD *)(v24 + 80 * v26 + 24) )
      v28 = *(const char **)(v24 + v27 + 16);
    if ( !strcmp(v28, v22) )
      break;
    v26 = v25++;
    if ( v23 <= v26 )
      goto LABEL_52;
  }
  v29 = (unsigned __int64 *)(v27 + v24);
  if ( !v29 )
  {
LABEL_52:
    if ( v53 )
      v35 = *v52;
    else
      v35 = s1;
    LODWORD(v2) = 0;
    sub_40970(v51, "%s: could not find in process memory", v35);
    goto LABEL_56;
  }
  v30 = (void *)sub_433A0((__int64)v28, a2, v29);
  v31 = v51;
  v32 = s1;
  v33 = s1;
  if ( *(_QWORD *)(v51 + 1240) )
    v33 = *v52;
  if ( dest[1] )
    v32 = (const char *)dest[0];
  sub_40DB0(v51, (const char *)*v29, v30, v33, v32, *(double *)&v4);
  if ( dest[1] )
    v34 = (const char *)dest[0];
  else
    v34 = s1;
  sub_39C10(v51, v34);
  v2 = *(_DWORD *)(v51 + 896) - 1;
  while ( (v2 & 0x80000000) == 0LL )
  {
    if ( !strcmp(*(const char **)(*(_QWORD *)(v51 + 912) + 8 * v2--), "_r_debug") )
    {
      v38 = (_QWORD *)(v51 + 888);
      ++v2;
      goto LABEL_70;
    }
  }
  v39 = *(_QWORD *)(v51 + 944);
  if ( !v39 )
    goto LABEL_77;
  v40 = *(_QWORD *)(v51 + 960);
  v41 = 1;
  v2 = 0;
  while ( strcmp(*(const char **)(v40 + 8 * v2), "_r_debug") )
  {
    v2 = v41++;
    if ( v39 <= v2 )
      goto LABEL_77;
  }
  v38 = (_QWORD *)(v51 + 936);
LABEL_70:
  v42 = *(_QWORD *)(*v38 + 8 * v2);
  if ( v42 != -1 && (unsigned int)sub_3D950(v51, 0xFFFFFFFF, v42, (__int64)src, 32, 0) == 32 )
  {
    v2 = v61;
    if ( v61 )
    {
      if ( (unsigned int)sub_3D950(v51, 0xFFFFFFFF, v61, v51 + 872, 1, 0) == 1
        && (*(unsigned int (__fastcall **)(unsigned __int64, _QWORD, __int64, unsigned __int64, __int64))(*(_QWORD *)v51 + 312LL))(
             v51,
             0,
             4,
             v2,
             0xFFFFFFFFLL) )
      {
        *(_QWORD *)(v51 + 864) = v2;
        *(_BYTE *)(v51 + 873) = 1;
      }
      else
      {
        sub_9FDA0(v51, "%a: could not set shlib bpt\n", *(double *)&v4);
      }
    }
  }
LABEL_77:
  v43 = *(const char **)(v51 + 864);
  if ( !v43 )
  {
    v44 = 0;
    while ( 2 )
    {
      v45 = off_146CD0[v44];
      if ( v44 != 5 )
      {
        v2 = *(_DWORD *)(v31 + 896) - 1;
        while ( (v2 & 0x80000000) == 0LL )
        {
          if ( !strcmp(*(const char **)(*(_QWORD *)(v31 + 912) + 8 * v2--), v45) )
          {
            ++v2;
            v47 = (_QWORD *)(v51 + 888);
            goto LABEL_90;
          }
        }
        v48 = *(_QWORD *)(v31 + 944);
        if ( !v48 )
          goto LABEL_94;
        v49 = *(_QWORD *)(v51 + 960);
        v50 = 1;
        v2 = 0;
        while ( strcmp(*(const char **)(v49 + 8 * v2), v45) )
        {
          v2 = v50++;
          if ( v48 <= v2 )
            goto LABEL_94;
        }
        v47 = (_QWORD *)(v51 + 936);
LABEL_90:
        v43 = *(const char **)(*v47 + 8 * v2);
        if ( (unsigned __int64)(v43 + 1) >= 2 )
        {
          if ( (unsigned int)sub_3D950(v51, 0xFFFFFFFF, (__int64)v43, v51 + 872, 1, 0) == 1
            && (*(unsigned int (__fastcall **)(unsigned __int64, _QWORD, __int64, const char *, __int64))(*(_QWORD *)v51 + 312LL))(
                 v51,
                 0,
                 4,
                 v43,
                 0xFFFFFFFFLL) )
          {
            v31 = v51;
            *(_QWORD *)(v51 + 864) = v43;
            *(_BYTE *)(v51 + 873) = 1;
            goto LABEL_96;
          }
          sub_9FDA0(v51, "%a: could not set shlib bpt (name=%s)\n", *(double *)&v4, v43);
        }
LABEL_94:
        ++v44;
        v31 = v51;
        if ( v44 < 6 )
          continue;
      }
      break;
    }
    v43 = *(const char **)(v31 + 864);
    if ( !v43 )
      goto LABEL_21;
  }
LABEL_96:
  LOBYTE(v2) = 1;
  sub_9FDA0(v31, "%a: added shlib bpt (%s)\n", *(double *)&v4, v43);
LABEL_56:
  if ( dest[0] )
  {
    dest[1] = nullptr;
    qfree(dest[0]);
    dest[0] = nullptr;
    v59 = 0;
  }
  return (unsigned int)v2;
}
// 42FF6: variable 'v2' is possibly undefined
// 33AE0: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// 146CD0: using guessed type char *off_146CD0[5];
// 146E18: using guessed type __int64 (__fastcall *off_146E18)();
