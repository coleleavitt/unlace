void __fastcall sub_9B9A10(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned int v7; // eax
  __int64 v8; // rsi
  __int64 v9; // rbp
  void *v10; // [rsp+0h] [rbp-98h] BYREF
  unsigned int v11; // [rsp+8h] [rbp-90h]
  void *v12; // [rsp+10h] [rbp-88h] BYREF
  unsigned int v13; // [rsp+18h] [rbp-80h]
  void *v14; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v15; // [rsp+28h] [rbp-70h]
  void *v16; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v17; // [rsp+38h] [rbp-60h]
  _QWORD v18[3]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v19; // [rsp+58h] [rbp-40h]
  unsigned int v20; // [rsp+60h] [rbp-38h]
  int v21; // [rsp+70h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 16);
  v4 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  v11 = v4;
  v10 = *(void **)v3;
  sub_A1A5E0(v2, 16);
  v5 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  v6 = (unsigned int)(*(_DWORD *)v5 + *(_DWORD *)(a2 + 8));
  sub_A1C030(v18, *(_QWORD *)(v5 + 24), v6, (unsigned int)v6);
  v7 = sub_781830(*(_QWORD *)a2);
  sub_25877E0(&v14, &v10, v7);
  sub_2587E20(&v16, &v14, v11);
  v13 = v17;
  if ( v17 > 0x40 )
  {
    sub_2585B30(&v12);
    if ( v17 > 0x40 && v16 )
      operator delete[](v16);
  }
  else
  {
    v12 = v16;
  }
  if ( v15 > 0x40 && v14 )
    operator delete[](v14);
  if ( v21 )
    goto LABEL_11;
  v8 = *(_QWORD *)(v19 + 32);
  if ( *(_DWORD *)(v8 + 16) != v20 && v20 )
    v8 = *(_QWORD *)(v19 + v20 + 32);
  if ( !*(_BYTE *)(v8 + 51) || (v9 = v19 + v18[0] + 72, v18[0] != v20) )
LABEL_11:
    v9 = v19 + v18[0] + 40;
  if ( *(_DWORD *)(v9 + 8) > 0x40u && *(_QWORD *)v9 )
    operator delete[](*(void **)v9);
  *(_QWORD *)v9 = v12;
  *(_DWORD *)(v9 + 8) = v13;
  sub_A1C490(v18);
  sub_A1DB00(v18);
  sub_A1C0C0(v18);
  if ( v11 > 0x40 )
  {
    if ( v10 )
      operator delete[](v10);
  }
}

