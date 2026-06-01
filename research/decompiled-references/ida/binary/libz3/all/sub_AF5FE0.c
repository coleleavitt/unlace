__int64 *__fastcall sub_AF5FE0(_QWORD *a1, __int64 a2, _QWORD *a3, int a4)
{
  __int64 v5; // rbx
  int v6; // r13d
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  void *v13; // r13
  int v14; // eax
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  int v19; // edi
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  int v23; // edi
  int v24; // eax
  int v25; // edx
  int v26; // ecx
  int v27; // r8d
  int v28; // r9d
  void *v29; // r12
  int v30; // r14d
  __int64 v31; // r12
  __int64 v32; // r15
  int v33; // r8d
  int v34; // r9d
  int v35; // r8d
  int v36; // r9d
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rsi
  __int64 v40; // rdi
  int v43; // [rsp-8h] [rbp-C8h]
  __int64 v45; // [rsp+0h] [rbp-C0h]
  int v46; // [rsp+0h] [rbp-C0h]
  __int64 v47; // [rsp+8h] [rbp-B8h]
  __int64 v48; // [rsp+8h] [rbp-B8h]
  int v49; // [rsp+8h] [rbp-B8h]
  __int64 v50; // [rsp+10h] [rbp-B0h]
  int v51; // [rsp+10h] [rbp-B0h]
  int v52; // [rsp+18h] [rbp-A8h]
  int v53[2]; // [rsp+18h] [rbp-A8h]
  int v54; // [rsp+18h] [rbp-A8h]
  int v55[2]; // [rsp+18h] [rbp-A8h]
  int v56; // [rsp+20h] [rbp-A0h]
  int v57; // [rsp+20h] [rbp-A0h]
  __int64 *v58; // [rsp+20h] [rbp-A0h]
  int v59[2]; // [rsp+28h] [rbp-98h]
  char v60; // [rsp+28h] [rbp-98h]
  int v61[2]; // [rsp+28h] [rbp-98h]
  char v62; // [rsp+30h] [rbp-90h]
  __int64 v63; // [rsp+30h] [rbp-90h]
  int v64; // [rsp+30h] [rbp-90h]
  int v65; // [rsp+38h] [rbp-88h]
  __int64 v66; // [rsp+38h] [rbp-88h]
  int v67; // [rsp+38h] [rbp-88h]
  int v68; // [rsp+40h] [rbp-80h]
  int *v69; // [rsp+40h] [rbp-80h]
  int v70; // [rsp+40h] [rbp-80h]
  int v71; // [rsp+48h] [rbp-78h]
  void *v72; // [rsp+48h] [rbp-78h]
  int v73; // [rsp+48h] [rbp-78h]
  int v74; // [rsp+50h] [rbp-70h] BYREF
  int v75[2]; // [rsp+58h] [rbp-68h] BYREF
  int v76[2]; // [rsp+60h] [rbp-60h] BYREF
  __int64 v77; // [rsp+68h] [rbp-58h]
  int v78[2]; // [rsp+70h] [rbp-50h] BYREF
  __int64 v79; // [rsp+78h] [rbp-48h]
  __int64 v80; // [rsp+80h] [rbp-40h] BYREF
  __int64 v81; // [rsp+88h] [rbp-38h]
  int v82; // [rsp+90h] [rbp-30h]
  int v83; // [rsp+98h] [rbp-28h]
  int v84; // [rsp+A0h] [rbp-20h]
  void *v85; // [rsp+A8h] [rbp-18h]
  int v86; // [rsp+B0h] [rbp-10h]
  __int64 v87; // [rsp+B8h] [rbp-8h]

  v5 = *(_QWORD *)(a2 + 24);
  sub_AF1C60((__int64)a3);
  sub_AF5DD0(a2, (__int64)(a3 + 8));
  a1[1] = v5;
  *a1 = 0;
  sub_16669D0(v76, v5);
  v47 = a3[4];
  v6 = sub_15D2CD0(*(_QWORD *)v76, 5, 1, 0, 0);
  sub_180C5A0(&v74, "inj");
  v7 = sub_15E3D10(
         v5,
         (int)&v74,
         (int)&qword_18D6CD0,
         1,
         (int)v47 + 48,
         v6,
         1,
         v43,
         a4,
         v47,
         (int)v76,
         v52,
         (int)a1,
         v5,
         v62,
         v65,
         v68,
         v71,
         v74,
         v75[0],
         v76[0],
         v77,
         v78[0],
         v79,
         v80,
         v81,
         v82,
         v83,
         v84,
         v85,
         v86,
         v87);
  *(_QWORD *)v53 = v7;
  if ( v7 )
    ++*(_DWORD *)(v7 + 8);
  v8 = a3[14];
  if ( v8 )
  {
    v9 = *(unsigned int *)(v8 - 4);
    v66 = sub_186B270(0x38u);
    sub_13478B0(v66, *(_QWORD *)v59, 1);
    if ( (_DWORD)v9 )
    {
      v10 = 4 * v9;
      v11 = 0;
      v63 = v10;
      v69 = v78;
      do
      {
        v14 = *(_DWORD *)(a3[11] + v11);
        v15 = **(_QWORD **)(*(_QWORD *)(a2 + 32) + 2 * v11);
        LOBYTE(v78[1]) &= 0xFCu;
        BYTE4(v80) &= 0xFCu;
        *(_QWORD *)v75 = v15;
        v79 = 0;
        LODWORD(v80) = 1;
        v81 = 0;
        v78[0] = v14;
        sub_182CBA0(qword_1C7F2C0, &v80);
        v19 = v77;
        BYTE4(v80) &= ~1u;
        LODWORD(v80) = 1;
        if ( !v77 )
        {
          sub_16669E0(v50);
          v19 = v77;
        }
        v12 = sub_166A700(v19, (unsigned int)v78, 1, v16, v17, v18);
        sub_1348F50(v66, v75, v12);
        v13 = qword_1C7F2C0;
        v11 += 4;
        sub_182CBA0(qword_1C7F2C0, v78);
        sub_182CBA0(v13, &v80);
      }
      while ( v63 != v11 );
    }
  }
  else
  {
    v66 = sub_186B270(0x38u);
    sub_13478B0(v66, *(_QWORD *)v59, 1);
  }
  sub_AEDB10((__int64)a3);
  *(_QWORD *)v78 = 0;
  v79 = 0;
  v80 = 1;
  v81 = 0;
  sub_182CBA0(qword_1C7F2C0, &v80);
  v23 = v77;
  BYTE4(v80) &= ~1u;
  LODWORD(v80) = 1;
  if ( !v77 )
  {
    sub_16669E0(v50);
    v23 = v77;
  }
  v24 = sub_166A700(v23, (unsigned int)v78, 1, v20, v21, v22);
  sub_1349280(v66, v24, v25, v26, v27, v28);
  v29 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v78);
  sub_182CBA0(v29, &v80);
  v30 = v53[0];
  sub_135F980(*(_QWORD *)(v45 + 72), *(_QWORD *)v53, v66);
  v31 = v48;
  v32 = *(_QWORD *)v59;
  *(_QWORD *)v75 = sub_15DB5C0(*(_QWORD *)v59, 1, *(_QWORD *)(v48 + 48));
  sub_15DC610(v59[0], v53[0], 1, (int)v75, v33, v34, v45, v48, v50, v53[0], v56, v59[0], v63, v66, (int)v69, &v80);
  *(_QWORD *)v78 = sub_15DB5C0(v32, 0, *(_QWORD *)(v31 + 48));
  sub_15DC610(v32, v30, 1, (int)v78, v35, v36, v46, v49, v51, v54, v57, v60, v64, v67, v70, v72);
  v37 = sub_15E1B70(v76[0]);
  v38 = v37;
  if ( v37 )
    ++*(_DWORD *)(v37 + 8);
  v39 = *v58;
  if ( *v58 )
  {
    v40 = v58[1];
    if ( (*(_DWORD *)(v39 + 8))-- == 1 )
      sub_15D7BC0(v40, v39);
  }
  *v58 = v38;
  if ( *(_QWORD *)v55 )
  {
    v73 = *(_DWORD *)(*(_QWORD *)v55 + 8LL);
    *(_DWORD *)(*(_QWORD *)v55 + 8LL) = v73 - 1;
    if ( v73 == 1 )
      sub_15D7BC0(*(_QWORD *)v61, *(_QWORD *)v55);
  }
  return v58;
}

