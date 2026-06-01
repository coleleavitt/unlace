__int64 __fastcall sub_405450(_QWORD *a1)
{
  __int64 v2; // rax
  int *v3; // rax
  __int64 v4; // rbx
  int *v5; // r12
  int v6; // eax
  bool v7; // zf
  int *v8; // rdi
  int v9; // eax
  int *v10; // rdi
  int v11; // eax
  int *v12; // rdi
  int v13; // eax
  int *v14; // rdi
  int v15; // eax
  int *v16; // rdi
  int v17; // eax
  __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // [rsp+Ch] [rbp-12Ch] BYREF
  _BYTE v27[296]; // [rsp+10h] [rbp-128h] BYREF

  v26 = -1;
  v2 = sub_48DF10("close", 0xFFFFFFFF);
  v3 = sub_4053F0(a1, v2);
  v4 = a1[2];
  v5 = v3;
  sub_48AF00(v4, v27);
  if ( (unsigned int)sub_40BBC0(v4, v5, 393216) )
  {
    sub_48B4B0(v4, v27);
    v6 = *v5 - 1;
    v7 = *v5 == 1;
    *v5 = v6;
    if ( v6 >= 0 && !v7 )
      goto LABEL_3;
  }
  else
  {
    v19 = sub_48B5D0(v4);
    sub_47C180(0, v19, &v26);
    sub_48B4B0(v4, v27);
    v20 = *v5 - 1;
    v7 = *v5 == 1;
    *v5 = v20;
    if ( v20 >= 0 && !v7 )
    {
LABEL_3:
      if ( !a1[8] )
        goto LABEL_4;
      goto LABEL_12;
    }
  }
  sub_47B120(v5);
  if ( !a1[8] )
  {
LABEL_4:
    v8 = (int *)a1[3];
    v9 = *v8 - 1;
    v7 = *v8 == 1;
    *v8 = v9;
    if ( v9 >= 0 && !v7 )
      goto LABEL_5;
    goto LABEL_13;
  }
LABEL_12:
  sub_4979A0();
  v8 = (int *)a1[3];
  a1[8] = 0;
  v21 = *v8 - 1;
  v7 = *v8 == 1;
  *v8 = v21;
  if ( v21 >= 0 && !v7 )
  {
LABEL_5:
    v10 = (int *)a1[4];
    v11 = *v10 - 1;
    v7 = *v10 == 1;
    *v10 = v11;
    if ( v11 >= 0 && !v7 )
      goto LABEL_6;
    goto LABEL_14;
  }
LABEL_13:
  sub_47B120(v8);
  v10 = (int *)a1[4];
  v22 = *v10 - 1;
  v7 = *v10 == 1;
  *v10 = v22;
  if ( v22 >= 0 && !v7 )
  {
LABEL_6:
    v12 = (int *)a1[5];
    v13 = *v12 - 1;
    v7 = *v12 == 1;
    *v12 = v13;
    if ( v13 >= 0 && !v7 )
      goto LABEL_7;
    goto LABEL_15;
  }
LABEL_14:
  sub_47B120(v10);
  v12 = (int *)a1[5];
  v23 = *v12 - 1;
  v7 = *v12 == 1;
  *v12 = v23;
  if ( v23 >= 0 && !v7 )
  {
LABEL_7:
    v14 = (int *)a1[6];
    v15 = *v14 - 1;
    v7 = *v14 == 1;
    *v14 = v15;
    if ( v15 >= 0 && !v7 )
      goto LABEL_8;
LABEL_16:
    sub_47B120(v14);
    v16 = (int *)a1[7];
    v25 = *v16 - 1;
    v7 = *v16 == 1;
    *v16 = v25;
    if ( v25 >= 0 && !v7 )
      goto LABEL_9;
    goto LABEL_17;
  }
LABEL_15:
  sub_47B120(v12);
  v14 = (int *)a1[6];
  v24 = *v14 - 1;
  v7 = *v14 == 1;
  *v14 = v24;
  if ( v24 < 0 || v7 )
    goto LABEL_16;
LABEL_8:
  v16 = (int *)a1[7];
  v17 = *v16 - 1;
  v7 = *v16 == 1;
  *v16 = v17;
  if ( v17 >= 0 && !v7 )
  {
LABEL_9:
    Tcl_Free(a1);
    return 0;
  }
LABEL_17:
  sub_47B120(v16);
  Tcl_Free(a1);
  return 0;
}

