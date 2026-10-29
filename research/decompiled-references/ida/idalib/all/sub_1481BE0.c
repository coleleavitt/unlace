void __fastcall sub_1481BE0(__int64 a1, unsigned int *a2, __int64 a3)
{
  int v3; // ebp
  unsigned int v4; // r12d
  unsigned int v5; // r15d
  char v6; // r14
  unsigned __int64 v7; // rax
  __int64 v8; // r13
  unsigned __int64 v9; // rax
  _DWORD v10[2]; // [rsp+0h] [rbp-158h] BYREF
  char v11; // [rsp+8h] [rbp-150h]
  unsigned int v12; // [rsp+Ch] [rbp-14Ch]
  unsigned int v13; // [rsp+10h] [rbp-148h]
  char v14; // [rsp+14h] [rbp-144h]
  void *v15; // [rsp+18h] [rbp-140h]
  __int64 v16; // [rsp+20h] [rbp-138h]
  _BYTE v17[24]; // [rsp+28h] [rbp-130h] BYREF
  unsigned __int64 v18; // [rsp+40h] [rbp-118h] BYREF
  char v19; // [rsp+48h] [rbp-110h]
  __int64 v20; // [rsp+4Ch] [rbp-10Ch]
  char v21; // [rsp+54h] [rbp-104h]
  void *v22; // [rsp+58h] [rbp-100h]
  __int64 v23; // [rsp+60h] [rbp-F8h]
  _BYTE v24[24]; // [rsp+68h] [rbp-F0h] BYREF
  unsigned __int8 *v25[10]; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v26[17]; // [rsp+D0h] [rbp-88h] BYREF

  v3 = a3;
  v4 = *a2;
  if ( !a2[4] )
  {
    if ( (_DWORD)a3 )
    {
      v5 = a2[1];
LABEL_4:
      v6 = 0;
      sub_1564820(v26, a1, (unsigned int)a3, 1557);
      goto LABEL_5;
    }
LABEL_13:
    sub_1564820(v26, a1, v4, 1558);
    v7 = *(_QWORD *)a2;
    v19 = 1;
    v18 = v7;
    sub_AEC610(v26, (__int64 *)&v18);
    sub_AEA040((__int64)v26);
    return;
  }
  v8 = **((_QWORD **)a2 + 1);
  if ( !(_DWORD)a3 )
  {
    if ( v8 && (*(_BYTE *)(v8 + 35) & 2) != 0 )
    {
      sub_1564820(v25, a1, v4, 1716);
      sub_14787A0(v25, v8);
      sub_FC70F0((__int64)v26, (__int64)v25);
      v9 = *(_QWORD *)a2;
      v19 = 1;
      v18 = v9;
      sub_AEC610(v26, (__int64 *)&v18);
      sub_AEA040((__int64)v26);
      sub_AEA040((__int64)v25);
      return;
    }
    goto LABEL_13;
  }
  v5 = a2[1];
  if ( !v8 || (*(_BYTE *)(v8 + 35) & 2) == 0 )
    goto LABEL_4;
  v6 = 1;
  sub_1564820(v25, a1, a3, 1715);
  sub_14787A0(v25, v8);
  sub_FC70F0((__int64)v26, (__int64)v25);
LABEL_5:
  v10[0] = v3;
  v10[1] = v3;
  v15 = v17;
  v16 = 0;
  v17[0] = 0;
  v11 = 0;
  v12 = v4;
  v13 = v5;
  v14 = 1;
  v17[16] = 0;
  sub_1480470(v26, (unsigned __int64)v10);
  v21 = 0;
  v24[0] = 0;
  v20 = 0;
  v22 = v24;
  v23 = 0;
  v24[16] = 0;
  v18 = __PAIR64__(v5, v4);
  v19 = 1;
  if ( v5 )
  {
    if ( v4 )
    {
      sub_1480470(v26, (unsigned __int64)&v18);
      if ( v22 != v24 )
        operator delete(v22);
    }
  }
  if ( v15 != v17 )
    operator delete(v15);
  sub_AEA040((__int64)v26);
  if ( v6 )
    sub_AEA040((__int64)v25);
}
