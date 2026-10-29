__int64 __fastcall sub_94DF60(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // rbp
  __int64 v8; // r12
  unsigned int v9; // eax
  void *v10; // rdx
  unsigned int v11; // eax
  void *v12; // rdx
  __int64 v13; // r14
  __int64 v14; // r13
  void *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned int v18; // eax
  void *v19; // rdx
  void *v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned int v23; // ebp
  void *v24; // r12
  unsigned int v25; // ebx
  __int64 v27; // [rsp+28h] [rbp-1B0h]
  __int64 v28; // [rsp+30h] [rbp-1A8h]
  unsigned int v29; // [rsp+48h] [rbp-190h]
  unsigned int v30; // [rsp+50h] [rbp-188h]
  void *v31; // [rsp+58h] [rbp-180h]
  void *v32; // [rsp+58h] [rbp-180h]
  void *v33; // [rsp+60h] [rbp-178h] BYREF
  unsigned int v34; // [rsp+68h] [rbp-170h]
  void *v35; // [rsp+70h] [rbp-168h]
  unsigned int v36; // [rsp+78h] [rbp-160h]
  void *v37; // [rsp+80h] [rbp-158h]
  unsigned int v38; // [rsp+88h] [rbp-150h]
  void *v39; // [rsp+90h] [rbp-148h] BYREF
  unsigned int v40; // [rsp+98h] [rbp-140h]
  void *v41; // [rsp+A0h] [rbp-138h] BYREF
  unsigned int v42; // [rsp+A8h] [rbp-130h]
  void *v43; // [rsp+B0h] [rbp-128h] BYREF
  unsigned int v44; // [rsp+B8h] [rbp-120h]
  void *v45; // [rsp+C0h] [rbp-118h] BYREF
  unsigned int v46; // [rsp+C8h] [rbp-110h]
  void *v47; // [rsp+D0h] [rbp-108h] BYREF
  unsigned int v48; // [rsp+D8h] [rbp-100h]
  _BYTE v49[64]; // [rsp+E0h] [rbp-F8h] BYREF
  _BYTE v50[64]; // [rsp+120h] [rbp-B8h] BYREF
  void *v51; // [rsp+160h] [rbp-78h] BYREF
  unsigned int v52; // [rsp+168h] [rbp-70h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 56);
  sub_A1C070(v49, v3);
  sub_A1A5E0(v2, 56);
  v4 = *(_QWORD *)(a1 + 184);
  v5 = sub_A1A5A0(v4, 56);
  sub_A1C070(v50, v5);
  sub_A1A5E0(v4, 56);
  v27 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  sub_8E6410((__int64)&v51, (__int64)v50);
  v6 = sub_8F8520((__int64 *)&v51);
  sub_A1C0C0(&v51);
  sub_8E6310((__int64)&v51, (__int64)v50);
  v28 = sub_8F8520((__int64 *)&v51);
  sub_A1C0C0(&v51);
  sub_8E6410((__int64)&v51, (__int64)v49);
  v7 = sub_8F8520((__int64 *)&v51);
  sub_A1C0C0(&v51);
  sub_8E6310((__int64)&v51, (__int64)v49);
  v8 = sub_8F8520((__int64 *)&v51);
  sub_A1C0C0(&v51);
  sub_922330((__int64)&v33, 0, *(_DWORD *)(v6 + 8));
  if ( !(unsigned __int8)sub_922400(v7, (__int64)&v33) && !(unsigned __int8)sub_922400(v8, (__int64)&v33) )
  {
    v51 = (void *)sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
    sub_A2E0C0(a1, &v51, 2306, 0);
LABEL_176:
    if ( v34 > 0x40 && v33 )
      operator delete[](v33);
    v25 = 0;
    goto LABEL_167;
  }
  v36 = 3;
  v38 = 3;
  v9 = *(_DWORD *)(v7 + 8);
  v35 = &byte_7;
  v37 = &byte_7;
  v44 = v9;
  if ( v9 > 0x40 )
    sub_2585B30(&v43);
  else
    v43 = *(void **)v7;
  v42 = *(_DWORD *)(v7 + 8);
  if ( v42 > 0x40 )
    sub_2585B30(&v41);
  else
    v41 = *(void **)v7;
  sub_258C0C0(&v51, &v41, &v43);
  if ( v36 > 0x40 && v35 )
    operator delete[](v35);
  v35 = v51;
  v36 = v52;
  v48 = *(_DWORD *)(v8 + 8);
  if ( v48 > 0x40 )
    sub_2585B30(&v47);
  else
    v47 = *(void **)v8;
  v46 = *(_DWORD *)(v8 + 8);
  if ( v46 > 0x40 )
    sub_2585B30(&v45);
  else
    v45 = *(void **)v8;
  sub_258C0C0(&v51, &v45, &v47);
  if ( v38 > 0x40 && v37 )
    operator delete[](v37);
  v37 = v51;
  v38 = v52;
  if ( v46 > 0x40 && v45 )
    operator delete[](v45);
  if ( v48 > 0x40 && v47 )
    operator delete[](v47);
  if ( v42 > 0x40 && v41 )
    operator delete[](v41);
  if ( v44 > 0x40 && v43 )
    operator delete[](v43);
  v40 = 3;
  v39 = &byte_7;
  v48 = v38;
  if ( v38 > 0x40 )
    sub_2585B30(&v47);
  else
    v47 = v37;
  v46 = v36;
  if ( v36 > 0x40 )
  {
    sub_2585B30(&v45);
    v52 = v46;
    if ( v46 > 0x40 )
    {
      sub_2585B30(&v51);
      goto LABEL_29;
    }
    v10 = v45;
  }
  else
  {
    v10 = v35;
    v52 = v36;
    v45 = v35;
  }
  v51 = v10;
LABEL_29:
  sub_2586200(&v51, &v47);
  v11 = v52;
  v12 = v51;
  if ( v40 > 0x40 && v39 )
  {
    v31 = v51;
    v30 = v52;
    operator delete[](v39);
    v12 = v31;
    v11 = v30;
  }
  v39 = v12;
  v40 = v11;
  if ( v46 > 0x40 && v45 )
    operator delete[](v45);
  if ( v48 > 0x40 && v47 )
    operator delete[](v47);
  if ( !(unsigned __int8)sub_922400((__int64)&v39, (__int64)&v33) )
  {
    v51 = (void *)sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
    sub_A2E0C0(a1, &v51, 2306, 0);
    if ( v40 > 0x40 && v39 )
      operator delete[](v39);
    if ( v38 > 0x40 && v37 )
      operator delete[](v37);
    if ( v36 > 0x40 && v35 )
      operator delete[](v35);
    goto LABEL_176;
  }
  sub_8E6410((__int64)&v51, v27);
  v13 = sub_8F8520((__int64 *)&v51);
  sub_A1C0C0(&v51);
  sub_8E6310((__int64)&v51, v27);
  v14 = sub_8F8520((__int64 *)&v51);
  sub_A1C0C0(&v51);
  v44 = *(_DWORD *)(v7 + 8);
  if ( v44 > 0x40 )
  {
    sub_2585B30(&v43);
    v42 = *(_DWORD *)(v6 + 8);
    if ( v42 <= 0x40 )
      goto LABEL_41;
LABEL_173:
    sub_2585B30(&v41);
    goto LABEL_42;
  }
  v43 = *(void **)v7;
  v42 = *(_DWORD *)(v6 + 8);
  if ( v42 > 0x40 )
    goto LABEL_173;
LABEL_41:
  v41 = *(void **)v6;
LABEL_42:
  sub_258C0C0(&v51, &v41, &v43);
  if ( v36 > 0x40 && v35 )
    operator delete[](v35);
  v35 = v51;
  v36 = v52;
  v48 = *(_DWORD *)(v8 + 8);
  if ( v48 > 0x40 )
    sub_2585B30(&v47);
  else
    v47 = *(void **)v8;
  v46 = *(_DWORD *)(v28 + 8);
  if ( v46 > 0x40 )
    sub_2585B30(&v45);
  else
    v45 = *(void **)v28;
  sub_258C0C0(&v51, &v45, &v47);
  if ( v38 > 0x40 && v37 )
    operator delete[](v37);
  v37 = v51;
  v38 = v52;
  if ( v46 > 0x40 && v45 )
    operator delete[](v45);
  if ( v48 > 0x40 && v47 )
    operator delete[](v47);
  if ( v42 > 0x40 && v41 )
    operator delete[](v41);
  if ( v44 > 0x40 && v43 )
    operator delete[](v43);
  v48 = v38;
  if ( v38 > 0x40 )
    sub_2585B30(&v47);
  else
    v47 = v37;
  v46 = v36;
  if ( v36 > 0x40 )
  {
    sub_2585B30(&v45);
    v52 = v46;
    if ( v46 > 0x40 )
    {
      sub_2585B30(&v51);
      goto LABEL_69;
    }
    v15 = v45;
  }
  else
  {
    v15 = v35;
    v52 = v36;
    v45 = v35;
  }
  v51 = v15;
LABEL_69:
  sub_2586200(&v51, &v47);
  v18 = v52;
  v19 = v51;
  if ( *(_DWORD *)(v13 + 8) > 0x40u && *(_QWORD *)v13 )
  {
    v32 = v51;
    v29 = v52;
    operator delete[](*(void **)v13);
    v19 = v32;
    v18 = v29;
  }
  *(_QWORD *)v13 = v19;
  *(_DWORD *)(v13 + 8) = v18;
  if ( v46 > 0x40 && v45 )
    operator delete[](v45);
  if ( v48 > 0x40 && v47 )
    operator delete[](v47);
  v46 = v40;
  if ( v40 > 0x40 )
    sub_2585B30(&v45);
  else
    v45 = v39;
  v44 = *(_DWORD *)(v13 + 8);
  if ( v44 > 0x40 )
    sub_2585B30(&v43);
  else
    v43 = *(void **)v13;
  sub_2588A50(&v51, &v43, &v45, v16, v17);
  v48 = v52;
  if ( v52 > 0x40 )
    sub_2585B30(&v47);
  else
    v47 = v51;
  if ( *(_DWORD *)(v13 + 8) > 0x40u && *(_QWORD *)v13 )
    operator delete[](*(void **)v13);
  *(_QWORD *)v13 = v47;
  *(_DWORD *)(v13 + 8) = v48;
  v48 = 0;
  if ( v52 > 0x40 && v51 )
    operator delete[](v51);
  if ( v44 > 0x40 && v43 )
    operator delete[](v43);
  if ( v46 > 0x40 && v45 )
    operator delete[](v45);
  sub_8E6410((__int64)&v51, v27);
  sub_A1DB00(&v51);
  sub_A1C0C0(&v51);
  v44 = *(_DWORD *)(v7 + 8);
  if ( v44 > 0x40 )
    sub_2585B30(&v43);
  else
    v43 = *(void **)v7;
  v42 = *(_DWORD *)(v28 + 8);
  if ( v42 > 0x40 )
    sub_2585B30(&v41);
  else
    v41 = *(void **)v28;
  sub_258C0C0(&v51, &v41, &v43);
  if ( v36 > 0x40 && v35 )
    operator delete[](v35);
  v35 = v51;
  v36 = v52;
  v48 = *(_DWORD *)(v8 + 8);
  if ( v48 > 0x40 )
    sub_2585B30(&v47);
  else
    v47 = *(void **)v8;
  v46 = *(_DWORD *)(v6 + 8);
  if ( v46 > 0x40 )
    sub_2585B30(&v45);
  else
    v45 = *(void **)v6;
  sub_258C0C0(&v51, &v45, &v47);
  if ( v38 > 0x40 && v37 )
    operator delete[](v37);
  v37 = v51;
  v38 = v52;
  if ( v46 > 0x40 && v45 )
    operator delete[](v45);
  if ( v48 > 0x40 && v47 )
    operator delete[](v47);
  if ( v42 > 0x40 && v41 )
    operator delete[](v41);
  if ( v44 > 0x40 && v43 )
    operator delete[](v43);
  v48 = v38;
  if ( v38 > 0x40 )
    sub_2585B30(&v47);
  else
    v47 = v37;
  v46 = v36;
  if ( v36 <= 0x40 )
  {
    v20 = v35;
    v52 = v36;
    v45 = v35;
LABEL_126:
    v51 = v20;
    goto LABEL_127;
  }
  sub_2585B30(&v45);
  v52 = v46;
  if ( v46 <= 0x40 )
  {
    v20 = v45;
    goto LABEL_126;
  }
  sub_2585B30(&v51);
LABEL_127:
  sub_25863C0(&v51, &v47);
  v23 = v52;
  v24 = v51;
  if ( *(_DWORD *)(v14 + 8) > 0x40u && *(_QWORD *)v14 )
    operator delete[](*(void **)v14);
  *(_QWORD *)v14 = v24;
  *(_DWORD *)(v14 + 8) = v23;
  if ( v46 > 0x40 && v45 )
    operator delete[](v45);
  if ( v48 > 0x40 && v47 )
    operator delete[](v47);
  v46 = v40;
  if ( v40 > 0x40 )
    sub_2585B30(&v45);
  else
    v45 = v39;
  v44 = *(_DWORD *)(v14 + 8);
  if ( v44 > 0x40 )
    sub_2585B30(&v43);
  else
    v43 = *(void **)v14;
  sub_2588A50(&v51, &v43, &v45, v21, v22);
  v48 = v52;
  if ( v52 > 0x40 )
    sub_2585B30(&v47);
  else
    v47 = v51;
  if ( *(_DWORD *)(v14 + 8) > 0x40u && *(_QWORD *)v14 )
    operator delete[](*(void **)v14);
  *(_QWORD *)v14 = v47;
  *(_DWORD *)(v14 + 8) = v48;
  v48 = 0;
  if ( v52 > 0x40 && v51 )
    operator delete[](v51);
  if ( v44 > 0x40 && v43 )
    operator delete[](v43);
  if ( v46 > 0x40 && v45 )
    operator delete[](v45);
  sub_8E6310((__int64)&v51, v27);
  sub_A1DB00(&v51);
  sub_A1C0C0(&v51);
  sub_A1DB00(v27);
  if ( v40 > 0x40 && v39 )
    operator delete[](v39);
  if ( v38 > 0x40 && v37 )
    operator delete[](v37);
  if ( v36 > 0x40 && v35 )
    operator delete[](v35);
  if ( v34 > 0x40 && v33 )
    operator delete[](v33);
  v25 = 1;
LABEL_167:
  sub_A1C0C0(v50);
  sub_A1C0C0(v49);
  return v25;
}

