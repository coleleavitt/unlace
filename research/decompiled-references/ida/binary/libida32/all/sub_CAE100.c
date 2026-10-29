__int64 __fastcall sub_CAE100(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // r12
  _WORD *v4; // r15
  _WORD *v5; // rax
  int v6; // eax
  int v7; // eax
  unsigned int v8; // r15d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  char v14; // al
  char v15; // bp
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  char v24; // al
  char v25; // r12
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  bool v34; // zf
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rax
  char v40; // [rsp+Fh] [rbp-79h]
  int v41; // [rsp+10h] [rbp-78h] BYREF
  int v42; // [rsp+14h] [rbp-74h] BYREF
  __int64 v43; // [rsp+18h] [rbp-70h] BYREF
  void *v44; // [rsp+20h] [rbp-68h] BYREF
  __int64 v45; // [rsp+28h] [rbp-60h]
  __int64 v46; // [rsp+30h] [rbp-58h]
  __int64 v47; // [rsp+38h] [rbp-50h]
  int v48; // [rsp+40h] [rbp-48h]
  unsigned int v49; // [rsp+44h] [rbp-44h]
  char v50; // [rsp+48h] [rbp-40h]

  v2 = *(_QWORD *)(a2 + 32);
  v3 = *(_QWORD *)(a2 + 40);
  if ( (*(_WORD *)a2 & 0x1FF) == 0x80 )
  {
    v4 = *(_WORD **)(a2 + 24);
  }
  else
  {
    v4 = *(_WORD **)(a2 + 32);
    v2 = *(_QWORD *)(a2 + 40);
    v3 = *(_QWORD *)(a2 + 48);
  }
  if ( v4 && (*v4 & 0x1FF) == 0x3D && ((*(_QWORD *)v4 >> 16) & 0x1E0) != 0 && ((v4[1] >> 5) & 0xF) == 2 )
  {
    sub_BD3D10((__int64)&v44, (__int64)v4);
    if ( (unsigned int)v45 > 0x40 && v44 )
      operator delete[](v44);
    v39 = *(_QWORD *)(a1 + 552);
    v45 = a1;
    *(_QWORD *)(a1 + 552) = &v44;
    v46 = v39;
    v47 = 0;
    v48 = 1;
    v44 = &off_2B21618;
    v50 = 0;
    v8 = sub_CA89D0(a1, v2, v36, v37, v38);
    if ( (_BYTE)v8 && v50 )
    {
      v43 = 4;
      v8 = sub_C97CD0((__int64)&v44, 0);
      sub_C807C0(v45, v49, &v43);
    }
    goto LABEL_33;
  }
  v5 = (_WORD *)sub_BD9810((unsigned __int64)v4);
  if ( ((*v5 + 423) & 0x1FFu) <= 4 )
  {
    v34 = (unsigned int)sub_BD8130((__int64)v5) == 214;
    v6 = *(_DWORD *)(a1 + 384);
    v41 = v6 + 1;
    if ( v34 )
    {
      v35 = v6 + 2;
      *(_DWORD *)(a1 + 384) = v35;
      v42 = v35;
      v44 = (void *)(a2 | 4);
      v40 = sub_C7F8B0(a1, (__int64 *)&v44);
      if ( !v40 )
        return 0;
      goto LABEL_10;
    }
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 384);
    v41 = v6 + 1;
  }
  v7 = v6 + 2;
  v40 = 0;
  *(_DWORD *)(a1 + 384) = v7;
  v42 = v7;
LABEL_10:
  if ( !(unsigned __int8)sub_C8E450((_QWORD *)a1, (__int64)v4) || !(unsigned __int8)sub_C891B0(a1, &v42) )
    return 0;
  v45 = a1;
  v13 = *(_QWORD *)(a1 + 552);
  *(_QWORD *)(a1 + 552) = &v44;
  v47 = 0;
  v46 = v13;
  v48 = 1;
  v50 = 0;
  v44 = &off_2B21618;
  v8 = sub_CA89D0(a1, v2, v10, v11, v12);
  if ( !(_BYTE)v8 )
    goto LABEL_33;
  if ( v50 )
  {
    v14 = sub_C97CD0((__int64)&v44, 0);
    v43 = 4;
    v15 = v14;
    sub_C807C0(v45, v49, &v43);
    sub_C974D0((__int64)&v44);
    if ( !v15 )
      return 0;
  }
  else
  {
    sub_C974D0((__int64)&v44);
  }
  if ( !(unsigned __int8)sub_C890A0(a1, &v41) )
    return 0;
  sub_C8A330(a1, v42, v16, v17, v18, v19);
  v45 = a1;
  v20 = *(_QWORD *)(a1 + 552);
  *(_QWORD *)(a1 + 552) = &v44;
  v47 = 0;
  v46 = v20;
  v48 = 1;
  v50 = 0;
  v44 = &off_2B21618;
  v8 = sub_CA89D0(a1, v3, v21, v22, v23);
  if ( !(_BYTE)v8 )
  {
LABEL_33:
    sub_C974D0((__int64)&v44);
    return v8;
  }
  if ( v50 )
  {
    v24 = sub_C97CD0((__int64)&v44, 0);
    v43 = 4;
    v25 = v24;
    sub_C807C0(v45, v49, &v43);
    sub_C974D0((__int64)&v44);
    if ( v25 )
      goto LABEL_21;
    return 0;
  }
  sub_C974D0((__int64)&v44);
LABEL_21:
  sub_C8A710(a1, &v41, v26, v27, v28, v29);
  sub_C8A330(a1, v41, v30, v31, v32, v33);
  if ( v40 )
  {
    v44 = (void *)(a2 | 4);
    return (unsigned int)sub_C88120(a1, (__int64 *)&v44);
  }
  return v8;
}

