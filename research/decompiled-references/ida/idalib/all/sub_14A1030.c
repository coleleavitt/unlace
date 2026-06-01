void __fastcall sub_14A1030(__int64 a1)
{
  __int64 v2; // rdi
  char v3; // cl
  char v4; // al
  __int64 v5; // rdi
  char v6; // cl
  char v7; // al
  __int64 v8; // rdi
  char v9; // cl
  char v10; // al
  __int64 v11; // rdi
  char v12; // cl
  char v13; // al
  __int64 v14; // rdi
  char v15; // cl
  char v16; // al
  __int64 v17; // rdi
  char v18; // cl
  char v19; // al
  __int64 v20; // rdi
  char v21; // cl
  char v22; // al
  __int64 v23; // rdi
  char v24; // cl
  char v25; // al
  __int64 v26; // rdi
  char v27; // cl
  char v28; // al

  v2 = *(_QWORD *)(a1 + 128);
  if ( v2 )
  {
    v3 = *(_BYTE *)(a1 + 136);
    v4 = (32 * (v3 & 1)) | *(_BYTE *)(v2 + 3) & 0xDF;
    *(_BYTE *)(v2 + 3) = v4;
    if ( v3 )
      *(_BYTE *)(v2 + 3) = v4 | 0x80;
    else
      sub_145BE00(v2);
  }
  v5 = *(_QWORD *)(a1 + 112);
  if ( v5 )
  {
    v6 = *(_BYTE *)(a1 + 120);
    v7 = (32 * (v6 & 1)) | *(_BYTE *)(v5 + 3) & 0xDF;
    *(_BYTE *)(v5 + 3) = v7;
    if ( v6 )
      *(_BYTE *)(v5 + 3) = v7 | 0x80;
    else
      sub_145BE00(v5);
  }
  v8 = *(_QWORD *)(a1 + 96);
  if ( v8 )
  {
    v9 = *(_BYTE *)(a1 + 104);
    v10 = (32 * (v9 & 1)) | *(_BYTE *)(v8 + 3) & 0xDF;
    *(_BYTE *)(v8 + 3) = v10;
    if ( v9 )
      *(_BYTE *)(v8 + 3) = v10 | 0x80;
    else
      sub_145BE00(v8);
  }
  v11 = *(_QWORD *)(a1 + 80);
  if ( v11 )
  {
    v12 = *(_BYTE *)(a1 + 88);
    v13 = (32 * (v12 & 1)) | *(_BYTE *)(v11 + 3) & 0xDF;
    *(_BYTE *)(v11 + 3) = v13;
    if ( v12 )
      *(_BYTE *)(v11 + 3) = v13 | 0x80;
    else
      sub_145BE00(v11);
  }
  v14 = *(_QWORD *)(a1 + 64);
  if ( v14 )
  {
    v15 = *(_BYTE *)(a1 + 72);
    v16 = (32 * (v15 & 1)) | *(_BYTE *)(v14 + 3) & 0xDF;
    *(_BYTE *)(v14 + 3) = v16;
    if ( v15 )
      *(_BYTE *)(v14 + 3) = v16 | 0x80;
    else
      sub_145BE00(v14);
  }
  v17 = *(_QWORD *)(a1 + 48);
  if ( v17 )
  {
    v18 = *(_BYTE *)(a1 + 56);
    v19 = (32 * (v18 & 1)) | *(_BYTE *)(v17 + 3) & 0xDF;
    *(_BYTE *)(v17 + 3) = v19;
    if ( v18 )
      *(_BYTE *)(v17 + 3) = v19 | 0x80;
    else
      sub_145BE00(v17);
  }
  v20 = *(_QWORD *)(a1 + 32);
  if ( v20 )
  {
    v21 = *(_BYTE *)(a1 + 40);
    v22 = (32 * (v21 & 1)) | *(_BYTE *)(v20 + 3) & 0xDF;
    *(_BYTE *)(v20 + 3) = v22;
    if ( v21 )
      *(_BYTE *)(v20 + 3) = v22 | 0x80;
    else
      sub_145BE00(v20);
  }
  v23 = *(_QWORD *)(a1 + 16);
  if ( v23 )
  {
    v24 = *(_BYTE *)(a1 + 24);
    v25 = (32 * (v24 & 1)) | *(_BYTE *)(v23 + 3) & 0xDF;
    *(_BYTE *)(v23 + 3) = v25;
    if ( v24 )
      *(_BYTE *)(v23 + 3) = v25 | 0x80;
    else
      sub_145BE00(v23);
  }
  v26 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    v27 = *(_BYTE *)(a1 + 8);
    v28 = (32 * (v27 & 1)) | *(_BYTE *)(v26 + 3) & 0xDF;
    *(_BYTE *)(v26 + 3) = v28;
    if ( v27 )
      *(_BYTE *)(v26 + 3) = v28 | 0x80;
    else
      sub_145BE00(v26);
  }
}
