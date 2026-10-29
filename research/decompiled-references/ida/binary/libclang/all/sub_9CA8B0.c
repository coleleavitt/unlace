__int64 __fastcall sub_9CA8B0(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // r12
  __int64 v7; // rax
  unsigned int v8; // edx
  unsigned int v9; // r13d
  void *v10; // r14
  char v11; // r12
  char v12; // r12
  __int64 v13; // rdi
  __int64 v14; // r12
  unsigned int v15; // eax
  unsigned int v16; // ebx
  __int64 v18; // rbx
  unsigned int v19; // eax
  char v20; // [rsp+Fh] [rbp-109h] BYREF
  void *v21; // [rsp+10h] [rbp-108h]
  unsigned int v22; // [rsp+18h] [rbp-100h]
  char v23; // [rsp+1Ch] [rbp-FCh]
  int v24; // [rsp+20h] [rbp-F8h]
  void *v25; // [rsp+30h] [rbp-E8h]
  unsigned int v26; // [rsp+38h] [rbp-E0h]
  char v27; // [rsp+3Ch] [rbp-DCh]
  int v28; // [rsp+40h] [rbp-D8h]
  void *v29; // [rsp+50h] [rbp-C8h] BYREF
  unsigned int v30; // [rsp+58h] [rbp-C0h]
  char v31; // [rsp+5Ch] [rbp-BCh]
  int v32; // [rsp+60h] [rbp-B8h]
  void *v33; // [rsp+70h] [rbp-A8h] BYREF
  unsigned int v34; // [rsp+78h] [rbp-A0h]
  char v35; // [rsp+7Ch] [rbp-9Ch]
  int v36; // [rsp+80h] [rbp-98h]
  void *v37; // [rsp+90h] [rbp-88h] BYREF
  unsigned int v38; // [rsp+98h] [rbp-80h]
  char v39; // [rsp+9Ch] [rbp-7Ch]
  int v40; // [rsp+A0h] [rbp-78h]
  int v41; // [rsp+C0h] [rbp-58h]
  void *v42; // [rsp+D0h] [rbp-48h] BYREF
  unsigned int v43; // [rsp+D8h] [rbp-40h]
  char v44; // [rsp+DCh] [rbp-3Ch]
  int v45; // [rsp+E0h] [rbp-38h]

  v3 = *(_QWORD *)(a1 + 184);
  v4 = sub_A1A5A0(v3, 24);
  v5 = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(v4 + 8) = 0;
  v22 = v5;
  v21 = *(void **)v4;
  LOBYTE(v5) = *(_BYTE *)(v4 + 12);
  LODWORD(v4) = *(_DWORD *)(v4 + 16);
  v23 = v5;
  v24 = v4;
  sub_A1A5E0(v3, 24);
  v6 = *(_QWORD *)(a1 + 184);
  v7 = sub_A1A5A0(v6, 24);
  v8 = *(_DWORD *)(v7 + 8);
  *(_DWORD *)(v7 + 8) = 0;
  v26 = v8;
  v25 = *(void **)v7;
  LOBYTE(v8) = *(_BYTE *)(v7 + 12);
  LODWORD(v7) = *(_DWORD *)(v7 + 16);
  v27 = v8;
  v28 = v7;
  sub_A1A5E0(v6, 24);
  v30 = 0;
  v29 = nullptr;
  v31 = 1;
  v32 = 0;
  v34 = v22;
  if ( v22 > 0x40 )
    sub_2585B30(&v33);
  else
    v33 = v21;
  v35 = v23;
  v36 = v24;
  v38 = v26;
  if ( v26 > 0x40 )
    sub_2585B30(&v37);
  else
    v37 = v25;
  v20 = 0;
  v39 = v27;
  v40 = v28;
  sub_25702F0(&v42, &v37, &v33, &v20);
  v9 = v43;
  v10 = v42;
  v43 = 0;
  v11 = v44;
  v41 = v45;
  if ( v30 > 0x40 && v29 )
  {
    operator delete[](v29);
    v29 = v10;
    v30 = v9;
    v31 = v11;
    v32 = v41;
    if ( v43 > 0x40 && v42 )
    {
      operator delete[](v42);
      v12 = v20;
      if ( v38 <= 0x40 )
        goto LABEL_10;
      goto LABEL_29;
    }
  }
  else
  {
    v29 = v42;
    v30 = v9;
    v31 = v44;
    v32 = v45;
  }
  v12 = v20;
  if ( v38 <= 0x40 )
    goto LABEL_10;
LABEL_29:
  if ( v37 )
    operator delete[](v37);
LABEL_10:
  if ( v34 > 0x40 && v33 )
    operator delete[](v33);
  v13 = *(_QWORD *)(a1 + 184);
  if ( v12 )
  {
    v14 = sub_A1A4E0(v13, 24);
    v15 = v30;
    *(_DWORD *)(v14 + 8) = v30;
    if ( v15 > 0x40 )
      sub_2585B30(v14);
    else
      *(_QWORD *)v14 = v29;
    *(_BYTE *)(v14 + 12) = v31;
    *(_DWORD *)(v14 + 16) = v32;
    v16 = sub_9C87D0(a1, a2, (__int64)&v29);
  }
  else
  {
    v18 = sub_A1A4E0(v13, 24);
    v19 = v30;
    *(_DWORD *)(v18 + 8) = v30;
    if ( v19 > 0x40 )
      sub_2585B30(v18);
    else
      *(_QWORD *)v18 = v29;
    *(_BYTE *)(v18 + 12) = v31;
    *(_DWORD *)(v18 + 16) = v32;
    v16 = 1;
  }
  if ( v30 > 0x40 && v29 )
    operator delete[](v29);
  if ( v26 > 0x40 && v25 )
    operator delete[](v25);
  if ( v22 > 0x40 && v21 )
    operator delete[](v21);
  return v16;
}

