void __fastcall sub_15244C0(__int64 a1, __int64 *a2)
{
  unsigned __int16 v2; // bx
  char v3; // al
  __int64 v4; // rax
  const char *v5; // rsi
  unsigned __int16 v6; // bx
  char v7; // al
  __int64 v8; // rbx
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 *v11; // rax
  __int64 v12; // rdx
  int v13; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+8h] [rbp-B0h]
  unsigned __int16 v15; // [rsp+10h] [rbp-A8h]
  void *v16; // [rsp+20h] [rbp-98h] BYREF
  signed __int64 v17; // [rsp+28h] [rbp-90h]
  __int64 v18; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int8 *v19[15]; // [rsp+40h] [rbp-78h] BYREF

  sub_14634E0(a2, &v13);
  v2 = v15;
  v3 = sub_141A630(v15);
  if ( v2 == 1
    || v3
    || !v14
    || (v4 = *(_QWORD *)(v14 + 16), *(_DWORD *)v4 != 9)
    || *(_QWORD *)(v4 + 16) != 0x69736E6972746E69LL
    || *(_BYTE *)(v4 + 24) != 99 )
  {
    sub_FC70B0((__int64)v19, a2[6], v13, 2208);
    sub_13D35F0((__int64)&v16, (__int64)&v13, a2[11], a2[7], nullptr);
    sub_AEC220(v19, v16, v17);
    sub_1520A40(v19, (__int64)"riscv");
    sub_1520C80(v19, 1);
    v5 = "'intrinsic'";
    goto LABEL_6;
  }
  sub_14634E0(a2, &v13);
  v6 = v15;
  v7 = sub_141A630(v15);
  if ( v6 == 1 )
    goto LABEL_19;
  if ( v7 )
    goto LABEL_19;
  v8 = v14;
  if ( !v14 )
    goto LABEL_19;
  v9 = *(__int64 **)(v14 + 16);
  v10 = *v9;
  if ( (unsigned int)*v9 == 6 )
  {
    if ( *((_DWORD *)v9 + 4) == 1952671094 && *((_WORD *)v9 + 10) == 29295 )
      goto LABEL_22;
LABEL_19:
    sub_FC70B0((__int64)v19, a2[6], v13, 2208);
    sub_13D35F0((__int64)&v16, (__int64)&v13, a2[11], a2[7], nullptr);
    sub_AEC220(v19, v16, v17);
    sub_1520A40(v19, (__int64)"riscv");
    sub_1520C80(v19, 1);
    v5 = "'vector', 'sifive_vector' or 'andes_vector'";
LABEL_6:
    sub_1520A40(v19, (__int64)v5);
    if ( v16 != &v18 )
      operator delete(v16);
    goto LABEL_8;
  }
  if ( (_DWORD)v10 != 13 )
  {
    if ( (_DWORD)v10 == 12 && v9[2] == 0x65765F7365646E61LL && *((_DWORD *)v9 + 6) == 1919906915 )
      goto LABEL_22;
    goto LABEL_19;
  }
  if ( v9[2] != 0x765F657669666973LL || *((_DWORD *)v9 + 6) != 1869898597 || *((_BYTE *)v9 + 28) != 114 )
    goto LABEL_19;
LABEL_22:
  sub_14634E0(a2, &v13);
  if ( v15 != 2 )
  {
    sub_FC70B0((__int64)v19, a2[6], v13, 2202);
    sub_1520A40(v19, (__int64)"clang riscv intrinsic");
LABEL_8:
    sub_AEA040((__int64)v19);
    return;
  }
  v11 = *(__int64 **)(v8 + 16);
  v12 = *v11;
  if ( (unsigned int)*v11 == 6 )
  {
    if ( *((_DWORD *)v11 + 4) == 1952671094 && *((_WORD *)v11 + 10) == 29295 )
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 784LL) + 8LL) = 1;
  }
  else if ( (_DWORD)v12 == 13 )
  {
    if ( v11[2] == 0x765F657669666973LL && *((_DWORD *)v11 + 6) == 1869898597 && *((_BYTE *)v11 + 28) == 114 )
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 784LL) + 9LL) = 1;
  }
  else if ( (_DWORD)v12 == 12 && v11[2] == 0x65765F7365646E61LL && *((_DWORD *)v11 + 6) == 1919906915 )
  {
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 784LL) + 10LL) = 1;
  }
}
