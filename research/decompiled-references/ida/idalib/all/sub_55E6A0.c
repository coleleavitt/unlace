unsigned __int64 __fastcall sub_55E6A0(__int64 a1, unsigned int a2)
{
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 *v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  int v9; // esi
  int v10; // ecx
  unsigned int v11; // ecx
  bool v12; // cc
  __int64 v13; // rsi
  unsigned __int8 v14; // cl
  __int64 v15; // rcx
  char v16; // si
  int v17; // edx
  const char *v19; // rcx
  __int64 v20; // rax
  void *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // r11
  __int64 v25; // r10
  __int64 v26; // rdx
  _BOOL8 v27; // r8
  int *v28; // rax
  int *v29; // rdi
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // r8
  const char *v34; // rsi
  const char *v35; // rsi
  void *v36; // rdi
  __int64 v37; // rdx
  int v38; // eax
  const char *v39; // r9
  unsigned __int64 v40; // r14
  _BYTE *v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  unsigned __int64 v45; // r14
  _BYTE *v46; // rsi
  char *v47; // rax
  const char *v48; // rsi
  char *v49; // r9
  __int64 *v50; // rax
  int v51; // r8d
  const char *v52; // rdx
  size_t v53; // r8
  __int64 v54; // r14
  size_t v55; // r9
  _BYTE *v56; // rsi
  __int64 v57; // r8
  unsigned __int64 v58; // rdx
  _DWORD *v59; // rax
  const char *v60; // r9
  __int64 v61; // rcx
  char v62; // si
  int v63; // edx
  __int64 v64; // rdx
  __int64 v65; // [rsp+8h] [rbp-88h]
  size_t v66; // [rsp+8h] [rbp-88h]
  __int64 v67; // [rsp+10h] [rbp-80h]
  unsigned __int64 v68; // [rsp+10h] [rbp-80h]
  size_t v69; // [rsp+10h] [rbp-80h]
  __int64 v71; // [rsp+18h] [rbp-78h]
  size_t v72; // [rsp+18h] [rbp-78h]
  __int64 v73; // [rsp+18h] [rbp-78h]
  void *ptr; // [rsp+20h] [rbp-70h] BYREF
  __int128 v75; // [rsp+28h] [rbp-68h]
  void *src; // [rsp+40h] [rbp-50h] BYREF
  __int128 v77; // [rsp+48h] [rbp-48h]
  unsigned __int64 v78; // [rsp+58h] [rbp-38h]

  v78 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 200);
  v4 = *(_QWORD *)(v3 + 1120);
  v5 = *(_QWORD *)(v3 + 1408);
  *(_QWORD *)(v3 + 1120) = "//";
  *(_QWORD *)(*(_QWORD *)(a1 + 200) + 1408LL) = 0;
  if ( (unsigned __int8)sub_55CB40((_QWORD *)a1) )
    goto LABEL_20;
  v6 = *(__int64 **)(a1 + 248);
  v7 = *(_QWORD *)(a1 + 240);
  if ( !v6 )
  {
    if ( v7 == -2 && *(_DWORD *)(a1 + 336) )
    {
      v19 = haystack;
      if ( *(_QWORD *)(a1 + 296) )
        v19 = *(const char **)(a1 + 288);
      sub_35CEC0(a1, 0x80000000LL, (__int64)&unk_2340A90, v19);
    }
    else
    {
      (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 136LL))(a1, &byte_22F0C30, 0x80000000LL);
    }
    goto LABEL_20;
  }
  if ( v7 == -2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 208) + 80LL))(*(_QWORD *)(a1 + 208)) )
    {
      v20 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 208) + 72LL))(*(_QWORD *)(a1 + 208));
      sub_55E570(a1, v20);
    }
    else
    {
      sub_55B450(a1, a2);
    }
    goto LABEL_20;
  }
  if ( v7 == -1 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 208) + 80LL))(*(_QWORD *)(a1 + 208)) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1);
      sub_3804E0(a1, (__int64)"end of stack variables");
    }
    else
    {
      sub_55B610((_QWORD *)a1);
    }
    goto LABEL_20;
  }
  v8 = *(unsigned int *)(a1 + 144);
  v9 = *(_DWORD *)(a1 + 340);
  v10 = *(_DWORD *)(a1 + 144);
  LOBYTE(v10) = v10 | 0x90;
  *(_DWORD *)(a1 + 144) = v10;
  v11 = 4 - v9;
  v12 = v9 < 4;
  v13 = 1;
  if ( v12 )
    v13 = v11;
  v14 = *((_BYTE *)v6 + 100);
  if ( v14 == 29 )
  {
    v37 = *(_QWORD *)(a1 + 264);
    if ( v37 )
    {
      v38 = *(_DWORD *)(v37 + 132);
      goto LABEL_51;
    }
    if ( !under_debugger )
      interr(2992);
    goto LABEL_121;
  }
  if ( v14 > 0x1Du )
  {
    if ( v14 != 45 )
    {
LABEL_111:
      if ( !under_debugger )
        interr(3099);
      goto LABEL_121;
    }
    if ( *(_QWORD *)(a1 + 272) )
    {
      src = nullptr;
      v77 = 0;
      v21 = (void *)qvector_reserve(&src, 0, (int)v13 + 1LL, 1);
      v22 = v77;
      src = v21;
      if ( (unsigned __int64)v77 < (int)v13 + 1LL )
      {
        do
        {
          v23 = v22;
          *((_BYTE *)v21 + v22++) = 32;
          v21 = src;
        }
        while ( v23 != (int)v13 );
      }
      *(_QWORD *)&v77 = (int)v13 + 1LL;
      *((_BYTE *)v21 + (int)v13) = 0;
      v24 = *(_QWORD **)(a1 + 248);
      v25 = *v24;
      if ( !*v24 )
        sub_555E00();
      v26 = *(_QWORD *)(v25 + 32);
      v27 = 0;
      if ( v26 )
      {
        v28 = *(int **)(v25 + 24);
        v29 = &v28[v26];
        if ( v28 != v29 )
        {
          v30 = *(_QWORD *)(a1 + 240);
          v31 = 0;
          while ( 1 )
          {
            v32 = *v28;
            v33 = v31;
            v31 += v32;
            if ( v30 < v31 )
              break;
            if ( v29 == ++v28 )
              goto LABEL_40;
          }
          if ( v30 != v33 )
          {
LABEL_40:
            v27 = 0;
            goto LABEL_41;
          }
          v27 = v32 > 1;
        }
      }
LABEL_41:
      v34 = haystack;
      if ( v24[2] )
        v34 = (const char *)v24[1];
      sub_663280(&src, v34, *v24, *(_QWORD *)(a1 + 272), v27, v24[10]);
      v35 = haystack;
      if ( (_QWORD)v77 )
        v35 = (const char *)src;
      (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 136LL))(a1, v35, 0x80000000LL);
      v36 = src;
      if ( src )
        goto LABEL_99;
      goto LABEL_20;
    }
    if ( !under_debugger )
      interr(3115);
