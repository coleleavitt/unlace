unsigned __int64 __fastcall sub_2A9E00(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  int v8; // r15d
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rsi
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rax
  int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rdx
  int v26; // ecx
  int v27; // r8d
  int v28; // r9d
  int v29; // ecx
  int v30; // r8d
  int v31; // r9d
  unsigned __int64 v33; // r12
  __int64 v34; // rbx
  __int64 tinfo_property; // rax
  char v36; // bl
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rdx
  int v40; // r8d
  int v41; // r9d
  int v42; // ecx
  int v43; // r8d
  int v44; // r9d
  __int64 v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rdx
  int v48; // r8d
  int v49; // r9d
  int v50; // ecx
  int v51; // r8d
  int v52; // r9d
  __int64 v53; // rax
  int v54; // ecx
  int v55; // r8d
  int v56; // r9d
  __int64 v57; // rsi
  __int64 v58; // rdx
  int v59; // ecx
  int v60; // r8d
  int v61; // r9d
  int v62; // ecx
  int v63; // r8d
  int v64; // r9d
  __int64 v65; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v66; // [rsp+18h] [rbp-B0h] BYREF
  __int64 v67; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v68; // [rsp+30h] [rbp-98h] BYREF
  __int64 v69; // [rsp+38h] [rbp-90h]
  __int64 v70; // [rsp+40h] [rbp-88h] BYREF
  __int64 v71; // [rsp+48h] [rbp-80h]
  __int64 v72; // [rsp+50h] [rbp-78h] BYREF
  __int64 v73; // [rsp+58h] [rbp-70h] BYREF
  _DWORD v74[4]; // [rsp+60h] [rbp-68h] BYREF
  _DWORD v75[4]; // [rsp+70h] [rbp-58h] BYREF
  int v76; // [rsp+80h] [rbp-48h]
  unsigned __int64 v77; // [rsp+88h] [rbp-40h]

  v66 = a2;
  v65 = a3;
  v77 = __readfsqword(0x28u);
  sub_245500(a2, nullptr, &v66);
  if ( (unsigned int)sub_245500(v65, nullptr, &v65) == 1
    || (v33 = *(int *)(*(_QWORD *)(*a1 + 112) + 80LL), get_tinfo_size(0, *(_QWORD *)(v65 + 48), 0) < v33) )
  {
LABEL_2:
    v8 = 8;
    goto LABEL_3;
  }
  v34 = v65;
  if ( *(_DWORD *)(v65 + 8) == 48 )
  {
    while ( get_tinfo_size(0, *(_QWORD *)(v34 + 48), 0) >= v33
         && (get_tinfo_property(*(_QWORD *)(v34 + 48), 2) & 0xF) != 9 )
    {
      v34 = *(_QWORD *)(v34 + 24);
      if ( *(_DWORD *)(v34 + 8) != 48 )
        goto LABEL_21;
    }
    goto LABEL_2;
  }
LABEL_21:
  v8 = 0;
LABEL_3:
  v9 = v66;
  if ( *(_DWORD *)(v66 + 8) == 51 )
  {
    v45 = sub_2553A0(*(_QWORD *)(v66 + 24));
    v46 = *a1;
    v70 = 0x4000000000LL;
    v71 = 0;
    v72 = 6;
    v73 = v45;
    sub_2A0420((__int64)&v72, v46, v47, 0, v48, v49);
    v74[0] = 0;
    sub_29FB30((__int64)v74, (unsigned int *)&v72);
    v75[0] = 0;
    sub_29FB30((__int64)v75, (unsigned int *)&v70);
    v76 = 2;
    sub_2A86D0((__int64)a1, (__int64)v74, 0, v50, v51, v52);
    v76 = -1;
    sub_29EFF0((__int64)v75);
    sub_29EFF0((__int64)v74);
    sub_29EFF0((__int64)&v72);
    sub_29EFF0((__int64)&v70);
    v9 = v66;
  }
  v69 = v9;
  v10 = *a1;
  v68 = 6;
  sub_2A0420((__int64)&v68, v10, v4, v5, v6, v7);
  if ( (_DWORD)v68 == 1 && (get_tinfo_property(v69, 2) & 0xF) == 0xA )
  {
    v67 = 0;
    tinfo_property = get_tinfo_property(v69, 9);
    v36 = tinfo_property;
    v67 = tinfo_property;
    clear_tinfo_t(&v67);
    if ( (v36 & 0x40) == 0 )
    {
      v37 = sub_2553A0(v65);
      v38 = *a1;
      v71 = 0;
      v70 = 0x4000000000LL;
      v72 = 6;
      v73 = v37;
      sub_2A0420((__int64)&v72, v38, v39, 0, v40, v41);
      v74[0] = 0;
      sub_29FB30((__int64)v74, (unsigned int *)&v72);
      v75[0] = 0;
      sub_29FB30((__int64)v75, (unsigned int *)&v70);
      v76 = 2;
      sub_2A86D0((__int64)a1, (__int64)v74, 0, v42, v43, v44);
      v76 = -1;
      sub_29EFF0((__int64)v75);
      sub_29EFF0((__int64)v74);
      sub_29EFF0((__int64)&v72);
      sub_29EFF0((__int64)&v70);
    }
  }
  v15 = v66;
  v16 = v65;
  if ( *(_DWORD *)(v66 + 8) != 65
    || *(_DWORD *)(v65 + 8) != 52
    || (v11 = *(_QWORD *)(v65 + 24), *(_DWORD *)(v11 + 8) != 65)
    || (v12 = *(_DWORD *)(v11 + 32), *(_DWORD *)(v66 + 32) != v12) )
  {
    v17 = *a1;
    v73 = v65;
    v72 = 6;
    sub_2A0420((__int64)&v72, v17, v11, v12, v13, v14);
    v74[0] = 0;
    sub_29FB30((__int64)v74, (unsigned int *)&v68);
    v75[0] = 0;
    sub_29FB30((__int64)v75, (unsigned int *)&v72);
    v76 = 1;
    sub_2A86D0((__int64)a1, (__int64)v74, 0, v18, v19, v20);
    v76 = -1;
    sub_29EFF0((__int64)v75);
    sub_29EFF0((__int64)v74);
    sub_29EFF0((__int64)&v72);
    if ( v8 != 8 || (v15 = v66) == 0 )
    {
LABEL_9:
      v16 = v65;
      if ( *(_DWORD *)(v65 + 8) != 52 )
        goto LABEL_15;
      goto LABEL_10;
    }
LABEL_30:
    v53 = sub_2553A0(v15);
    sub_2A8A50(a1, v53, 0, v54, v55, v56);
    goto LABEL_9;
  }
  if ( v8 != 8 )
  {
    v65 = *(_QWORD *)(v65 + 24);
    goto LABEL_15;
  }
  if ( v66 )
    goto LABEL_30;
LABEL_10:
  v21 = *(_QWORD *)(v16 + 24);
  v22 = *(_DWORD *)(v21 + 8);
  v65 = v21;
  if ( (unsigned int)(v22 - 59) <= 1 )
  {
    while ( !*(_DWORD *)(v21 + 32) )
    {
      v23 = *(_QWORD *)(v21 + 24);
      if ( v22 == 60 )
      {
        v72 = 1;
        v73 = 0;
        copy_tinfo_t(&v73, v23 + 48);
        v57 = *a1;
        v70 = 6;
        v71 = v66;
        sub_2A0420((__int64)&v70, v57, v58, v59, v60, v61);
        v74[0] = 0;
        sub_29FB30((__int64)v74, (unsigned int *)&v70);
        v75[0] = 0;
        sub_29FB30((__int64)v75, (unsigned int *)&v72);
        v76 = 1;
        sub_2A86D0((__int64)a1, (__int64)v74, 0, v62, v63, v64);
        v76 = -1;
        sub_29EFF0((__int64)v75);
        sub_29EFF0((__int64)v74);
        sub_29EFF0((__int64)&v70);
        sub_29EFF0((__int64)&v72);
        break;
      }
      sub_32C870(&v67, *(_QWORD *)(*a1 + 112), v23 + 48);
      v72 = 1;
      v73 = 0;
      copy_tinfo_t(&v73, &v67);
      v24 = *a1;
      v70 = 6;
      v71 = v66;
      sub_2A0420((__int64)&v70, v24, v25, v26, v27, v28);
      v74[0] = 0;
      sub_29FB30((__int64)v74, (unsigned int *)&v70);
      v75[0] = 0;
      sub_29FB30((__int64)v75, (unsigned int *)&v72);
      v76 = 1;
      sub_2A86D0((__int64)a1, (__int64)v74, 0, v29, v30, v31);
      v76 = -1;
      sub_29EFF0((__int64)v75);
      sub_29EFF0((__int64)v74);
      sub_29EFF0((__int64)&v70);
      sub_29EFF0((__int64)&v72);
      clear_tinfo_t(&v67);
      v21 = *(_QWORD *)(v65 + 24);
      v22 = *(_DWORD *)(v21 + 8);
      v65 = v21;
      if ( (unsigned int)(v22 - 59) > 1 )
        break;
    }
  }
LABEL_15:
  sub_29EFF0((__int64)&v68);
  return v77 - __readfsqword(0x28u);
}
