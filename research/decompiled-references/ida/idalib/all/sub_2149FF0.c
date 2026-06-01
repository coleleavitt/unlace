__int64 __fastcall sub_2149FF0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  _QWORD *v4; // rdi
  __int64 v5; // r12
  unsigned int v6; // ebp
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // r13
  _QWORD *v10; // rdi
  __int64 v11; // r14
  __int64 v12; // r15
  int v13; // eax
  const char *v14; // rax
  __int64 v16; // rbx
  void (__fastcall *v17)(__int64, unsigned __int64, _QWORD, _QWORD, _QWORD, __int64); // r13
  unsigned __int64 v18; // rax
  __int64 v19; // r10
  char v20; // cl
  _QWORD *v21; // r14
  __int64 v22; // rdi
  _QWORD *v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi
  void *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r13
  void (__fastcall *v29)(__int64, unsigned __int64, _QWORD *, __int64, _QWORD, __int64); // r15
  unsigned __int64 v30; // rax
  int v31; // ecx
  unsigned int v32; // ebx
  unsigned __int64 v33; // rax
  __int64 v34; // [rsp+8h] [rbp-B0h]
  __int64 v35; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+20h] [rbp-98h] BYREF
  __int64 v37; // [rsp+28h] [rbp-90h] BYREF
  __int64 v38; // [rsp+30h] [rbp-88h] BYREF
  __int64 v39; // [rsp+38h] [rbp-80h]
  __int64 v40; // [rsp+40h] [rbp-78h] BYREF
  __int64 v41; // [rsp+48h] [rbp-70h]
  _QWORD v42[4]; // [rsp+50h] [rbp-68h] BYREF
  __int16 v43; // [rsp+70h] [rbp-48h]

  v2 = *(_QWORD *)(a1 + 8);
  v38 = 0;
  v39 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 160LL))(v2, &v38) )
  {
    v3 = *(_QWORD *)(a1 + 8);
    v42[0] = "expected segment name after '.zerofill' directive";
    v43 = 259;
    return (unsigned int)sub_21543E0(v3, v42, 0, 0);
  }
  v3 = *(_QWORD *)(a1 + 8);
  if ( **(_DWORD **)(v3 + 48) != 26 )
    goto LABEL_12;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 152LL))(v3);
  v4 = *(_QWORD **)(a1 + 8);
  v40 = 0;
  v41 = 0;
  v5 = v4[23];
  v6 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(*v4 + 160LL))(v4, &v40);
  if ( (_BYTE)v6 )
  {
    v43 = 259;
    v3 = *(_QWORD *)(a1 + 8);
    v42[0] = "expected section name after comma in '.zerofill' directive";
    return (unsigned int)sub_21543E0(v3, v42, 0, 0);
  }
  v3 = *(_QWORD *)(a1 + 8);
  v7 = **(_DWORD **)(v3 + 48);
  if ( v7 == 9 )
  {
    v16 = *(_QWORD *)(v3 + 24);
    v17 = *(void (__fastcall **)(__int64, unsigned __int64, _QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)v16 + 496LL);
    v18 = sub_21097F0(*(_QWORD *)(v3 + 16), v38, v39, v40, v41, 1, 0, 15, nullptr);
    v17(v16, v18, 0, 0, 0, v5);
    return v6;
  }
  if ( v7 != 26 )
    goto LABEL_12;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 152LL))(v3);
  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(_QWORD *)(v8 + 184);
  if ( (unsigned __int8)sub_2153CB0(v8, &v35) )
  {
    v3 = *(_QWORD *)(a1 + 8);
    v42[0] = "expected identifier in directive";
    v43 = 259;
    return (unsigned int)sub_21543E0(v3, v42, 0, 0);
  }
  v3 = *(_QWORD *)(a1 + 8);
  if ( **(_DWORD **)(v3 + 48) != 26 )
  {
LABEL_12:
    v14 = "unexpected token in directive";
    goto LABEL_13;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 152LL))(v3);
  v10 = *(_QWORD **)(a1 + 8);
  v11 = v10[23];
  v6 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(*v10 + 224LL))(v10, &v36);
  if ( (_BYTE)v6 )
    return 1;
  v37 = 0;
  v3 = *(_QWORD *)(a1 + 8);
  v12 = 0;
  v13 = **(_DWORD **)(v3 + 48);
  if ( v13 != 26 )
    goto LABEL_10;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 152LL))(v3);
  v23 = *(_QWORD **)(a1 + 8);
  v12 = v23[23];
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64 *))(*v23 + 224LL))(v23, &v37) )
    return 1;
  v3 = *(_QWORD *)(a1 + 8);
  v13 = **(_DWORD **)(v3 + 48);
LABEL_10:
  if ( v13 != 9 )
  {
    v14 = "unexpected token in '.zerofill' directive";
LABEL_13:
    v42[0] = v14;
    v43 = 259;
    return (unsigned int)sub_21543E0(v3, v42, 0, 0);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 152LL))(v3);
  v19 = v36;
  if ( v36 < 0 )
  {
    v25 = *(_QWORD *)(a1 + 8);
    v43 = 259;
    v42[0] = "invalid '.zerofill' directive size, can't be less than zero";
    return (unsigned int)sub_2153E90(v25, v11, v42, 0, 0);
  }
  v20 = v37;
  if ( v37 < 0 )
  {
    v24 = *(_QWORD *)(a1 + 8);
    v43 = 259;
    v42[0] = "invalid '.zerofill' directive alignment, can't be less than zero";
    return (unsigned int)sub_2153E90(v24, v12, v42, 0, 0);
  }
  v21 = (_QWORD *)v35;
  if ( *(_QWORD *)v35 )
  {
LABEL_24:
    v22 = *(_QWORD *)(a1 + 8);
    v42[0] = "invalid symbol redefinition";
    v43 = 259;
    return (unsigned int)sub_2153E90(v22, v9, v42, 0, 0);
  }
  if ( (*(_BYTE *)(v35 + 9) & 0x70) == 0x20 && (*(_BYTE *)(v35 + 8) & 0x40) == 0 )
  {
    v26 = sub_210D820(*(_QWORD *)(v35 + 24));
    *v21 = v26;
    if ( v26 )
      goto LABEL_24;
    v20 = v37;
    v19 = v36;
    v21 = (_QWORD *)v35;
  }
  v27 = *(_QWORD *)(a1 + 8);
  v28 = *(_QWORD *)(v27 + 24);
  v29 = *(void (__fastcall **)(__int64, unsigned __int64, _QWORD *, __int64, _QWORD, __int64))(*(_QWORD *)v28 + 496LL);
  v30 = 1LL << v20;
  v31 = 64;
  if ( v30 )
  {
    _BitScanReverse64(&v30, v30);
    v31 = v30 ^ 0x3F;
  }
  v34 = v19;
  v32 = 63 - v31;
  v33 = sub_21097F0(*(_QWORD *)(v27 + 16), v38, v39, v40, v41, 1, 0, 15, nullptr);
  v29(v28, v33, v21, v34, v32, v5);
  return v6;
}
