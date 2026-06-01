__int64 __fastcall sub_CB2220(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  unsigned int v6; // ebp
  void *v7; // rbx
  _DWORD *v9; // rax
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rax
  void *v19; // r12
  __int64 v20; // rbx
  __int64 v21; // rsi
  __int64 v22; // rdi
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  unsigned int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rbp
  __int64 v32; // rax
  void *v33; // rbp
  __int64 v34; // rbx
  __int64 v35; // [rsp+8h] [rbp-A0h]
  __int64 v36; // [rsp+18h] [rbp-90h]
  __int64 v37; // [rsp+18h] [rbp-90h]
  __int64 v38; // [rsp+18h] [rbp-90h]
  char v39; // [rsp+2Fh] [rbp-79h] BYREF
  _QWORD v40[2]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v41[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v42; // [rsp+50h] [rbp-58h] BYREF
  __int64 v43; // [rsp+58h] [rbp-50h]
  __int64 v44; // [rsp+60h] [rbp-48h] BYREF
  __int64 v45; // [rsp+68h] [rbp-40h]

  v6 = sub_CB1F80(a1, a2, a3);
  if ( !(_BYTE)v6 )
  {
    v40[0] = 0;
    v40[1] = 0;
    v41[0] = 1;
    v41[1] = 0;
    v35 = a1 + 40;
    if ( (unsigned __int8)sub_1666AE0(a1 + 40, a2, v40, &v39) && v39 )
    {
      sub_1831620(qword_1C7F2C0, v40);
      v28 = sub_CB86D0((unsigned int)v40, (unsigned int)v40, v24, v25, v26, v27);
      v29 = sub_1674700(a1 + 16, v28);
      v30 = sub_16746C0(a1 + 16, v40, v29);
      v31 = v30;
      if ( v30 )
        ++*(_DWORD *)(v30 + 8);
      sub_CB1660(*a4, a4[1]);
      *a4 = v31;
      v42 = 0;
      v43 = 0;
      v44 = 1;
      v45 = 0;
      sub_182CBA0(qword_1C7F2C0, &v44);
      BYTE4(v44) &= ~1u;
      LODWORD(v44) = 1;
      v32 = sub_1674520(a1 + 16, &v42, 1);
      v33 = qword_1C7F2C0;
      v34 = v32;
      sub_182CBA0(qword_1C7F2C0, &v42);
      sub_182CBA0(v33, &v44);
      if ( v34 )
        ++*(_DWORD *)(v34 + 8);
      sub_CB1660(*a3, a3[1]);
      *a3 = v34;
      goto LABEL_31;
    }
    if ( *(_WORD *)(a2 + 4) )
      goto LABEL_5;
    v9 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !v9 || *v9 != 5 )
      goto LABEL_5;
    if ( v9[1] == 7 && *(_DWORD *)(a2 + 24) == 2 )
    {
      v37 = *(_QWORD *)(a2 + 40);
      if ( (unsigned __int8)sub_CB1F80(a1, *(_QWORD *)(a2 + 32), a3) && (unsigned __int8)sub_CB1F80(a1, v37, a4) )
      {
LABEL_31:
        v6 = 1;
LABEL_5:
        v7 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v40);
        sub_182CBA0(v7, v41);
        return v6;
      }
      if ( *(_WORD *)(a2 + 4) )
        goto LABEL_5;
      v9 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
      if ( !v9 || *v9 != 5 )
        goto LABEL_5;
    }
    if ( v9[1] == 6 && *(_DWORD *)(a2 + 24) == 2 )
    {
      v38 = *(_QWORD *)(a2 + 40);
      if ( (unsigned __int8)sub_1666AE0(v35, *(_QWORD *)(a2 + 32), v40, &v39)
        && v39
        && SLODWORD(v40[0]) < 0
        && (unsigned __int8)sub_CB1F80(a1, v38, a3) )
      {
LABEL_17:
        sub_1831620(qword_1C7F2C0, v40);
        v14 = sub_CB86D0((unsigned int)v40, (unsigned int)v40, v10, v11, v12, v13);
        v15 = sub_1674700(a1 + 16, v14);
        v16 = sub_16746C0(a1 + 16, v40, v15);
        v17 = v16;
        if ( v16 )
          ++*(_DWORD *)(v16 + 8);
        sub_CB1660(*a4, a4[1]);
        *a4 = v17;
        goto LABEL_31;
      }
      if ( *(_WORD *)(a2 + 4) )
        goto LABEL_5;
      v9 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
      if ( !v9 || *v9 != 5 )
        goto LABEL_5;
    }
    if ( v9[1] != 6 )
      goto LABEL_5;
    if ( *(_DWORD *)(a2 + 24) != 2 )
      goto LABEL_5;
    v36 = *(_QWORD *)(a2 + 32);
    if ( !(unsigned __int8)sub_1666AE0(v35, *(_QWORD *)(a2 + 40), v40, &v39)
      || !v39
      || SLODWORD(v40[0]) >= 0
      || !(unsigned __int8)sub_CB1F80(a1, v36, a3) )
    {
      goto LABEL_5;
    }
    goto LABEL_17;
  }
  v42 = 0;
  v43 = 0;
  v44 = 1;
  v45 = 0;
  sub_182CBA0(qword_1C7F2C0, &v44);
  BYTE4(v44) &= ~1u;
  LODWORD(v44) = 1;
  v18 = sub_1674520(a1 + 16, &v42, 1);
  v19 = qword_1C7F2C0;
  v20 = v18;
  sub_182CBA0(qword_1C7F2C0, &v42);
  sub_182CBA0(v19, &v44);
  if ( v20 )
    ++*(_DWORD *)(v20 + 8);
  v21 = *a4;
  if ( *a4 )
  {
    v22 = a4[1];
    if ( (*(_DWORD *)(v21 + 8))-- == 1 )
      sub_15D7BC0(v22, v21);
  }
  *a4 = v20;
  return v6;
}

