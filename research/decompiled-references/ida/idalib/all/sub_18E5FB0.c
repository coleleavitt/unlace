__int64 __fastcall sub_18E5FB0(
        __int64 *a1,
        unsigned int a2,
        int a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6,
        double a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        unsigned int a13,
        __int64 a14,
        __int64 a15)
{
  __int64 v17; // rdi
  __int64 v18; // rbp
  unsigned __int64 v20; // rax
  unsigned int v21; // eax
  unsigned __int64 v22; // rax
  unsigned int v23; // ebx
  unsigned __int64 v24; // rbp
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r13
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rdx
  int v33; // [rsp+10h] [rbp-E8h]
  int v34; // [rsp+14h] [rbp-E4h]
  int v35; // [rsp+18h] [rbp-E0h]
  __int64 v36; // [rsp+28h] [rbp-D0h] BYREF
  unsigned __int64 v37; // [rsp+34h] [rbp-C4h] BYREF
  char v38; // [rsp+3Ch] [rbp-BCh]
  _QWORD v39[2]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v40; // [rsp+50h] [rbp-A8h]
  __int64 v41[11]; // [rsp+60h] [rbp-98h] BYREF
  char v42; // [rsp+B8h] [rbp-40h]
  unsigned int v43; // [rsp+C0h] [rbp-38h]
  char v44; // [rsp+C4h] [rbp-34h]

  if ( (*(_WORD *)a6 & 0x1FF) != 0xF5
    || (v17 = *(_QWORD *)(a6 + 8), (v17 & 1) != 0)
    || (*(_BYTE *)(v17 + 28) & 0x7Fu) - 40 > 6 )
  {
    v18 = *a1;
    return sub_1C415E0(v18, a2, a3, a4, a5, a6, a8, a9, a10, a11, a12, a13, 1, a14, a15);
  }
  if ( *(char *)(v17 + 28) < 0 )
    return 1;
  v35 = a6;
  v34 = a5;
  v33 = a3;
  v20 = sub_B73640(v17);
  a3 = v33;
  a5 = v34;
  LODWORD(a6) = v35;
  v18 = *a1;
  if ( (*(_DWORD *)v20 & 0x10000) != 0
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) != 34 )
  {
    return sub_1C415E0(v18, a2, a3, a4, a5, a6, a8, a9, a10, a11, a12, a13, 1, a14, a15);
  }
  if ( a4 )
  {
    v21 = sub_EEB7E0(a4, a2, a7);
    sub_168B9F0((__int64)v39, (__int64 *)(v18 + 8), v21, 0x1106u, 0);
    v22 = sub_EEC8C0(a4, v18 + 8, a7);
    v23 = v22;
    v24 = HIDWORD(v22);
    if ( v42 )
    {
      v37 = v22;
      v38 = 1;
      sub_AEC610(v41, (__int64 *)&v37);
    }
    else if ( v44 )
    {
      v29 = sub_168B9E0(v39);
      v30 = v40;
      if ( v40 )
        v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v40 + 32LL))(v40);
      v36 = v30;
      v31 = sub_1587BC0(v29, &v36, v25, v26, v27, v28);
      v32 = *v31 + 32LL * v43;
      v37 = __PAIR64__(v24, v23);
      v38 = 1;
      sub_AEC610((__int64 *)(v32 + 8), (__int64 *)&v37);
    }
    sub_15F7200(v39);
    return 1;
  }
  return sub_1A89A90(*(_QWORD *)(v18 + 736), a2, a12, v20, a13);
}
