__int64 __fastcall sub_CD1E40(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r12
  _WORD *v4; // r15
  _WORD *v5; // rax
  int v6; // eax
  int v7; // eax
  unsigned int v8; // r15d
  __int64 v10; // rax
  char v11; // al
  char v12; // bp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  char v18; // al
  char v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  bool v28; // zf
  int v29; // eax
  __int64 v30; // rax
  char v31; // [rsp+Fh] [rbp-79h]
  int v32; // [rsp+10h] [rbp-78h] BYREF
  int v33; // [rsp+14h] [rbp-74h] BYREF
  __int64 v34; // [rsp+18h] [rbp-70h] BYREF
  void *v35; // [rsp+20h] [rbp-68h] BYREF
  __int64 v36; // [rsp+28h] [rbp-60h]
  __int64 v37; // [rsp+30h] [rbp-58h]
  __int64 v38; // [rsp+38h] [rbp-50h]
  int v39; // [rsp+40h] [rbp-48h]
  unsigned int v40; // [rsp+44h] [rbp-44h]
  char v41; // [rsp+48h] [rbp-40h]

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
    sub_BF7A50((__int64)&v35, (__int64)v4);
    if ( (unsigned int)v36 > 0x40 && v35 )
      operator delete[](v35);
    v30 = *(_QWORD *)(a1 + 552);
    v36 = a1;
    *(_QWORD *)(a1 + 552) = &v35;
    v37 = v30;
    v38 = 0;
    v39 = 1;
    v35 = &off_2B4B5B8;
    v41 = 0;
    v8 = sub_CCC710(a1, v2);
    if ( (_BYTE)v8 && v41 )
    {
      v34 = 4;
      v8 = sub_CBBA10((__int64)&v35, 0);
      sub_CA4500(v36, v40, &v34);
    }
    goto LABEL_33;
  }
  v5 = (_WORD *)sub_BFD550((unsigned __int64)v4);
  if ( ((*v5 + 423) & 0x1FFu) <= 4 )
  {
    v28 = (unsigned int)sub_BFBE70((__int64)v5) == 214;
    v6 = *(_DWORD *)(a1 + 384);
    v32 = v6 + 1;
    if ( v28 )
    {
      v29 = v6 + 2;
      *(_DWORD *)(a1 + 384) = v29;
      v33 = v29;
      v35 = (void *)(a2 | 4);
      v31 = sub_CA35F0(a1, (__int64 *)&v35);
      if ( !v31 )
        return 0;
      goto LABEL_10;
    }
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 384);
    v32 = v6 + 1;
  }
  v7 = v6 + 2;
  v31 = 0;
  *(_DWORD *)(a1 + 384) = v7;
  v33 = v7;
LABEL_10:
  if ( !(unsigned __int8)sub_CB2190((_QWORD *)a1, (__int64)v4) || !(unsigned __int8)sub_CACEF0(a1, &v33) )
    return 0;
  v36 = a1;
  v10 = *(_QWORD *)(a1 + 552);
  *(_QWORD *)(a1 + 552) = &v35;
  v38 = 0;
  v37 = v10;
  v39 = 1;
  v41 = 0;
  v35 = &off_2B4B5B8;
  v8 = sub_CCC710(a1, v2);
  if ( !(_BYTE)v8 )
    goto LABEL_33;
  if ( v41 )
  {
    v11 = sub_CBBA10((__int64)&v35, 0);
    v34 = 4;
    v12 = v11;
    sub_CA4500(v36, v40, &v34);
    sub_CBB210((__int64)&v35);
    if ( !v12 )
      return 0;
  }
  else
  {
    sub_CBB210((__int64)&v35);
  }
  if ( !(unsigned __int8)sub_CACDE0(a1, &v32) )
    return 0;
  sub_CAE070(a1, v33, v13, v14, v15, v16);
  v36 = a1;
  v17 = *(_QWORD *)(a1 + 552);
  *(_QWORD *)(a1 + 552) = &v35;
  v38 = 0;
  v37 = v17;
  v39 = 1;
  v41 = 0;
  v35 = &off_2B4B5B8;
  v8 = sub_CCC710(a1, v3);
  if ( !(_BYTE)v8 )
  {
LABEL_33:
    sub_CBB210((__int64)&v35);
    return v8;
  }
  if ( v41 )
  {
    v18 = sub_CBBA10((__int64)&v35, 0);
    v34 = 4;
    v19 = v18;
    sub_CA4500(v36, v40, &v34);
    sub_CBB210((__int64)&v35);
    if ( v19 )
      goto LABEL_21;
    return 0;
  }
  sub_CBB210((__int64)&v35);
LABEL_21:
  sub_CAE450(a1, &v32, v20, v21, v22, v23);
  sub_CAE070(a1, v32, v24, v25, v26, v27);
  if ( v31 )
  {
    v35 = (void *)(a2 | 4);
    return (unsigned int)sub_CABE60(a1, (__int64 *)&v35);
  }
  return v8;
}
