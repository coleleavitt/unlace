__int64 __fastcall sub_8F2680(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // rbp
  __int64 v7; // rax
  unsigned int v8; // edx
  __int64 v9; // rbp
  int v10; // ebx
  void *v11; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v12; // [rsp+8h] [rbp-50h]
  char v13; // [rsp+Ch] [rbp-4Ch]
  int v14; // [rsp+10h] [rbp-48h]
  void *v15; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v16; // [rsp+28h] [rbp-30h]
  char v17; // [rsp+2Ch] [rbp-2Ch]
  int v18; // [rsp+30h] [rbp-28h]

  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return 1;
  v3 = *(_QWORD *)(a1 + 568);
  *(_QWORD *)(a1 + 800) = *a2;
  v4 = sub_A1A5A0(v3, 24);
  v5 = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(v4 + 8) = 0;
  v16 = v5;
  v15 = *(void **)v4;
  LOBYTE(v5) = *(_BYTE *)(v4 + 12);
  LODWORD(v4) = *(_DWORD *)(v4 + 16);
  v17 = v5;
  v18 = v4;
  sub_A1A5E0(v3, 24);
  v6 = *(_QWORD *)(a1 + 568);
  v7 = sub_A1A5A0(v6, 24);
  v8 = *(_DWORD *)(v7 + 8);
  *(_DWORD *)(v7 + 8) = 0;
  v12 = v8;
  v11 = *(void **)v7;
  LOBYTE(v8) = *(_BYTE *)(v7 + 12);
  LODWORD(v7) = *(_DWORD *)(v7 + 16);
  v13 = v8;
  v14 = v7;
  sub_A1A5E0(v6, 24);
  v9 = *(_QWORD *)(a1 + 568);
  v10 = sub_256EFC0(&v11, &v15);
  *(_BYTE *)sub_A1A4E0(v9, 8) = v10 <= 0;
  if ( v12 > 0x40 && v11 )
    operator delete[](v11);
  if ( v16 > 0x40 )
  {
    if ( v15 )
      operator delete[](v15);
  }
  return 1;
}

