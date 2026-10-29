void __fastcall sub_18EBD90(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int16 v5; // ax
  char *v6; // r14
  signed __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r15
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r12
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r13
  __int64 v31; // rax
  _QWORD *v32; // rax
  int v33; // [rsp+Ch] [rbp-DCh]
  __int64 v34; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v35[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v36; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v37[11]; // [rsp+40h] [rbp-A8h] BYREF
  char v38; // [rsp+98h] [rbp-50h]
  unsigned int v39; // [rsp+A0h] [rbp-48h]
  char v40; // [rsp+A4h] [rbp-44h]

  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL) & 0xFFFFFFFFFFFFFFF0LL);
  v4 = (unsigned int)*(unsigned __int8 *)(v3 + 16) - 25;
  if ( (unsigned int)v4 > 1 )
  {
    v33 = a3;
    v3 = sub_F63050(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, v4);
    LODWORD(a3) = v33;
  }
  v5 = (*(_WORD *)(v3 + 20) >> 2) & 0x3F;
  if ( v5 == 2 )
  {
    v7 = 8;
    v6 = "fastcall";
  }
  else
  {
    v6 = "vectorcall";
    if ( v5 != 4 )
      v6 = "stdcall";
    v7 = 3LL * (v5 == 4) + 7;
  }
  sub_168B9F0((__int64)v35, (__int64 *)(a2 + 8), a3, 0xD66u, 0);
  v8 = *(_QWORD *)(a1 + 16);
  v9 = *(_QWORD *)(v8 + 40);
  if ( v38 )
  {
    sub_AE9DF0(v37, *(_QWORD *)(v8 + 40), 9u);
  }
  else
  {
    if ( !v40 )
      goto LABEL_9;
    v14 = sub_168B9E0(v35);
    v15 = v36;
    if ( v36 )
      v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 32LL))(v36);
    v34 = v15;
    v16 = sub_1587BC0(v14, &v34, v10, v11, v12, v13);
    sub_AE9DF0((unsigned __int8 **)(*v16 + 32LL * v39 + 8), v9, 9u);
  }
  v17 = *(_QWORD *)(a1 + 8);
  v18 = *(_QWORD *)(v17 + 40);
  if ( v38 )
  {
    sub_AE9DF0(v37, *(_QWORD *)(v17 + 40), 9u);
  }
  else
  {
    if ( !v40 )
      goto LABEL_9;
    v30 = sub_168B9E0(v35);
    v31 = v36;
    if ( v36 )
      v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 32LL))(v36);
    v34 = v31;
    v32 = sub_1587BC0(v30, &v34, v26, v27, v28, v29);
    sub_AE9DF0((unsigned __int8 **)(*v32 + 32LL * v39 + 8), v18, 9u);
  }
  if ( v38 )
  {
    sub_AEC220(v37, v6, v7);
  }
  else if ( v40 )
  {
    v23 = sub_168B9E0(v35);
    v24 = v36;
    if ( v36 )
      v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 32LL))(v36);
    v34 = v24;
    v25 = sub_1587BC0(v23, &v34, v19, v20, v21, v22);
    sub_AEC220((unsigned __int8 **)(*v25 + 32LL * v39 + 8), v6, v7);
  }
LABEL_9:
  sub_15F7200(v35);
}
