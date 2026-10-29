__int64 __fastcall sub_D8CC20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v7; // al
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // r13
  __int64 v13; // rcx
  __int64 v14; // r13
  __int64 v15; // rax
  unsigned __int64 v16; // r15
  unsigned int v17; // eax
  signed __int64 v18; // r8
  _QWORD *v19; // rax
  _QWORD **v20; // rdi
  __int64 (*v21)(void); // rax
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rsi
  unsigned __int8 **v26; // rax
  unsigned __int8 **v27; // rbx
  unsigned int v28; // ebx
  __int64 v30; // rsi
  int v31; // edx
  __int64 v32; // rdi
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rdi
  unsigned __int8 **v36; // rax
  unsigned __int8 **v37; // rbp
  __int64 v38; // [rsp+0h] [rbp-E0h]
  __int64 v39; // [rsp+0h] [rbp-E0h]
  void *v40; // [rsp+8h] [rbp-D8h] BYREF
  unsigned int v41; // [rsp+10h] [rbp-D0h]
  __int128 v42; // [rsp+18h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+28h] [rbp-B8h]
  _BYTE v44[24]; // [rsp+38h] [rbp-A8h] BYREF
  unsigned int v45; // [rsp+50h] [rbp-90h]
  __int64 v46; // [rsp+58h] [rbp-88h]
  void *v47; // [rsp+68h] [rbp-78h] BYREF
  int v48; // [rsp+70h] [rbp-70h]
  char v49; // [rsp+74h] [rbp-6Ch]

  v7 = *(_BYTE *)(a2 + 2);
  v8 = *(_QWORD *)(a1 + 184);
  v42 = 0;
  v43 = 0;
  v9 = 8 * (((v7 & 8) != 0) + 1LL);
  if ( *(_DWORD *)(a2 + 16) != 3 )
  {
    v10 = *(_QWORD *)(a2 + v9 + 40);
    v11 = 13;
    if ( (*(_BYTE *)(v10 + 1) & 6) != 0 )
      goto LABEL_3;
    goto LABEL_34;
  }
  v30 = *(_QWORD *)(a2 + v9 + 48);
  v31 = 13;
  if ( (*(_BYTE *)(v30 + 1) & 6) == 0 )
    v31 = sub_D8A760(v8, v30, 13, a4, a5);
  sub_D8B1A0((__int64)&v47, *(_QWORD *)(a1 + 176), v31);
  LOBYTE(v43) = 1;
  DWORD2(v42) = v48;
  *(_QWORD *)&v42 = v47;
  BYTE12(v42) = v49;
  v8 = *(_QWORD *)(a1 + 184);
  v11 = 13;
  v10 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40);
  if ( (*(_BYTE *)(v10 + 1) & 6) == 0 )
LABEL_34:
    v11 = sub_CE6180(v8, *(_QWORD *)(v10 + 8), 13, a4, a5);
LABEL_3:
  sub_D8B1A0((__int64)&v40, *(_QWORD *)(a1 + 176), v11);
  v12 = *(_QWORD *)(a1 + 176);
  sub_E21760(v12, 48);
  sub_E23260(v44);
  sub_E21790(v12, 48);
  v14 = (__int64)v40;
  if ( v41 > 0x40 )
    v14 = *(_QWORD *)v40;
  if ( v45 )
    goto LABEL_11;
  v15 = **(_QWORD **)(v46 + 32);
  v16 = v15 & 0xFFFFFFFFFFFFFFFCLL;
  v17 = (v15 >> 1) & 1;
  v18 = v17;
  if ( v17 )
  {
    v18 = 0;
    if ( !v16 )
      goto LABEL_10;
    v34 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(
                      *(_QWORD *)(a1 + 24),
                      48,
                      v45,
                      v13,
                      0);
    v18 = sub_C21160(v34, v16, 3);
    if ( v14 > v18 )
      goto LABEL_38;
LABEL_11:
    v20 = *(_QWORD ***)(a1 + 24);
    v21 = (__int64 (*)(void))(*v20)[13];
    if ( (char *)v21 == (char *)sub_D8A670 )
      v22 = (*(__int64 (__fastcall **)(_QWORD *))(*v20[3] + 104LL))(v20[3]);
    else
      v22 = v21();
    sub_E25340(&v47, v44, v22);
    v23 = *(_QWORD *)sub_A51080((__int64)&v47);
    if ( (_BYTE)v43 )
    {
      v24 = v42;
      if ( DWORD2(v42) > 0x40 )
        v24 = *(_QWORD *)v42;
      v23 -= v24;
    }
    if ( v23 == v14 * ((v23 != 0) + (v23 - (unsigned __int64)(v23 != 0)) / v14) )
    {
      v32 = *(_QWORD *)(a1 + 176);
      v28 = 1;
      v33 = sub_E216C0(v32, 48);
      sub_E231E0(v33, v44);
LABEL_23:
      if ( (unsigned int)v47 > 1 )
        sub_A4F8E0((int *)&v47);
      goto LABEL_25;
    }
    v38 = v23;
    v25 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
    if ( v45 )
    {
      v27 = (unsigned __int8 **)sub_E33C90(a1, v25, 2384, 0);
      if ( !v27 )
        goto LABEL_22;
    }
    else
    {
      v26 = (unsigned __int8 **)sub_E33C90(a1, v25, 2383, 0);
      v27 = v26;
      if ( !v26 )
      {
LABEL_22:
        v28 = 0;
        goto LABEL_23;
      }
      sub_AE9DF0(v26, 1, 2u);
    }
    sub_AE9DF0(v27, v38, 2u);
    sub_AE9DF0(v27, v14, 2u);
    goto LABEL_22;
  }
  if ( v16 && (*(_BYTE *)(v16 + 28) & 0x7Fu) - 26 <= 0x1A )
  {
    v19 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(
                      *(_QWORD *)(a1 + 24),
                      48,
                      v45,
                      v13,
                      v17);
    v18 = sub_AB0BF0(v19, v16, 0);
  }
LABEL_10:
  if ( v14 <= v18 )
    goto LABEL_11;
LABEL_38:
  v35 = a1;
  v39 = v18;
  v28 = 0;
  v36 = (unsigned __int8 **)sub_E33C90(v35, *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32), 2383, 0);
  v37 = v36;
  if ( v36 )
  {
    sub_AE9DF0(v36, 0, 2u);
    sub_AE9DF0(v37, v39, 2u);
    sub_AE9DF0(v37, v14, 2u);
  }
LABEL_25:
  sub_E232A0(v44);
  if ( v41 > 0x40 && v40 )
    operator delete[](v40);
  sub_98E4B0((__int64)&v42);
  return v28;
}
