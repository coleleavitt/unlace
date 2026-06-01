__int64 __fastcall sub_CB3490(__int64 *a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // eax
  __int64 v4; // rax
  unsigned int v5; // ebx
  int v6; // r8d
  int v7; // r9d
  bool v8; // zf
  __int64 v9; // r12
  __int64 v10; // r13
  void *v11; // r14
  _DWORD *v13; // rax
  __int64 v14; // rax
  _DWORD *v15; // rdx
  __int64 v16; // rax
  _DWORD *v17; // rax
  void *v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // r12
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // r13
  __int64 v24; // r15
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // rax
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // r14
  __int64 v33; // rsi
  __int64 v34; // rdi
  bool v35; // dl
  _BOOL4 v36; // edx
  __int64 v37; // rbx
  __int64 v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // [rsp+8h] [rbp-F8h]
  __int64 v41; // [rsp+10h] [rbp-F0h]
  __int64 v42; // [rsp+18h] [rbp-E8h]
  __int64 v43; // [rsp+18h] [rbp-E8h]
  bool v44; // [rsp+18h] [rbp-E8h]
  __int64 v45; // [rsp+20h] [rbp-E0h]
  __int64 v46; // [rsp+28h] [rbp-D8h]
  char v48; // [rsp+43h] [rbp-BDh] BYREF
  int v49; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v50; // [rsp+48h] [rbp-B8h] BYREF
  int v51; // [rsp+4Ch] [rbp-B4h] BYREF
  int v52; // [rsp+50h] [rbp-B0h] BYREF
  int v53; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v54; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v55; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v56; // [rsp+68h] [rbp-98h] BYREF
  int v57[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v58; // [rsp+78h] [rbp-88h]
  int v59[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v60; // [rsp+88h] [rbp-78h]
  int v61[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v62; // [rsp+98h] [rbp-68h]
  _QWORD v63[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v64[2]; // [rsp+B0h] [rbp-50h] BYREF
  int v65; // [rsp+C0h] [rbp-40h] BYREF
  char v66; // [rsp+C4h] [rbp-3Ch]

  v3 = sub_CB1F80((__int64)a1, a2, a3);
  if ( !(_BYTE)v3 )
  {
    v4 = *a1;
    *(_QWORD *)v57 = 0;
    v58 = v4;
    *(_QWORD *)v59 = 0;
    v60 = v4;
    v5 = sub_CB2220((__int64)a1, a2, (__int64 *)v57, (__int64 *)v59);
    if ( (_BYTE)v5 )
    {
      sub_CB2B60((__int64)a1, (__int64 *)v57, (__int64 *)v59, 0);
      v23 = *(_QWORD *)v57;
      v24 = *(_QWORD *)v59;
      v46 = v60;
      v45 = v58;
      v27 = sub_CB29F0((__int64)a1, 1u, *(__int64 *)v57, 0, v25, v26);
      v9 = v27;
      if ( v27 )
        ++*(_DWORD *)(v27 + 8);
      if ( v23 )
      {
        v8 = (*(_DWORD *)(v23 + 8))-- == 1;
        if ( v8 )
          sub_15D7BC0(v45, v23);
      }
      v30 = sub_CB29F0((__int64)a1, 1u, v24, 0, v28, v29);
      v10 = v30;
      if ( v30 )
        ++*(_DWORD *)(v30 + 8);
      if ( v24 )
      {
        v8 = (*(_DWORD *)(v24 + 8))-- == 1;
        if ( v8 )
          sub_15D7BC0(v46, v24);
      }
      v31 = sub_15E1B70(a1[3]);
      v32 = v31;
      if ( v31 )
        ++*(_DWORD *)(v31 + 8);
      v33 = *a3;
      if ( *a3 )
      {
        v34 = a3[1];
        v8 = (*(_DWORD *)(v33 + 8))-- == 1;
        if ( v8 )
          sub_15D7BC0(v34, v33);
      }
      *a3 = v32;
      goto LABEL_5;
    }
    v8 = *(_WORD *)(a2 + 4) == 0;
    *(_QWORD *)v61 = 0;
    v62 = 0;
    v9 = *(_QWORD *)v57;
    v46 = v60;
    v63[0] = 1;
    v10 = *(_QWORD *)v59;
    v45 = v58;
    v63[1] = 0;
    if ( !v8 )
      goto LABEL_4;
    v13 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !v13 )
      goto LABEL_4;
    if ( *v13 )
      goto LABEL_4;
    if ( v13[1] != 4 )
      goto LABEL_4;
    v14 = *(_QWORD *)(a2 + 32);
    if ( *(_WORD *)(v14 + 4) )
      goto LABEL_4;
    v15 = *(_DWORD **)(*(_QWORD *)(v14 + 16) + 24LL);
    if ( !v15 )
      goto LABEL_4;
    if ( *v15 )
      goto LABEL_4;
    if ( v15[1] != 2 )
      goto LABEL_4;
    if ( *(_DWORD *)(v14 + 24) != 2 )
      goto LABEL_4;
    v42 = *(_QWORD *)(a2 + 40);
    v41 = *(_QWORD *)(a2 + 48);
    v40 = *(_QWORD *)(v14 + 40);
    if ( !(unsigned __int8)sub_1673B50(
                             (int)a1 + 16,
                             *(_QWORD *)(v14 + 32),
                             (unsigned int)v61,
                             (unsigned int)&v53,
                             v6,
                             v7)
      || (v61[1] & 1) != 0
      || v61[0] != 1
      || (v63[0] & 0x100000000LL) != 0
      || LODWORD(v63[0]) != 1
      || v53 != 1
      || !(unsigned __int8)sub_1674350(a1 + 2, v40, &v49, &v50, &v54)
      || v49 != v50 )
    {
      goto LABEL_4;
    }
    v16 = *(_QWORD *)(*(_QWORD *)(sub_15D1F10(v54) + 24) + 8LL);
    if ( *(_BYTE *)(v16 + 8) )
      sub_A8ADA((__int64)"std::get: wrong index for variant");
    if ( *(_DWORD *)v16 - 1 != v49
      || *(_WORD *)(v42 + 4)
      || (v17 = *(_DWORD **)(*(_QWORD *)(v42 + 16) + 24LL)) == nullptr
      || *v17 != 5
      || v17[1] != 7
      || *(_DWORD *)(v42 + 24) != 2
      || v41 != *(_QWORD *)(v42 + 32)
      || (v43 = *(_QWORD *)(v42 + 40), !(unsigned __int8)sub_1674410(a1 + 2, v41, &v55))
      || !(unsigned __int8)sub_1674350(a1 + 2, v55, &v51, &v52, &v56)
      || v51
      || v50 - 1 != v52
      || !(unsigned __int8)sub_1666AE0(a1 + 5, v43, v61, &v48)
      || !v48 )
    {
LABEL_4:
      v11 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v61);
      sub_182CBA0(v11, v63);
LABEL_5:
      if ( v10 )
      {
        v8 = (*(_DWORD *)(v10 + 8))-- == 1;
        if ( v8 )
          sub_15D7BC0(v46, v10);
      }
      if ( v9 )
      {
        v8 = (*(_DWORD *)(v9 + 8))-- == 1;
        if ( v8 )
          sub_15D7BC0(v45, v9);
      }
      return v5;
    }
    sub_17F6290(v64, v50);
    v18 = qword_1C7F2C0;
    if ( (v61[1] & 1) != 0 || (v64[0] & 0x100000000LL) != 0 )
    {
      v18 = qword_1C7F2C0;
      if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, v61, v64) )
        goto LABEL_45;
    }
    else if ( v61[0] != LODWORD(v64[0]) )
    {
LABEL_45:
      sub_25A130((char *)v64);
      goto LABEL_4;
    }
    if ( (v63[0] & 0x100000000LL) != 0 || (v66 & 1) != 0 )
      v35 = (unsigned int)sub_182C7B0(v18, v63, &v65) == 0;
    else
      v35 = LODWORD(v63[0]) == v65;
    v44 = v35;
    sub_25A130((char *)v64);
    v36 = v44;
    if ( v44 )
    {
      v37 = v56;
      if ( v56 )
        ++*(_DWORD *)(v56 + 8);
      v38 = *a3;
      if ( *a3 )
      {
        v39 = a3[1];
        v8 = (*(_DWORD *)(v38 + 8))-- == 1;
        if ( v8 )
        {
          sub_15D7BC0(v39, v38);
          v36 = v44;
        }
      }
      *a3 = v37;
      v5 = v36;
    }
    goto LABEL_4;
  }
  v5 = v3;
  v19 = a1[3];
  v64[0] = 1;
  v64[1] = 0;
  *(_QWORD *)v61 = *a3;
  v20 = sub_15DCAD0(v19, (int)v61, 0);
  sub_15D0DF0(v64);
  if ( v20 )
    ++*(_DWORD *)(v20 + 8);
  v21 = *a3;
  if ( *a3 )
  {
    v22 = a3[1];
    v8 = (*(_DWORD *)(v21 + 8))-- == 1;
    if ( v8 )
      sub_15D7BC0(v22, v21);
  }
  *a3 = v20;
  return v5;
}

