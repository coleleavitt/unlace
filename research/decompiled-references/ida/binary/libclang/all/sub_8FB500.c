__int64 __fastcall sub_8FB500(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r12
  __int64 v6; // rax
  unsigned int v7; // edx
  __int64 v8; // r12
  __int64 v9; // rax
  unsigned int v10; // edx
  __int64 v11; // r12
  int v12; // eax
  int v13; // esi
  unsigned int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // rax
  unsigned int v17; // ebx
  void *v19; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v20; // [rsp+8h] [rbp-70h]
  void *v21; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v22; // [rsp+18h] [rbp-60h]
  char v23; // [rsp+1Ch] [rbp-5Ch]
  int v24; // [rsp+20h] [rbp-58h]
  void *v25; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v26; // [rsp+38h] [rbp-40h]
  char v27; // [rsp+3Ch] [rbp-3Ch]
  int v28; // [rsp+40h] [rbp-38h]

  v5 = *(_QWORD *)(a1 + 184);
  v6 = sub_A1A5A0(v5, 24);
  v7 = *(_DWORD *)(v6 + 8);
  *(_DWORD *)(v6 + 8) = 0;
  v22 = v7;
  v21 = *(void **)v6;
  LOBYTE(v7) = *(_BYTE *)(v6 + 12);
  LODWORD(v6) = *(_DWORD *)(v6 + 16);
  v23 = v7;
  v24 = v6;
  sub_A1A5E0(v5, 24);
  v8 = *(_QWORD *)(a1 + 184);
  v9 = sub_A1A5A0(v8, 24);
  v10 = *(_DWORD *)(v9 + 8);
  *(_DWORD *)(v9 + 8) = 0;
  v26 = v10;
  v25 = *(void **)v9;
  LOBYTE(v10) = *(_BYTE *)(v9 + 12);
  LODWORD(v9) = *(_DWORD *)(v9 + 16);
  v27 = v10;
  v28 = v9;
  sub_A1A5E0(v8, 24);
  v11 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  v12 = sub_256EFC0(&v25, &v21);
  if ( v12 )
  {
    v13 = v12 >> 31;
    v14 = (v12 >> 31) + 3;
    v15 = (unsigned int)(v13 + 3);
  }
  else
  {
    v15 = 1;
    v14 = 0;
  }
  if ( *(_BYTE *)(a3 + 112) == 2 )
    v15 = v14;
  v16 = sub_B9AC80(a3, v15);
  sub_B99210(&v19, v16);
  v17 = sub_987D60(a1, a2, v11, &v19);
  if ( v20 > 0x40 && v19 )
    operator delete[](v19);
  if ( v26 > 0x40 && v25 )
    operator delete[](v25);
  if ( v22 > 0x40 && v21 )
    operator delete[](v21);
  return v17;
}

