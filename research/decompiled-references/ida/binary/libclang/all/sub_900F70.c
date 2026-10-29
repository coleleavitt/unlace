__int64 __fastcall sub_900F70(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // r12
  __int64 v6; // rax
  unsigned int v7; // edx
  void *v8; // r13
  bool v9; // r12
  unsigned int v10; // r13d
  void *v11; // r14
  char v12; // r12
  char v13; // r12
  unsigned int v14; // ebp
  unsigned int v16; // r14d
  __int64 v17; // rbp
  __int64 *v18; // rbx
  void *v19; // rax
  __int64 v20; // rbx
  unsigned int v21; // eax
  char v22; // [rsp+Fh] [rbp-109h] BYREF
  void *v23; // [rsp+10h] [rbp-108h]
  unsigned int v24; // [rsp+18h] [rbp-100h]
  char v25; // [rsp+1Ch] [rbp-FCh]
  int v26; // [rsp+20h] [rbp-F8h]
  void *v27; // [rsp+30h] [rbp-E8h]
  unsigned int v28; // [rsp+38h] [rbp-E0h]
  char v29; // [rsp+3Ch] [rbp-DCh]
  int v30; // [rsp+40h] [rbp-D8h]
  void *v31; // [rsp+50h] [rbp-C8h] BYREF
  unsigned int v32; // [rsp+58h] [rbp-C0h]
  char v33; // [rsp+5Ch] [rbp-BCh]
  int v34; // [rsp+60h] [rbp-B8h]
  void *v35; // [rsp+70h] [rbp-A8h] BYREF
  unsigned int v36; // [rsp+78h] [rbp-A0h]
  char v37; // [rsp+7Ch] [rbp-9Ch]
  int v38; // [rsp+80h] [rbp-98h]
  void *v39; // [rsp+90h] [rbp-88h] BYREF
  unsigned int v40; // [rsp+98h] [rbp-80h]
  char v41; // [rsp+9Ch] [rbp-7Ch]
  int v42; // [rsp+A0h] [rbp-78h]
  void *v43; // [rsp+B0h] [rbp-68h] BYREF
  unsigned int v44; // [rsp+B8h] [rbp-60h]
  bool v45; // [rsp+BCh] [rbp-5Ch]
  int v46; // [rsp+C0h] [rbp-58h]
  void *v47; // [rsp+D0h] [rbp-48h] BYREF
  unsigned int v48; // [rsp+D8h] [rbp-40h]
  char v49; // [rsp+DCh] [rbp-3Ch]
  int v50; // [rsp+E0h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 24);
  v4 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  v24 = v4;
  v23 = *(void **)v3;
  LOBYTE(v4) = *(_BYTE *)(v3 + 12);
  LODWORD(v3) = *(_DWORD *)(v3 + 16);
  v25 = v4;
  v26 = v3;
  sub_A1A5E0(v2, 24);
  v5 = *(_QWORD *)(a1 + 184);
  v6 = sub_A1A5A0(v5, 24);
  v7 = *(_DWORD *)(v6 + 8);
  *(_DWORD *)(v6 + 8) = 0;
  v28 = v7;
  v27 = *(void **)v6;
  LOBYTE(v7) = *(_BYTE *)(v6 + 12);
  LODWORD(v6) = *(_DWORD *)(v6 + 16);
  v29 = v7;
  v30 = v6;
  sub_A1A5E0(v5, 24);
  v48 = v24;
  if ( v24 <= 0x40 )
  {
    v8 = v23;
LABEL_3:
    v9 = v8 == nullptr;
    goto LABEL_4;
  }
  sub_2585B30(&v47);
  v16 = v48;
  v8 = v47;
  v44 = v48;
  v43 = v47;
  v45 = (v26 & 0x20000000) == 0;
  if ( v48 <= 0x40 )
    goto LABEL_3;
  v9 = (unsigned int)sub_2587400(&v43) == v16;
  if ( !v8 )
  {
LABEL_4:
    if ( !v9 )
      goto LABEL_5;
    goto LABEL_32;
  }
  operator delete[](v8);
  if ( !v9 )
  {
LABEL_5:
    v32 = 0;
    v31 = nullptr;
    v33 = 1;
    v34 = 0;
    v40 = v24;
    if ( v24 > 0x40 )
      sub_2585B30(&v39);
    else
      v39 = v23;
    v41 = v25;
    v42 = v26;
    v36 = v28;
    if ( v28 > 0x40 )
      sub_2585B30(&v35);
    else
      v35 = v27;
    v22 = 0;
    v37 = v29;
    v38 = v30;
    sub_2570D30(&v47, &v35, &v39, &v22);
    v10 = v48;
    v11 = v47;
    v48 = 0;
    v12 = v49;
    v46 = v50;
    if ( v32 > 0x40 && v31 )
    {
      operator delete[](v31);
      v31 = v11;
      v32 = v10;
      v33 = v12;
      v34 = v46;
      if ( v48 > 0x40 && v47 )
      {
        operator delete[](v47);
        v13 = v22;
        if ( v36 <= 0x40 )
          goto LABEL_14;
        goto LABEL_37;
      }
    }
    else
    {
      v31 = v47;
      v32 = v10;
      v33 = v49;
      v34 = v50;
    }
    v13 = v22;
    if ( v36 <= 0x40 )
      goto LABEL_14;
LABEL_37:
    if ( v35 )
      operator delete[](v35);
LABEL_14:
    if ( v40 > 0x40 && v39 )
      operator delete[](v39);
    if ( v13 )
    {
      v14 = sub_9C87D0(a1, a2, &v31);
      if ( !(_BYTE)v14 )
      {
LABEL_19:
        if ( v32 > 0x40 && v31 )
          operator delete[](v31);
        goto LABEL_22;
      }
      sub_8F5F00(*(_QWORD *)(a1 + 184), (__int64)&v31);
    }
    else
    {
      v20 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
      v21 = v32;
      *(_DWORD *)(v20 + 8) = v32;
      if ( v21 > 0x40 )
        sub_2585B30(v20);
      else
        *(_QWORD *)v20 = v31;
      *(_BYTE *)(v20 + 12) = v33;
      *(_DWORD *)(v20 + 16) = v34;
    }
    v14 = 1;
    goto LABEL_19;
  }
LABEL_32:
  v17 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  v18 = (__int64 *)sub_A2E130(a1, v17, 2306, 0);
  v19 = (void *)sub_AC7B80(*(_QWORD *)(v17 + 24));
  if ( v18 )
  {
    v47 = v19;
    LOBYTE(v48) = 1;
    sub_839C90(v18, (__int64 *)&v47);
  }
  v14 = 0;
LABEL_22:
  if ( v28 > 0x40 && v27 )
    operator delete[](v27);
  if ( v24 > 0x40 && v23 )
    operator delete[](v23);
  return v14;
}

