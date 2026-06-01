__int64 __fastcall sub_181E980(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD *a4, _DWORD *a5, double a6)
{
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r12
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // [rsp+8h] [rbp-D0h] BYREF
  _QWORD v21[2]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+20h] [rbp-B8h]
  unsigned __int8 *v23; // [rsp+30h] [rbp-A8h] BYREF
  char v24; // [rsp+88h] [rbp-50h]
  unsigned int v25; // [rsp+90h] [rbp-48h]
  char v26; // [rsp+94h] [rbp-44h]

  v9 = sub_BFD550(a3);
  if ( (*(_WORD *)v9 & 0x1FF) == 9 )
  {
    if ( a5 )
      *a5 = sub_EEB7E0(a3, a2, a6);
    if ( ((*(_BYTE *)(v9 + 2) >> 3) & 7) == 0 || ((*(_BYTE *)(v9 + 2) >> 3) & 7) == 5 )
    {
      v10 = *(_DWORD *)(v9 + 16) * ((*(_WORD *)(v9 + 2) >> 6) & 7u);
      *a4 = v9 + 4LL * *(unsigned int *)(v9 + 4) + 20;
      a4[1] = v10;
      return 1;
    }
  }
  else if ( a5 )
  {
    *a5 = sub_EEB7E0(a3, a2, a6);
  }
  v12 = sub_EEB7E0(a3, a2, a6);
  sub_168B9F0((__int64)v21, (__int64 *)(a1 + 8), v12, 0xC57u, 0);
  if ( v24 )
  {
    sub_AE9DF0(&v23, a2, 0x10u);
  }
  else if ( v26 )
  {
    v17 = sub_168B9E0(v21);
    v18 = v22;
    if ( v22 )
      v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 32LL))(v22);
    v20 = v18;
    v19 = sub_1587BC0(v17, &v20, v13, v14, v15, v16);
    sub_AE9DF0((unsigned __int8 **)(*v19 + 32LL * v25 + 8), a2, 0x10u);
  }
  LODWORD(v20) = 2;
  sub_180A710((__int64)v21, (int *)&v20);
  sub_15F7200(v21);
  return 0;
}
