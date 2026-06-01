void __fastcall sub_8D8D00(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rbx
  void *v9; // [rsp+0h] [rbp-98h]
  unsigned int v10; // [rsp+8h] [rbp-90h]
  char v11; // [rsp+Ch] [rbp-8Ch]
  int v12; // [rsp+10h] [rbp-88h]
  void *v13; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v14; // [rsp+28h] [rbp-70h]
  char v15; // [rsp+2Ch] [rbp-6Ch]
  int v16; // [rsp+30h] [rbp-68h]
  _QWORD v17[3]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v18; // [rsp+58h] [rbp-40h]
  unsigned int v19; // [rsp+60h] [rbp-38h]
  int v20; // [rsp+70h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 24);
  v4 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  v10 = v4;
  v9 = *(void **)v3;
  v11 = *(_BYTE *)(v3 + 12);
  v12 = *(_DWORD *)(v3 + 16);
  sub_A1A5E0(v2, 24);
  v5 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  v6 = (unsigned int)(*(_DWORD *)v5 + *(_DWORD *)(a2 + 8));
  sub_A1C030(v17, *(_QWORD *)(v5 + 24), v6, (unsigned int)v6);
  sub_781830(*(_QWORD *)a2);
  v14 = v10;
  if ( v10 > 0x40 )
    sub_2585B30(&v13);
  else
    v13 = v9;
  v15 = v11;
  v16 = v12;
  if ( v20 )
    goto LABEL_8;
  v7 = *(_QWORD *)(v18 + 32);
  if ( *(_DWORD *)(v7 + 16) != v19 && v19 )
    v7 = *(_QWORD *)(v18 + v19 + 32);
  if ( !*(_BYTE *)(v7 + 51) || (v8 = v18 + v17[0] + 72, v19 != v17[0]) )
LABEL_8:
    v8 = v18 + v17[0] + 40;
  if ( *(_DWORD *)(v8 + 8) > 0x40u && *(_QWORD *)v8 )
    operator delete[](*(void **)v8);
  *(_QWORD *)v8 = v13;
  *(_DWORD *)(v8 + 8) = v14;
  *(_BYTE *)(v8 + 12) = v15;
  *(_DWORD *)(v8 + 16) = v16;
  sub_A1C490(v17);
  sub_A1DB00(v17);
  sub_A1C0C0(v17);
  if ( v10 > 0x40 )
  {
    if ( v9 )
      operator delete[](v9);
  }
}

