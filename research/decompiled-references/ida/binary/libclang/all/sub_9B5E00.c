void __fastcall sub_9B5E00(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned int v3; // edx
  __int64 v4; // rbx
  __int64 v5; // rax
  unsigned int v6; // edx
  void *v7; // [rsp+0h] [rbp-98h]
  unsigned int v8; // [rsp+8h] [rbp-90h]
  char v9; // [rsp+Ch] [rbp-8Ch]
  int v10; // [rsp+10h] [rbp-88h]
  void *v11; // [rsp+20h] [rbp-78h]
  unsigned int v12; // [rsp+28h] [rbp-70h]
  char v13; // [rsp+2Ch] [rbp-6Ch]
  int v14; // [rsp+30h] [rbp-68h]
  void *v15; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v16; // [rsp+48h] [rbp-50h]
  char v17; // [rsp+4Ch] [rbp-4Ch]
  int v18; // [rsp+50h] [rbp-48h]
  void *v19; // [rsp+60h] [rbp-38h] BYREF
  unsigned int v20; // [rsp+68h] [rbp-30h]
  char v21; // [rsp+6Ch] [rbp-2Ch]
  int v22; // [rsp+70h] [rbp-28h]

  v1 = *(_QWORD *)(a1 + 184);
  v2 = sub_A1A5A0(v1, 24);
  v3 = *(_DWORD *)(v2 + 8);
  *(_DWORD *)(v2 + 8) = 0;
  v12 = v3;
  v11 = *(void **)v2;
  v13 = *(_BYTE *)(v2 + 12);
  v14 = *(_DWORD *)(v2 + 16);
  sub_A1A5E0(v1, 24);
  v4 = *(_QWORD *)(a1 + 184);
  v5 = sub_A1A5A0(v4, 24);
  v6 = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(v5 + 8) = 0;
  v8 = v6;
  v7 = *(void **)v5;
  v9 = *(_BYTE *)(v5 + 12);
  v10 = *(_DWORD *)(v5 + 16);
  sub_A1A5E0(v4, 24);
  v20 = v12;
  if ( v12 > 0x40 )
    sub_2585B30(&v19);
  else
    v19 = v11;
  v21 = v13;
  v22 = v14;
  v16 = v8;
  if ( v8 > 0x40 )
  {
    sub_2585B30(&v15);
    v17 = v9;
    v18 = v10;
    if ( v16 > 0x40 )
    {
      if ( v15 )
        operator delete[](v15);
    }
  }
  if ( v20 > 0x40 && v19 )
    operator delete[](v19);
  if ( v8 > 0x40 && v7 )
    operator delete[](v7);
  if ( v12 > 0x40 )
  {
    if ( v11 )
      operator delete[](v11);
  }
}

