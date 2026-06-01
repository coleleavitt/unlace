__int64 __fastcall sub_E9C2C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // r15
  __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  __int64 v12; // rbp
  unsigned __int64 v13; // rbp
  unsigned int *v15; // rdi
  _DWORD *v16; // rsi
  size_t v17; // rdx
  __int64 v18; // r13
  __int64 v19; // r14
  unsigned __int8 v20; // al
  unsigned __int8 v21; // r13
  unsigned int v22; // r14d
  unsigned __int8 v23; // r12
  unsigned __int8 v24; // r13
  __int64 v25; // rsi
  unsigned __int8 v26; // dl
  __int64 v27; // rsi
  __int64 v29; // r13
  __int64 v30; // r12
  int v31; // r15d
  __int64 v32; // rax
  __int64 v33; // rdi
  int v34; // r13d
  char v35; // al
  __int64 v36; // rdi
  char v37; // al
  __int64 v38; // rdi
  char v39; // al
  __int64 v40; // rdi
  __int64 v41; // rax
  int v42; // [rsp+8h] [rbp-F0h]
  unsigned __int8 v43; // [rsp+8h] [rbp-F0h]
  __int64 v44; // [rsp+14h] [rbp-E4h] BYREF
  char v45; // [rsp+1Ch] [rbp-DCh]
  _QWORD v46[4]; // [rsp+20h] [rbp-D8h] BYREF
  __m128 v47; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v48; // [rsp+50h] [rbp-A8h]
  __int64 v49; // [rsp+58h] [rbp-A0h]
  __int64 v50; // [rsp+60h] [rbp-98h]
  unsigned __int8 *v51[17]; // [rsp+70h] [rbp-88h] BYREF

  v8 = a8;
  v48 = a3;
  v9 = *(_QWORD *)(a7 + 40);
  v49 = a4;
  v50 = a1;
  v47 = _mm_loadh_ps((const double *)&a7);
  v46[0] = a8;
  v46[1] = a5;
  v46[2] = a6;
  v46[3] = a1;
  if ( (v9 & 7) != 0 )
  {
    v10 = 0;
    v11 = 0;
  }
  else
  {
    v10 = v9 & 0xFFFFFFFFFFFFFFF8LL;
    v11 = v10;
  }
  v12 = *(_QWORD *)(a8 + 40);
  if ( (v12 & 7) != 0 )
    BUG();
  v13 = v12 & 0xFFFFFFFFFFFFFFF8LL;
  v15 = *(unsigned int **)(v11 + 16);
  v16 = *(_DWORD **)(v13 + 16);
  v17 = *v15;
  if ( v17 != *v16 || *v15 && memcmp(v15 + 4, v16 + 4, v17) )
  {
    sub_E989A0((__int64)v51, (__int64)&v47, 0);
    sub_AE9DF0(v51, v10, 5u);
    sub_AEA040((__int64)v51);
    sub_E98A50((__int64)v51, v46, 0);
    v26 = 5;
    v27 = v13;
LABEL_15:
    v22 = 1;
    sub_AE9DF0(v51, v27, v26);
    sub_AEA040((__int64)v51);
    return v22;
  }
  v18 = *(_QWORD *)(v8 + 48);
  v19 = *(_QWORD *)(a7 + 48);
  v42 = sub_E98500(v19);
  if ( v42 != (unsigned int)sub_E98500(v18) )
  {
    sub_E989A0((__int64)v51, (__int64)&v47, 1u);
    sub_AE9DF0(v51, v10, 5u);
    sub_AE9DF0(v51, v19, 8u);
    sub_AEA040((__int64)v51);
    sub_E98A50((__int64)v51, v46, 1u);
    sub_AE9DF0(v51, v13, 5u);
    v26 = 8;
    v27 = v18;
    goto LABEL_15;
  }
  v20 = *(_BYTE *)(a7 + 68);
  v21 = v20 & 1;
  if ( (*(_BYTE *)(v8 + 68) & 1) != (v20 & 1) )
  {
    v43 = *(_BYTE *)(v8 + 68) & 1;
    v22 = 1;
    sub_E989A0((__int64)v51, (__int64)&v47, 2u);
    sub_AE9DF0(v51, v10, 5u);
    sub_E97E40(v51, v21);
    sub_AEA040((__int64)v51);
    sub_E98A50((__int64)v51, v46, 2u);
    sub_AE9DF0(v51, v13, 5u);
    sub_E97E40(v51, v43);
    sub_AEA040((__int64)v51);
    return v22;
  }
  v22 = v20 & *(_BYTE *)(v8 + 68) & 1;
  if ( (v20 & *(_BYTE *)(v8 + 68) & 1) == 0 )
    goto LABEL_10;
  v33 = *(_QWORD *)(a7 + 72);
  if ( (v20 & 0xC) != 0xC && (v20 & 0xC) != 0 )
    v33 = *(_QWORD *)(v33 + 8);
  v34 = sub_E985C0(v33);
  v35 = *(_BYTE *)(v8 + 68);
  if ( (v35 & 1) != 0 )
  {
    v36 = *(_QWORD *)(v8 + 72);
    if ( (v35 & 0xC) != 0xC && (v35 & 0xC) != 0 )
      v36 = *(_QWORD *)(v36 + 8);
  }
  else
  {
    v36 = 0;
  }
  if ( v34 == (unsigned int)sub_E985C0(v36) )
  {
LABEL_10:
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 1LL) & 8) != 0 )
    {
      v23 = (*(_BYTE *)(v8 + 68) & 2) != 0;
      v24 = (*(_BYTE *)(a7 + 68) & 2) != 0;
      if ( v23 != v24 )
      {
        sub_E989A0((__int64)v51, (__int64)&v47, 4u);
        sub_AE9DF0(v51, v10, 5u);
        sub_E97E40(v51, v24);
        sub_AEA040((__int64)v51);
        sub_E98A50((__int64)v51, v46, 4u);
        sub_AE9DF0(v51, v13, 5u);
        v25 = v23;
LABEL_13:
        sub_E97E40(v51, v25);
        v22 = 1;
        sub_AEA040((__int64)v51);
        return v22;
      }
      v29 = sub_B780B0(a7);
      v30 = sub_B780B0(v8);
      if ( (v29 == 0) != (v30 == 0) )
      {
        sub_E989A0((__int64)v51, (__int64)&v47, 5u);
        sub_AE9DF0(v51, v10, 5u);
        sub_E97E40(v51, v29 != 0);
        sub_AEA040((__int64)v51);
        sub_E98A50((__int64)v51, v46, 5u);
        sub_AE9DF0(v51, v13, 5u);
        v25 = v30 != 0;
        goto LABEL_13;
      }
      LOBYTE(v22) = v30 != 0 && v29 != 0;
      if ( (_BYTE)v22 )
      {
        v31 = sub_E985C0(v29);
        if ( v31 != (unsigned int)sub_E985C0(v30) )
        {
          sub_E989A0((__int64)v51, (__int64)&v47, 6u);
          sub_AE9DF0(v51, v10, 5u);
          v45 = 1;
          v44 = sub_EEC8C0(v29);
          sub_AEC610((__int64 *)v51, &v44);
          sub_AEA040((__int64)v51);
          sub_E98A50((__int64)v51, v46, 6u);
          sub_AE9DF0(v51, v13, 5u);
          v32 = sub_EEC8C0(v30);
          v45 = 1;
          v44 = v32;
          sub_AEC610((__int64 *)v51, &v44);
          sub_AEA040((__int64)v51);
          return v22;
        }
      }
    }
    return 0;
  }
  sub_E989A0((__int64)v51, (__int64)&v47, 3u);
  sub_AE9DF0(v51, v10, 5u);
  v37 = *(_BYTE *)(a7 + 68);
  if ( (v37 & 1) != 0 )
  {
    v38 = *(_QWORD *)(a7 + 72);
    if ( (v37 & 0xC) != 0xC && (v37 & 0xC) != 0 )
      v38 = *(_QWORD *)(v38 + 8);
  }
  else
  {
    v38 = 0;
  }
  v45 = 1;
  v44 = sub_EEC8C0(v38);
  sub_AEC610((__int64 *)v51, &v44);
  sub_AEA040((__int64)v51);
  sub_E98A50((__int64)v51, v46, 3u);
  sub_AE9DF0(v51, v13, 5u);
  v39 = *(_BYTE *)(v8 + 68);
  if ( (v39 & 1) != 0 )
  {
    v40 = *(_QWORD *)(v8 + 72);
    if ( (v39 & 0xC) != 0xC && (v39 & 0xC) != 0 )
      v40 = *(_QWORD *)(v40 + 8);
  }
  else
  {
    v40 = 0;
  }
  v41 = sub_EEC8C0(v40);
  v45 = 1;
  v44 = v41;
  sub_AEC610((__int64 *)v51, &v44);
  sub_AEA040((__int64)v51);
  return v22;
}
