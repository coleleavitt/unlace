__int64 *__fastcall sub_9ACA50(__int64 *a1, _QWORD *a2, unsigned int a3)
{
  __int64 v3; // r13
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // r13
  void *v9; // rdi
  int v10; // eax
  _DWORD *v11; // rax
  _DWORD *v12; // rax
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  bool v16; // r12
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rbp
  void *v26; // rbp
  int v28; // edx
  __int64 v29; // rdx
  char v30; // cl
  __int64 v31; // rdx
  _DWORD *v32; // rax
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  bool v36; // r12
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // r12
  __int64 v40; // [rsp+8h] [rbp-80h]
  void *v41; // [rsp+8h] [rbp-80h]
  __int64 v42; // [rsp+10h] [rbp-78h] BYREF
  __int64 v43; // [rsp+18h] [rbp-70h]
  __int64 v44; // [rsp+20h] [rbp-68h] BYREF
  __int64 v45; // [rsp+28h] [rbp-60h]
  int v46; // [rsp+30h] [rbp-58h] BYREF
  char v47; // [rsp+34h] [rbp-54h]
  __int64 v48; // [rsp+38h] [rbp-50h]
  int v49; // [rsp+40h] [rbp-48h]
  char v50; // [rsp+44h] [rbp-44h]
  __int64 v51; // [rsp+48h] [rbp-40h]

  v3 = a3;
  v6 = a2[3];
  v7 = sub_999800((__int64)a2, a3);
  v8 = **(_QWORD **)(a2[4] + 8 * v3);
  a1[1] = v6;
  *a1 = 0;
  v42 = 0;
  v43 = 0;
  v9 = qword_1C7F2C0;
  v44 = 1;
  v45 = 0;
  if ( (*(_BYTE *)(v7 + 4) & 1) != 0 )
  {
    v41 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, &v42, v7);
    v9 = v41;
  }
  else
  {
    LODWORD(v42) = *(_DWORD *)v7;
  }
  if ( (*(_BYTE *)(v7 + 20) & 1) != 0 )
  {
    sub_182C690(v9, &v44, v7 + 16);
  }
  else
  {
    v10 = *(_DWORD *)(v7 + 16);
    BYTE4(v44) &= ~1u;
    LODWORD(v44) = v10;
  }
  v11 = *(_DWORD **)(sub_15D1F10(v8) + 24);
  if ( v11 && *v11 == 5 && v11[1] == 1 )
  {
    if ( (v44 & 0x100000000LL) == 0 && (_DWORD)v44 == 1 )
    {
      sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)&v42, (__int64)&qword_1C7F280, (__int64)&v42);
    }
    else
    {
      sub_992CA0((__int64)&v46, (__int64)&v42);
      v28 = v46;
      v46 = v42;
      LODWORD(v42) = v28;
      v29 = v48;
      v48 = v43;
      v43 = v29;
      v30 = v47 & 1;
      LOBYTE(v29) = BYTE4(v42) & 0xFC | v47 & 2;
      v47 = BYTE4(v42) & 1 | v47 & 0xFC | BYTE4(v42) & 2;
      BYTE4(v42) = v30 | v29;
      LODWORD(v29) = v49;
      v49 = v44;
      LODWORD(v44) = v29;
      v31 = v51;
      v51 = v45;
      v45 = v31;
      LOBYTE(v31) = v50 & 1 | BYTE4(v44) & 0xFC | v50 & 2;
      v50 = BYTE4(v44) & 1 | v50 & 0xFC | BYTE4(v44) & 2;
      BYTE4(v44) = v31;
      sub_25A130((char *)&v46);
    }
    v32 = *(_DWORD **)(sub_15D1F10(v8) + 24);
    v36 = 0;
    if ( v32 && *v32 == 5 )
      v36 = v32[1] == 1;
    v37 = a2[44];
    if ( !v37 )
    {
      sub_16669E0(a2 + 43);
      v37 = a2[44];
    }
    v38 = sub_166A700(v37, (unsigned int)&v42, v36, v33, v34, v35);
    v39 = v38;
    if ( v38 )
      ++*(_DWORD *)(v38 + 8);
    sub_98B270(*a1, a1[1]);
    *a1 = v39;
    v24 = sub_15E1B70(a2[43]);
  }
  else
  {
    v12 = *(_DWORD **)(sub_15D1F10(v8) + 24);
    if ( v12 )
    {
      v16 = 0;
      if ( *v12 == 5 )
        v16 = v12[1] == 1;
    }
    else
    {
      v16 = 0;
    }
    v17 = a2[44];
    if ( !v17 )
    {
      sub_16669E0(a2 + 43);
      v17 = a2[44];
    }
    v18 = sub_166A700(v17, (unsigned int)&v42, v16, v13, v14, v15);
    v19 = v18;
    if ( v18 )
      ++*(_DWORD *)(v18 + 8);
    v20 = *a1;
    if ( *a1 )
    {
      v21 = a1[1];
      if ( (*(_DWORD *)(v20 + 8))-- == 1 )
      {
        v40 = v18;
        sub_15D7BC0(v21, v20);
        v19 = v40;
      }
    }
    v23 = a2[43];
    *a1 = v19;
    v24 = sub_15E1B70(v23);
  }
  v25 = v24;
  if ( v24 )
    ++*(_DWORD *)(v24 + 8);
  sub_98B270(*a1, a1[1]);
  *a1 = v25;
  v26 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v42);
  sub_182CBA0(v26, &v44);
  return a1;
}

