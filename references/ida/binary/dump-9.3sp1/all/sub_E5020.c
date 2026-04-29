__int64 __fastcall sub_E5020(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, char a6)
{
  __int64 v10; // rdi
  unsigned __int64 v11; // r13
  int v12; // r14d
  int tinfo_size; // eax
  int v14; // eax
  int v15; // r8d
  int v16; // r9d
  const char *v17; // rdx
  unsigned int v18; // ebx
  const void *v20; // r8
  void *v21; // rax
  unsigned int v22; // edx
  __int64 v23; // rax
  int v24; // esi
  bool v25; // zf
  int v26; // ecx
  unsigned int v27; // edx
  __int64 *v28; // rsi
  unsigned int v29; // r13d
  int v30; // ebp
  int v31; // r13d
  int v32; // eax
  char v33; // al
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rbp
  _QWORD *v37; // rax
  int v38; // eax
  __int64 v39; // rdi
  int v40; // r8d
  char v41; // al
  unsigned int v42; // ebp
  int v43; // eax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // rcx
  int v49; // edi
  int i; // r13d
  __int64 v51; // rbp
  __int64 v52; // rsi
  __int64 v53; // rdx
  _QWORD *v54; // rax
  char v55; // al
  int v56; // eax
  __int64 v57; // [rsp-8h] [rbp-90h]
  _QWORD *v58; // [rsp+0h] [rbp-88h]
  const void *v59; // [rsp+0h] [rbp-88h]
  int v61; // [rsp+8h] [rbp-80h]
  int v62; // [rsp+10h] [rbp-78h]
  int v64; // [rsp+14h] [rbp-74h]
  int v65; // [rsp+14h] [rbp-74h]
  int v66; // [rsp+14h] [rbp-74h]
  int v67; // [rsp+14h] [rbp-74h]
  int v68; // [rsp+14h] [rbp-74h]
  int v69; // [rsp+14h] [rbp-74h]
  int v70; // [rsp+18h] [rbp-70h]
  __int64 v71; // [rsp+18h] [rbp-70h]
  int v72; // [rsp+20h] [rbp-68h] BYREF
  __int64 v73; // [rsp+28h] [rbp-60h]
  __int64 v74; // [rsp+30h] [rbp-58h] BYREF
  __int64 v75; // [rsp+38h] [rbp-50h]
  unsigned __int64 v76; // [rsp+48h] [rbp-40h]

  v10 = a1 + 32;
  v76 = __readfsqword(0x28u);
  if ( v10 != a3 + 16 )
  {
    v11 = *(_QWORD *)(a3 + 24);
    if ( v11 > 1 )
    {
      v20 = *(const void **)(a3 + 16);
      v21 = *(void **)(a1 + 32);
      if ( *(_QWORD *)(a1 + 48) < v11 )
      {
        v59 = *(const void **)(a3 + 16);
        v21 = (void *)qvector_reserve(v10, *(_QWORD *)(a1 + 32), *(_QWORD *)(a3 + 24), 1);
        v20 = v59;
        *(_QWORD *)(a1 + 32) = v21;
      }
      *(_QWORD *)(a1 + 40) = v11;
      memmove(v21, v20, v11 - 1);
      *(_BYTE *)(*(_QWORD *)(a1 + 32) + v11 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 40) = 0;
    }
  }
  copy_argloc();
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a3 + 72);
  v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 64) + 1504LL) + 80LL);
  tinfo_size = v12;
  if ( *(_BYTE *)(a3 + 64) )
  {
    copy_tinfo_t();
    tinfo_size = get_tinfo_size();
  }
  *(_DWORD *)(a1 + 4) = tinfo_size;
  v58 = *(_QWORD **)(a2 + 64);
  if ( (*(_BYTE *)(a3 + 72) & 0x10) != 0 )
  {
    *(_BYTE *)a1 = 4;
    v23 = sub_335B10(
            (_DWORD)v58,
            *(_QWORD *)(*(_QWORD *)(a2 + 56) + 24LL),
            (unsigned int)"UNUSED_ARG",
            (int)a3 + 64,
            0,
            0,
            1,
            v57,
            (_DWORD)v58,
            a5,
            v62,
            v70);
    *(_DWORD *)(a1 + 72) &= ~0x10u;
    *(_QWORD *)(a1 + 8) = v23;
    return 1;
  }
  v14 = sub_DB470(a2, a4);
  sub_1C5FB0(&v72, a1 + 56, *(unsigned int *)(a1 + 4), v14);
  if ( (unsigned int)(v72 - 3) <= 1 )
  {
    v22 = v73;
    if ( v72 == 4 )
    {
      v24 = (unsigned __int16)v73;
      v25 = *(_BYTE *)(a1 + 24) == 0;
      v26 = *(_DWORD *)(a1 + 4);
      *(_BYTE *)a1 = 1;
      *(_DWORD *)(a1 + 8) = (unsigned __int16)v22;
      if ( v25 )
      {
        v26 *= 2;
        *(_DWORD *)(a1 + 4) = v26;
      }
      v27 = HIWORD(v22);
      if ( v24 + v26 / 2 != v27 )
        sub_1252A0(a1, v24, v27, v26 >> 1, v15, v16, (_DWORD)v58, a5);
    }
    else
    {
      *(_BYTE *)a1 = 1;
      *(_DWORD *)(a1 + 8) = v22;
    }
    goto LABEL_13;
  }
  if ( v72 == 1 )
  {
    v28 = *(__int64 **)(a3 + 64);
    v71 = v73;
    if ( (_BYTE)v28 )
    {
      LODWORD(v74) = 0;
      get_tinfo_size();
      v30 = v74;
      if ( ((unsigned int)v74 & ((_DWORD)v74 - 1)) != 0 )
        sub_E3A00(&v74);
      v31 = 2 * v12;
      if ( (int)v74 > 2 * v12 )
        goto LABEL_50;
    }
    else
    {
      v29 = *(_DWORD *)(a1 + 4);
      v30 = round_down_power2();
      if ( v30 > 1 )
      {
        while ( (int)v29 % v30 )
        {
          v30 >>= 1;
          if ( v30 == 1 )
            goto LABEL_49;
        }
      }
      if ( (v30 & (v30 - 1)) != 0 )
        sub_E3A00(v29);
LABEL_49:
      v31 = 2 * v12;
      if ( 2 * v12 < v30 )
      {
LABEL_50:
        if ( a5 <= 0x10 )
        {
          v38 = getinf();
          if ( v38 == 176 || v38 == 256 )
          {
            if ( v12 > v31 )
            {
LABEL_56:
              v30 = v31;
LABEL_57:
              v32 = getinf();
LABEL_59:
              if ( v32 == 176 || v32 == 256 )
                goto LABEL_42;
              goto LABEL_61;
            }
LABEL_68:
            v30 = v31;
LABEL_69:
            v32 = getinf();
LABEL_37:
            if ( v32 == 176 || v32 == 256 )
              goto LABEL_41;
            goto LABEL_39;
          }
        }
        else if ( a5 == 176 || a5 == 256 )
        {
          v30 = v31;
          if ( v12 <= v31 )
            v30 = v12;
          goto LABEL_42;
        }
        v28 = (_QWORD *)&dword_200;
        if ( (unsigned __int8)getinf_flag() )
          goto LABEL_42;
        if ( v12 > v31 )
        {
          v30 = v31;
          if ( a5 > 0x10 )
          {
LABEL_61:
            v28 = (_QWORD *)&unk_2;
            v33 = getinf_flag();
LABEL_40:
            if ( !v33 )
LABEL_41:
              v30 = v12;
LABEL_42:
            v34 = *(unsigned int *)(a1 + 4);
            v35 = (__int64)v58;
            if ( v58[17] >= v71 + (int)((v34 + v30 - 1) & -v30) || !v58[1] )
            {
LABEL_47:
              if ( !*(_BYTE *)a1 )
              {
                *(_BYTE *)a1 = 5;
                v37 = (_QWORD *)j__qalloc_or_throw(16, (__int64)v28, v35, v34);
                *v37 = v58;
                v37[1] = v71;
                *(_QWORD *)(a1 + 8) = v37;
              }
              goto LABEL_13;
            }
            if ( (*(_BYTE *)(a2 + 24) & 8) == 0 )
            {
LABEL_70:
              v18 = 0;
              goto LABEL_14;
            }
            v36 = v58[18];
            if ( v36 > v71 || !a6 )
              goto LABEL_47;
            v39 = (unsigned int)v34;
            v64 = *(_DWORD *)(a1 + 4);
            v40 = round_down_power2();
            if ( v40 > 1 )
            {
              while ( v64 % v40 )
              {
                v40 >>= 1;
                if ( v40 == 1 )
                  goto LABEL_76;
              }
            }
            if ( (v40 & (v40 - 1)) != 0 )
              sub_E3A00(v39);
LABEL_76:
            if ( v31 >= v40 )
            {
              if ( v12 > v40 )
              {
                if ( a5 > 0x10 )
                {
LABEL_79:
                  if ( a5 == 176 || a5 == 256 )
                    goto LABEL_84;
                  goto LABEL_81;
                }
LABEL_109:
                v67 = v40;
                a5 = getinf();
                v40 = v67;
                goto LABEL_79;
              }
              if ( a5 > 0x10 )
                goto LABEL_105;
              goto LABEL_112;
            }
            if ( a5 <= 0x10 )
            {
              v69 = v40;
              v56 = getinf();
              if ( v56 == 176 || v56 == 256 )
              {
                if ( v12 > v31 )
                {
LABEL_108:
                  v40 = v31;
                  goto LABEL_109;
                }
LABEL_111:
                v40 = v31;
LABEL_112:
                v68 = v40;
                a5 = getinf();
                v40 = v68;
LABEL_105:
                if ( a5 == 176 || a5 == 256 )
                  goto LABEL_83;
                goto LABEL_107;
              }
              v40 = v69;
            }
            else if ( a5 == 256 || a5 == 176 )
            {
              v40 = v31;
              if ( v12 <= v31 )
                v40 = v12;
              goto LABEL_84;
            }
            v28 = (_QWORD *)&dword_200;
            v66 = v40;
            v55 = getinf_flag();
            v40 = v66;
            if ( v55 )
              goto LABEL_84;
            if ( v12 > v31 )
            {
              if ( a5 > 0x10 )
              {
                v40 = v31;
LABEL_81:
                v28 = (_QWORD *)&unk_2;
                v61 = v40;
                v41 = getinf_flag();
                goto LABEL_82;
              }
              goto LABEL_108;
            }
            if ( a5 > 0x10 )
            {
              v40 = v31;
LABEL_107:
              v28 = (_QWORD *)&byte_4;
              v61 = v40;
              v41 = getinf_flag();
LABEL_82:
              v40 = v61;
              if ( v41 )
              {
LABEL_84:
                v34 = v71 - v36;
                v35 = v71 - v36 + v40 - 1;
                if ( v71 - v36 == (v35 & -v40) )
                  goto LABEL_47;
                v42 = *(_DWORD *)(a1 + 4);
                v74 = 0;
                v75 = 0;
                cleanup_argloc();
                v28 = &v74;
                LODWORD(v74) = 1;
                v75 = v71;
                v43 = sub_1F06C0(v58 + 54, &v74, v42, 0);
                if ( v43 != -1 )
                {
                  v44 = v58[54] + 104LL * v43;
                  v45 = *(_DWORD *)v44 == 1 ? *(_QWORD *)(v44 + 8) : -1LL;
                  if ( v71 == v45 && (signed int)v42 <= *(_DWORD *)(v44 + 88) )
                  {
                    cleanup_argloc();
                    goto LABEL_47;
                  }
                }
                cleanup_argloc();
                v46 = *(int *)(a1 + 4);
                v65 = sub_138140(v58, v46, 0);
                if ( v65 != -1 )
                {
                  v49 = *(_DWORD *)(a1 + 4);
                  for ( i = 0; v49 > i; i += v12 )
                  {
                    if ( i + v12 > v49 )
                      v12 = round_down_power2();
                    v51 = j__qalloc_or_throw(80, v46, v47, v48);
                    v52 = v58[5];
                    *(_QWORD *)(v51 + 40) = 0;
                    *(_QWORD *)(v51 + 32) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v51 + 48) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v51 + 56) = 0;
                    *(_QWORD *)(v51 + 64) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v51 + 72) = 0;
                    sub_330970(v51, v52);
                    *(_BYTE *)(v51 + 32) = 5;
                    *(_DWORD *)v51 = 4;
                    v54 = (_QWORD *)j__qalloc_or_throw(16, v52, v53, v71);
                    v46 = v51;
                    *v54 = v58;
                    v54[1] = v71 + i;
                    *(_QWORD *)(v51 + 40) = v54;
                    *(_DWORD *)(v51 + 36) = v12;
                    *(_BYTE *)(v51 + 64) = 1;
                    *(_DWORD *)(v51 + 72) = i + v65;
                    *(_DWORD *)(v51 + 68) = v12;
                    sub_A3160(a2, (_QWORD *)v51, *(_QWORD *)(*(_QWORD *)(a2 + 56) + 16LL));
                    v49 = *(_DWORD *)(a1 + 4);
                  }
                  *(_BYTE *)a1 = 1;
                  *(_DWORD *)(a1 + 8) = v65;
                  goto LABEL_13;
                }
                goto LABEL_70;
              }
LABEL_83:
              v40 = v12;
              goto LABEL_84;
            }
            goto LABEL_111;
          }
          goto LABEL_56;
        }
        v30 = v31;
        if ( a5 > 0x10 )
        {
LABEL_39:
          v28 = (_QWORD *)&byte_4;
          v33 = getinf_flag();
          goto LABEL_40;
        }
        goto LABEL_68;
      }
    }
    v32 = a5;
    if ( v12 > v30 )
    {
      if ( a5 > 0x10 )
        goto LABEL_59;
      goto LABEL_57;
    }
    if ( a5 > 0x10 )
      goto LABEL_37;
    goto LABEL_69;
  }
  if ( v72 != 2 )
  {
    if ( !under_debugger )
      sub_383060(51008);
    BUG();
  }
  v74 = 0;
  copy_tinfo_t();
  v17 = s1;
  if ( *(_QWORD *)(a3 + 24) )
    v17 = *(const char **)(a3 + 16);
  sub_11D150(a1, v58, v17, &v74, &v72);
  clear_tinfo_t();
LABEL_13:
  v18 = 1;
LABEL_14:
  cleanup_argloc();
  return v18;
}
