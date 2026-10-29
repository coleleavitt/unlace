__int64 __fastcall sub_C2EEF0(__int64 *a1, int a2, __int64 a3, __int64 *a4, __int64 *a5)
{
  __int64 result; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // r14
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rdi
  void *v18; // r14
  __int64 v19; // r14
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rdi
  _QWORD *v24; // r14
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rdi
  _QWORD *v29; // r14
  void *v30; // r13
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  int v39; // [rsp+8h] [rbp-C0h]
  int v40; // [rsp+10h] [rbp-B8h]
  int v41; // [rsp+18h] [rbp-B0h]
  __int64 v42; // [rsp+18h] [rbp-B0h]
  int v43; // [rsp+20h] [rbp-A8h]
  void *v44; // [rsp+20h] [rbp-A8h]
  _QWORD *v45; // [rsp+20h] [rbp-A8h]
  char v46[8]; // [rsp+28h] [rbp-A0h]
  int v47; // [rsp+30h] [rbp-98h]
  _QWORD *v48; // [rsp+30h] [rbp-98h]
  int v49; // [rsp+38h] [rbp-90h]
  int v50; // [rsp+40h] [rbp-88h]
  void *v51; // [rsp+48h] [rbp-80h]
  int v52[2]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v53; // [rsp+58h] [rbp-70h] BYREF
  __int64 v54; // [rsp+60h] [rbp-68h] BYREF
  __int64 v55; // [rsp+68h] [rbp-60h]
  __int64 v56; // [rsp+70h] [rbp-58h] BYREF
  __int64 v57; // [rsp+78h] [rbp-50h]
  __int64 v58; // [rsp+80h] [rbp-48h] BYREF
  __int64 v59; // [rsp+88h] [rbp-40h]

  result = 5;
  if ( *(_BYTE *)(*a1 + 18) )
  {
    v9 = **(_QWORD **)*a1;
    *(_QWORD *)v52 = a3;
    v10 = sub_15DC610(v9, a2, 1, (int)v52, (int)a5, a3, a3, v39, v40, v41, v43, v9, v47, v49, v50, v51);
    v11 = v10;
    if ( v10 )
      ++*(_DWORD *)(v10 + 8);
    if ( !(unsigned __int8)sub_C292F0(a1, v10, a4, a5) )
    {
      v12 = sub_C2C130(a1, 0);
      v42 = v12;
      if ( v12 )
        ++*(_DWORD *)(v12 + 8);
      sub_C282B0(*a4, a4[1]);
      *a4 = v42;
      sub_C294F0((_QWORD ***)a1, v42, v11, a5);
      sub_C2AB80((__int64)a1, v11, *a4, *a5);
      v13 = *(_QWORD *)*a1;
      v56 = 1;
      v57 = 0;
      v58 = 1;
      v59 = 0;
      sub_182CBA0(qword_1C7F2C0, &v58);
      v17 = *(_QWORD *)(v13 + 8);
      BYTE4(v58) &= ~1u;
      LODWORD(v58) = 1;
      if ( !v17 )
      {
        sub_16669E0(v13);
        v17 = *(_QWORD *)(v13 + 8);
      }
      sub_166A700(v17, (unsigned int)&v56, 0, v14, v15, v16);
      v18 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v56);
      sub_182CBA0(v18, &v58);
      v19 = *(_QWORD *)*a1;
      v57 = 0;
      v56 = 0xFFFFFFFFLL;
      v58 = 1;
      v59 = 0;
      sub_182CBA0(qword_1C7F2C0, &v58);
      v23 = *(_QWORD *)(v19 + 8);
      BYTE4(v58) &= ~1u;
      LODWORD(v58) = 1;
      if ( !v23 )
      {
        sub_16669E0(v19);
        v23 = *(_QWORD *)(v19 + 8);
      }
      sub_166A700(v23, (unsigned int)&v56, 0, v20, v21, v22);
      sub_25A130((char *)&v56);
      v24 = *(_QWORD **)*a1;
      v48 = v24;
      if ( !v24[1] )
      {
        sub_16669E0(v24);
        v48 = *(_QWORD **)*a1;
      }
      v56 = 1;
      v57 = 0;
      v44 = qword_1C7F2C0;
      v58 = 2;
      v59 = 0;
      v54 = 0;
      v55 = 0;
      sub_1832C70(qword_1C7F2C0, &v56, &v58, &v54);
      if ( (v54 & 0x100000000LL) != 0 || (_DWORD)v54 != 1 )
      {
        sub_1833EB0(v44, &v56, &v54, &v56);
        sub_1833EB0(v44, &v58, &v54, &v58);
      }
      sub_182CBA0(v44, &v54);
      v28 = v48[1];
      if ( !v28 )
      {
        sub_16669E0(v48);
        v28 = v48[1];
      }
      sub_166A700(v28, (unsigned int)&v56, 0, v25, v26, v27);
      sub_15E1B70(*v24);
      sub_25A130((char *)&v56);
      v29 = *(_QWORD **)*a1;
      v45 = v29;
      if ( !v29[1] )
      {
        sub_16669E0(v29);
        v45 = *(_QWORD **)*a1;
      }
      v30 = qword_1C7F2C0;
      v57 = 0;
      v58 = 2;
      v56 = 0xFFFFFFFFLL;
      v59 = 0;
      v54 = 0;
      v55 = 0;
      sub_1832C70(qword_1C7F2C0, &v56, &v58, &v54);
      if ( (v54 & 0x100000000LL) != 0 || (_DWORD)v54 != 1 )
      {
        sub_1833EB0(v30, &v56, &v54, &v56);
        sub_1833EB0(v30, &v58, &v54, &v58);
      }
      sub_182CBA0(v30, &v54);
      v34 = v45[1];
      if ( !v34 )
      {
        sub_16669E0(v45);
        v34 = v45[1];
      }
      sub_166A700(v34, (unsigned int)&v56, 0, v31, v32, v33);
      sub_15E1B70(*v29);
      sub_25A130((char *)&v56);
      sub_15E1B70(**(_QWORD **)*a1);
      sub_15E1B70(**(_QWORD **)*a1);
      sub_15E1B70(**(_QWORD **)*a1);
      sub_15E1A70(**(_QWORD **)*a1);
      sub_15E1B70(**(_QWORD **)*a1);
      sub_15E1B70(**(_QWORD **)*a1);
      sub_15E1B70(**(_QWORD **)*a1);
      sub_15E1A70(**(_QWORD **)*a1);
      sub_15E1B70(**(_QWORD **)*a1);
      sub_15E1A70(**(_QWORD **)*a1);
      sub_15E1B70(**(_QWORD **)*a1);
      v35 = sub_15E1B70(**(_QWORD **)*a1);
      v53 = v35;
      if ( v35 )
        ++*(_DWORD *)(v35 + 8);
      sub_C28530(a1 + 13, &v53);
      sub_C2BA80(a1, *a5);
      if ( *(_BYTE *)(*a1 + 19) )
      {
        sub_15E1A70(**(_QWORD **)*a1);
        sub_15E1B70(**(_QWORD **)*a1);
        sub_15E1B70(**(_QWORD **)*a1);
        v36 = sub_15E1B70(**(_QWORD **)*a1);
        v54 = v36;
        if ( v36 )
          ++*(_DWORD *)(v36 + 8);
        sub_C28530(a1 + 13, &v54);
        sub_C2BA80(a1, *a5);
        sub_15E1A70(**(_QWORD **)*a1);
        sub_15E1B70(**(_QWORD **)*a1);
        sub_15E1B70(**(_QWORD **)*a1);
        v37 = sub_15E1B70(**(_QWORD **)*a1);
        v56 = v37;
        if ( v37 )
          ++*(_DWORD *)(v37 + 8);
        sub_C28530(a1 + 13, &v56);
        sub_C2BA80(a1, *a5);
      }
    }
    if ( v11 )
    {
      if ( (*(_DWORD *)(v11 + 8))-- == 1 )
        sub_15D7BC0(*(_QWORD *)v46, v11);
    }
    return 4;
  }
  return result;
}

