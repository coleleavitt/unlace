__int64 __fastcall sub_935D60(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // r14
  void *v7; // r15
  __int64 v8; // rdx
  void *v9; // r15
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rdx
  void *v13; // r15
  __int64 v14; // rax
  unsigned int v15; // eax
  char v16; // r15
  unsigned int v17; // ebx
  char v19; // r15
  __int64 v20; // r15
  char v21; // r15
  char v22; // bp
  char v23; // bp
  __int64 v24; // rbp
  char v25; // bp
  __int64 v26; // [rsp+0h] [rbp-178h]
  __int64 v27; // [rsp+0h] [rbp-178h]
  unsigned int v28; // [rsp+Ch] [rbp-16Ch]
  __int64 v29; // [rsp+10h] [rbp-168h]
  __int64 v30; // [rsp+18h] [rbp-160h]
  __int64 v31; // [rsp+20h] [rbp-158h]
  void *v32; // [rsp+40h] [rbp-138h] BYREF
  unsigned int v33; // [rsp+48h] [rbp-130h]
  void *v34; // [rsp+50h] [rbp-128h] BYREF
  unsigned int v35; // [rsp+58h] [rbp-120h]
  void *v36; // [rsp+60h] [rbp-118h] BYREF
  unsigned int v37; // [rsp+68h] [rbp-110h]
  void *v38; // [rsp+70h] [rbp-108h] BYREF
  unsigned int v39; // [rsp+78h] [rbp-100h]
  _BYTE v40[64]; // [rsp+80h] [rbp-F8h] BYREF
  _BYTE v41[64]; // [rsp+C0h] [rbp-B8h] BYREF
  void *v42; // [rsp+100h] [rbp-78h] BYREF
  unsigned int v43; // [rsp+108h] [rbp-70h]
  __int64 v44; // [rsp+118h] [rbp-60h]
  unsigned int v45; // [rsp+120h] [rbp-58h]
  int v46; // [rsp+130h] [rbp-48h]

  v1 = *(_QWORD *)(a1 + 184);
  v2 = sub_A1A5A0(v1, 56);
  sub_A1C070(v41, v2);
  sub_A1A5E0(v1, 56);
  v3 = *(_QWORD *)(a1 + 184);
  v4 = sub_A1A5A0(v3, 56);
  sub_A1C070(v40, v4);
  sub_A1A5E0(v3, 56);
  v31 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  sub_8E6410((__int64)&v42, (__int64)v40);
  v5 = sub_8F8D30((__int64 *)&v42);
  sub_A1C0C0(&v42);
  sub_8E6310((__int64)&v42, (__int64)v40);
  v6 = v44;
  v7 = v42;
  if ( !v46 && *(_BYTE *)(sub_8E5480((__int64)&v42) + 51) && (void *)v45 == v7 )
    v29 = v6 + v45 + 72;
  else
    v29 = (__int64)v7 + v6 + 40;
  sub_A1C0C0(&v42);
  sub_8E6410((__int64)&v42, (__int64)v41);
  v8 = v44;
  v9 = v42;
  if ( v46
    || (v26 = v44, v10 = sub_8E5480((__int64)&v42), v8 = v26, !*(_BYTE *)(v10 + 51))
    || (v11 = v26 + v45 + 72, (void *)v45 != v9) )
  {
    v11 = (__int64)v9 + v8 + 40;
  }
  sub_A1C0C0(&v42);
  sub_8E6310((__int64)&v42, (__int64)v41);
  v12 = v44;
  v13 = v42;
  if ( v46
    || (v27 = v44, v14 = sub_8E5480((__int64)&v42), v12 = v27, !*(_BYTE *)(v14 + 51))
    || (v30 = v27 + v45 + 72, (void *)v45 != v13) )
  {
    v30 = (__int64)v13 + v12 + 40;
  }
  sub_A1C0C0(&v42);
  v15 = *(_DWORD *)(v5 + 8);
  v33 = 3;
  v32 = &byte_7;
  v28 = v15;
  v43 = *(_DWORD *)(v11 + 8);
  if ( v43 > 0x40 )
  {
    sub_2585B30(&v42);
    v39 = *(_DWORD *)(v5 + 8);
    if ( v39 <= 0x40 )
      goto LABEL_12;
LABEL_79:
    sub_2585B30(&v38);
    goto LABEL_13;
  }
  v42 = *(void **)v11;
  v39 = *(_DWORD *)(v5 + 8);
  if ( v39 > 0x40 )
    goto LABEL_79;
LABEL_12:
  v38 = *(void **)v5;
LABEL_13:
  v16 = sub_9337C0((__int64)&v38, (__int64)&v42, v28, (__int64)&v32);
  if ( v39 > 0x40 && v38 )
    operator delete[](v38);
  if ( v43 > 0x40 && v42 )
    operator delete[](v42);
  if ( v16 )
    goto LABEL_20;
  v35 = 3;
  v34 = &byte_7;
  v43 = *(_DWORD *)(v30 + 8);
  if ( v43 > 0x40 )
    sub_2585B30(&v42);
  else
    v42 = *(void **)v30;
  v39 = *(_DWORD *)(v29 + 8);
  if ( v39 > 0x40 )
    sub_2585B30(&v38);
  else
    v38 = *(void **)v29;
  v19 = sub_9337C0((__int64)&v38, (__int64)&v42, v28, (__int64)&v34);
  if ( v39 > 0x40 && v38 )
    operator delete[](v38);
  if ( v43 > 0x40 && v42 )
    operator delete[](v42);
  if ( v19 )
    goto LABEL_76;
  sub_8E6410((__int64)&v42, v31);
  v20 = sub_8F8D30((__int64 *)&v42);
  v39 = v35;
  if ( v35 > 0x40 )
    sub_2585B30(&v38);
  else
    v38 = v34;
  v37 = v33;
  if ( v33 > 0x40 )
    sub_2585B30(&v36);
  else
    v36 = v32;
  v21 = sub_934540((__int64)&v36, (__int64)&v38, v28, v20);
  if ( v37 > 0x40 && v36 )
    operator delete[](v36);
  if ( v39 > 0x40 && v38 )
    operator delete[](v38);
  sub_A1C0C0(&v42);
  if ( v21 )
    goto LABEL_76;
  sub_8E6410((__int64)&v42, v31);
  sub_A1DB00(&v42);
  sub_A1C0C0(&v42);
  v43 = *(_DWORD *)(v30 + 8);
  if ( v43 > 0x40 )
    sub_2585B30(&v42);
  else
    v42 = *(void **)v30;
  v39 = *(_DWORD *)(v5 + 8);
  if ( v39 > 0x40 )
    sub_2585B30(&v38);
  else
    v38 = *(void **)v5;
  v22 = sub_9337C0((__int64)&v38, (__int64)&v42, v28, (__int64)&v32);
  if ( v39 > 0x40 && v38 )
    operator delete[](v38);
  if ( v43 > 0x40 && v42 )
    operator delete[](v42);
  if ( v22 )
    goto LABEL_76;
  v43 = *(_DWORD *)(v11 + 8);
  if ( v43 > 0x40 )
    sub_2585B30(&v42);
  else
    v42 = *(void **)v11;
  v39 = *(_DWORD *)(v29 + 8);
  if ( v39 > 0x40 )
    sub_2585B30(&v38);
  else
    v38 = *(void **)v29;
  v23 = sub_9337C0((__int64)&v38, (__int64)&v42, v28, (__int64)&v34);
  if ( v39 > 0x40 && v38 )
    operator delete[](v38);
  if ( v43 > 0x40 && v42 )
    operator delete[](v42);
  if ( v23 )
    goto LABEL_76;
  sub_8E6310((__int64)&v42, v31);
  v24 = sub_8F8D30((__int64 *)&v42);
  v39 = v35;
  if ( v35 > 0x40 )
    sub_2585B30(&v38);
  else
    v38 = v34;
  v37 = v33;
  if ( v33 > 0x40 )
    sub_2585B30(&v36);
  else
    v36 = v32;
  v25 = sub_92DE90((__int64)&v36, (__int64)&v38, v28, v24);
  if ( v37 > 0x40 && v36 )
    operator delete[](v36);
  if ( v39 > 0x40 && v38 )
    operator delete[](v38);
  sub_A1C0C0(&v42);
  if ( v25 )
  {
LABEL_76:
    if ( v35 > 0x40 && v34 )
      operator delete[](v34);
LABEL_20:
    if ( v33 > 0x40 && v32 )
      operator delete[](v32);
    v17 = 0;
    goto LABEL_24;
  }
  sub_8E6310((__int64)&v42, v31);
  sub_A1DB00(&v42);
  sub_A1C0C0(&v42);
  sub_A1DB00(v31);
  if ( v35 > 0x40 && v34 )
    operator delete[](v34);
  if ( v33 > 0x40 && v32 )
    operator delete[](v32);
  v17 = 1;
LABEL_24:
  sub_A1C0C0(v40);
  sub_A1C0C0(v41);
  return v17;
}

