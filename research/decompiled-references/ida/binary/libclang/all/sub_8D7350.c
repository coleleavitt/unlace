__int64 __fastcall sub_8D7350(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // eax
  char v8; // al
  unsigned int v9; // ebp
  void *v10; // r14
  char v11; // bl
  char v12; // bl
  __int64 v13; // rdi
  __int64 v14; // rbx
  unsigned int v15; // eax
  __int64 result; // rax
  __int64 v17; // rbx
  unsigned int v18; // eax
  unsigned __int8 v19; // [rsp+Fh] [rbp-D9h]
  char v20; // [rsp+1Fh] [rbp-C9h] BYREF
  void *v21; // [rsp+20h] [rbp-C8h] BYREF
  unsigned int v22; // [rsp+28h] [rbp-C0h]
  char v23; // [rsp+2Ch] [rbp-BCh]
  int v24; // [rsp+30h] [rbp-B8h]
  void *v25; // [rsp+40h] [rbp-A8h] BYREF
  unsigned int v26; // [rsp+48h] [rbp-A0h]
  char v27; // [rsp+4Ch] [rbp-9Ch]
  int v28; // [rsp+50h] [rbp-98h]
  void *v29; // [rsp+60h] [rbp-88h] BYREF
  unsigned int v30; // [rsp+68h] [rbp-80h]
  char v31; // [rsp+6Ch] [rbp-7Ch]
  int v32; // [rsp+70h] [rbp-78h]
  int v33; // [rsp+90h] [rbp-58h]
  void *v34; // [rsp+A0h] [rbp-48h] BYREF
  unsigned int v35; // [rsp+A8h] [rbp-40h]
  char v36; // [rsp+ACh] [rbp-3Ch]
  int v37; // [rsp+B0h] [rbp-38h]

  v7 = *(_DWORD *)(a4 + 8);
  v22 = 0;
  v21 = nullptr;
  v23 = 1;
  v24 = 0;
  v30 = v7;
  if ( v7 > 0x40 )
    sub_2585B30(&v29);
  else
    v29 = *(void **)a4;
  v31 = *(_BYTE *)(a4 + 12);
  v32 = *(_DWORD *)(a4 + 16);
  v26 = *(_DWORD *)(a3 + 8);
  if ( v26 > 0x40 )
    sub_2585B30(&v25);
  else
    v25 = *(void **)a3;
  v8 = *(_BYTE *)(a3 + 12);
  v20 = 0;
  v27 = v8;
  v28 = *(_DWORD *)(a3 + 16);
  sub_25702F0(&v34, &v25, &v29, &v20);
  v9 = v35;
  v10 = v34;
  v35 = 0;
  v33 = v37;
  v11 = v36;
  if ( v22 > 0x40 && v21 )
  {
    operator delete[](v21);
    v21 = v10;
    v22 = v9;
    v23 = v11;
    v24 = v33;
    if ( v35 > 0x40 && v34 )
    {
      operator delete[](v34);
      v12 = v20;
      if ( v26 <= 0x40 )
        goto LABEL_10;
      goto LABEL_23;
    }
  }
  else
  {
    v21 = v34;
    v22 = v9;
    v23 = v36;
    v24 = v37;
  }
  v12 = v20;
  if ( v26 <= 0x40 )
    goto LABEL_10;
LABEL_23:
  if ( v25 )
    operator delete[](v25);
LABEL_10:
  if ( v30 > 0x40 && v29 )
    operator delete[](v29);
  v13 = *(_QWORD *)(a1 + 184);
  if ( v12 )
  {
    v14 = sub_A1A4E0(v13, 24);
    v15 = v22;
    *(_DWORD *)(v14 + 8) = v22;
    if ( v15 > 0x40 )
      sub_2585B30(v14);
    else
      *(_QWORD *)v14 = v21;
    *(_BYTE *)(v14 + 12) = v23;
    *(_DWORD *)(v14 + 16) = v24;
    result = sub_9C87D0(a1, a2, &v21);
  }
  else
  {
    v17 = sub_A1A4E0(v13, 24);
    v18 = v22;
    *(_DWORD *)(v17 + 8) = v22;
    if ( v18 > 0x40 )
      sub_2585B30(v17);
    else
      *(_QWORD *)v17 = v21;
    *(_BYTE *)(v17 + 12) = v23;
    *(_DWORD *)(v17 + 16) = v24;
    result = 1;
  }
  if ( v22 > 0x40 )
  {
    if ( v21 )
    {
      v19 = result;
      operator delete[](v21);
      return v19;
    }
  }
  return result;
}

