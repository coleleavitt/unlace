__int64 __fastcall sub_E0B60(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, char a6)
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
  __int64 v28; // rsi
  int v29; // r13d
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // ebp
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  int v37; // r13d
  unsigned int v38; // eax
  char v39; // al
  unsigned int v40; // ecx
  __int64 v41; // rbp
  _QWORD *v42; // rax
  int v43; // eax
  __int64 v44; // rdi
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // r8
  char v48; // al
  unsigned int v49; // ebp
  int v50; // eax
  __int64 v51; // rax
  __int64 v52; // rdx
  int v53; // edi
  int i; // r13d
  __int64 v55; // rbp
  __int64 v56; // rsi
  _QWORD *v57; // rax
  char v58; // al
  int v59; // eax
  __int64 v60; // [rsp-8h] [rbp-90h]
  _QWORD *v61; // [rsp+0h] [rbp-88h]
  const void *v62; // [rsp+0h] [rbp-88h]
  int v64; // [rsp+8h] [rbp-80h]
  int v65; // [rsp+10h] [rbp-78h]
  int v67; // [rsp+14h] [rbp-74h]
  int v68; // [rsp+14h] [rbp-74h]
  int v69; // [rsp+14h] [rbp-74h]
  int v70; // [rsp+14h] [rbp-74h]
  int v71; // [rsp+14h] [rbp-74h]
  int v72; // [rsp+14h] [rbp-74h]
  int v73; // [rsp+18h] [rbp-70h]
  __int64 v74; // [rsp+18h] [rbp-70h]
  int v75; // [rsp+20h] [rbp-68h] BYREF
  __int64 v76; // [rsp+28h] [rbp-60h]
  __int64 v77; // [rsp+30h] [rbp-58h] BYREF
  __int64 v78; // [rsp+38h] [rbp-50h]
  unsigned __int64 v79; // [rsp+48h] [rbp-40h]

  v10 = a1 + 32;
  v79 = __readfsqword(0x28u);
  if ( v10 != a3 + 16 )
  {
    v11 = *(_QWORD *)(a3 + 24);
    if ( v11 > 1 )
    {
      v20 = *(const void **)(a3 + 16);
      v21 = *(void **)(a1 + 32);
      if ( *(_QWORD *)(a1 + 48) < v11 )
      {
        v62 = *(const void **)(a3 + 16);
        v21 = (void *)qvector_reserve(v10, *(_QWORD *)(a1 + 32), *(_QWORD *)(a3 + 24), 1);
        v20 = v62;
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
  copy_argloc(a1 + 56, a3);
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a3 + 72);
  v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 64) + 1504LL) + 80LL);
  tinfo_size = v12;
  if ( *(_BYTE *)(a3 + 64) )
  {
    copy_tinfo_t(a1 + 24, a3 + 64);
    tinfo_size = get_tinfo_size(0, *(_QWORD *)(a1 + 24), 0);
  }
  *(_DWORD *)(a1 + 4) = tinfo_size;
  v61 = *(_QWORD **)(a2 + 64);
  if ( (*(_BYTE *)(a3 + 72) & 0x10) != 0 )
  {
    *(_BYTE *)a1 = 4;
    v23 = sub_330570(
            (_DWORD)v61,
            *(_QWORD *)(*(_QWORD *)(a2 + 56) + 24LL),
            (unsigned int)"UNUSED_ARG",
            (int)a3 + 64,
            0,
            0,
            1,
            v60,
            (_DWORD)v61,
            a5,
            v65,
            v73);
    *(_DWORD *)(a1 + 72) &= ~0x10u;
    *(_QWORD *)(a1 + 8) = v23;
    return 1;
  }
  v14 = sub_D6FB0(a2, a4);
  sub_1C1930(&v75, a1 + 56, *(unsigned int *)(a1 + 4), v14);
  if ( (unsigned int)(v75 - 3) <= 1 )
  {
    v22 = v76;
    if ( v75 == 4 )
    {
      v24 = (unsigned __int16)v76;
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
        sub_120DE0(a1, v24, v27, v26 >> 1, v15, v16, (_DWORD)v61, a5);
    }
    else
    {
      *(_BYTE *)a1 = 1;
      *(_DWORD *)(a1 + 8) = v22;
    }
    goto LABEL_13;
  }
  if ( v75 == 1 )
  {
    v28 = *(_QWORD *)(a3 + 64);
    v74 = v76;
    if ( (_BYTE)v28 )
    {
      LODWORD(v77) = 0;
      get_tinfo_size(&v77, v28, 0);
      v32 = v77;
      if ( ((unsigned int)v77 & ((_DWORD)v77 - 1)) != 0 )
        sub_DF540((__int64)&v77, v28, v34, v35, v36);
      v37 = 2 * v12;
      if ( (int)v77 > 2 * v12 )
        goto LABEL_50;
    }
    else
    {
      v29 = *(_DWORD *)(a1 + 4);
      v32 = round_down_power2((unsigned int)v29);
      if ( v32 > 1 )
      {
        while ( 1 )
        {
          v30 = (unsigned int)(v29 >> 31);
          LODWORD(v30) = v29 % v32;
          if ( !(v29 % v32) )
            break;
          v32 >>= 1;
          if ( v32 == 1 )
            goto LABEL_49;
        }
      }
      if ( (v32 & (v32 - 1)) != 0 )
        sub_DF540((unsigned int)v29, v28, v30, v31, v33);
LABEL_49:
      v37 = 2 * v12;
      if ( 2 * v12 < v32 )
      {
LABEL_50:
        if ( a5 <= 0x10 )
        {
          v43 = getinf(99);
          if ( v43 == 176 || v43 == 256 )
          {
            if ( v12 > v37 )
            {
LABEL_56:
              v32 = v37;
LABEL_57:
              v38 = getinf(99);
LABEL_59:
              if ( v38 == 176 || v38 == 256 )
                goto LABEL_42;
              goto LABEL_61;
            }
LABEL_68:
            v32 = v37;
LABEL_69:
            v38 = getinf(99);
LABEL_37:
            if ( v38 == 176 || v38 == 256 )
              goto LABEL_41;
            goto LABEL_39;
          }
        }
        else if ( a5 == 176 || a5 == 256 )
        {
          v32 = v37;
          if ( v12 <= v37 )
            v32 = v12;
          goto LABEL_42;
        }
        v28 = 512;
        if ( (unsigned __int8)getinf_flag(67, 512) )
          goto LABEL_42;
        if ( v12 > v37 )
        {
          v32 = v37;
          if ( a5 > 0x10 )
          {
LABEL_61:
            v28 = 2;
            v39 = getinf_flag(67, 2);
LABEL_40:
            if ( !v39 )
LABEL_41:
              v32 = v12;
LABEL_42:
            v40 = *(_DWORD *)(a1 + 4);
            if ( v61[17] >= v74 + (int)((v40 + v32 - 1) & -v32) || !v61[1] )
            {
LABEL_47:
              if ( !*(_BYTE *)a1 )
              {
                *(_BYTE *)a1 = 5;
                v42 = (_QWORD *)j__qalloc_or_throw(16);
                *v42 = v61;
                v42[1] = v74;
                *(_QWORD *)(a1 + 8) = v42;
              }
              goto LABEL_13;
            }
            if ( (*(_BYTE *)(a2 + 24) & 8) == 0 )
            {
LABEL_70:
              v18 = 0;
              goto LABEL_14;
            }
            v41 = v61[18];
            if ( v41 > v74 || !a6 )
              goto LABEL_47;
            v44 = v40;
            v67 = *(_DWORD *)(a1 + 4);
            v45 = round_down_power2(v40);
            v47 = (unsigned int)v45;
            if ( v45 > 1 )
            {
              while ( 1 )
              {
                v46 = (unsigned int)(v67 >> 31);
                LODWORD(v46) = v67 % (int)v47;
                if ( !(v67 % (int)v47) )
                  break;
                v47 = (unsigned int)((int)v47 >> 1);
                if ( (_DWORD)v47 == 1 )
                  goto LABEL_76;
              }
            }
            if ( ((unsigned int)v47 & ((_DWORD)v47 - 1)) != 0 )
              sub_DF540(v44, v28, v46, (unsigned int)v67, v47);
LABEL_76:
            if ( v37 >= (int)v47 )
            {
              if ( v12 > (int)v47 )
              {
                if ( a5 > 0x10 )
                {
LABEL_79:
                  if ( a5 == 176 || a5 == 256 )
                    goto LABEL_84;
                  goto LABEL_81;
                }
LABEL_109:
                v70 = v47;
                a5 = getinf(99);
                LODWORD(v47) = v70;
                goto LABEL_79;
              }
              if ( a5 > 0x10 )
                goto LABEL_105;
              goto LABEL_112;
            }
            if ( a5 <= 0x10 )
            {
              v72 = v47;
              v59 = getinf(99);
              if ( v59 == 176 || v59 == 256 )
              {
                if ( v12 > v37 )
                {
LABEL_108:
                  LODWORD(v47) = v37;
                  goto LABEL_109;
                }
LABEL_111:
                LODWORD(v47) = v37;
LABEL_112:
                v71 = v47;
                a5 = getinf(99);
                LODWORD(v47) = v71;
LABEL_105:
                if ( a5 == 176 || a5 == 256 )
                  goto LABEL_83;
                goto LABEL_107;
              }
              LODWORD(v47) = v72;
            }
            else if ( a5 == 256 || a5 == 176 )
            {
              LODWORD(v47) = v37;
              if ( v12 <= v37 )
                LODWORD(v47) = v12;
              goto LABEL_84;
            }
            v69 = v47;
            v58 = getinf_flag(67, 512);
            LODWORD(v47) = v69;
            if ( v58 )
              goto LABEL_84;
            if ( v12 > v37 )
            {
              if ( a5 > 0x10 )
              {
                LODWORD(v47) = v37;
LABEL_81:
                v64 = v47;
                v48 = getinf_flag(67, 2);
                goto LABEL_82;
              }
              goto LABEL_108;
            }
            if ( a5 > 0x10 )
            {
              LODWORD(v47) = v37;
LABEL_107:
              v64 = v47;
              v48 = getinf_flag(67, 4);
LABEL_82:
              LODWORD(v47) = v64;
              if ( v48 )
              {
LABEL_84:
                if ( v74 - v41 == ((v74 - v41 + (int)v47 - 1) & -(int)v47) )
                  goto LABEL_47;
                v49 = *(_DWORD *)(a1 + 4);
                v77 = 0;
                v78 = 0;
                cleanup_argloc(&v77);
                LODWORD(v77) = 1;
                v78 = v74;
                v50 = sub_1EBAC0(v61 + 54, &v77, v49, 0);
                if ( v50 != -1 )
                {
                  v51 = v61[54] + 104LL * v50;
                  v52 = *(_DWORD *)v51 == 1 ? *(_QWORD *)(v51 + 8) : -1LL;
                  if ( v74 == v52 && (signed int)v49 <= *(_DWORD *)(v51 + 88) )
                  {
                    cleanup_argloc(&v77);
                    goto LABEL_47;
                  }
                }
                cleanup_argloc(&v77);
                v68 = sub_133C80(v61, *(int *)(a1 + 4), 0);
                if ( v68 != -1 )
                {
                  v53 = *(_DWORD *)(a1 + 4);
                  for ( i = 0; v53 > i; i += v12 )
                  {
                    if ( i + v12 > v53 )
                      v12 = round_down_power2((unsigned int)(v53 - i));
                    v55 = j__qalloc_or_throw(80);
                    v56 = v61[5];
                    *(_QWORD *)(v55 + 40) = 0;
                    *(_QWORD *)(v55 + 32) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v55 + 48) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v55 + 56) = 0;
                    *(_QWORD *)(v55 + 64) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v55 + 72) = 0;
                    sub_32B5A0(v55, v56);
                    *(_BYTE *)(v55 + 32) = 5;
                    *(_DWORD *)v55 = 4;
                    v57 = (_QWORD *)j__qalloc_or_throw(16);
                    *v57 = v61;
                    v57[1] = v74 + i;
                    *(_QWORD *)(v55 + 40) = v57;
                    *(_DWORD *)(v55 + 36) = v12;
                    *(_BYTE *)(v55 + 64) = 1;
                    *(_DWORD *)(v55 + 72) = i + v68;
                    *(_DWORD *)(v55 + 68) = v12;
                    sub_9ECA0(a2, (_QWORD *)v55, *(_QWORD *)(*(_QWORD *)(a2 + 56) + 16LL));
                    v53 = *(_DWORD *)(a1 + 4);
                  }
                  *(_BYTE *)a1 = 1;
                  *(_DWORD *)(a1 + 8) = v68;
                  goto LABEL_13;
                }
                goto LABEL_70;
              }
LABEL_83:
              LODWORD(v47) = v12;
              goto LABEL_84;
            }
            goto LABEL_111;
          }
          goto LABEL_56;
        }
        v32 = v37;
        if ( a5 > 0x10 )
        {
LABEL_39:
          v28 = 4;
          v39 = getinf_flag(67, 4);
          goto LABEL_40;
        }
        goto LABEL_68;
      }
    }
    v38 = a5;
    if ( v12 > v32 )
    {
      if ( a5 > 0x10 )
        goto LABEL_59;
      goto LABEL_57;
    }
    if ( a5 > 0x10 )
      goto LABEL_37;
    goto LABEL_69;
  }
  if ( v75 != 2 )
  {
    if ( !under_debugger )
      sub_37DDE0(51008);
    BUG();
  }
  v77 = 0;
  copy_tinfo_t(&v77, a3 + 64);
  v17 = s1;
  if ( *(_QWORD *)(a3 + 24) )
    v17 = *(const char **)(a3 + 16);
  sub_118C90(a1, v61, v17, &v77, &v75);
  clear_tinfo_t(&v77);
LABEL_13:
  v18 = 1;
LABEL_14:
  cleanup_argloc(&v75);
  return v18;
}
