__int64 __fastcall sub_214CE70(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r12
  _DWORD **v4; // rdi
  _QWORD *v5; // rdi
  __int64 v6; // r13
  unsigned int v7; // ebp
  __int64 v8; // r14
  int v9; // eax
  const char *v10; // rax
  _QWORD *v12; // rdi
  __int64 v13; // r15
  char v14; // cl
  _QWORD *v15; // r13
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  void *v19; // rax
  __int64 v20; // rdx
  unsigned int v21; // r14d
  __int64 v22; // rbx
  void (__fastcall *v23)(__int64, unsigned __int64, _QWORD *, __int64, _QWORD); // r12
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // [rsp+8h] [rbp-80h] BYREF
  __int64 v27; // [rsp+10h] [rbp-78h] BYREF
  __int64 v28; // [rsp+18h] [rbp-70h] BYREF
  _QWORD v29[4]; // [rsp+20h] [rbp-68h] BYREF
  __int16 v30; // [rsp+40h] [rbp-48h]

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(v2 + 184);
  if ( (unsigned __int8)sub_2153CB0(v2, &v26) )
  {
    v30 = 259;
    v4 = *(_DWORD ***)(a1 + 8);
    v29[0] = "expected identifier in directive";
    return (unsigned int)sub_21543E0(v4, v29, 0, 0);
  }
  v4 = *(_DWORD ***)(a1 + 8);
  if ( *v4[6] != 26 )
  {
    v10 = "unexpected token in directive";
    goto LABEL_8;
  }
  (*((void (__fastcall **)(_DWORD **))*v4 + 19))(v4);
  v5 = *(_QWORD **)(a1 + 8);
  v6 = v5[23];
  v7 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(*v5 + 224LL))(v5, &v27);
  if ( (_BYTE)v7 )
    return 1;
  v28 = 0;
  v4 = *(_DWORD ***)(a1 + 8);
  v8 = 0;
  v9 = *v4[6];
  if ( v9 != 26 )
    goto LABEL_5;
  (*((void (__fastcall **)(_DWORD **))*v4 + 19))(v4);
  v12 = *(_QWORD **)(a1 + 8);
  v8 = v12[23];
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64 *))(*v12 + 224LL))(v12, &v28) )
    return 1;
  v4 = *(_DWORD ***)(a1 + 8);
  v9 = *v4[6];
LABEL_5:
  if ( v9 != 9 )
  {
    v10 = "unexpected token in '.tbss' directive";
LABEL_8:
    v29[0] = v10;
    v30 = 259;
    return (unsigned int)sub_21543E0(v4, v29, 0, 0);
  }
  (*((void (__fastcall **)(_DWORD **))*v4 + 19))(v4);
  v13 = v27;
  if ( v27 < 0 )
  {
    v18 = *(_QWORD *)(a1 + 8);
    v30 = 259;
    v29[0] = "invalid '.tbss' directive size, can't be less thanzero";
    return (unsigned int)sub_2153E90(v18, v6, v29, 0, 0);
  }
  v14 = v28;
  if ( v28 < 0 )
  {
    v17 = *(_QWORD *)(a1 + 8);
    v30 = 259;
    v29[0] = "invalid '.tbss' alignment, can't be lessthan zero";
    return (unsigned int)sub_2153E90(v17, v8, v29, 0, 0);
  }
  v15 = (_QWORD *)v26;
  if ( *(_QWORD *)v26 )
  {
LABEL_18:
    v16 = *(_QWORD *)(a1 + 8);
    v29[0] = "invalid symbol redefinition";
    v30 = 259;
    return (unsigned int)sub_2153E90(v16, v3, v29, 0, 0);
  }
  if ( (*(_BYTE *)(v26 + 9) & 0x70) == 0x20 && (*(_BYTE *)(v26 + 8) & 0x40) == 0 )
  {
    v19 = sub_210D820(*(_QWORD *)(v26 + 24));
    *v15 = v19;
    if ( v19 )
      goto LABEL_18;
    v14 = v28;
    v13 = v27;
    v15 = (_QWORD *)v26;
  }
  v20 = *(_QWORD *)(a1 + 8);
  v21 = -1;
  v22 = *(_QWORD *)(v20 + 24);
  v23 = *(void (__fastcall **)(__int64, unsigned __int64, _QWORD *, __int64, _QWORD))(*(_QWORD *)v22 + 504LL);
  if ( 1LL << v14 )
  {
    _BitScanReverse64(&v24, 1LL << v14);
    v21 = 63 - (v24 ^ 0x3F);
  }
  v25 = sub_21097F0(*(_QWORD *)(v20 + 16), (__int64)"__DATA", 6, (__int64)"__thread_bss", 12, 18, 0, 12, nullptr);
  v23(v22, v25, v15, v13, v21);
  return v7;
}
