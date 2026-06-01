__int64 __fastcall sub_8F8570(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // r15
  void *v9; // rdx
  unsigned int v10; // eax
  void *v11; // rdx
  __int64 v12; // r12
  void *v13; // rdx
  unsigned int v14; // ebp
  void *v15; // r13
  __int64 v17; // [rsp+10h] [rbp-178h]
  __int64 v18; // [rsp+18h] [rbp-170h]
  unsigned int v19; // [rsp+30h] [rbp-158h]
  void *v20; // [rsp+38h] [rbp-150h]
  void *v21; // [rsp+40h] [rbp-148h]
  void *v22; // [rsp+40h] [rbp-148h]
  unsigned int v23; // [rsp+48h] [rbp-140h]
  unsigned int v24; // [rsp+48h] [rbp-140h]
  void *v25; // [rsp+50h] [rbp-138h]
  void *v26; // [rsp+50h] [rbp-138h]
  unsigned int v27; // [rsp+58h] [rbp-130h]
  unsigned int v28; // [rsp+58h] [rbp-130h]
  void *v29; // [rsp+60h] [rbp-128h] BYREF
  unsigned int v30; // [rsp+68h] [rbp-120h]
  void *v31; // [rsp+70h] [rbp-118h] BYREF
  unsigned int v32; // [rsp+78h] [rbp-110h]
  void *v33; // [rsp+80h] [rbp-108h] BYREF
  unsigned int v34; // [rsp+88h] [rbp-100h]
  _BYTE v35[64]; // [rsp+90h] [rbp-F8h] BYREF
  _BYTE v36[64]; // [rsp+D0h] [rbp-B8h] BYREF
  void *v37; // [rsp+110h] [rbp-78h] BYREF
  unsigned int v38; // [rsp+118h] [rbp-70h]

  v1 = *(_QWORD *)(a1 + 184);
  v2 = sub_A1A5A0(v1, 56);
  sub_A1C070(v36, v2);
  sub_A1A5E0(v1, 56);
  v3 = *(_QWORD *)(a1 + 184);
  v4 = sub_A1A5A0(v3, 56);
  sub_A1C070(v35, v4);
  sub_A1A5E0(v3, 56);
  v17 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  sub_8E6410((__int64)&v37, (__int64)v35);
  v5 = sub_8F8520((__int64 *)&v37);
  sub_A1C0C0(&v37);
  sub_8E6310((__int64)&v37, (__int64)v35);
  v6 = sub_8F8520((__int64 *)&v37);
  sub_A1C0C0(&v37);
  sub_8E6410((__int64)&v37, (__int64)v36);
  v7 = sub_8F8520((__int64 *)&v37);
  sub_A1C0C0(&v37);
  sub_8E6310((__int64)&v37, (__int64)v36);
  v8 = sub_8F8520((__int64 *)&v37);
  sub_A1C0C0(&v37);
  v34 = *(_DWORD *)(v7 + 8);
  if ( v34 > 0x40 )
    sub_2585B30(&v33);
  else
    v33 = *(void **)v7;
  v32 = *(_DWORD *)(v5 + 8);
  if ( v32 > 0x40 )
    sub_2585B30(&v31);
  else
    v31 = *(void **)v5;
  sub_258C0C0(&v37, &v31, &v33);
  v21 = v37;
  v23 = v38;
  if ( v32 > 0x40 && v31 )
    operator delete[](v31);
  if ( v34 > 0x40 && v33 )
    operator delete[](v33);
  v34 = *(_DWORD *)(v8 + 8);
  if ( v34 > 0x40 )
    sub_2585B30(&v33);
  else
    v33 = *(void **)v8;
  v32 = *(_DWORD *)(v6 + 8);
  if ( v32 > 0x40 )
    sub_2585B30(&v31);
  else
    v31 = *(void **)v6;
  sub_258C0C0(&v37, &v31, &v33);
  v25 = v37;
  v27 = v38;
  if ( v32 > 0x40 && v31 )
    operator delete[](v31);
  if ( v34 > 0x40 && v33 )
    operator delete[](v33);
  sub_8E6410((__int64)&v37, v17);
  v18 = sub_8F8520((__int64 *)&v37);
  v32 = v27;
  if ( v27 > 0x40 )
    sub_2585B30(&v31);
  else
    v31 = v25;
  v30 = v23;
  if ( v23 > 0x40 )
  {
    sub_2585B30(&v29);
    v34 = v30;
    if ( v30 > 0x40 )
    {
      sub_2585B30(&v33);
      goto LABEL_26;
    }
    v9 = v29;
  }
  else
  {
    v9 = v21;
    v34 = v23;
    v29 = v21;
  }
  v33 = v9;
LABEL_26:
  sub_25863C0(&v33, &v31);
  v10 = v34;
  v11 = v33;
  if ( *(_DWORD *)(v18 + 8) > 0x40u && *(_QWORD *)v18 )
  {
    v20 = v33;
    v19 = v34;
    operator delete[](*(void **)v18);
    v11 = v20;
    v10 = v19;
  }
  *(_QWORD *)v18 = v11;
  *(_DWORD *)(v18 + 8) = v10;
  if ( v30 > 0x40 && v29 )
    operator delete[](v29);
  if ( v32 > 0x40 && v31 )
    operator delete[](v31);
  sub_A1C0C0(&v37);
  sub_8E6410((__int64)&v37, v17);
  sub_A1DB00(&v37);
  sub_A1C0C0(&v37);
  v34 = *(_DWORD *)(v8 + 8);
  if ( v34 > 0x40 )
    sub_2585B30(&v33);
  else
    v33 = *(void **)v8;
  v32 = *(_DWORD *)(v5 + 8);
  if ( v32 > 0x40 )
    sub_2585B30(&v31);
  else
    v31 = *(void **)v5;
  sub_258C0C0(&v37, &v31, &v33);
  if ( v23 > 0x40 && v21 )
    operator delete[](v21);
  v22 = v37;
  v24 = v38;
  if ( v32 > 0x40 && v31 )
    operator delete[](v31);
  if ( v34 > 0x40 && v33 )
    operator delete[](v33);
  v34 = *(_DWORD *)(v7 + 8);
  if ( v34 > 0x40 )
    sub_2585B30(&v33);
  else
    v33 = *(void **)v7;
  v32 = *(_DWORD *)(v6 + 8);
  if ( v32 > 0x40 )
    sub_2585B30(&v31);
  else
    v31 = *(void **)v6;
  sub_258C0C0(&v37, &v31, &v33);
  if ( v27 > 0x40 && v25 )
    operator delete[](v25);
  v26 = v37;
  v28 = v38;
  if ( v32 > 0x40 && v31 )
    operator delete[](v31);
  if ( v34 > 0x40 && v33 )
    operator delete[](v33);
  sub_8E6310((__int64)&v37, v17);
  v12 = sub_8F8520((__int64 *)&v37);
  v32 = v28;
  if ( v28 > 0x40 )
    sub_2585B30(&v31);
  else
    v31 = v26;
  v30 = v24;
  if ( v24 > 0x40 )
  {
    sub_2585B30(&v29);
    v34 = v30;
    if ( v30 > 0x40 )
    {
      sub_2585B30(&v33);
      goto LABEL_66;
    }
    v13 = v29;
  }
  else
  {
    v13 = v22;
    v34 = v24;
    v29 = v22;
  }
  v33 = v13;
LABEL_66:
  sub_2586200(&v33, &v31);
  v14 = v34;
  v15 = v33;
  if ( *(_DWORD *)(v12 + 8) > 0x40u && *(_QWORD *)v12 )
    operator delete[](*(void **)v12);
  *(_QWORD *)v12 = v15;
  *(_DWORD *)(v12 + 8) = v14;
  if ( v30 > 0x40 && v29 )
    operator delete[](v29);
  if ( v32 > 0x40 && v31 )
    operator delete[](v31);
  sub_A1C0C0(&v37);
  sub_8E6310((__int64)&v37, v17);
  sub_A1DB00(&v37);
  sub_A1C0C0(&v37);
  sub_A1DB00(v17);
  if ( v28 > 0x40 && v26 )
    operator delete[](v26);
  if ( v24 > 0x40 && v22 )
    operator delete[](v22);
  sub_A1C0C0(v35);
  return sub_A1C0C0(v36);
}

