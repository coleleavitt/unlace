__int64 __fastcall sub_6F0A40(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rdi
  _QWORD *v7; // rax
  unsigned int i; // r15d
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rsi
  bool v14; // zf
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 *v22; // rbx
  unsigned __int64 v23; // rbp
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // [rsp+18h] [rbp-2A0h] BYREF
  __int64 v27; // [rsp+20h] [rbp-298h] BYREF
  __int64 v28; // [rsp+28h] [rbp-290h] BYREF
  __int64 v29; // [rsp+30h] [rbp-288h] BYREF
  char v30[16]; // [rsp+38h] [rbp-280h] BYREF
  char v31[8]; // [rsp+48h] [rbp-270h] BYREF
  __int64 v32; // [rsp+50h] [rbp-268h] BYREF
  _QWORD *v33; // [rsp+58h] [rbp-260h]
  _QWORD v34[19]; // [rsp+60h] [rbp-258h] BYREF
  int v35; // [rsp+F8h] [rbp-1C0h]
  __int64 v36; // [rsp+100h] [rbp-1B8h]
  _QWORD v37[19]; // [rsp+108h] [rbp-1B0h] BYREF
  int v38; // [rsp+1A0h] [rbp-118h]
  _QWORD v39[18]; // [rsp+1A8h] [rbp-110h] BYREF
  int v40; // [rsp+238h] [rbp-80h]
  __int64 v41; // [rsp+240h] [rbp-78h]
  __int64 v42; // [rsp+248h] [rbp-70h]
  __int64 v43; // [rsp+250h] [rbp-68h] BYREF
  __int64 v44; // [rsp+258h] [rbp-60h]
  __int64 v45; // [rsp+260h] [rbp-58h]
  __int64 v46; // [rsp+268h] [rbp-50h]
  __int64 v47; // [rsp+270h] [rbp-48h]

  v29 = a3[1];
  sub_1684300(v30, v29);
  v34[0] = 0;
  sub_1360C00(v31, a2, v34);
  sub_18572D0(v34);
  v33 = nullptr;
  v32 = v29;
  sub_1360B80(v31, 0);
  v4 = a3[1];
  sub_1584DD0(v34, v4, 0);
  v35 = 0;
  v34[18] = &v29;
  v34[0] = &off_1C534E8;
  v36 = 0;
  sub_1584DD0(v37, v4, 0);
  v37[18] = 0;
  v38 = 0;
  v37[0] = &off_1C61DB8;
  sub_1584DD0(v39, v4, 0);
  v40 = 0;
  v41 = 0;
  v39[0] = &off_1C61DE0;
  v42 = v4;
  v43 = 0;
  v44 = v4;
  v45 = 0;
  v46 = v4;
  v47 = 0;
  sub_6FC6A0(v34, a1, a3, &v43);
  if ( v33 && *((_DWORD *)v33 - 1) )
  {
    v5 = a3[1];
    v6 = *a3;
    v28 = 0;
    v27 = v5;
    sub_15EEF60(v6);
    v7 = v33;
    for ( i = 0; v33; ++i )
    {
      if ( i >= *((_DWORD *)v7 - 1) )
        break;
      v9 = v7[i];
      v26 = v9;
      if ( v9 )
        ++*(_DWORD *)(v9 + 8);
      sub_6EFE70(&v28, &v26);
      v7 = v33;
    }
    v10 = v27;
    if ( v28 )
      v11 = *(unsigned int *)(v28 - 4);
    else
      v11 = 0;
    v12 = sub_15EC1C0(v27, v11);
    if ( v12 )
      ++*(_DWORD *)(v12 + 8);
    v13 = *a3;
    *a3 = v12;
    if ( v13 )
    {
      v14 = (*(_DWORD *)(v13 + 8))-- == 1;
      if ( v14 )
        sub_15D7BC0(v10, v13);
    }
    sub_2334C0(&v27);
    sub_6F1150(v34);
    sub_2334C0(&v32);
    return sub_13606C0(v31);
  }
  v34[0] = &off_1C534E8;
  if ( v47 )
    sub_186B220((void *)(v47 - 8));
  v16 = v45;
  if ( v45 && (v17 = v46, v14 = *(_DWORD *)(v45 + 8) == 1, --*(_DWORD *)(v45 + 8), v14) )
  {
    sub_15D7BC0(v17, v16);
    v18 = v43;
    if ( !v43 )
    {
LABEL_23:
      v20 = v41;
      if ( v41 )
        goto LABEL_24;
      goto LABEL_26;
    }
  }
  else
  {
    v18 = v43;
    if ( !v43 )
      goto LABEL_23;
  }
  v19 = v44;
  v14 = (*(_DWORD *)(v18 + 8))-- == 1;
  if ( !v14 )
    goto LABEL_23;
  sub_15D7BC0(v19, v18);
  v20 = v41;
  if ( v41 )
  {
LABEL_24:
    v21 = v42;
    v14 = (*(_DWORD *)(v20 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v21, v20);
  }
LABEL_26:
  v39[0] = &qword_1C637E8;
  sub_15841B0(v39);
  v37[0] = &qword_1C637E8;
  sub_15841B0(v37);
  if ( v36 )
    sub_186B220((void *)(v36 - 8));
  sub_15841B0(v34);
  v22 = v33;
  if ( v33 )
  {
    v23 = (unsigned __int64)&v33[*((unsigned int *)v33 - 1)];
    if ( (unsigned __int64)v33 >= v23 )
      goto LABEL_36;
    do
    {
      while ( 1 )
      {
        v24 = *v22;
        if ( *v22 )
        {
          v25 = v32;
          v14 = (*(_DWORD *)(v24 + 8))-- == 1;
          if ( v14 )
            break;
        }
        if ( (unsigned __int64)++v22 >= v23 )
          goto LABEL_35;
      }
      sub_15D7BC0(v25, v24);
      ++v22;
    }
    while ( (unsigned __int64)v22 < v23 );
LABEL_35:
    v22 = v33;
    if ( v33 )
LABEL_36:
      sub_186B220(v22 - 1);
  }
  return sub_13606C0(v31);
}

