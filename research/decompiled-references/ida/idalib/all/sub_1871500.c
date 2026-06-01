__int64 __fastcall sub_1871500(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 **v7; // rax
  __int64 *v8; // rcx
  unsigned __int64 v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 v13; // r13
  __int64 v14; // r14
  unsigned __int8 v15; // al
  int v16; // eax
  bool v17; // r13
  __int64 *v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r15
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r14
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // [rsp+0h] [rbp-D0h] BYREF
  _QWORD v34[2]; // [rsp+8h] [rbp-C8h] BYREF
  __int64 v35; // [rsp+18h] [rbp-B8h]
  unsigned __int8 *v36[11]; // [rsp+28h] [rbp-A8h] BYREF
  char v37; // [rsp+80h] [rbp-50h]
  unsigned int v38; // [rsp+88h] [rbp-48h]
  char v39; // [rsp+8Ch] [rbp-44h]

  if ( (*(_BYTE *)(a3 + 29) & 1) == 0 )
    return 0;
  v7 = (__int64 **)sub_B8C3D0(a3, a2, a3, a4, a5, a6);
  v8 = *v7;
  v9 = (unsigned __int64)&(*v7)[*((unsigned int *)v7 + 2)];
  if ( (unsigned __int64)v8 < v9 )
  {
    v18 = v8;
    while ( *(_WORD *)(*v18 + 36) != 214 )
    {
      if ( (__int64 *)v9 == ++v18 )
        return 0;
    }
    if ( (__int64 *)v9 == v18 )
      return 0;
  }
  else
  {
    if ( v8 == (__int64 *)v9 )
      return 0;
    if ( *(_WORD *)(*(_QWORD *)v9 + 36LL) != 214 )
    {
      v10 = (__int64 *)(v9 + 8);
      while ( v10 != v8 )
      {
        v11 = *v10++;
        if ( *(_WORD *)(v11 + 36) == 214 )
          goto LABEL_10;
      }
      return 0;
    }
  }
LABEL_10:
  while ( 1 )
  {
    v13 = *v8;
    if ( *(_WORD *)(*v8 + 36) == 214 )
      break;
    ++v8;
  }
  sub_168B9F0((__int64)v34, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0xEE9u, 0);
  v14 = *(_QWORD *)(a2 + 40);
  if ( !v37 )
  {
    if ( v39 )
    {
      v23 = sub_168B9E0(v34);
      v24 = v35;
      if ( v35 )
        v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 32LL))(v35);
      v33 = v24;
      v25 = sub_1587BC0(v23, &v33, v19, v20, v21, v22);
      sub_AE9DF0((unsigned __int8 **)(*v25 + 32LL * v38 + 8), v14, 9u);
    }
    v15 = *(_BYTE *)(v13 + 34);
    if ( (v15 & 0xF0) != 0xF0 )
      goto LABEL_14;
LABEL_27:
    v16 = sub_FA77D0(v13);
    goto LABEL_15;
  }
  sub_AE9DF0(v36, v14, 9u);
  v15 = *(_BYTE *)(v13 + 34);
  if ( (v15 & 0xF0) == 0xF0 )
    goto LABEL_27;
LABEL_14:
  v16 = v15 >> 4;
LABEL_15:
  v17 = v16 == 1;
  if ( v37 )
  {
    sub_AE9DF0(v36, v17, 2u);
  }
  else if ( v39 )
  {
    v30 = sub_168B9E0(v34);
    v31 = v35;
    if ( v35 )
      v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 32LL))(v35);
    v33 = v31;
    v32 = sub_1587BC0(v30, &v33, v26, v27, v28, v29);
    sub_AE9DF0((unsigned __int8 **)(*v32 + 32LL * v38 + 8), v17, 2u);
  }
  sub_15F7200(v34);
  sub_168B9F0((__int64)v34, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 24), 0x183Cu, 0);
  sub_15F7200(v34);
  return 1;
}
