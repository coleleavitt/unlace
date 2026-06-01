__int64 __fastcall sub_90B420(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // r13
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v9; // rsi
  __int64 v10; // r12
  void *v11; // [rsp+0h] [rbp-88h]
  unsigned int v12; // [rsp+8h] [rbp-80h]
  char v13; // [rsp+Ch] [rbp-7Ch]
  int v14; // [rsp+10h] [rbp-78h]
  _QWORD v15[3]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v16; // [rsp+38h] [rbp-50h]
  unsigned int v17; // [rsp+40h] [rbp-48h]
  int v18; // [rsp+50h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 24);
  v4 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  v12 = v4;
  v11 = *(void **)v3;
  v13 = *(_BYTE *)(v3 + 12);
  v14 = *(_DWORD *)(v3 + 16);
  sub_A1A5E0(v2, 24);
  v5 = *(_QWORD *)(a1 + 184);
  v6 = sub_A1A5A0(v5, 56);
  sub_A1C070(v15, v6);
  sub_A1A5E0(v5, 56);
  v7 = sub_9D5470(a1, a2, v15);
  if ( (_BYTE)v7 )
  {
    sub_A1C490(v15);
    sub_A1DB00(v15);
    if ( v18 )
      goto LABEL_11;
    v9 = *(_QWORD *)(v16 + 32);
    if ( *(_DWORD *)(v9 + 16) != v17 && v17 )
      v9 = *(_QWORD *)(v16 + v17 + 32);
    if ( !*(_BYTE *)(v9 + 51) || (v10 = v16 + v15[0] + 72, v17 != v15[0]) )
LABEL_11:
      v10 = v16 + v15[0] + 40;
    *(_DWORD *)(v10 + 8) = v12;
    if ( v12 > 0x40 )
      sub_2585B30(v10);
    else
      *(_QWORD *)v10 = v11;
    *(_BYTE *)(v10 + 12) = v13;
    *(_DWORD *)(v10 + 16) = v14;
  }
  sub_A1C0C0(v15);
  if ( v12 > 0x40 && v11 )
    operator delete[](v11);
  return v7;
}

