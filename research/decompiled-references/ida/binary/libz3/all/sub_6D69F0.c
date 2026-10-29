__int64 __fastcall sub_6D69F0(__int64 a1, __int64 *a2, __int64 *a3, unsigned __int64 *a4)
{
  unsigned int v8; // r13d
  __int64 v10; // rax
  __int64 v11; // rsi
  _DWORD *v12; // rax
  __int64 v13; // r9
  unsigned __int64 v14; // r10
  int v15; // ecx
  int v16; // eax
  int v17; // esi
  int v18; // edx
  int v19; // eax
  __int64 *v20; // rcx
  int v21; // esi
  __int64 v22; // rax
  unsigned int v23; // edx
  __int64 *v24; // rdi
  __int64 v25; // rdx
  __int64 *v26; // r8
  __int64 *i; // rax
  __int64 v28; // rdx
  _QWORD *v29; // rsi
  __int64 v30; // rdx
  unsigned int v31; // ecx
  __int64 v32; // rax
  unsigned __int8 v33; // di
  int v34; // edx
  char v35; // al
  void *v36; // rdi
  int v37; // edx
  __int64 v38; // rdx
  char v39; // cl
  char v40; // si
  __int64 v41; // rax
  char v42; // cl
  __int64 (__fastcall *v43)(__int64, __int64 *, __int64, __int64 *, __int64 *); // rax
  unsigned int v44; // eax
  void *v45; // rbx
  void *v46; // rbx
  void *v47; // rbx
  unsigned __int64 v48; // rax
  void *v49; // [rsp+18h] [rbp-D0h]
  int v50; // [rsp+24h] [rbp-C4h] BYREF
  _BYTE v51[8]; // [rsp+28h] [rbp-C0h] BYREF
  int v52[2]; // [rsp+30h] [rbp-B8h] BYREF
  int v53[2]; // [rsp+38h] [rbp-B0h]
  void *v54; // [rsp+40h] [rbp-A8h] BYREF
  int v55[2]; // [rsp+48h] [rbp-A0h]
  int v56[2]; // [rsp+50h] [rbp-98h] BYREF
  int v57[2]; // [rsp+58h] [rbp-90h]
  int v58[2]; // [rsp+60h] [rbp-88h] BYREF
  char v59[8]; // [rsp+68h] [rbp-80h]
  __int64 v60; // [rsp+70h] [rbp-78h] BYREF
  int v61[2]; // [rsp+78h] [rbp-70h]
  int v62[2]; // [rsp+80h] [rbp-68h] BYREF
  int v63[2]; // [rsp+88h] [rbp-60h]
  int v64[2]; // [rsp+90h] [rbp-58h] BYREF
  int v65[2]; // [rsp+98h] [rbp-50h]
  int v66[2]; // [rsp+A0h] [rbp-48h] BYREF
  char v67[8]; // [rsp+A8h] [rbp-40h]

  v8 = sub_6D5CC0(a1, a2, *a4);
  if ( !(_BYTE)v8 )
    return v8;
  v10 = sub_15D1F10(*a2);
  v11 = *a3;
  v12 = *(_DWORD **)(v10 + 24);
  if ( v12 && *v12 == 5 && !v12[1] )
  {
    sub_6C63F0(a1, a2, *a3, (__int64 *)a4);
    return v8;
  }
  *(_QWORD *)v64 = 0;
  sub_1360C00(v51, v11, v64);
  sub_18572D0(v64);
  v13 = *a2;
  v14 = *a4;
  v15 = *(_DWORD *)(*a2 + 12);
  v16 = (*(_DWORD *)(*a4 + 12) - v15) ^ (v15 << 8);
  v17 = (v15 - v16) << 10;
  v18 = v16 ^ ((v15 - v16) << 16);
  v19 = v16 - v15;
  v20 = *(__int64 **)(a1 + 808);
  v21 = (v18 + v19) ^ v17;
  v22 = *(unsigned int *)(a1 + 816);
  v23 = v22 - 1;
  v22 *= 32;
  v24 = (__int64 *)((char *)v20 + v22);
  v25 = 32LL * (v21 & v23);
  v26 = &v20[(unsigned __int64)v25 / 8];
  if ( v25 != v22 )
  {
    for ( i = &v20[(unsigned __int64)v25 / 8]; v24 != i; i += 4 )
    {
      v28 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *((_DWORD *)i + 6) == v21 && v13 == v28 && v14 == i[1] )
          goto LABEL_14;
      }
      else if ( !v28 )
      {
        goto LABEL_12;
      }
    }
  }
  if ( v20 == v26 )
  {
LABEL_12:
    sub_1872CE0("");
    sub_1873130(114, 2182);
  }
  while ( 1 )
  {
    v48 = *v20;
    if ( (unsigned __int64)*v20 > 1 )
      break;
    if ( !v48 )
      goto LABEL_12;
LABEL_34:
    v20 += 4;
    if ( v26 == v20 )
      goto LABEL_12;
  }
  if ( *((_DWORD *)v20 + 6) != v21 || v13 != v48 || v14 != v20[1] )
    goto LABEL_34;
  i = v20;
