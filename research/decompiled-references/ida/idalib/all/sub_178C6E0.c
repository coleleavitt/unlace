unsigned __int64 __fastcall sub_178C6E0(
        __int64 *a1,
        const void *a2,
        size_t a3,
        __m128i a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v9; // rax
  unsigned __int64 result; // rax
  __int64 v11; // rbp
  __int64 v12; // r14
  __int32 *v13; // rax
  unsigned int v14; // r15d
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // r14
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rbp
  __int64 v26; // rdx
  _BOOL8 v27; // r14
  _BYTE **v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r12
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r12
  __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // [rsp+8h] [rbp-D0h] BYREF
  _QWORD v44[2]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v45; // [rsp+20h] [rbp-B8h]
  unsigned __int8 *v46[11]; // [rsp+30h] [rbp-A8h] BYREF
  char v47; // [rsp+88h] [rbp-50h]
  unsigned int v48; // [rsp+90h] [rbp-48h]
  char v49; // [rsp+94h] [rbp-44h]

  v9 = sub_17840A0(*a1, *(_QWORD *)(*(_QWORD *)a1[1] + 184LL), *(_DWORD *)a1[2], a2, a3, a7, a4);
  if ( v9 == 1 )
    return 1;
  v11 = v9;
  v12 = *a1;
  v13 = (__int32 *)a1[2];
  v14 = *v13;
  v15 = sub_1783A50((_QWORD *)*a1, *(_QWORD *)a1[3], *v13);
  if ( v15 == 1 )
    return 1;
  v16 = v11 & 0xFFFFFFFFFFFFFFFELL;
  v17 = sub_1783580(v12, v14, v16, v15 & 0xFFFFFFFFFFFFFFFELL);
  if ( v17 == 1 )
    return 1;
  v18 = *(unsigned int *)a1[2];
  v19 = sub_178C3D0(*a1, v18, v16, v17 & 0xFFFFFFFFFFFFFFFELL, 1, a4);
  v22 = 0;
  v23 = *a1;
  v24 = v19 & 0xFFFFFFFFFFFFFFFELL;
  v25 = v24;
  if ( v24 )
    v22 = (unsigned int)sub_C00A40(v24, v18, 0, v20, v21);
  v26 = sub_19B4A30(v23, v25, v22, 0, 0, 0);
  result = v26 & 0xFFFFFFFFFFFFFFFELL;
  if ( v26 == 1 )
  {
    LODWORD(v27) = 1;
    sub_168B9F0((__int64)v44, (__int64 *)(*a1 + 8), *(_DWORD *)a1[2], 0x16E1u, 0);
    if ( a3 == j__strlen("initial_suspend") )
    {
      LODWORD(v27) = 0;
      if ( a3 )
        v27 = memcmp(a2, "initial_suspend", a3) != 0;
    }
    if ( v47 )
    {
      sub_AE9DF0(v46, v27, 2u);
    }
    else if ( v49 )
    {
      v40 = sub_168B9E0(v44);
      v41 = v45;
      if ( v45 )
        v41 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 32LL))(v45);
      v43 = v41;
      v42 = sub_1587BC0(v40, &v43, v36, v37, v38, v39);
      sub_AE9DF0((unsigned __int8 **)(*v42 + 32LL * v48 + 8), v27, 2u);
    }
    sub_15F7200(v44);
    sub_168B9F0((__int64)v44, (__int64 *)(*a1 + 8), *(_DWORD *)a1[4], 0x16F0u, 0);
    v28 = (_BYTE **)a1[5];
    if ( v47 )
    {
      sub_AEC220(v46, *v28, (signed __int64)v28[1]);
    }
    else if ( v49 )
    {
      v33 = sub_168B9E0(v44);
      v34 = v45;
      if ( v45 )
        v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 32LL))(v45);
      v43 = v34;
      v35 = sub_1587BC0(v33, &v43, v29, v30, v31, v32);
      sub_AEC220((unsigned __int8 **)(*v35 + 32LL * v48 + 8), *v28, (signed __int64)v28[1]);
    }
    sub_15F7200(v44);
    return 1;
  }
  return result;
}
