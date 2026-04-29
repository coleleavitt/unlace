__int64 __fastcall sub_D34C0(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned int a5, int a6)
{
  __int64 v9; // rbx
  unsigned __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // r14
  int v13; // r8d
  int v14; // r9d
  const char *v15; // rdx
  size_t v16; // r8
  const void *v17; // r14
  void *v18; // rax
  unsigned int v19; // edx
  unsigned int v20; // ebx
  unsigned int tinfo_size; // eax
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rbx
  unsigned int v26; // r13d
  int v27; // r12d
  int v28; // esi
  bool v29; // zf
  int v30; // ecx
  unsigned int v31; // edx
  int v32; // ecx
  int v33; // eax
  char v34; // al
  unsigned int v35; // r13d
  _QWORD *v36; // rax
  char v37; // al
  int v38; // eax
  int v39; // eax
  __int64 v40; // r8
  int v41; // ecx
  int v42; // r12d
  char v43; // al
  unsigned int v44; // r13d
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // rdx
  int v48; // edi
  int i; // r13d
  __int64 v50; // r12
  __int64 v51; // rsi
  _QWORD *v52; // rax
  char v53; // al
  int v54; // eax
  __int64 v55; // [rsp-8h] [rbp-90h]
  int v56; // [rsp+0h] [rbp-88h]
  __int64 v58; // [rsp+8h] [rbp-80h]
  __int64 v60; // [rsp+10h] [rbp-78h]
  int v61; // [rsp+10h] [rbp-78h]
  __int64 v62; // [rsp+10h] [rbp-78h]
  __int64 v63; // [rsp+10h] [rbp-78h]
  __int64 v64; // [rsp+10h] [rbp-78h]
  int v65; // [rsp+18h] [rbp-70h]
  int v66; // [rsp+1Ch] [rbp-6Ch]
  int v67; // [rsp+1Ch] [rbp-6Ch]
  int v68; // [rsp+1Ch] [rbp-6Ch]
  int v69; // [rsp+1Ch] [rbp-6Ch]
  int v70; // [rsp+1Ch] [rbp-6Ch]
  int v71; // [rsp+1Ch] [rbp-6Ch]
  int v72; // [rsp+1Ch] [rbp-6Ch]
  int v73; // [rsp+20h] [rbp-68h] BYREF
  __int64 v74; // [rsp+28h] [rbp-60h]
  __int64 v75; // [rsp+30h] [rbp-58h] BYREF
  __int64 v76; // [rsp+38h] [rbp-50h]
  unsigned __int64 v77; // [rsp+48h] [rbp-40h]

  LODWORD(v9) = a4;
  v77 = __readfsqword(0x28u);
  if ( a1 + 32 != a3 + 16 )
  {
    v10 = *(_QWORD *)(a3 + 24);
    if ( !v10 || (v16 = v10 - 1, v10 == 1) )
    {
      *(_QWORD *)(a1 + 40) = 0;
    }
    else
    {
      v17 = *(const void **)(a3 + 16);
      v18 = *(void **)(a1 + 32);
      if ( *(_QWORD *)(a1 + 48) < v10 )
      {
        v56 = v10 - 1;
        v18 = (void *)qvector_reserve();
        v16 = v10 - 1;
        *(_QWORD *)(a1 + 32) = v18;
      }
      *(_QWORD *)(a1 + 40) = v10;
      memmove(v18, v17, v16);
      *(_BYTE *)(*(_QWORD *)(a1 + 32) + v10 - 1) = 0;
    }
  }
  copy_argloc();
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a3 + 72);
  v65 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 64) + 1504LL) + 80LL);
  v11 = (unsigned int)v65;
  if ( !*(_BYTE *)(a3 + 64) )
  {
    *(_DWORD *)(a1 + 4) = v65;
    v12 = *(_QWORD *)(a2 + 64);
    if ( (*(_BYTE *)(a3 + 72) & 0x10) == 0 )
      goto LABEL_6;
LABEL_24:
    *(_BYTE *)a1 = 4;
    v20 = 1;
    v23 = sub_332690(
            v12,
            *(_QWORD *)(*(_QWORD *)(a2 + 56) + 24LL),
            (unsigned int)"UNUSED_ARG",
            (int)a3 + 64,
            0,
            0,
            1,
            v55,
            v56,
            a5,
            a6,
            v65);
    *(_DWORD *)(a1 + 72) &= ~0x10u;
    *(_QWORD *)(a1 + 8) = v23;
    return v20;
  }
  copy_tinfo_t();
  tinfo_size = get_tinfo_size();
  v11 = tinfo_size;
  *(_DWORD *)(a1 + 4) = tinfo_size;
  v12 = *(_QWORD *)(a2 + 64);
  if ( (*(_BYTE *)(a3 + 72) & 0x10) != 0 )
    goto LABEL_24;