LABEL_14:
  v29 = (_QWORD *)i[2];
  v30 = v29[9];
  if ( v30 )
    v31 = *(_DWORD *)(v30 - 4);
  else
    v31 = 0;
  v32 = v29[11];
  if ( v32 )
    v33 = v31 < *(_DWORD *)(v32 - 4);
  else
    v33 = 0;
  *(_QWORD *)v52 = 0;
  *(_QWORD *)v53 = 0;
  v54 = (char *)&dword_0 + 1;
  *(_QWORD *)v55 = 0;
  *(_QWORD *)v56 = 0;
  *(_QWORD *)v57 = 0;
  *(_QWORD *)v58 = 1;
  *(_QWORD *)v59 = 0;
  v60 = 0;
  *(_QWORD *)v61 = 0;
  *(_QWORD *)v62 = 1;
  *(_QWORD *)v63 = 0;
  if ( v30 )
    v34 = *(_DWORD *)(v30 - 4);
  else
    v34 = 0;
  if ( v32 )
    v34 += *(_DWORD *)(v32 - 4);
  v50 = v34;
  v35 = sub_6C3A00(a1, v33, v29, (__int64)v51, (__int64)v52, &v50);
  *(_QWORD *)v64 = 0;
  *(_QWORD *)v66 = 1;
  v36 = qword_1C7F2C0;
  *(_QWORD *)v65 = 0;
  *(_QWORD *)v67 = 0;
  if ( v35 )
  {
    if ( v50 + 1 < 0 )
    {
      v49 = qword_1C7F2C0;
      sub_1830C40(qword_1C7F2C0, v64, (unsigned int)(v50 + 1));
      v36 = v49;
    }
    else
    {
      v64[0] = v50 + 1;
    }
  }
  sub_182CBA0(v36, v66);
  v37 = v64[0];
  v64[0] = v56[0];
  v56[0] = v37;
  v38 = *(_QWORD *)v65;
  *(_QWORD *)v65 = *(_QWORD *)v57;
  *(_QWORD *)v57 = v38;
  v39 = v64[1] & 1;
  LOBYTE(v38) = v56[1] & 0xFC | v64[1] & 2;
  LOBYTE(v64[1]) = v56[1] & 1 | v64[1] & 0xFC | v56[1] & 2;
  LOBYTE(v56[1]) = v39 | v38;
  v40 = v58[1] & 2;
  v66[0] = v58[0];
  v41 = *(_QWORD *)v59;
  *(_QWORD *)v59 = *(_QWORD *)v67;
  *(_QWORD *)v67 = v41;
  v58[0] = 1;
  v42 = v58[1] & 1;
  LOBYTE(v58[1]) = v58[1] & 0xFC | v66[1] & 2;
  LOBYTE(v66[1]) = v42 | v40 | v66[1] & 0xFC;
  sub_25A130((char *)v64);
  (*(void (__fastcall **)(__int64, __int64 *, unsigned __int64, int *))(*(_QWORD *)a1 + 24LL))(a1, a2, *a4, v56);
  v43 = *(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64 *, __int64 *))(*(_QWORD *)a1 + 32LL);
  if ( v43 == sub_6D1450 )
  {
    v44 = sub_182D020(qword_1C7F2C0, v56);
    if ( !(unsigned __int8)sub_6C5D80(a1, *a2, *a4, v44, (__int64 *)a4) )
    {
      sub_1872CE0("");
      sub_1873130(114, 1660);
    }
  }
  else
  {
    v43(a1, a2, (__int64)v56, (__int64 *)a4, nullptr);
  }
  v45 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v60);
  sub_182CBA0(v45, v62);
  v46 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v56);
  sub_182CBA0(v46, v58);
  v47 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v52);
  sub_182CBA0(v47, &v54);
  sub_13606C0(v51);
  return v8;
}

