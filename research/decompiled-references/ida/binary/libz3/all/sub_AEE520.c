__int64 *__fastcall sub_AEE520(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  int v7; // r14d
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 i; // rbx
  __int64 v12; // rdx
  int v13; // eax
  void *v14; // r14
  __int64 v15; // rax
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  int v19; // edi
  __int64 v20; // rax
  void *v21; // r14
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  int v25; // edi
  int v26; // eax
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  void *v31; // r12
  int v32; // r14d
  __int64 v33; // r13
  __int64 v34; // r15
  int v35; // r8d
  int v36; // r9d
  int v37; // r8d
  int v38; // r9d
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rsi
  __int64 v42; // rdi
  int v45; // [rsp-8h] [rbp-C8h]
  __int64 v47; // [rsp+0h] [rbp-C0h]
  int v48; // [rsp+0h] [rbp-C0h]
  __int64 v49; // [rsp+8h] [rbp-B8h]
  __int64 v50; // [rsp+8h] [rbp-B8h]
  int v51; // [rsp+8h] [rbp-B8h]
  __int64 v52; // [rsp+10h] [rbp-B0h]
  int v53; // [rsp+10h] [rbp-B0h]
  int v54; // [rsp+18h] [rbp-A8h]
  int v55; // [rsp+18h] [rbp-A8h]
  __int64 *v56; // [rsp+18h] [rbp-A8h]
  int v57[2]; // [rsp+20h] [rbp-A0h]
  int v58; // [rsp+20h] [rbp-A0h]
  int v59[2]; // [rsp+20h] [rbp-A0h]
  int v60; // [rsp+28h] [rbp-98h]
  int v61[2]; // [rsp+28h] [rbp-98h]
  char v62; // [rsp+28h] [rbp-98h]
  int v63[2]; // [rsp+28h] [rbp-98h]
  char v64; // [rsp+30h] [rbp-90h]
  __int64 v65; // [rsp+30h] [rbp-90h]
  int v66; // [rsp+30h] [rbp-90h]
  int v67; // [rsp+38h] [rbp-88h]
  __int64 v68; // [rsp+38h] [rbp-88h]
  int v69; // [rsp+38h] [rbp-88h]
  __int64 v71; // [rsp+40h] [rbp-80h]
  int v72; // [rsp+40h] [rbp-80h]
  int v73; // [rsp+48h] [rbp-78h]
  void *v74; // [rsp+48h] [rbp-78h]
  int v75; // [rsp+48h] [rbp-78h]
  int v76; // [rsp+50h] [rbp-70h] BYREF
  int v77[2]; // [rsp+58h] [rbp-68h] BYREF
  __int64 v78; // [rsp+60h] [rbp-60h] BYREF
  __int64 v79; // [rsp+68h] [rbp-58h]
  int v80[2]; // [rsp+70h] [rbp-50h] BYREF
  __int64 v81; // [rsp+78h] [rbp-48h]
  __int64 v82; // [rsp+80h] [rbp-40h] BYREF
  __int64 v83; // [rsp+88h] [rbp-38h]
  int v84; // [rsp+90h] [rbp-30h]
  int v85; // [rsp+98h] [rbp-28h]
  int v86; // [rsp+A0h] [rbp-20h]
  void *v87; // [rsp+A8h] [rbp-18h]
  int v88; // [rsp+B0h] [rbp-10h]
  __int64 v89; // [rsp+B8h] [rbp-8h]

  v5 = *(_QWORD *)(a2 + 24);
  *a1 = 0;
  a1[1] = v5;
  sub_16669D0(&v78, v5);
  v6 = sub_186B270(0x38u);
  v67 = v6;
  sub_13478B0(v6, v5, 1);
  v49 = *(_QWORD *)(a3 + 32);
  v7 = sub_15D2CD0(v78, 5, 1, 0, 0);
  sub_180C5A0(&v76, "class");
  v8 = sub_15E3D10(
         v5,
         (int)&v76,
         (int)&qword_18D6CD0,
         1,
         (int)v49 + 48,
         v7,
         1,
         v45,
         a4,
         v49,
         (int)&v78,
         (int)a1,
         v5,
         v60,
         v64,
         v67,
         a3,
         v73,
         v76,
         v77[0],
         v78,
         v79,
         v80[0],
         v81,
         v82,
         v83,
         v84,
         v85,
         v86,
         v87,
         v88,
         v89);
  *(_QWORD *)v61 = v8;
  if ( v8 )
    ++*(_DWORD *)(v8 + 8);
  v9 = *(_QWORD *)(v71 + 112);
  if ( v9 )
  {
    v10 = *(unsigned int *)(v9 - 4);
    if ( (_DWORD)v10 )
    {
      v65 = v10;
      for ( i = 0; i != v65; ++i )
      {
        LODWORD(v12) = i;
        do
        {
          v13 = v12;
          v12 = *(unsigned int *)(*(_QWORD *)(v71 + 504) + 4LL * (unsigned int)v12);
        }
        while ( v13 != (_DWORD)v12 );
        v14 = qword_1C7F2C0;
        v15 = **(_QWORD **)(*(_QWORD *)(a2 + 32) + 8 * i);
        *(_QWORD *)v80 = 0;
        v81 = 0;
        *(_QWORD *)v77 = v15;
        v82 = 1;
        v83 = 0;
        if ( (int)v12 < 0 )
          sub_1830C40(qword_1C7F2C0, v80, v12);
        else
          v80[0] = v12;
        sub_182CBA0(v14, &v82);
        v19 = v79;
        BYTE4(v82) &= ~1u;
        LODWORD(v82) = 1;
        if ( !v79 )
        {
          sub_16669E0(v52);
          v19 = v79;
        }
        v20 = sub_166A700(v19, (unsigned int)v80, 1, v16, v17, v18);
        sub_1348F50(v68, v77, v20);
        v21 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v80);
        sub_182CBA0(v21, &v82);
      }
    }
  }
  *(_QWORD *)v80 = 0;
  v81 = 0;
  v82 = 1;
  v83 = 0;
  sub_182CBA0(qword_1C7F2C0, &v82);
  v25 = v79;
  BYTE4(v82) &= ~1u;
  LODWORD(v82) = 1;
  if ( !v79 )
  {
    sub_16669E0(v52);
    v25 = v79;
  }
  v26 = sub_166A700(v25, (unsigned int)v80, 1, v22, v23, v24);
  sub_1349280(v68, v26, v27, v28, v29, v30);
  v31 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v80);
  sub_182CBA0(v31, &v82);
  v32 = v61[0];
  sub_135F980(*(_QWORD *)(v47 + 72), *(_QWORD *)v61, v68);
  v33 = v50;
  v34 = *(_QWORD *)v57;
  *(_QWORD *)v77 = sub_15DB5C0(*(_QWORD *)v57, 1, *(_QWORD *)(v50 + 48));
  sub_15DC610(v57[0], v61[0], 1, (int)v77, v35, v36, v47, v50, v52, v54, v57[0], v61[0], v65, v68, v71, &v82);
  *(_QWORD *)v80 = sub_15DB5C0(v34, 0, *(_QWORD *)(v33 + 48));
  sub_15DC610(v34, v32, 1, (int)v80, v37, v38, v48, v51, v53, v55, v58, v62, v66, v69, v72, v74);
  v39 = sub_15E1B70(v34);
  v40 = v39;
  if ( v39 )
    ++*(_DWORD *)(v39 + 8);
  v41 = *v56;
  if ( *v56 )
  {
    v42 = v56[1];
    if ( (*(_DWORD *)(v41 + 8))-- == 1 )
      sub_15D7BC0(v42, v41);
  }
  *v56 = v40;
  if ( *(_QWORD *)v63 )
  {
    v75 = *(_DWORD *)(*(_QWORD *)v63 + 8LL);
    *(_DWORD *)(*(_QWORD *)v63 + 8LL) = v75 - 1;
    if ( v75 == 1 )
      sub_15D7BC0(*(_QWORD *)v59, *(_QWORD *)v63);
  }
  return v56;
}

