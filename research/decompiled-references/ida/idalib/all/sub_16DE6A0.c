__int64 __fastcall sub_16DE6A0(
        unsigned __int64 a1,
        _BYTE *a2,
        signed __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7)
{
  __int64 v9; // rdx
  _QWORD *v10; // rbx
  unsigned __int64 v11; // rax
  __int64 v12; // rbx
  unsigned int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r14
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r15
  __int64 v28; // rax
  _QWORD *v29; // rax
  int v30; // [rsp+4h] [rbp-F4h] BYREF
  __int64 v31; // [rsp+8h] [rbp-F0h] BYREF
  _QWORD *v32; // [rsp+10h] [rbp-E8h] BYREF
  unsigned int v33; // [rsp+18h] [rbp-E0h]
  char v34; // [rsp+20h] [rbp-D8h]
  _QWORD v35[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v36; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v37[11]; // [rsp+50h] [rbp-A8h] BYREF
  char v38; // [rsp+A8h] [rbp-50h]
  unsigned int v39; // [rsp+B0h] [rbp-48h]
  char v40; // [rsp+B4h] [rbp-44h]

  v9 = *(_QWORD *)(a4 + 248);
  v30 = 0;
  sub_C3EB00((__int64)&v32, a1, v9, &v30, a5, a6);
  if ( !v34 )
  {
    v15 = sub_EEB7E0(a1, a1, a7);
    sub_168B9F0((__int64)v35, (__int64 *)(a4 + 8), v15, 0xD1Fu, 0);
    if ( v38 )
    {
      sub_AEC220(v37, a2, a3);
      v12 = 0;
      sub_15F7200(v35);
      goto LABEL_5;
    }
    if ( v40 )
    {
      v20 = sub_168B9E0(v35);
      v21 = v36;
      if ( v36 )
        v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 32LL))(v36);
      v31 = v21;
      v22 = sub_1587BC0(v20, &v31, v16, v17, v18, v19);
      sub_AEC220((unsigned __int8 **)(*v22 + 32LL * v39 + 8), a2, a3);
    }
    goto LABEL_9;
  }
  v10 = v32;
  if ( v33 > 0x40 )
    v10 = (_QWORD *)*v32;
  v11 = (unsigned __int64)v10 - 1;
  v12 = (unsigned int)v10 | 0x100000000LL;
  if ( v11 > 0xFFFFE )
  {
    v14 = sub_EEB7E0(a1, a1, a7);
    sub_168B9F0((__int64)v35, (__int64 *)(a4 + 8), v14, 0xD1Du, 0);
    if ( v38 )
    {
      sub_AEC220(v37, a2, a3);
    }
    else if ( v40 )
    {
      v27 = sub_168B9E0(v35);
      v28 = v36;
      if ( v36 )
        v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 32LL))(v36);
      v31 = v28;
      v29 = sub_1587BC0(v27, &v31, v23, v24, v25, v26);
      sub_AEC220((unsigned __int8 **)(*v29 + 32LL * v39 + 8), a2, a3);
    }
    LODWORD(v31) = 0xFFFFF;
    sub_16CF160((__int64)v35, (unsigned int *)&v31);
LABEL_9:
    v12 = 0;
    sub_15F7200(v35);
  }
LABEL_5:
  sub_98E4B0((__int64)&v32);
  return v12;
}
