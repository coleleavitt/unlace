__int64 __fastcall sub_BF0840(_QWORD *a1, _DWORD **a2, double a3)
{
  _DWORD *v5; // rbp
  _DWORD *v6; // r12
  unsigned int v7; // r14d
  char v8; // al
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rdi
  unsigned int *v13; // rax
  unsigned int v14; // eax
  _DWORD *v15; // rsi
  __int64 v16; // rdi
  bool v17; // zf
  char v18; // al
  __int64 v19; // rax
  _DWORD *v20; // rsi
  unsigned int v21; // eax
  __int64 v22; // r15
  unsigned int v23; // r13d
  char v24; // al
  unsigned int v25; // ebx
  _DWORD *v26; // rsi
  __int64 v27; // rdi
  _DWORD *v28; // rsi
  __int64 v29; // rdi
  _DWORD *v30; // rsi
  __int64 v31; // rdi
  _DWORD *v32; // rsi
  __int64 v33; // rdi
  unsigned int v35; // r14d
  int v36; // eax
  int v37[2]; // [rsp+0h] [rbp-B8h]
  unsigned int v38; // [rsp+0h] [rbp-B8h]
  int v39[2]; // [rsp+8h] [rbp-B0h]
  int v40[2]; // [rsp+10h] [rbp-A8h]
  void *v41; // [rsp+18h] [rbp-A0h]
  int v42[2]; // [rsp+18h] [rbp-A0h]
  int v43; // [rsp+2Ch] [rbp-8Ch]
  _DWORD *v44; // [rsp+30h] [rbp-88h] BYREF
  __int64 v45; // [rsp+38h] [rbp-80h]
  _DWORD *v46; // [rsp+40h] [rbp-78h] BYREF
  __int64 v47; // [rsp+48h] [rbp-70h]
  _DWORD *v48; // [rsp+50h] [rbp-68h] BYREF
  __int64 v49; // [rsp+58h] [rbp-60h]
  _DWORD *v50; // [rsp+60h] [rbp-58h] BYREF
  __int64 v51; // [rsp+68h] [rbp-50h]
  _QWORD v52[9]; // [rsp+70h] [rbp-48h] BYREF

  *(_QWORD *)v39 = a1[3];
  sub_BB1EF0((__int64)&v50, (__int64)a1);
  v5 = v50;
  if ( v50 && !v50[2] )
    sub_15D7BC0(v51, v50);
  *(_QWORD *)v40 = a1[3];
  sub_BB1EF0((__int64)&v50, (__int64)a1);
  v6 = v50;
  if ( v50 && !v50[2] )
    sub_15D7BC0(v51, v50);
  v7 = sub_966380((__int64)a1, v5, v6);
  *(_QWORD *)v37 = a1[2];
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)v37 + 7488LL) + 48LL))(
    *(_QWORD *)(*(_QWORD *)v37 + 7488LL),
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v37 + 8840LL) + 8LL * (v7 >> 1)));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v37 + 7488LL) + 64LL))(*(_QWORD *)(*(_QWORD *)v37 + 7488LL));
  v8 = *(_BYTE *)(*(_QWORD *)(a1[2] + 8848LL) + v7);
  if ( v8 == -1 )
  {
    v25 = 1;
  }
  else
  {
    if ( !v8 )
      goto LABEL_31;
    v43 = sub_966380((__int64)a1, *a2, a2[2]);
    v50 = &dword_0 + 1;
    v51 = 0;
    v52[0] = 1;
    v52[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v52);
    v12 = a1[230];
    BYTE4(v52[0]) &= ~1u;
    LODWORD(v52[0]) = 1;
    if ( !v12 )
    {
      sub_16669E0(a1 + 229);
      v12 = a1[230];
    }
    sub_166A700(v12, (unsigned int)&v50, 1, v9, v10, v11);
    v41 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v50);
    sub_182CBA0(v41, v52);
    sub_BB1EF0((__int64)&v50, (__int64)a1);
    v13 = (unsigned int *)sub_15E1B70(a1[229]);
    v14 = sub_966440((__int64)a1, v13);
    v15 = v50;
    v38 = v14;
    if ( v50 )
    {
      v16 = v51;
      v17 = v50[2]-- == 1;
      if ( v17 )
        sub_15D7BC0(v16, v15);
    }
    *(_QWORD *)v42 = a1[2];
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)v42 + 7488LL) + 48LL))(
      *(_QWORD *)(*(_QWORD *)v42 + 7488LL),
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v42 + 8840LL) + 8LL * (v38 >> 1)));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v42 + 7488LL) + 64LL))(*(_QWORD *)(*(_QWORD *)v42 + 7488LL));
    v18 = *(_BYTE *)(*(_QWORD *)(a1[2] + 8848LL) + v38);
    if ( v18 == -1 )
    {
      sub_BBF3C0(a1, v43, v7 ^ 1, v38, 0xFFFFFFFE, 0xFFFFFFFE, a3);
      v25 = -1;
      goto LABEL_32;
    }
    if ( v18 )
    {
      v19 = a1[3];
      v20 = *a2;
      v44 = nullptr;
      v45 = v19;
      v46 = nullptr;
      v47 = v19;
      v48 = nullptr;
      v49 = v19;
      v50 = nullptr;
      v51 = v19;
      sub_BC0080(a1, v20, (__int64)&v44, (const double *)&v46, a3);
      sub_BC0080(a1, a2[2], (__int64)&v48, (const double *)&v50, a3);
      v21 = sub_966380((__int64)a1, v44, v48);
      v22 = a1[2];
      v23 = v21;
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v22 + 7488) + 48LL))(
        *(_QWORD *)(v22 + 7488),
        *(_QWORD *)(*(_QWORD *)(v22 + 8840) + 8LL * (v21 >> 1)));
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v22 + 7488) + 64LL))(*(_QWORD *)(v22 + 7488));
      v24 = *(_BYTE *)(*(_QWORD *)(a1[2] + 8848LL) + v23);
      if ( v24 == -1 )
      {
        v25 = 1;
      }
      else if ( v24 )
      {
        v35 = v7 ^ 1;
        sub_BBF3C0(a1, v43, v35, v38, 0xFFFFFFFE, 0xFFFFFFFE, a3);
        v36 = sub_966380((__int64)a1, v46, v50);
        sub_BBF3C0(a1, v43, v35, v23 ^ 1, v36 ^ 1, 0xFFFFFFFE, a3);
        v25 = -1;
      }
      else
      {
        v25 = 0;
      }
      v26 = v50;
      if ( v50 )
      {
        v27 = v51;
        v17 = v50[2]-- == 1;
        if ( v17 )
          sub_15D7BC0(v27, v26);
      }
      v28 = v48;
      if ( v48 )
      {
        v29 = v49;
        v17 = v48[2]-- == 1;
        if ( v17 )
          sub_15D7BC0(v29, v28);
      }
      v30 = v46;
      if ( v46 )
      {
        v31 = v47;
        v17 = v46[2]-- == 1;
        if ( v17 )
          sub_15D7BC0(v31, v30);
      }
      v32 = v44;
      if ( v44 )
      {
        v33 = v45;
        v17 = v44[2]-- == 1;
        if ( v17 )
          sub_15D7BC0(v33, v32);
      }
    }
    else
    {
LABEL_31:
      v25 = 0;
    }
  }
LABEL_32:
  if ( v6 )
  {
    v17 = v6[2]-- == 1;
    if ( v17 )
      sub_15D7BC0(*(_QWORD *)v40, v6);
  }
  if ( v5 )
  {
    v17 = v5[2]-- == 1;
    if ( v17 )
      sub_15D7BC0(*(_QWORD *)v39, v5);
  }
  return v25;
}

