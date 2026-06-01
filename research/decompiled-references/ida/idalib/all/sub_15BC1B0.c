__int64 *__fastcall sub_15BC1B0(_QWORD *a1)
{
  _QWORD *v2; // r13
  __int64 v3; // rax
  __int64 *v4; // r14
  __int64 v5; // rdx
  unsigned __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r9
  __int64 *v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  _QWORD *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned int v22; // eax
  __int64 **v23; // rbx
  __int64 v24; // rax
  __int64 **v25; // rbx
  unsigned __int64 v26; // rax
  __int64 **v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 *v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v40; // [rsp+0h] [rbp-108h]
  int v41; // [rsp+0h] [rbp-108h]
  __int64 v42; // [rsp+0h] [rbp-108h]
  __int64 *v43; // [rsp+8h] [rbp-100h]
  __int64 *v44; // [rsp+18h] [rbp-F0h] BYREF
  _QWORD *v45; // [rsp+20h] [rbp-E8h] BYREF
  unsigned __int64 v46; // [rsp+28h] [rbp-E0h]
  __int64 v47; // [rsp+30h] [rbp-D8h]
  __int64 v48; // [rsp+38h] [rbp-D0h]
  __int16 v49; // [rsp+40h] [rbp-C8h]
  void *v50; // [rsp+48h] [rbp-C0h]
  __int64 v51; // [rsp+50h] [rbp-B8h]
  _BYTE v52[48]; // [rsp+58h] [rbp-B0h] BYREF
  void *ptr; // [rsp+88h] [rbp-80h]
  __int64 v54; // [rsp+90h] [rbp-78h]
  _BYTE v55[112]; // [rsp+98h] [rbp-70h] BYREF

  v2 = *(_QWORD **)(*a1 + 248LL);
  v3 = a1[2];
  if ( v3 )
  {
    v4 = nullptr;
    v5 = *(_QWORD *)(*(_QWORD *)(v3 + 56) + 24LL);
    if ( (*(_BYTE *)(v5 + 28) & 0x7F) == 0x43 )
      v4 = (__int64 *)(*(_QWORD *)(v5 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  }
  else
  {
    v4 = (__int64 *)v2[2335];
  }
  v6 = sub_A70E70(*(_QWORD *)(*a1 + 248LL), (unsigned __int64)v4, 22);
  v7 = v2[2329];
  v49 = 0;
  v45 = a1;
  v47 = v7;
  v50 = v52;
  v51 = 0x200000000LL;
  ptr = v55;
  v54 = 0x600000000LL;
  v8 = *a1;
  v46 = 0;
  v48 = 0;
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 248) + 17504LL);
  v10 = sub_2244B30("Append", 6);
  v11 = (unsigned int)sub_2244CB0(v9, "Append", 6, v10);
  v12 = (__int64 *)(*(_QWORD *)v9 + 8 * v11);
  if ( !*v12 )
  {
LABEL_14:
    v20 = *(_QWORD *)(v9 + 24);
    *(_QWORD *)(v9 + 104) += 23LL;
    v21 = (v20 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(v9 + 32) >= v21 + 23 && v20 )
    {
      *(_QWORD *)(v9 + 24) = v21 + 23;
    }
    else
    {
      v43 = v12;
      v41 = v11;
      v21 = sub_986170(v9 + 24, 23, 23, 3, (__int64)v12, v11);
      v12 = v43;
      LODWORD(v11) = v41;
    }
    strcpy((char *)(v21 + 16), "Append");
    *(_QWORD *)v21 = 6;
    *(_QWORD *)(v21 + 8) = 0;
    *v12 = v21;
    ++*(_DWORD *)(v9 + 12);
    v22 = sub_22450D0(v9, (unsigned int)v11);
    sub_989490(&v44, (__int64 *)(*(_QWORD *)v9 + 8LL * v22), 0);
    v14 = *v44;
    v15 = *(_QWORD **)(*v44 + 8);
    if ( v15 )
      goto LABEL_18;
    goto LABEL_7;
  }
  if ( *v12 == -8 )
  {
    --*(_DWORD *)(v9 + 16);
    goto LABEL_14;
  }
  sub_989490(&v44, v12, 0);
  v14 = *v44;
  v15 = *(_QWORD **)(*v44 + 8);
  if ( v15 )
  {
LABEL_18:
    v18 = (unsigned __int64)v15;
    goto LABEL_19;
  }
LABEL_7:
  v16 = *(_QWORD *)(v9 + 120);
  if ( v16 )
  {
    v40 = v14;
    v15 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)v16 + 16LL))(v16, "Append", 6);
    v14 = v40;
    *(_QWORD *)(v40 + 8) = v15;
    if ( v15 )
      goto LABEL_18;
  }
  v17 = *(_QWORD *)(v9 + 24);
  *(_QWORD *)(v9 + 104) += 24LL;
  v18 = (v17 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_QWORD *)(v9 + 32) >= v18 + 24 && v17 )
  {
    *(_QWORD *)(v9 + 24) = v18 + 24;
    v15 = (_QWORD *)((v17 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  }
  else
  {
    v42 = v14;
    v15 = (_QWORD *)sub_986170(v9 + 24, 24, 24, 3, v14, v13);
    v14 = v42;
    v18 = (unsigned __int64)v15;
  }
  v19 = *v15 & 0xFFFFF80000000000LL;
  v15[1] = 0;
  *v15 = v19 | 0x1FFFC05;
  *(_QWORD *)(v14 + 8) = v15;
  v15[2] = v14;
LABEL_19:
  *(_WORD *)v15 = *(_WORD *)v15 & 0xFE00 | 5;
  v46 = v18;
  v23 = (__int64 **)sub_15BA000((__int64)&v45, "value", 5u, v4, 0);
  v24 = sub_15B9A20((__int64)a1, 1);
  v25 = sub_15BB460(v23, "__builtin_hlsl_buffer_update_counter", 0x24u, v2[2346], 0x80u, v24);
  v26 = sub_A70010((__int64)v2, v6);
  v27 = sub_15BBBE0(v25, "__builtin_hlsl_resource_getpointer", 0x22u, v26, 0x80u, 0x81u);
  v28 = sub_15BAF40((__int64)v27, 129);
  v29 = sub_15BAFF0(v28, 129, 0);
  v34 = sub_15B9700(v29, 129, v30, v31, v32, v33);
  sub_15B9700((__int64)&v45, 129, v35, v36, v37, v38);
  if ( ptr != v55 )
    free(ptr);
  if ( v50 != v52 )
    free(v50);
  return v34;
}
