unsigned __int64 __fastcall sub_A390(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // r14
  int v9; // r12d
  unsigned __int64 v10; // rbp
  char v11; // r15
  __int64 (__fastcall *v12)(_QWORD *, char); // rax
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 (__fastcall *v22)(_QWORD *, char); // rax
  __int64 v23; // r13
  __int64 v24; // rsi
  __int64 v25; // r8
  unsigned __int64 v26; // r15
  __int64 v27; // rbp
  unsigned __int8 v28; // al
  __int64 v29; // rax
  int v30; // r13d
  char v31; // r14
  __int64 first_dref_from; // rbp
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 flags; // rax
  __int64 (__fastcall *v37)(_QWORD *, char); // rax
  __int64 v38; // r13
  unsigned __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rsi
  __int64 v42; // rax
  unsigned __int64 v43; // [rsp+10h] [rbp-98h]
  __int64 v44; // [rsp+10h] [rbp-98h]
  __int64 v45; // [rsp+10h] [rbp-98h]
  unsigned __int64 v46; // [rsp+10h] [rbp-98h]
  unsigned int v47; // [rsp+18h] [rbp-90h]
  char v48; // [rsp+1Fh] [rbp-89h]
  __int64 v49; // [rsp+20h] [rbp-88h]
  __int64 v50; // [rsp+20h] [rbp-88h]
  __int64 v51; // [rsp+28h] [rbp-80h]
  __int64 v52; // [rsp+38h] [rbp-70h] BYREF
  _OWORD v53[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v54; // [rsp+60h] [rbp-48h]
  unsigned __int64 v55; // [rsp+68h] [rbp-40h]

  v4 = a1[77];
  v55 = __readfsqword(0x28u);
  *(_QWORD *)(v4 + 5600) = 0;
  v6 = (__int64)(a1 + 28);
  v7 = (_QWORD *)a1[77];
  v52 = v6;
  v48 = sub_98F0(v7, (__int64)&v52, a3, a4);
  if ( !v48 )
    return v55 - __readfsqword(0x28u);
  v8 = a1[77];
  v47 = -1;
  if ( (*(_BYTE *)(v8 + 180) & 0x20) == 0 )
  {
    v27 = *(_QWORD *)(v8 + 8LL * *(int *)(v8 + 208) + 184) & 0x3FLL;
    if ( (*(_QWORD *)(v8 + 8LL * *(int *)(v8 + 208) + 184) & 0x3F) != 0 )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8 * v27 + 2048),
        33);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 41);
      v28 = getinf(40);
      (*(void (__fastcall **)(_QWORD *, _QWORD *, _QWORD))(*a1 + 48LL))(a1, a1 + 3, v28 - 1);
      v47 = -2;
    }
  }
  v9 = 1;
  v10 = 0;
  v11 = 0;
  (*(void (__fastcall **)(_QWORD *))(*a1 + 296LL))(a1);
  while ( *(_DWORD *)(v8 + 4 * v10 + 160) )
  {
    if ( v11 )
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
    v12 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
    if ( v12 != sub_9B90 )
    {
      v12(a1, 32);
      goto LABEL_11;
    }
    v13 = a1[4];
    if ( v13 )
    {
      v14 = v13 + 1;
      v15 = a1[4];
      v16 = a1[3];
      --v13;
      if ( a1[5] < v14 )
        goto LABEL_23;
    }
    else
    {
      v16 = a1[3];
      v15 = 1;
      v14 = 2;
      if ( a1[5] < 2u )
      {
LABEL_23:
        v51 = v15;
        v49 = v13;
        v43 = v14;
        v20 = qvector_reserve(a1 + 3, v16, v14, 1);
        v15 = v51;
        v13 = v49;
        a1[3] = v20;
        v14 = v43;
        v16 = v20;
      }
    }
    a1[4] = v14;
    *(_BYTE *)(v16 + v13) = 32;
    *(_BYTE *)(a1[3] + v15) = 0;
LABEL_11:
    if ( *(_WORD *)(v52 + 24) != 9 )
      goto LABEL_12;
    if ( v10 == 2 )
    {
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 112LL))(a1, 0, 10);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
      v37 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
      if ( v37 == sub_9B90 )
      {
        v38 = a1[4];
        if ( v38 )
        {
          v39 = v38 + 1;
          v40 = a1[4];
          --v38;
        }
        else
        {
          v39 = 2;
          v40 = 1;
        }
        v41 = a1[3];
        if ( a1[5] < v39 )
        {
          v50 = v40;
          v46 = v39;
          v42 = qvector_reserve(a1 + 3, v41, v39, 1);
          v40 = v50;
          v39 = v46;
          a1[3] = v42;
          v41 = v42;
        }
        a1[4] = v39;
        *(_BYTE *)(v41 + v38) = 32;
        *(_BYTE *)(a1[3] + v40) = 0;
      }
      else
      {
        v37(a1, 32);
      }
      sub_76E0((__int64)&unk_23380, *(_QWORD *)(a1[77] + 8LL * *(int *)(a1[77] + 208LL) + 184), v53);
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 112LL))(a1, *(_QWORD *)&v53[0], 10);
LABEL_28:
      ++v10;
      ++v9;
    }
    else
    {
      if ( v10 == 3 )
      {
        sub_76E0((__int64)&unk_23380, *(_QWORD *)(a1[77] + 8LL * *(int *)(a1[77] + 208LL) + 184), v53);
        v44 = *(_QWORD *)&v53[0];
        sub_76E0((__int64)&unk_23340, *(_QWORD *)(a1[77] + 8LL * *(int *)(a1[77] + 208LL) + 184), v53);
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 112LL))(a1, *(_QWORD *)&v53[0] - v44, 10);
        goto LABEL_28;
      }