LABEL_6:
  if ( (*(_BYTE *)(a2 + 24) & 8) != 0 )
    v9 = *(_QWORD *)(v12 + 136) + *(int *)(v12 + 116);
  sub_1C3530(&v73, a1 + 56, v11, (int)v9);
  if ( (unsigned int)(v73 - 3) <= 1 )
  {
    v19 = v74;
    if ( v73 == 4 )
    {
      v28 = (unsigned __int16)v74;
      v29 = *(_BYTE *)(a1 + 24) == 0;
      v30 = *(_DWORD *)(a1 + 4);
      *(_BYTE *)a1 = 1;
      *(_DWORD *)(a1 + 8) = (unsigned __int16)v19;
      if ( v29 )
      {
        v30 *= 2;
        *(_DWORD *)(a1 + 4) = v30;
      }
      v31 = HIWORD(v19);
      if ( v28 + v30 / 2 != v31 )
        sub_122DA0(a1, v28, v31, v30 >> 1, v13, v14, (unsigned int)&v73, a5, a6);
    }
    else
    {
      *(_BYTE *)a1 = 1;
      *(_DWORD *)(a1 + 8) = v19;
    }
    goto LABEL_20;
  }
  if ( v73 == 1 )
  {
    v24 = *(_QWORD *)(a3 + 64);
    v25 = v74;
    if ( (_BYTE)v24 )
    {
      LODWORD(v75) = 0;
      get_tinfo_size();
      v27 = v75;
      if ( ((unsigned int)v75 & ((_DWORD)v75 - 1)) != 0 )
        sub_CE830(&v75, v24);
      v32 = 2 * v65;
      if ( (int)v75 <= 2 * v65 )
        goto LABEL_37;
      if ( a5 > 0x10 )
      {
        if ( a5 == 256 || a5 == 176 )
        {
LABEL_68:
          v27 = v65;
          if ( v65 > v32 )
            v27 = v32;
          goto LABEL_44;
        }
        goto LABEL_56;
      }
    }
    else
    {
      v26 = *(_DWORD *)(a1 + 4);
      v27 = round_down_power2();
      if ( v27 > 1 )
      {
        while ( (int)v26 % v27 )
        {
          v27 >>= 1;
          if ( v27 == 1 )
            goto LABEL_36;
        }
      }
      if ( (v27 & (v27 - 1)) != 0 )
        sub_CE830(v26, v24);
LABEL_36:
      v32 = 2 * v65;
      if ( 2 * v65 >= v27 )
      {
LABEL_37:
        v24 = a5;
        v33 = a5;
        if ( v65 <= v27 )
        {
          if ( a5 > 0x10 )
          {
LABEL_39:
            if ( v33 == 176 || v33 == 256 )
              goto LABEL_43;
            goto LABEL_41;
          }
LABEL_75:
          v70 = v32;
          v33 = getinf();
          v32 = v70;
          goto LABEL_39;
        }
        if ( a5 > 0x10 )
          goto LABEL_62;
        goto LABEL_60;
      }
      if ( a5 > 0x10 )
      {
        if ( a5 == 176 || a5 == 256 )
          goto LABEL_68;
        goto LABEL_56;
      }
    }
    v69 = v32;
    v38 = getinf();
    v32 = v69;
    if ( v38 == 176 || v38 == 256 )
    {
      if ( v65 > v69 )
      {
LABEL_59:
        v27 = v32;
LABEL_60:
        v68 = v32;
        v33 = getinf();
        v32 = v68;
LABEL_62:
        if ( v33 == 176 || v33 == 256 )
          goto LABEL_44;
        goto LABEL_64;
      }
LABEL_74:
      v27 = v32;
      goto LABEL_75;
    }
LABEL_56:
    v24 = 512;
    v67 = v32;
    v37 = getinf_flag();
    v32 = v67;
    if ( v37 )
      goto LABEL_44;
    if ( v65 > v67 )
    {
      v27 = v67;
      if ( a5 > 0x10 )
      {
LABEL_64:
        v24 = 2;
        v66 = v32;
        v34 = getinf_flag();
LABEL_42:
        v32 = v66;
        if ( !v34 )
LABEL_43:
          v27 = v65;
LABEL_44:
        v35 = *(_DWORD *)(a1 + 4);
        if ( *(_QWORD *)(v12 + 136) >= v25 + (int)((v35 + v27 - 1) & -v27) || !*(_QWORD *)(v12 + 8) )
        {
LABEL_49:
          if ( !*(_BYTE *)a1 )
          {
            *(_BYTE *)a1 = 5;
            v36 = (_QWORD *)j__qalloc_or_throw();
            *v36 = v12;
            v36[1] = v25;
            *(_QWORD *)(a1 + 8) = v36;
          }
          goto LABEL_20;
        }
        if ( (*(_BYTE *)(a2 + 24) & 8) == 0 )
        {
LABEL_76:
          v20 = 0;
          goto LABEL_21;
        }
        if ( *(_QWORD *)(v12 + 144) > v25 || !(_BYTE)a6 )
          goto LABEL_49;
        v71 = v32;
        v60 = *(_QWORD *)(v12 + 144);
        v39 = round_down_power2();
        v40 = v60;
        v41 = v71;
        v42 = v39;
        if ( v39 > 1 )
        {
          while ( (int)v35 % v42 )
          {
            v42 >>= 1;
            if ( v42 == 1 )
              goto LABEL_82;
          }
        }
        if ( (v42 & (v42 - 1)) != 0 )
          sub_CE830(v35, v24);
LABEL_82:
        if ( v71 >= v42 )
        {
          if ( v65 > v42 )
          {
            if ( a5 > 0x10 )
            {
LABEL_85:
              if ( a5 == 176 || a5 == 256 )
                goto LABEL_89;
LABEL_87:
              v58 = v40;
              v43 = getinf_flag();
              v40 = v58;
              if ( v43 )
              {
LABEL_89:
                if ( v25 - v40 == ((v25 - v40 + v42 - 1) & -v42) )
                  goto LABEL_49;
                v44 = *(_DWORD *)(a1 + 4);
                v75 = 0;
                v76 = 0;
                cleanup_argloc();
                LODWORD(v75) = 1;
                v76 = v25;
                v45 = sub_1EDAE0(v12 + 432, &v75, v44, 0);
                if ( v45 != -1 )
                {
                  v46 = *(_QWORD *)(v12 + 432) + 104LL * v45;
                  v47 = *(_DWORD *)v46 == 1 ? *(_QWORD *)(v46 + 8) : -1LL;
                  if ( v25 == v47 && (signed int)v44 <= *(_DWORD *)(v46 + 88) )
                  {
                    cleanup_argloc();
                    goto LABEL_49;
                  }
                }
                cleanup_argloc();
                v61 = sub_135C40(v12, *(int *)(a1 + 4), 0);
                if ( v61 != -1 )
                {
                  v48 = *(_DWORD *)(a1 + 4);
                  for ( i = 0; v48 > i; i += v65 )
                  {
                    if ( i + v65 > v48 )
                      v65 = round_down_power2();
                    v50 = j__qalloc_or_throw();
                    v51 = *(_QWORD *)(v12 + 40);
                    *(_QWORD *)(v50 + 32) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v50 + 40) = 0;
                    *(_QWORD *)(v50 + 48) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v50 + 56) = 0;
                    *(_QWORD *)(v50 + 64) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v50 + 72) = 0;
                    sub_32D4D0(v50, v51);
                    *(_DWORD *)v50 = 4;
                    *(_BYTE *)(v50 + 32) = 5;
                    v52 = (_QWORD *)j__qalloc_or_throw();
                    *v52 = v12;
                    v52[1] = v25 + i;
                    *(_QWORD *)(v50 + 40) = v52;
                    *(_DWORD *)(v50 + 36) = v65;
                    *(_BYTE *)(v50 + 64) = 1;
                    *(_DWORD *)(v50 + 72) = i + v61;
                    *(_DWORD *)(v50 + 68) = v65;
                    sub_A23D0(a2, (_QWORD *)v50, *(_QWORD *)(*(_QWORD *)(a2 + 56) + 16LL));
                    v48 = *(_DWORD *)(a1 + 4);
                  }
                  *(_BYTE *)a1 = 1;
                  *(_DWORD *)(a1 + 8) = v61;
                  goto LABEL_20;
                }
                goto LABEL_76;
              }
LABEL_88:
              v42 = v65;
              goto LABEL_89;
            }
LABEL_114:
            v63 = v40;
            a5 = getinf();
            v40 = v63;
            goto LABEL_85;
          }
          if ( a5 > 0x10 )
          {
LABEL_110:
            if ( a5 == 176 || a5 == 256 )
              goto LABEL_88;
            goto LABEL_87;
          }
LABEL_119:
          v64 = v40;
          a5 = getinf();
          v40 = v64;
          goto LABEL_110;
        }
        if ( a5 <= 0x10 )
        {
          v54 = getinf();
          v40 = v60;
          v41 = v71;
          if ( v54 == 176 || v54 == 256 )
          {
            if ( v65 > v71 )
            {
LABEL_113:
              v42 = v41;
              goto LABEL_114;
            }
LABEL_118:
            v42 = v41;
            goto LABEL_119;
          }
        }
        else if ( a5 == 256 || a5 == 176 )
        {
          if ( v65 <= v71 )
            v41 = v65;
          v42 = v41;
          goto LABEL_89;
        }
        v72 = v41;
        v62 = v40;
        v53 = getinf_flag();
        v40 = v62;
        if ( v53 )
          goto LABEL_89;
        v41 = v72;
        if ( v65 > v72 )
        {
          if ( a5 > 0x10 )
          {
            v42 = v72;
            goto LABEL_87;
          }
          goto LABEL_113;
        }
        if ( a5 > 0x10 )
        {
          v42 = v72;
          goto LABEL_87;
        }
        goto LABEL_118;
      }
      goto LABEL_59;
    }
    v27 = v67;
    if ( a5 > 0x10 )
    {
LABEL_41:
      v24 = 4;
      v66 = v32;
      v34 = getinf_flag();
      goto LABEL_42;
    }
    goto LABEL_74;
  }
  if ( v73 != 2 )
  {
    if ( !under_debugger )
      sub_37EA20(51008);
    BUG();
  }
  v75 = 0;
  copy_tinfo_t();
  v15 = s1;
  if ( *(_QWORD *)(a3 + 24) )
    v15 = *(const char **)(a3 + 16);
  sub_11AD10(a1, v12, v15, &v75, &v73);
  clear_tinfo_t();
LABEL_20:
  v20 = 1;
LABEL_21:
  cleanup_argloc();
  return v20;
}
