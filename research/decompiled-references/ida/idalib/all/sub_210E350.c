void __fastcall sub_210E350(__int64 a1, unsigned __int8 a2, __int64 *a3, __int64 *a4, _QWORD *a5)
{
  __int64 v5; // rbx
  __int64 v6; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  void *v13; // rax
  _QWORD *v14; // r9
  _QWORD *v15; // r10
  __int64 v16; // rax
  char v17; // r11
  unsigned __int64 v18; // r8
  __int64 v19; // r14
  _QWORD *v20; // rax
  __int64 v21; // r12
  __int128 v22; // xmm0
  char v23; // al
  void *v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // r14
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdi
  __int64 (*v32)(); // rax
  __int64 v33; // rax
  char v34; // al
  __int64 v35; // rdi
  bool v36; // zf
  __int64 v37; // rdx
  __int64 v39; // [rsp+8h] [rbp-A0h]
  _QWORD *v40; // [rsp+8h] [rbp-A0h]
  bool v41; // [rsp+25h] [rbp-83h]
  bool v42; // [rsp+26h] [rbp-82h]
  char v43; // [rsp+27h] [rbp-81h]
  char v44; // [rsp+27h] [rbp-81h]
  char v45; // [rsp+27h] [rbp-81h]
  unsigned __int64 v46; // [rsp+28h] [rbp-80h]
  unsigned __int64 v47; // [rsp+28h] [rbp-80h]
  unsigned __int64 v48; // [rsp+28h] [rbp-80h]
  _QWORD *v49; // [rsp+30h] [rbp-78h]
  _QWORD *v50; // [rsp+30h] [rbp-78h]
  _QWORD *v51; // [rsp+30h] [rbp-78h]
  _QWORD *v52; // [rsp+38h] [rbp-70h]
  _QWORD *v53; // [rsp+38h] [rbp-70h]
  _QWORD *v54; // [rsp+38h] [rbp-70h]
  char v55[4]; // [rsp+4Ch] [rbp-5Ch] BYREF
  __int128 v56; // [rsp+50h] [rbp-58h] BYREF
  __int64 v57; // [rsp+60h] [rbp-48h]
  int v58; // [rsp+68h] [rbp-40h]

  v5 = *a3;
  if ( !*a3 )
    return;
  v6 = *a4;
  if ( !*a4 )
    return;
  if ( !*(_QWORD *)v5 )
  {
    if ( (*(_BYTE *)(v5 + 9) & 0x70) != 0x20 )
      return;
    if ( (*(_BYTE *)(v5 + 8) & 0x40) != 0 )
      return;
    v13 = sub_210D700(*(_QWORD *)(v5 + 24));
    *(_QWORD *)v5 = v13;
    if ( !v13 )
      return;
  }
  if ( !*(_QWORD *)v6 )
  {
    if ( (*(_BYTE *)(v6 + 9) & 0x70) != 0x20 )
      return;
    if ( (*(_BYTE *)(v6 + 8) & 0x40) != 0 )
      return;
    v24 = sub_210D700(*(_QWORD *)(v6 + 24));
    *(_QWORD *)v6 = v24;
    if ( !v24 )
      return;
  }
  if ( !(unsigned __int8)sub_2112E10(*(_QWORD *)(a1 + 24), v5, v6, a2) )
    return;
  v14 = *(_QWORD **)v5;
  if ( !*(_QWORD *)v5 && (*(_BYTE *)(v5 + 9) & 0x70) == 0x20 && (*(_BYTE *)(v5 + 8) & 0x40) == 0 )
  {
    v14 = sub_210D700(*(_QWORD *)(v5 + 24));
    *(_QWORD *)v5 = v14;
  }
  v15 = *(_QWORD **)v6;
  if ( !*(_QWORD *)v6 )
  {
    v40 = v14;
    if ( (*(_BYTE *)(v6 + 9) & 0x70) != 0x20 || (*(_BYTE *)(v6 + 8) & 0x40) != 0 )
      BUG();
    v25 = sub_210D700(*(_QWORD *)(v6 + 24));
    v14 = v40;
    v15 = v25;
    *(_QWORD *)v6 = v25;
  }
  v16 = v14[1];
  if ( v16 != v15[1] )
    return;
  v17 = *(_BYTE *)(a1 + 32);
  if ( !v17 || !a2 && (*(_BYTE *)(v16 + 48) & 0x20) != 0 )
  {
    if ( (*(_BYTE *)(v5 + 9) & 0x70) == 0x20 || (*(_BYTE *)(v6 + 9) & 0x70) == 0x20 )
      return;
    v18 = *(_QWORD *)(v6 + 24);
    v39 = *(_QWORD *)(v5 + 24);
    if ( v15 == v14 )
      v41 = v18 > *(_QWORD *)(v5 + 24);
    else
      v41 = *((_DWORD *)v14 + 6) < *((_DWORD *)v15 + 6);
    v19 = v39 - v18;
    if ( v41 )
    {
      v39 = *(_QWORD *)(v6 + 24);
      v18 = *(_QWORD *)(v5 + 24);
      v20 = v14;
      v19 = -v19;
      v14 = v15;
      v15 = v20;
    }
    v21 = (__int64)v15;
    v42 = 0;
    v22 = 0;
    while ( 1 )
    {
      v23 = *(_BYTE *)(v21 + 28);
      if ( !v23 )
        break;
      if ( v23 == 1 )
      {
        if ( (*(_BYTE *)(v21 + 29) & 4) != 0 )
          return;
        if ( v14 == (_QWORD *)v21 )
          goto LABEL_31;
        if ( !*(_BYTE *)(a1 + 33) )
          return;
LABEL_23:
        v19 += (unsigned int)(*(_DWORD *)(v21 + 36) - *(_DWORD *)(v21 + 32));
        goto LABEL_24;
      }
      if ( v14 == (_QWORD *)v21 )
        goto LABEL_31;
      if ( v23 == 2 )
      {
        if ( !v17 || (*(_BYTE *)(v21 + 30) & 1) == 0 )
          return;
        v31 = *(_QWORD *)(a1 + 8);
        v32 = *(__int64 (**)())(*(_QWORD *)v31 + 64LL);
        if ( v32 == sub_20FDBC0
          || (v53 = v14,
              v50 = v15,
              v47 = v18,
              v44 = v17,
              v34 = ((__int64 (__fastcall *)(__int64, __int64, char *, double))v32)(v31, v21, v55, *(double *)&v22),
              v22 = 0,
              v18 = v47,
              v15 = v50,
              v17 = v44,
              v14 = v53,
              !v34) )
        {
          v52 = v14;
          v49 = v15;
          v46 = v18;
          v43 = v17;
          v33 = sub_20FED60(a1, v21);
          v22 = 0;
          v17 = v43;
          v18 = v46;
          v19 += v33;
          v15 = v49;
          v14 = v52;
          goto LABEL_24;
        }
        v23 = *(_BYTE *)(v21 + 28);
      }
      if ( v23 != 3 )
        return;
      v35 = *(_QWORD *)(v21 + 40);
      v56 = v22;
      v57 = 0;
      v36 = *(_BYTE *)v35 == 1;
      v58 = 0;
      if ( v36 )
      {
        v37 = *(_QWORD *)(v35 + 16);
      }
      else
      {
        v54 = v14;
        v51 = v15;
        v48 = v18;
        v45 = v17;
        if ( !(unsigned __int8)sub_210D940(v35, (__int64 *)&v56, nullptr, 0) )
          return;
        v22 = 0;
        v17 = v45;
        v18 = v48;
        v15 = v51;
        v14 = v54;
        if ( v56 != 0 || v58 )
          return;
        v37 = v57;
      }
      v19 += v37 * *(unsigned __int8 *)(v21 + 30);
LABEL_24:
      v21 = *(_QWORD *)v21;
      if ( !v21 )
        return;
    }
    if ( (*(_BYTE *)(v21 + 29) & 4) != 0 )
    {
      if ( v15 != (_QWORD *)v21 || *((_DWORD *)v15 + 9) - *((_DWORD *)v15 + 8) != v18 )
      {
        if ( v14 != (_QWORD *)v21 || v39 == *((_DWORD *)v14 + 9) - *((_DWORD *)v14 + 8) || v42 )
          return;
LABEL_31:
        if ( v41 )
          v19 = -v19;
LABEL_33:
        *a5 += v19;
        goto LABEL_34;
      }
      if ( v14 == v15 )
        goto LABEL_31;
      v42 = (*(_BYTE *)(v21 + 29) & 4) != 0;
    }
    else if ( v14 == (_QWORD *)v21 )
    {
      goto LABEL_31;
    }
    goto LABEL_23;
  }
  if ( v15 != v14 || (*(_BYTE *)(v5 + 9) & 0x70) == 0x20 || (*(_BYTE *)(v6 + 9) & 0x70) == 0x20 )
  {
    v26 = sub_20FE9A0(a1, v5, v10, v11, v12, (__int64)v14);
    v19 = v26 - sub_20FE9A0(a1, v6, v27, v28, v29, v30);
    goto LABEL_33;
  }
  *a5 += *(_QWORD *)(v5 + 24) - *(_QWORD *)(v6 + 24);
LABEL_34:
  if ( (unsigned __int8)sub_20FE800(a1, v5) )
    *a5 |= 1uLL;
  *a4 = 0;
  *a3 = 0;
}
