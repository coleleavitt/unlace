void __fastcall sub_1A90BE0(__int64 *a1, __int64 a2, unsigned int a3, __int64 *a4, __int64 a5, int *a6)
{
  unsigned int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r14
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r13
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // [rsp+8h] [rbp-D0h] BYREF
  _BYTE v28[200]; // [rsp+10h] [rbp-C8h] BYREF

  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
  sub_168B9F0((__int64)v28, a1, v10, a3, 0);
  v11 = sub_1587DB0((__int64)v28, a4);
  v12 = v11;
  if ( *(_BYTE *)(v11 + 120) )
  {
    sub_AE9DF0((unsigned __int8 **)(v11 + 32), a5, 1u);
    if ( *(_BYTE *)(v12 + 120) )
      goto LABEL_7;
  }
  else
  {
    if ( !*(_BYTE *)(v11 + 132) )
      goto LABEL_3;
    v17 = sub_168B9E0((_QWORD *)v11);
    v18 = *(_QWORD *)(v12 + 16);
    if ( v18 )
      v18 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v18 + 32LL))(*(_QWORD *)(v12 + 16));
    v27 = v18;
    v19 = sub_1587BC0(v17, &v27, v13, v14, v15, v16);
    sub_AE9DF0((unsigned __int8 **)(*v19 + 32LL * *(unsigned int *)(v12 + 128) + 8), a5, 1u);
    if ( *(_BYTE *)(v12 + 120) )
    {
LABEL_7:
      sub_AE9DF0((unsigned __int8 **)(v12 + 32), *a6, 2u);
      goto LABEL_3;
    }
  }
  if ( *(_BYTE *)(v12 + 132) )
  {
    v24 = sub_168B9E0((_QWORD *)v12);
    v25 = *(_QWORD *)(v12 + 16);
    if ( v25 )
      v25 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v25 + 32LL))(*(_QWORD *)(v12 + 16));
    v27 = v25;
    v26 = sub_1587BC0(v24, &v27, v20, v21, v22, v23);
    sub_AE9DF0((unsigned __int8 **)(*v26 + 32LL * *(unsigned int *)(v12 + 128) + 8), *a6, 2u);
  }
LABEL_3:
  sub_15F7200(v28);
}