LABEL_121:
    BUG();
  }
  if ( v14 == 12 )
  {
    v15 = *v6;
    if ( !*v6 )
      sub_555E20(v8, v13);
    v16 = *(_BYTE *)(v15 + 88);
    v17 = v16 & 0xF0;
    if ( (v16 & 0xF0) == 0xC0 )
      v17 = *(_DWORD *)(v15 + 28);
    if ( v17 == 64 || v17 == 208 )
    {
      v40 = *(_QWORD *)(v15 + 8) + 1LL;
    }
    else
    {
      if ( v17 == 32 )
        goto LABEL_16;
      v40 = *(_QWORD *)(v15 + 8);
    }
    if ( v7 >= v40 )
    {
LABEL_16:
      if ( !under_debugger )
        interr(3116);
      goto LABEL_121;
    }
    ptr = nullptr;
    v75 = 0;
    ptr = (void *)qvector_reserve(&ptr, 0, 9, 1);
    *(_QWORD *)&v75 = 9;
    strcpy((char *)ptr, "        ");
    v41 = ptr;
    if ( !**(_QWORD **)(a1 + 248) )
      sub_555E20(&ptr, ptr);
    v42 = *(_QWORD *)(a1 + 280);
    if ( v42 )
    {
      v43 = a2;
      v41 = **(_BYTE ***)(a1 + 248);
      BYTE1(v43) = BYTE1(a2) | 8;
      sub_66CD40(&ptr, v41, v42, v43);
    }
    else
    {
      v73 = v75;
      if ( (_QWORD)v75 )
      {
        v57 = v75 + 6;
        v58 = v75 + 7;
        v73 = v75 - 1;
      }
      else
      {
        v58 = 8;
        v57 = 7;
      }
      if ( *((_QWORD *)&v75 + 1) < v58 )
      {
        v65 = v57;
        v68 = v58;
        ptr = (void *)qvector_reserve(&ptr, ptr, v58, 1);
        v57 = v65;
        v41 = ptr;
        v58 = v68;
      }
      *(_QWORD *)&v75 = v58;
      v41[v57] = 0;
      v59 = (char *)ptr + v73;
      *v59 = 774768897;
      *(_DWORD *)((char *)v59 + 3) = 151137838;
    }
    if ( *(_QWORD *)(a1 + 240) + 1LL < v40 )
    {
      v71 = v75;
      if ( (_QWORD)v75 )
      {
        v44 = v75 + 4;
        v45 = v75 + 5;
        v71 = v75 - 1;
      }
      else
      {
        v45 = 6;
        v44 = 5;
      }
      v46 = ptr;
      if ( *((_QWORD *)&v75 + 1) < v45 )
      {
        v67 = v44;
        ptr = (void *)qvector_reserve(&ptr, ptr, v45, 1);
        v44 = v67;
        v46 = ptr;
      }
      *(_QWORD *)&v75 = v45;
      v46[v44] = 0;
      v47 = (char *)ptr + v71;
      *(_DWORD *)v47 = 36440321;
      v47[4] = 9;
LABEL_67:
      v48 = haystack;
      if ( (_QWORD)v75 )
        v48 = (const char *)ptr;
      (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 136LL))(a1, v48, 0x80000000LL);
      if ( ptr )
      {
        *(_QWORD *)&v75 = 0;
        qfree(ptr);
      }
      goto LABEL_20;
    }
    v50 = *(__int64 **)(a1 + 248);
    src = nullptr;
    v51 = 133183;
    v77 = 0;
    if ( *((_BYTE *)v50 + 100) != 12 )
    {
LABEL_78:
      v52 = haystack;
      if ( v50[2] )
        v52 = (const char *)v50[1];
      print_tinfo((unsigned int)&src, 0, 0, 0, v51, (_DWORD)v50 + 88, (__int64)v52, 0);
      v72 = v77;
      if ( (_QWORD)v77 )
      {
        v53 = v77 - 1;
        if ( (_QWORD)v77 != 1 )
        {
          v54 = v75;
          v55 = v77 - 1;
          if ( (_QWORD)v75 )
          {
            v54 = v75 - 1;
            v55 = v53 + v75 - 1;
            v72 = v53 + v75;
          }
          v56 = ptr;
          if ( *((_QWORD *)&v75 + 1) < v72 )
          {
            v69 = v55;
            v66 = v77 - 1;
            ptr = (void *)qvector_reserve(&ptr, ptr, v72, 1);
            v53 = v66;
            v56 = ptr;
            v55 = v69;
          }
          *(_QWORD *)&v75 = v72;
          v56[v55] = 0;
          memcpy((char *)ptr + v54, src, v53);
        }
      }
      if ( src )
      {
        *(_QWORD *)&v77 = 0;
        qfree(src);
      }
      goto LABEL_67;
    }
    v61 = *v50;
    if ( !*v50 )
      sub_555E20(&ptr, v41);
    v62 = *(_BYTE *)(v61 + 88);
    v63 = v62 & 0xF0;
    if ( (v62 & 0xF0) == 0xC0 )
      v63 = *(_DWORD *)(v61 + 28);
    if ( v63 == 64 || v63 == 208 )
    {
      v64 = *(_QWORD *)(v61 + 8) + 1LL;
    }
    else
    {
      v51 = 2105;
      if ( v63 == 32 )
        goto LABEL_78;
      v64 = *(_QWORD *)(v61 + 8);
    }
    v51 = v64 == 0 ? 2105 : 133177;
    goto LABEL_78;
  }
  if ( v14 != 13 )
    goto LABEL_111;
  v37 = *(_QWORD *)(a1 + 264);
  if ( !v37 || (v38 = *(_DWORD *)(v37 + 132), (v38 & 0x400) != 0) )
  {
    v49 = "bit";
    if ( (v8 & 0x200000) == 0 )
      v49 = "byte";
    sub_35CEC0(a1, 0x80000000LL, (__int64)&unk_22D5DAE, (unsigned int)v13, 32, v49);
    goto LABEL_20;
  }
