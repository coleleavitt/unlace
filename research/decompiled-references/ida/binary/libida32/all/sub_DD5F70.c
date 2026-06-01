__int64 __fastcall sub_DD5F70(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  void *v4; // rdx
  __int64 v5; // r12
  __int64 v6; // rax
  void *v7; // rdx
  unsigned int v8; // ebx
  void *v10; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v11; // [rsp+8h] [rbp-50h]
  char v12; // [rsp+Ch] [rbp-4Ch]
  int v13; // [rsp+10h] [rbp-48h]
  void *v14; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v15; // [rsp+28h] [rbp-30h]
  char v16; // [rsp+2Ch] [rbp-2Ch]
  int v17; // [rsp+30h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 176);
  v3 = sub_DFDA20(v2, 24);
  v11 = *(_DWORD *)(v3 + 8);
  v4 = *(void **)v3;
  *(_DWORD *)(v3 + 8) = 0;
  v10 = v4;
  LOBYTE(v4) = *(_BYTE *)(v3 + 12);
  LODWORD(v3) = *(_DWORD *)(v3 + 16);
  v12 = (char)v4;
  v13 = v3;
  sub_DFDA50(v2, 24);
  v5 = *(_QWORD *)(a1 + 176);
  v6 = sub_DFDA20(v5, 24);
  v15 = *(_DWORD *)(v6 + 8);
  v7 = *(void **)v6;
  *(_DWORD *)(v6 + 8) = 0;
  v14 = v7;
  LOBYTE(v7) = *(_BYTE *)(v6 + 12);
  LODWORD(v6) = *(_DWORD *)(v6 + 16);
  v16 = (char)v7;
  v17 = v6;
  sub_DFDA50(v5, 24);
  v8 = sub_D049E0(a1, a2, (unsigned int)(unsigned __int16)v13 + 1, (__int64)&v14, (__int64)&v10);
  if ( v15 > 0x40 && v14 )
    operator delete[](v14);
  if ( v11 > 0x40 && v10 )
    operator delete[](v10);
  return v8;
}

