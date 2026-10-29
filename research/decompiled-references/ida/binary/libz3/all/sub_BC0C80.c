__int64 __fastcall sub_BC0C80(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // r12
  void *v8; // rbp
  __int64 v9; // r14
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  bool v13; // zf
  _DWORD *v14; // rax
  unsigned int v15; // ebp
  void *v16; // rbp
  void *v17; // rbx
  _DWORD *v19; // rax
  __int64 v20; // rax
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned int *v27; // rax
  int v28; // eax
  int *v29; // [rsp+0h] [rbp-108h]
  int v30[2]; // [rsp+8h] [rbp-100h]
  int v31[2]; // [rsp+10h] [rbp-F8h]
  __int64 v32; // [rsp+10h] [rbp-F8h]
  __int64 v33; // [rsp+18h] [rbp-F0h]
  __int64 v34; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v35; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD *v36; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v37; // [rsp+38h] [rbp-D0h] BYREF
  int v38[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v39; // [rsp+48h] [rbp-C0h]
  _QWORD v40[2]; // [rsp+50h] [rbp-B8h] BYREF
  int v41[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v42; // [rsp+68h] [rbp-A0h]
  __int64 v43; // [rsp+70h] [rbp-98h] BYREF
  __int64 v44; // [rsp+78h] [rbp-90h]
  void *v45; // [rsp+80h] [rbp-88h] BYREF
  __int64 v46; // [rsp+88h] [rbp-80h]
  _BYTE v47[120]; // [rsp+90h] [rbp-78h] BYREF

  v5 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v38 = 0;
  v39 = 0;
  v40[0] = 1;
  v40[1] = 0;
  *(_QWORD *)v30 = v5;
  v34 = 0;
  v35 = 0;
  v6 = (_QWORD *)sub_186B270(0x18u);
  v6[1] = a2;
  v7 = v6 + 1;
  *v6 = 0x100000002LL;
  v8 = qword_1C7F2C0;
  sub_182CEF0(qword_1C7F2C0, a3);
  sub_182CBA0(v8, a3 + 16);
  *(_BYTE *)(a3 + 20) &= ~1u;
  v9 = 0;
  *(_DWORD *)(a3 + 16) = 1;
  v46 = 0x1000000000LL;
  v45 = v47;
  v29 = v38;
LABEL_2:
  while ( 2 )
  {
    v10 = *((_DWORD *)v7 - 1);
    if ( !v10 )
    {
LABEL_13:
      v15 = (*(_BYTE *)(a3 + 20) & 1) == 0;
      if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
        goto LABEL_23;
      goto LABEL_14;
    }
    while ( 1 )
    {
      v11 = (unsigned int)(v10 - 1);
      v12 = v7[v11];
      *((_DWORD *)v7 - 1) = v11;
      v13 = *(_WORD *)(v12 + 4) == 0;
      v37 = v12;
      if ( v13 )
      {
        v19 = *(_DWORD **)(*(_QWORD *)(v12 + 16) + 24LL);
        if ( v19 )
        {
          if ( *(_DWORD *)(a1 + 1744) == *v19 )
          {
            if ( v19[1] == 2 && *(_DWORD *)(v12 + 24) == 2 )
            {
              v24 = *(_QWORD *)(v12 + 32);
              v36 = v7;
              v34 = v24;
              v35 = *(_QWORD *)(v12 + 40);
              sub_BB70A0(&v36, &v34);
              sub_BB70A0(&v36, &v35);
              goto LABEL_35;
            }
            if ( !v19[1] )
            {
              *(_QWORD *)v41 = 1;
              v42 = 0;
              v43 = 1;
              v44 = 0;
              sub_182CBA0(qword_1C7F2C0, &v43);
              BYTE4(v43) &= ~1u;
              LODWORD(v43) = 1;
              sub_2FC4A0((__int64)qword_1C7F2C0, a3, (__int64)v41, a3);
              goto LABEL_12;
            }
          }
        }
      }
      *(_QWORD *)v31 = v12;
      if ( (unsigned __int8)sub_BCED40(a1 + 1728, v12) )
        goto LABEL_2;
      if ( !*(_WORD *)(*(_QWORD *)v31 + 4LL) )
      {
        v14 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)v31 + 16LL) + 24LL);
        if ( v14 )
        {
          if ( *(_DWORD *)(a1 + 1744) == *v14 )
            break;
        }
      }
LABEL_8:
      v15 = sub_163BAA0(a1 + 1728, *(_QWORD *)v31, &v45);
      if ( !(_BYTE)v15 )
      {
        v33 = *(_QWORD *)v31;
        sub_1579480(v41, a1 + 1224);
        v20 = *(_QWORD *)v41;
        *(_QWORD *)v41 = v9;
        v32 = v20;
        sub_BB0560(v9, v42);
        if ( sub_BB04C0(*(_QWORD **)(a1 + 1096), *(_DWORD *)(a1 + 1104), v33) )
        {
          if ( (unsigned __int8)sub_BE53E0(
                                  (int)a1 + 3856,
                                  v32,
                                  (_DWORD)v29,
                                  v21,
                                  v22,
                                  v23,
                                  (_DWORD)v29,
                                  v30[0],
                                  v32,
                                  v33)
            && v38[0] >= 0 )
          {
            sub_2FC4A0((__int64)qword_1C7F2C0, a3, (__int64)v29, a3);
            v9 = v32;
            goto LABEL_2;
          }
        }
        else
        {
          sub_993400(a1 + 1832, 0);
          v27 = (unsigned int *)sub_15E1B70(*(_QWORD *)(a1 + 1832));
          v28 = sub_966440(a1, v27);
          sub_BBF3C0((_QWORD *)a1, v28, 0xFFFFFFFE, 0xFFFFFFFE, 0xFFFFFFFE, 0xFFFFFFFE, a4);
        }
        if ( v45 != v47 && v45 )
          sub_186B220(v45);
        v9 = v32;
        goto LABEL_18;
      }
      *(_QWORD *)v41 = 0;
      v42 = 0;
      v43 = 1;
      v16 = qword_1C7F2C0;
      v44 = 0;
      if ( (int)v46 < 0 )
        sub_1830C40(qword_1C7F2C0, v41, (unsigned int)v46);
      else
        v41[0] = v46;
      sub_182CBA0(v16, &v43);
      BYTE4(v43) &= ~1u;
      LODWORD(v43) = 1;
      sub_2FC4A0((__int64)qword_1C7F2C0, a3, (__int64)v41, a3);
LABEL_12:
      sub_25A130((char *)v41);
      v10 = *((_DWORD *)v7 - 1);
      if ( !v10 )
        goto LABEL_13;
    }
    if ( v14[1] != 20 || *(_DWORD *)(*(_QWORD *)v31 + 24LL) != 2 )
    {
      if ( v14[1] == 21 && *(_DWORD *)(*(_QWORD *)v31 + 24LL) == 3 )
      {
        v25 = *(_QWORD *)(*(_QWORD *)v31 + 32LL);
        v36 = v7;
        v34 = v25;
        v35 = *(_QWORD *)(*(_QWORD *)v31 + 40LL);
        v37 = *(_QWORD *)(*(_QWORD *)v31 + 48LL);
        sub_BB70A0(&v36, &v37);
        goto LABEL_35;
      }
      goto LABEL_8;
    }
    v26 = *(_QWORD *)(*(_QWORD *)v31 + 32LL);
    v36 = v7;
    v34 = v26;
    v35 = *(_QWORD *)(*(_QWORD *)v31 + 40LL);
    sub_BB70A0(&v36, &v35);
LABEL_35:
    v7 = v36;
    if ( v36 )
      continue;
    break;
  }
  v15 = (*(_BYTE *)(a3 + 20) & 1) == 0;
  if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
LABEL_23:
    LOBYTE(v15) = *(_DWORD *)(a3 + 16) == 1;
LABEL_14:
  if ( v45 != v47 && v45 )
    sub_186B220(v45);
  if ( v7 )
LABEL_18:
    sub_186B220(v7 - 1);
  if ( v9 )
  {
    v13 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v13 )
      sub_15D7BC0(*(_QWORD *)v30, v9);
  }
  v17 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v29);
  sub_182CBA0(v17, v40);
  return v15;
}

