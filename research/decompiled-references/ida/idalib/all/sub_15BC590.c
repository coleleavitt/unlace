__int64 *__fastcall sub_15BC590(__int64 *a1)
{
  __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // r15
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r15
  _QWORD *v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  unsigned int v25; // eax
  __int64 v26; // rax
  __int64 **v27; // rbx
  unsigned __int64 v28; // rax
  __int64 **v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 *v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  int v41; // [rsp+Ch] [rbp-FCh]
  __int64 *v42; // [rsp+18h] [rbp-F0h] BYREF
  __int64 *v43; // [rsp+20h] [rbp-E8h] BYREF
  unsigned __int64 v44; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v45; // [rsp+30h] [rbp-D8h]
  __int64 v46; // [rsp+38h] [rbp-D0h]
  __int16 v47; // [rsp+40h] [rbp-C8h]
  void *v48; // [rsp+48h] [rbp-C0h]
  __int64 v49; // [rsp+50h] [rbp-B8h]
  _BYTE v50[48]; // [rsp+58h] [rbp-B0h] BYREF
  void *ptr; // [rsp+88h] [rbp-80h]
  __int64 v52; // [rsp+90h] [rbp-78h]
  _BYTE v53[112]; // [rsp+98h] [rbp-70h] BYREF

  v2 = *(_QWORD *)(*a1 + 248);
  v3 = a1[2];
  if ( v3 )
  {
    v4 = 0;
    v5 = *(_QWORD *)(*(_QWORD *)(v3 + 56) + 24LL);
    if ( (*(_BYTE *)(v5 + 28) & 0x7F) == 0x43 )
      v4 = *(_QWORD *)(v5 + 48) & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v4 = *(_QWORD *)(v2 + 18680);
  }
  v6 = sub_A70E70(*(_QWORD *)(*a1 + 248), v4, 22);
  v45 = v4;
  v7 = v6;
  v47 = 0;
  v48 = v50;
  v49 = 0x200000000LL;
  ptr = v53;
  v52 = 0x600000000LL;
  v8 = *a1;
  v43 = a1;
  v44 = 0;
  v9 = *(_QWORD *)(v8 + 248);
  v46 = 0;
  v10 = *(_QWORD *)(v9 + 17504);
  v11 = sub_2244B30("Consume", 7);
  v12 = (unsigned int)sub_2244CB0(v10, "Consume", 7, v11);
  v14 = (__int64 *)(*(_QWORD *)v10 + 8 * v12);
  if ( !*v14 )
  {
LABEL_14:
    v23 = *(_QWORD *)(v10 + 24);
    *(_QWORD *)(v10 + 104) += 24LL;
    v24 = (v23 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(v10 + 32) >= v24 + 24 && v23 )
    {
      *(_QWORD *)(v10 + 24) = v24 + 24;
    }
    else
    {
      v41 = v12;
      v24 = sub_986170(v10 + 24, 24, 24, 3, v12, v13);
      LODWORD(v12) = v41;
    }
    *(_BYTE *)(v24 + 22) = 101;
    *(_WORD *)(v24 + 20) = 28021;
    *(_DWORD *)(v24 + 16) = 1936617283;
    *(_BYTE *)(v24 + 23) = 0;
    *(_QWORD *)v24 = 7;
    *(_QWORD *)(v24 + 8) = 0;
    *v14 = v24;
    ++*(_DWORD *)(v10 + 12);
    v25 = sub_22450D0(v10, (unsigned int)v12);
    sub_989490(&v42, (__int64 *)(*(_QWORD *)v10 + 8LL * v25), 0);
    v17 = *v42;
    v18 = *(_QWORD **)(*v42 + 8);
    if ( v18 )
      goto LABEL_18;
    goto LABEL_7;
  }
  if ( *v14 == -8 )
  {
    --*(_DWORD *)(v10 + 16);
    goto LABEL_14;
  }
  sub_989490(&v42, v14, 0);
  v17 = *v42;
  v18 = *(_QWORD **)(*v42 + 8);
  if ( v18 )
  {
LABEL_18:
    v21 = (unsigned __int64)v18;
    goto LABEL_19;
  }
LABEL_7:
  v19 = *(_QWORD *)(v10 + 120);
  if ( v19 )
  {
    v18 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v19 + 16LL))(
                      v19,
                      "Consume",
                      7);
    *(_QWORD *)(v17 + 8) = v18;
    if ( v18 )
      goto LABEL_18;
  }
  v20 = *(_QWORD *)(v10 + 24);
  *(_QWORD *)(v10 + 104) += 24LL;
  v21 = (v20 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_QWORD *)(v10 + 32) >= v21 + 24 && v20 )
  {
    *(_QWORD *)(v10 + 24) = v21 + 24;
    v18 = (_QWORD *)((v20 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  }
  else
  {
    v18 = (_QWORD *)sub_986170(v10 + 24, 24, 24, 3, v15, v16);
    v21 = (unsigned __int64)v18;
  }
  v22 = *v18 & 0xFFFFF80000000000LL;
  v18[1] = 0;
  *v18 = v22 | 0x1FFFC05;
  *(_QWORD *)(v17 + 8) = v18;
  v18[2] = v17;
LABEL_19:
  *(_WORD *)v18 = *(_WORD *)v18 & 0xFE00 | 5;
  v44 = v21;
  v26 = sub_15B9A20((__int64)a1, -1);
  v27 = sub_15BB460(&v43, "__builtin_hlsl_buffer_update_counter", 0x24u, *(_QWORD *)(v2 + 18768), 0x80u, v26);
  v28 = sub_A70010(v2, v7);
  v29 = sub_15BBBE0(v27, "__builtin_hlsl_resource_getpointer", 0x22u, v28, 0x80u, 0x81u);
  v30 = sub_15BAF40((__int64)v29, 129);
  v35 = sub_15B9700(v30, 129, v31, v32, v33, v34);
  sub_15B9700((__int64)&v43, 129, v36, v37, v38, v39);
  if ( ptr != v53 )
    free(ptr);
  if ( v48 != v50 )
    free(v48);
  return v35;
}
