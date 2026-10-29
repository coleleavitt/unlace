__int64 __fastcall sub_1E6FC20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r14d
  int v6; // r13d
  __int64 v7; // rbx
  __int64 v8; // rax
  bool v9; // r13
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r14
  void *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r14
  void *v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // [rsp+8h] [rbp-F0h] BYREF
  __int64 v35; // [rsp+18h] [rbp-E0h] BYREF
  void *v36; // [rsp+20h] [rbp-D8h] BYREF
  signed __int64 v37; // [rsp+28h] [rbp-D0h]
  __int64 v38; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD v39[2]; // [rsp+40h] [rbp-B8h] BYREF
  void *v40; // [rsp+50h] [rbp-A8h]
  unsigned __int8 *v41[11]; // [rsp+60h] [rbp-98h] BYREF
  char v42; // [rsp+B8h] [rbp-40h]
  unsigned int v43; // [rsp+C0h] [rbp-38h]
  char v44; // [rsp+C4h] [rbp-34h]

  v5 = a3;
  v6 = a4;
  v34 = a2;
  v7 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v7 + 16) != 26 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 )
      return 0;
    v7 = sub_F63050(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4);
    if ( !v7 )
      return 0;
  }
  if ( !sub_A5DBE0(v7, a2, a3, a4, a5) && (*(_BYTE *)(v7 + 18) & 0x18) == 0 )
    return 0;
  sub_168B9F0((__int64)v39, (__int64 *)(a1 + 8), v5, 0xD74u, 0);
  if ( v42 )
  {
    sub_1E5E160(v41, v6);
  }
  else if ( v44 )
  {
    v31 = sub_168B9E0(v39);
    v32 = v40;
    if ( v40 )
      v32 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v40 + 32LL))(v40);
    v36 = v32;
    v33 = sub_1587BC0(v31, (__int64 *)&v36, v27, v28, v29, v30);
    sub_1E5E160((unsigned __int8 **)(*v33 + 32LL * v43 + 8), v6);
  }
  v8 = v34;
  if ( *(_BYTE *)(*(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 40 )
    v8 = sub_F64990(v34);
  v9 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 <= 1;
  if ( v42 )
  {
    sub_1E5E160(v41, v9);
  }
  else if ( v44 )
  {
    v24 = sub_168B9E0(v39);
    v25 = v40;
    if ( v40 )
      v25 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v40 + 32LL))(v40);
    v36 = v25;
    v26 = sub_1587BC0(v24, (__int64 *)&v36, v20, v21, v22, v23);
    sub_1E5E160((unsigned __int8 **)(*v26 + 32LL * v43 + 8), v9);
  }
  v10 = sub_1605D30((__int64)v39, &v34);
  sub_1E601F0(&v36, v7, v11);
  if ( *(_BYTE *)(v10 + 120) )
  {
    sub_AEC220((unsigned __int8 **)(v10 + 32), v36, v37);
  }
  else if ( *(_BYTE *)(v10 + 132) )
  {
    v15 = sub_168B9E0((_QWORD *)v10);
    v18 = *(_QWORD *)(v10 + 16);
    if ( v18 )
      v18 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v18 + 32LL))(*(_QWORD *)(v10 + 16));
    v35 = v18;
    v19 = sub_1587BC0(v15, &v35, v13, v14, v16, v17);
    sub_AEC220((unsigned __int8 **)(*v19 + 32LL * *(unsigned int *)(v10 + 128) + 8), v36, v37);
  }
  if ( v36 != &v38 )
    operator delete(v36);
  sub_15F7200(v39);
  return 1;
}
