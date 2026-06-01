void __fastcall sub_1198B80(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r14
  size_t v6; // rax
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // r13
  char *v10; // r14
  size_t v11; // rax
  size_t v12; // rax
  size_t v13; // r12
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  const char *v17; // rsi
  __int64 v18; // rax
  const char *v19; // rdi
  char *v20; // r13
  size_t v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  size_t v25; // r15
  size_t v26; // rax
  size_t v27; // r14
  __int64 v28; // rdx
  void *v29; // rdi
  __int64 v30; // rax
  _BYTE *v31; // rax
  __int64 v32; // rdx
  _DWORD *v33; // rax
  __int64 v34; // rax
  __int64 *v35; // [rsp+0h] [rbp-B8h]
  size_t v36; // [rsp+8h] [rbp-B0h]
  void *v37; // [rsp+10h] [rbp-A8h] BYREF
  unsigned __int64 v38; // [rsp+18h] [rbp-A0h]
  _BYTE v39[16]; // [rsp+20h] [rbp-98h] BYREF
  void *v40[2]; // [rsp+30h] [rbp-88h] BYREF
  char *v41; // [rsp+40h] [rbp-78h] BYREF
  size_t v42; // [rsp+48h] [rbp-70h]
  __int16 v43; // [rsp+50h] [rbp-68h]

  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
  v35 = (__int64 *)v5;
  v6 = j__strlen(&byte_22F0C30);
  sub_11C1F00(v5, a2, a3, 0, &byte_22F0C30, v6);
  if ( !(unsigned __int8)sub_21B7850(a2, 2830, 2694, 1) || sub_10DCD30(a2, 0x992u) || sub_10DCD30(a2, 0x1ACu) )
    sub_10DC5D0(a3, (__int64)"-disable-red-zone");
  if ( !(unsigned __int8)sub_21B7850(a2, 2908, 2740, 1) )
    sub_10DC5D0(a3, (__int64)"-mno-tls-direct-seg-refs");
  if ( sub_10DCD30(a2, 0x992u) || sub_10DCD30(a2, 0x1ACu) )
  {
    v7 = sub_118B9A0(a2, 0xB3Au, 0xAA2u, 0x974u, 0xA3Bu);
    if ( !v7 )
    {
LABEL_9:
      sub_10DC5D0(a3, (__int64)"-no-implicit-float");
      goto LABEL_10;
    }
  }
  else
  {
    v7 = sub_118B9A0(a2, 0xB3Au, 0xAA2u, 0x974u, 0xA3Bu);
    if ( !v7 )
      goto LABEL_10;
  }
  if ( (unsigned __int8)sub_21B9810(v7, 2619) || (unsigned __int8)sub_21B9810(v7, 2874) )
    goto LABEL_9;
LABEL_10:
  v8 = sub_10DCD30(a2, 0x8D7u);
  v9 = v8;
  if ( v8 )
  {
    v10 = **(char ***)(v8 + 48);
    v11 = j__strlen("intel");
    if ( !v10 )
    {
      v13 = 0;
      if ( v11 )
      {
        v13 = j__strlen("att");
        if ( v13 )
        {
          v13 = 0;
          goto LABEL_17;
        }
      }
      goto LABEL_19;
    }
    v36 = v11;
    v12 = j__strlen(v10);
    v13 = v12;
    if ( v12 == v36 )
    {
      if ( !v12 || !memcmp(v10, "intel", v12) )
        goto LABEL_19;
      if ( v13 != j__strlen("att") )
      {
LABEL_17:
        sub_FC70B0((__int64)v40, *v35, 0, 497);
        sub_AEC220((unsigned __int8 **)v40, *(_BYTE **)(v9 + 24), *(_QWORD *)(v9 + 32));
        sub_AEC220((unsigned __int8 **)v40, v10, v13);
        sub_AEA040((__int64)v40);
        goto LABEL_20;
      }
    }
    else
    {
      if ( v12 != j__strlen("att") )
        goto LABEL_17;
      if ( !v13 )
        goto LABEL_19;
    }
    if ( memcmp(v10, "att", v13) )
      goto LABEL_17;
LABEL_19:
    sub_10DC5D0(a3, (__int64)"-mllvm");
    v43 = 1283;
    v40[0] = "-x86-asm-syntax=";
    v41 = v10;
    v42 = v13;
    v14 = sub_10DA6C0(a2, (__int64)v40);
    sub_10DC5D0(a3, v14);
    v43 = 1283;
    v40[0] = "-inline-asm=";
    v41 = v10;
    v42 = v13;
    v15 = sub_10DA6C0(a2, (__int64)v40);
    sub_10DC5D0(a3, v15);
    goto LABEL_20;
  }
  if ( *(_DWORD *)(v5 + 16) == 3 )
  {
    sub_10DC5D0(a3, (__int64)"-mllvm");
    sub_10DC5D0(a3, (__int64)"-x86-asm-syntax=intel");
  }
LABEL_20:
  v16 = sub_10DE660(a2, 0xB34u, 0xA9Fu);
  if ( v16 && (unsigned __int8)sub_21B9810(v16, 2868) )
  {
    v43 = 259;
    v40[0] = "-mskip-rax-setup";
    v34 = sub_10DA6C0(a2, (__int64)v40);
    sub_10DC5D0(a3, v34);
  }
  if ( (unsigned __int8)sub_21B7850(a2, 2416, 2618, 0) )
  {
    sub_10DC5D0(a3, (__int64)"-mfloat-abi");
    sub_10DC5D0(a3, (__int64)"soft");
    sub_10DC5D0(a3, (__int64)"-mstack-alignment=4");
  }
  v38 = 0;
  v39[0] = 0;
  v37 = v39;
  if ( !sub_10DCD30(a2, 0x8D4u) )
  {
    v33 = *(_DWORD **)(a1 + 24);
    if ( v33[12] != 38 || v33[14] != 3 || (unsigned int)(v33[15] - 24) > 1 )
      sub_99BDC0(&v37, 0, v38, "generic", 7u);
  }
  v17 = (_BYTE *)(elf_gnu_hash_bucket + 188);
  v18 = sub_10DCD30(a2, 0xB64u);
  if ( v18 )
  {
    v19 = "native";
    v20 = **(char ***)(v18 + 48);
    v21 = j__strlen("native");
    v25 = v21;
    if ( v20 )
    {
      v19 = v20;
      v26 = j__strlen(v20);
      v27 = v26;
      if ( v26 == v25 )
      {
        if ( !v26 || (v17 = "native", v19 = v20, !memcmp(v20, "native", v26)) )
        {
LABEL_41:
          v31 = (_BYTE *)sub_22A33B0(v19, v17, v22, v23, v24);
          if ( !v32 )
            goto LABEL_32;
          v40[0] = &v41;
          sub_11892E0(v40, v31, (__int64)&v31[v32]);
          sub_A0AAD0((__int64)&v37, v40);
          v29 = v40[0];
          if ( v40[0] == &v41 )
            goto LABEL_32;
LABEL_31:
          operator delete(v29);
          goto LABEL_32;
        }
      }
      v28 = (__int64)&v20[v27];
    }
    else
    {
      if ( !v21 )
        goto LABEL_41;
      v28 = 0;
    }
    v40[0] = &v41;
    sub_11892E0(v40, v20, v28);
    sub_A0AAD0((__int64)&v37, v40);
    v29 = v40[0];
    if ( v40[0] == &v41 )
      goto LABEL_32;
    goto LABEL_31;
  }
LABEL_32:
  if ( v38 )
  {
    sub_10DC5D0(a3, (__int64)"-tune-cpu");
    v43 = 260;
    v40[0] = &v37;
    v30 = sub_10DA6C0(a2, (__int64)v40);
    sub_10DC5D0(a3, v30);
  }
  if ( v37 != v39 )
    operator delete(v37);
}