LABEL_12:
      if ( v10 > 2 )
      {
        v21 = a1[77];
        memset(v53, 0, sizeof(v53));
        v54 = 0;
        LOBYTE(v53[0]) = 2;
        sub_82F0(v21, v52, v10, (__int64)v53, v13, v15);
        sub_9CC0(0x13u, a1, v53);
      }
      else
      {
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 304LL))(a1, (unsigned int)v10);
      }
      v11 = sub_98F0((_QWORD *)a1[77], (__int64)&v52, v17, v18);
      if ( !v11 )
        return v55 - __readfsqword(0x28u);
      if ( v9 != *(_DWORD *)(v8 + 140) )
        goto LABEL_16;
      v22 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
      if ( v22 != sub_9B90 )
      {
        v22(a1, 32);
        goto LABEL_33;
      }
      v23 = a1[4];
      if ( v23 )
      {
        v26 = v23 + 1;
        v25 = a1[4];
        v24 = a1[3];
        --v23;
        if ( a1[5] < v26 )
        {
LABEL_37:
          v45 = v25;
          v29 = qvector_reserve(a1 + 3, v24, v26, 1);
          v25 = v45;
          a1[3] = v29;
          v24 = v29;
        }
      }
      else
      {
        v24 = a1[3];
        v25 = 1;
        v26 = 2;
        if ( a1[5] < 2u )
          goto LABEL_37;
      }
      a1[4] = v26;
      *(_BYTE *)(v24 + v23) = 32;
      *(_BYTE *)(a1[3] + v25) = 0;
LABEL_33:
      v11 = 0;
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 61);
LABEL_16:
      ++v10;
      ++v9;
      if ( v10 == 5 )
        break;
    }
  }
  if ( *(_DWORD *)(v8 + 208) + 1 == *((_DWORD *)&unk_22500 + 6 * (*(int *)(v8 + 212) >> 1))
    || (*(_QWORD *)(v8 + 208) & 0x1FFFFFFFFLL) == 0x100000002LL )
  {
    (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, ";;", 9);
  }
  (*(void (__fastcall **)(_QWORD *))(*a1 + 320LL))(a1);
  if ( (*((_BYTE *)a1 + 721) & 8) == 0 )
  {
    v30 = 16;
    v31 = 0;
    first_dref_from = get_first_dref_from(*(_QWORD *)(v52 + 16));
    if ( first_dref_from == -1 )
      goto LABEL_49;
    while ( 1 )
    {
      memset(v53, 0, 24);
      if ( get_name_expr(v53, *(_QWORD *)(v52 + 16), 0, first_dref_from, -1, 1) <= 0 )
        break;
      if ( v31 )
        (*(void (__fastcall **)(_QWORD *, const char *, _QWORD))(*a1 + 56LL))(a1, "->", 0);
      else
        sub_A290(a1);
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 56LL))(a1, *(_QWORD *)&v53[0], 0);
      flags = get_flags_ex(first_dref_from, 4, v33, v34, v35);
      if ( (flags & 0x600) != 0x400 || (flags & 0xF00000) != 0x500000 )
        goto LABEL_46;
      first_dref_from = (unsigned int)get_dword(first_dref_from);
      if ( *(_QWORD *)&v53[0] )
      {
        *((_QWORD *)&v53[0] + 1) = 0;
        qfree();
      }
      if ( !--v30 )
        goto LABEL_51;
      v31 = v48;
    }
    v48 = v31;
LABEL_46:
    if ( *(_QWORD *)&v53[0] )
    {
      *((_QWORD *)&v53[0] + 1) = 0;
      qfree();
    }
    if ( !v48 )
    {
LABEL_49:
      if ( !*(_QWORD *)(a1[77] + 5600LL) )
        goto LABEL_20;
      sub_A290(a1);
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 56LL))(a1, *(_QWORD *)(a1[77] + 5600LL), 0);
    }
LABEL_51:
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 4);
  }
LABEL_20:
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 128LL))(a1, v47);
  return v55 - __readfsqword(0x28u);
}