LABEL_51:
  if ( (v38 & 0x20) != 0 )
  {
    src = nullptr;
    v77 = 0;
    print_tinfo((unsigned int)&src, 0, 0, 0, 0, v37 + 64, 0, 0);
    v39 = haystack;
    if ( (_QWORD)v77 )
      v39 = (const char *)src;
    sub_35CEC0(a1, 0x80000000LL, (__int64)&unk_22D5D8B, (unsigned int)v13, 32, v39);
    v36 = src;
    if ( src )
    {
LABEL_99:
      *(_QWORD *)&v77 = 0;
      qfree(v36);
    }
  }
  else
  {
    sub_55A8F0((__int64)&src, a1, (_QWORD *)v37);
    v60 = haystack;
    if ( (_QWORD)v77 )
      v60 = (const char *)src;
    sub_35CEC0(a1, 0x80000000LL, (__int64)&unk_22D5DA3, (unsigned int)v13, 32, v60);
    v36 = src;
    if ( src )
      goto LABEL_99;
  }
LABEL_20:
  sub_381B20(a1, nullptr);
  *(_QWORD *)(*(_QWORD *)(a1 + 200) + 1120LL) = v4;
  *(_QWORD *)(*(_QWORD *)(a1 + 200) + 1408LL) = v5;
  return v78 - __readfsqword(0x28u);
}
