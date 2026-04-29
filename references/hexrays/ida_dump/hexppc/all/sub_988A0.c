_BOOL8 __fastcall sub_988A0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, int a5, __int64 a6, int a7)
{
  _QWORD *v8; // r15
  _QWORD *v9; // rbx
  __int64 v11; // r14
  _DWORD *v12; // rax
  _DWORD *v13; // r10
  int v14; // eax
  _DWORD *v16; // r10
  _DWORD *v17; // r8
  int v18; // eax
  __int64 v19; // r13
  int v20; // r15d
  __int64 v21; // r12
  _DWORD *v22; // rax
  _DWORD *v23; // r10
  int v24; // eax
  _DWORD *v25; // rax
  _DWORD *v26; // r10
  int v27; // eax
  __int64 v28; // rax
  int v29; // r10d
  __int64 v30; // r12
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // r9
  __int64 v34; // rax
  _DWORD *v35; // r14
  _DWORD *v36; // rax
  _DWORD *v37; // r12
  __int64 v38; // rdx
  _DWORD *v39; // r8
  __int64 v40; // rax
  bool v41; // [rsp+3h] [rbp-95h]
  __int64 v43; // [rsp+8h] [rbp-90h]
  _DWORD *v44; // [rsp+10h] [rbp-88h]
  _DWORD *v45; // [rsp+10h] [rbp-88h]
  _DWORD *v46; // [rsp+10h] [rbp-88h]
  int v47; // [rsp+10h] [rbp-88h]
  int v48; // [rsp+10h] [rbp-88h]
  _DWORD *v49; // [rsp+10h] [rbp-88h]
  int v50; // [rsp+18h] [rbp-80h]
  _DWORD *v51; // [rsp+38h] [rbp-60h] BYREF
  __int64 v52; // [rsp+40h] [rbp-58h] BYREF
  __int64 v53; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v54[9]; // [rsp+50h] [rbp-48h] BYREF

  v54[1] = __readfsqword(0x28u);
  v41 = a6 == 0 && a7 == 1;
  if ( v41 )
  {
    if ( !under_debugger )
      sub_37EEE0(51671);
    BUG();
  }
  v8 = v54;
  v54[0] = a2;
  v9 = a2;
  v11 = a6;
  v12 = (_DWORD *)sub_125A00(a1, a3, v54, 0);
  v13 = v12;
  if ( !v12 )
    goto LABEL_5;
  v14 = *v12;
  if ( v14 != 11 )
  {
    if ( v14 == 14 )
    {
      v44 = v13;
      if ( (unsigned __int8)sub_12C7B0(a1, a2, a3, v54[0], v13 + 16) )
      {
        v16 = v44;
        v43 = v54[0];
        goto LABEL_11;
      }
    }
    goto LABEL_5;
  }
  if ( *((_BYTE *)v13 + 32) != 4 || (v16 = *((_DWORD **)v13 + 5), *v16 != 14) )
  {
LABEL_5:
    v43 = (__int64)a2;
    goto LABEL_6;
  }
  v43 = v54[0];
  if ( v16 )
    goto LABEL_11;
LABEL_6:
  if ( a5 != 1 )
    goto LABEL_7;
  v54[0] = v43;
  v25 = (_DWORD *)sub_125A00(a1, a4, v54, 0);
  v26 = v25;
  if ( !v25 )
    goto LABEL_7;
  v27 = *v25;
  if ( v27 != 11 )
  {
    if ( v27 == 14 )
    {
      v46 = v26;
      if ( (unsigned __int8)sub_12C7B0(a1, v43, a4, v54[0], v26 + 16) )
      {
        v16 = v46;
        a4 = a3;
        v43 = v54[0];
        goto LABEL_11;
      }
    }
LABEL_7:
    if ( a7 != 1 )
      return v41;
    v54[0] = v43;
    v22 = (_DWORD *)sub_125A00(a1, v11, v54, 0);
    v23 = v22;
    if ( !v22 )
      return v41;
    v24 = *v22;
    if ( v24 == 11 )
    {
      if ( *((_BYTE *)v23 + 32) != 4 )
        return v41;
      v16 = *((_DWORD **)v23 + 5);
      if ( *v16 != 14 )
        return v41;
      v43 = v54[0];
      if ( !v16 )
        return v41;
      v11 = a3;
    }
    else
    {
      if ( v24 != 14 )
        return v41;
      v45 = v23;
      if ( !(unsigned __int8)sub_12C7B0(a1, v43, v11, v54[0], v23 + 16) )
        return v41;
      v16 = v45;
      v11 = a3;
      v43 = v54[0];
    }
    goto LABEL_11;
  }
  if ( *((_BYTE *)v26 + 32) != 4 )
    goto LABEL_7;
  v16 = *((_DWORD **)v26 + 5);
  if ( *v16 != 14 )
    goto LABEL_7;
  v43 = v54[0];
  if ( !v16 )
    goto LABEL_7;
  a4 = a3;
LABEL_11:
  if ( *(_BYTE *)a4 != 4 || (v17 = *(_DWORD **)(a4 + 8), *v17 != 14) )
  {
    if ( !v11 )
      return v41;
    if ( *(_BYTE *)v11 != 4 )
      return v41;
    v17 = *(_DWORD **)(v11 + 8);
    if ( *v17 != 14 )
      return v41;
    v18 = a5;
    v11 = a4;
    a5 = a7;
    a7 = v18;
  }
  v53 = 0;
  if ( a5 != 1 )
  {
    if ( a5 == -1 )
    {
      v19 = sub_12EEA0(a1, v43, (_DWORD)v16, (_DWORD)a2, (_DWORD)v17, (unsigned int)&v51, (__int64)&v52, 5);
      if ( !v19 )
        return v41;
      if ( !v11 )
      {
        v32 = v53;
        v30 = v52;
        v33 = (__int64)a2;
        LODWORD(v11) = 1;
        v31 = (__int64)v51;
        return (bool)sub_98180(a1, v9, v43, v31, v30, v33, v19, v32, v11);
      }
      v20 = 1;
      v21 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
      goto LABEL_43;
    }
LABEL_38:
    v47 = (int)v16;
    v28 = sub_12EEA0(a1, v43, (_DWORD)v16, (_DWORD)v9, (_DWORD)v17, (unsigned int)&v51, (__int64)&v52, 1);
    v29 = v47;
    v19 = v28;
    if ( !v28 )
      return v41;
    if ( !v11 )
    {
      v32 = v53;
      v30 = v52;
      v33 = (__int64)v9;
      v31 = (__int64)v51;
      return (bool)sub_98180(a1, v9, v43, v31, v30, v33, v19, v32, v11);
    }
LABEL_40:
    v21 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
    if ( a5 == 1 && a7 == 1 )
    {
      if ( *(_BYTE *)v11 == 4 )
      {
        v39 = *(_DWORD **)(v11 + 8);
        if ( *v39 == 14 )
        {
          v40 = sub_12EEA0(a1, v43, v29, (_DWORD)v9, (_DWORD)v39, (_DWORD)v8, (__int64)&v53, 1);
          if ( v40 )
          {
            if ( (unsigned __int8)sub_12B040(v21, a1, (_DWORD)v9, v40, v43, (_DWORD)v51, 1)
              && (unsigned __int8)sub_12B040(v21, a1, v43, v54[0], (_DWORD)v9, v19, 1) )
            {
              v32 = v53;
              v30 = v52;
              v33 = (__int64)v9;
              LODWORD(v11) = 0;
              v31 = (__int64)v51;
              return (bool)sub_98180(a1, v9, v43, v31, v30, v33, v19, v32, v11);
            }
          }
        }
      }
      return v41;
    }
    v20 = 0;
LABEL_43:
    if ( a7 == -1 && (unsigned __int8)sub_12B040(v21, a1, (_DWORD)v9, v11, v43, (_DWORD)v51, 1) )
    {
      v30 = v52;
      v31 = (__int64)v51;
      v32 = 0;
      v53 = 0;
      LODWORD(v11) = v20 | 2;
      v33 = (__int64)v9;
      return (bool)sub_98180(a1, v9, v43, v31, v30, v33, v19, v32, v11);
    }
    return v41;
  }
  if ( v11 )
  {
    v48 = (int)v16;
    v34 = sub_12EEA0(a1, v43, (_DWORD)v16, (_DWORD)a2, (_DWORD)v17, (unsigned int)&v51, (__int64)&v52, 1);
    v29 = v48;
    v19 = v34;
    if ( !v34 )
      return v41;
    goto LABEL_40;
  }
  v35 = v17;
  v49 = v17 + 8;
  v19 = (__int64)(v16 + 12);
  v51 = v16 + 8;
  v36 = v16 + 8;
  v37 = v16 + 8;
  v50 = (int)v16;
  while ( 1 )
  {
    v38 = (__int64)v36;
    if ( *(_BYTE *)v36 == 4 && **((_DWORD **)v36 + 1) == 9 )
      break;
LABEL_55:
    v51 = (_DWORD *)v19;
    v36 = (_DWORD *)v19;
    if ( v37 == (_DWORD *)v19 )
    {
      LODWORD(v17) = (_DWORD)v35;
      LODWORD(v16) = v50;
      v11 = 0;
      LODWORD(v8) = (unsigned int)v54;
      v9 = a2;
      goto LABEL_38;
    }
    v19 = v38;
  }
  v52 = 0;
  if ( (unsigned __int8)sub_12E780(a1, a2, v49, v43, v19) )
  {
    v30 = (__int64)(v35 + 12);
    v9 = a2;
    goto LABEL_61;
  }
  if ( !(unsigned __int8)sub_12E780(a1, a2, v35 + 12, v43, v19) )
  {
    v38 = (__int64)v51;
    goto LABEL_55;
  }
  v30 = (__int64)v49;
  v9 = a2;
LABEL_61:
  v52 = v30;
  v32 = v53;
  LODWORD(v11) = 4;
  v33 = v43;
  v31 = (__int64)v51;
  return (bool)sub_98180(a1, v9, v43, v31, v30, v33, v19, v32, v11);
}
