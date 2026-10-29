__int64 __fastcall sub_D9F280(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  void *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  void *v11; // rdx
  void *v12; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v13; // [rsp+8h] [rbp-70h]
  char v14; // [rsp+Ch] [rbp-6Ch]
  int v15; // [rsp+10h] [rbp-68h]
  _QWORD v16[3]; // [rsp+20h] [rbp-58h] BYREF
  int v17; // [rsp+38h] [rbp-40h]
  __int64 v18; // [rsp+40h] [rbp-38h]
  unsigned int v19; // [rsp+48h] [rbp-30h]

  v4 = sub_DFDA20(a1, 24);
  v13 = *(_DWORD *)(v4 + 8);
  v5 = *(void **)v4;
  *(_DWORD *)(v4 + 8) = 0;
  v12 = v5;
  LOBYTE(v5) = *(_BYTE *)(v4 + 12);
  LODWORD(v4) = *(_DWORD *)(v4 + 16);
  v14 = (char)v5;
  v15 = v4;
  sub_DFDA50(a1, 24);
  sub_DFCD50(v16, a2, a3);
  if ( v17 )
  {
    v7 = v16[0];
    v8 = v18;
LABEL_3:
    v9 = v8 + v7 + 40;
    goto LABEL_4;
  }
  v6 = sub_CDA220((__int64)v16);
  v7 = v16[0];
  v8 = v18;
  if ( !*(_BYTE *)(v6 + 60) )
    goto LABEL_3;
  v9 = v18 + v19 + 72;
  if ( v19 != v16[0] )
    goto LABEL_3;
LABEL_4:
  if ( *(_DWORD *)(v9 + 8) <= 0x40u && v13 <= 0x40 )
  {
    v11 = v12;
    *(_DWORD *)(v9 + 8) = v13;
    *(_QWORD *)v9 = v11;
  }
  else
  {
    sub_21E1960(v9, &v12);
  }
  *(_BYTE *)(v9 + 12) = v14;
  *(_DWORD *)(v9 + 16) = v15;
  sub_DFF560(v16);
  if ( v13 > 0x40 && v12 )
    operator delete[](v12);
  return 1;
}

