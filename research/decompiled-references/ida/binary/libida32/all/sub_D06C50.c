void __fastcall sub_D06C50(__int64 a1)
{
  void *v2; // rax
  void *v3; // rax
  __int64 v4; // rbp
  unsigned __int8 **v5; // rbp
  __int64 v6; // rdi
  unsigned __int8 v7; // si
  bool v8; // cc
  __int64 v9; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int8 **v10; // [rsp+8h] [rbp-50h] BYREF
  void *v11; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v12; // [rsp+18h] [rbp-40h]
  char v13; // [rsp+1Ch] [rbp-3Ch]
  void *v14; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v15; // [rsp+28h] [rbp-30h]
  char v16; // [rsp+2Ch] [rbp-2Ch]
  void *v17; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v18; // [rsp+38h] [rbp-20h]

  v2 = (void *)**(unsigned int **)(a1 + 48);
  v15 = 32;
  v16 = 0;
  v14 = v2;
  sub_21E2E30(&v17, &v14, 34);
  v13 = 0;
  v12 = v18;
  v11 = v17;
  if ( v15 > 0x40 && v14 )
    operator delete[](v14);
  v3 = (void *)(**(_QWORD **)a1 & 0x3FFFFFFFFLL);
  v15 = 34;
  v14 = v3;
  v16 = 0;
  sub_CD4B40((__int64)&v17, (__int64 *)&v14, (__int64)&v11);
  v4 = *(_QWORD *)(a1 + 8);
  v9 = sub_DFB160(*(_QWORD *)(v4 + 400), **(_QWORD **)(a1 + 16));
  v10 = (unsigned __int8 **)sub_E0FFE0(v4, &v9, 2381, 0);
  v5 = v10;
  if ( !v10 )
  {
    v6 = *(_QWORD *)(a1 + 24);
    if ( *(_DWORD *)(v6 + 24) )
      goto LABEL_9;
    goto LABEL_20;
  }
  sub_CD4D00(&v10, (__int64)&v17);
  v6 = *(_QWORD *)(a1 + 24);
  v5 = v10;
  v7 = 1;
  if ( !*(_DWORD *)(v6 + 24) )
LABEL_20:
    v7 = *(_BYTE *)(sub_CDA220(v6) + 60) ^ 1;
  if ( v5 )
  {
    sub_AC60B0(v5, v7, 2u);
    if ( v10 )
      sub_AC60B0(v10, **(_QWORD **)(a1 + 32), 3u);
  }
LABEL_9:
  v8 = v18 <= 0x40;
  **(_BYTE **)(a1 + 40) = 1;
  if ( !v8 && v17 )
    operator delete[](v17);
  if ( v15 > 0x40 && v14 )
    operator delete[](v14);
  if ( v12 > 0x40 )
  {
    if ( v11 )
      operator delete[](v11);
  }
}

