unsigned __int64 __fastcall sub_1E72060(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  unsigned int v7; // r13d
  __int64 v9; // rbp
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // r15
  __int64 v13; // rcx
  int v14; // eax
  void *v15; // rdi
  __int64 v17; // rcx
  int v18; // r12d
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rax
  __int64 v22; // r13
  char v23; // al
  bool v24; // zf
  unsigned __int64 v25; // r12
  size_t v26; // rax
  __int64 *v27; // rsi
  unsigned int v28; // ecx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r12
  __int64 v34; // rax
  _QWORD *v35; // rax
  size_t v36; // rax
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r13
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // [rsp+0h] [rbp-178h]
  __int64 v46[2]; // [rsp+8h] [rbp-170h] BYREF
  __int64 v47; // [rsp+18h] [rbp-160h] BYREF
  void *v48; // [rsp+20h] [rbp-158h] BYREF
  signed __int64 v49; // [rsp+28h] [rbp-150h]
  __int64 v50; // [rsp+30h] [rbp-148h] BYREF
  char v51; // [rsp+38h] [rbp-140h]
  unsigned __int8 *v52[10]; // [rsp+40h] [rbp-138h] BYREF
  int v53; // [rsp+90h] [rbp-E8h]
  char v54; // [rsp+98h] [rbp-E0h]
  __int64 v55; // [rsp+A0h] [rbp-D8h]
  __int64 v56[2]; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v57; // [rsp+C0h] [rbp-B8h]
  unsigned __int8 *v58; // [rsp+D0h] [rbp-A8h] BYREF
  char v59; // [rsp+128h] [rbp-50h]
  unsigned int v60; // [rsp+130h] [rbp-48h]
  char v61; // [rsp+134h] [rbp-44h]

  v6 = a3;
  v7 = a5;
  v9 = a4;
  v46[0] = a2;
  if ( !a4 && !sub_169D3A0(a1, a3, a3, 0, a5, a6) )
  {
    v21 = sub_16A2930(a1, v6, 0, a4, v19, v20);
    if ( !v21 || (a3 = (*(_BYTE *)(v21 + 8) & 0x7Fu) - 59, (unsigned int)a3 > 2) || (v9 = v21 - 64, v21 == 64) )
    {
      sub_168B9F0((__int64)v56, (__int64 *)(a1 + 8), *(_DWORD *)v6, 0xF5Au, 0);
      v47 = *(_QWORD *)v6;
      v22 = sub_1587DB0((__int64)v56, &v47);
      v48 = *(void **)v22;
      v49 = *(_QWORD *)(v22 + 8);
      v50 = *(_QWORD *)(v22 + 16);
      v23 = *(_BYTE *)(v22 + 24);
      v54 = 0;
      v24 = *(_BYTE *)(v22 + 120) == 0;
      v51 = v23;
      if ( !v24 )
      {
        sub_FC70F0((__int64)v52, v22 + 32);
        v52[9] = *(unsigned __int8 **)(v22 + 104);
        v37 = *(_DWORD *)(v22 + 112);
        v54 = 1;
        v53 = v37;
      }
      v55 = *(_QWORD *)(v22 + 128);
      sub_15F7200(v56);
      if ( (a6 & 7) != 0 || (v25 = a6 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      {
        if ( v54 )
        {
          sub_AE9DF0(v52, (__int64)"member pointer", 1u);
        }
        else if ( BYTE4(v55) )
        {
          sub_1E63E10((__int64)&v48, (__int64)"member pointer");
        }
      }
      else if ( v54 )
      {
        sub_AE9DF0(v52, v25, 5u);
      }
      else if ( BYTE4(v55) )
      {
        v42 = sub_168B9E0(&v48);
        v43 = v50;
        if ( v50 )
          v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v50 + 32LL))(v50);
        v56[0] = v43;
        v44 = sub_1587BC0(v42, v56, v38, v39, v40, v41);
        sub_AE9DF0((unsigned __int8 **)(*v44 + 32LL * (unsigned int)v55 + 8), v25, 5u);
      }
      sub_15F7200(&v48);
      return 0;
    }
  }
  v12 = sub_18B0460(a1, v46[0], a3, a4);
  if ( v12 )
  {
    sub_168B9F0((__int64)v56, (__int64 *)(a1 + 8), v7, 0xE78u, 0);
    sub_15F7200(v56);
    return 0;
  }
  v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v46[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v14 = *(unsigned __int8 *)(v13 + 16);
  if ( (unsigned int)(v14 - 43) <= 1 )
  {
    sub_168B9F0((__int64)v56, (__int64 *)(a1 + 8), v7, 0xF5Bu, 0);
    v47 = a6;
    if ( a6 )
    {
      sub_B86A00((__int64)&v48, &v47);
    }
    else
    {
      v48 = &v50;
      v36 = j__strlen("type name");
      sub_1E5E4B0(&v48, "type name", (__int64)&aTypeName[v36]);
    }
    if ( v59 )
    {
      sub_AEC220(&v58, v48, v49);
    }
    else if ( v61 )
    {
      v33 = sub_168B9E0(v56);
      v34 = v57;
      if ( v57 )
        v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v57 + 32LL))(v57);
      v47 = v34;
      v35 = sub_1587BC0(v33, &v47, v29, v30, v31, v32);
      sub_AEC220((unsigned __int8 **)(*v35 + 32LL * v60 + 8), v48, v49);
    }
    sub_1605D30((__int64)v56, v46);
    v15 = v48;
    if ( v48 == &v50 )
      goto LABEL_10;
LABEL_9:
    operator delete(v15);
LABEL_10:
    sub_15F7200(v56);
    return 0;
  }
  if ( (_BYTE)v14 == 13 )
  {
    if ( ((*(_WORD *)(v13 + 18) >> 3) & 0x1FF) == 0x1B3 )
    {
      sub_168B9F0((__int64)v56, (__int64 *)(a1 + 8), v7, 0xF5Cu, 0);
      sub_1E5EB90(&v48, a6);
      sub_1682AF0((__int64)v56, (__int64)&v48);
      v15 = v48;
      if ( v48 == &v50 )
        goto LABEL_10;
      goto LABEL_9;
    }
LABEL_13:
    v17 = *(_QWORD *)(a1 + 232);
    goto LABEL_14;
  }
  v17 = *(_QWORD *)(a1 + 232);
  if ( (unsigned int)(v14 - 25) <= 1 && (*(_BYTE *)(v17 + 47) & 0x20) != 0 )
  {
    v45 = *(_QWORD *)(a1 + 232);
    v26 = j__strlen("__cl_clang_function_pointers");
    if ( !sub_FF8450(a1 + 200, (__int64)"__cl_clang_function_pointers", v26, v45) )
    {
      v27 = (__int64 *)(a1 + 8);
      v28 = 4683;
LABEL_38:
      sub_168B9F0((__int64)v56, v27, v7, v28, 0);
      LODWORD(v48) = 0;
      sub_1587D10((__int64)v56, (int *)&v48);
      goto LABEL_10;
    }
    goto LABEL_13;
  }
LABEL_14:
  if ( (*(_BYTE *)(v17 + 89) & 1) != 0 && v7 )
  {
    v27 = (__int64 *)(a1 + 8);
    v28 = 3912;
    goto LABEL_38;
  }
  v18 = a6 & 7;
  if ( v18 != 7 )
  {
    v12 = 1;
    if ( v18 != 3 )
      v12 = v18 == 4;
  }
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v46[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 25 <= 1 )
    sub_1E64770(a1, v46, 1, v12, v7);
  return sub_ABBA20(*(_QWORD **)(a1 + 248), v46[0], *(_QWORD *)(v6 + 8), v9, v10, v11);
}
