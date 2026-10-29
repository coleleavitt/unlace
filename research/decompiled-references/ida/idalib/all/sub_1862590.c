__int64 __fastcall sub_1862590(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rax
  __int64 *v7; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r13
  __int64 v14; // rax
  _QWORD *v15; // rax
  char v16; // al
  __int64 v17; // rdx
  unsigned __int8 *v18; // rax
  __int64 v19; // [rsp+8h] [rbp-E0h] BYREF
  void *v20; // [rsp+10h] [rbp-D8h] BYREF
  signed __int64 v21; // [rsp+18h] [rbp-D0h]
  __int64 v22; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+30h] [rbp-B8h] BYREF
  int v24; // [rsp+38h] [rbp-B0h]
  int v25; // [rsp+3Ch] [rbp-ACh]
  __int64 v26; // [rsp+40h] [rbp-A8h]
  char v27; // [rsp+48h] [rbp-A0h]
  unsigned __int8 *v28[10]; // [rsp+50h] [rbp-98h] BYREF
  int v29; // [rsp+A0h] [rbp-48h]
  char v30; // [rsp+A8h] [rbp-40h]
  __int64 v31; // [rsp+B0h] [rbp-38h]

  sub_168B9F0((__int64)&v23, (__int64 *)(a3 + 8), a4, 0xE0Fu, 0);
  sub_1839770(&v20, (const __m128i *)(*(_QWORD *)(a3 + 248) + 17464LL), *(_QWORD *)(a2 + 24), 0);
  if ( v30 )
  {
    sub_AEC220(v28, v20, v21);
    v16 = v30;
  }
  else
  {
    if ( !BYTE4(v31) )
    {
      v6 = v23;
      *(_BYTE *)(a1 + 120) = 0;
      *(_QWORD *)a1 = v6;
      *(_DWORD *)(a1 + 8) = v24;
      *(_DWORD *)(a1 + 12) = v25;
      *(_QWORD *)(a1 + 16) = v26;
      *(_BYTE *)(a1 + 24) = v27;
      goto LABEL_4;
    }
    v13 = sub_168B9E0(&v23);
    v14 = v26;
    if ( v26 )
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 32LL))(v26);
    v19 = v14;
    v15 = sub_1587BC0(v13, &v19, v9, v10, v11, v12);
    sub_AEC220((unsigned __int8 **)(*v15 + 32LL * (unsigned int)v31 + 8), v20, v21);
    v16 = v30;
  }
  v17 = v23;
  *(_BYTE *)(a1 + 120) = 0;
  *(_QWORD *)a1 = v17;
  *(_DWORD *)(a1 + 8) = v24;
  *(_DWORD *)(a1 + 12) = v25;
  *(_QWORD *)(a1 + 16) = v26;
  *(_BYTE *)(a1 + 24) = v27;
  if ( v16 )
  {
    sub_FC70F0(a1 + 32, (__int64)v28);
    v18 = v28[9];
    *(_BYTE *)(a1 + 120) = 1;
    *(_QWORD *)(a1 + 104) = v18;
    *(_DWORD *)(a1 + 112) = v29;
  }
LABEL_4:
  v7 = (__int64 *)v20;
  *(_QWORD *)(a1 + 128) = v31;
  if ( v7 != &v22 )
    operator delete(v7);
  sub_15F7200(&v23);
  return a1;
}
