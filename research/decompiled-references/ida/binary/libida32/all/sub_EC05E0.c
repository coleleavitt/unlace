__int64 __fastcall sub_EC05E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // r9
  char v9; // al
  char *v10; // rsi
  unsigned __int64 v11; // r12
  __int64 v12; // rbp
  signed __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  _DWORD *v17; // rdi
  __int64 v18; // r13
  __int64 (*v19)(); // rdx
  __int64 (*v20)(); // rax
  char v21; // r12
  char *v22; // r14
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rcx
  bool v28; // zf
  unsigned __int64 v29; // r12
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  char *v34; // rbx
  unsigned __int64 v35; // rax
  __int64 v36; // rdi
  signed __int64 v37; // rbx
  signed __int64 v38; // rax
  __int64 v39; // rdi
  char v40; // al
  unsigned __int64 v42; // rax
  __int64 v43; // r14
  __int64 v44; // rdx
  int v45; // eax
  unsigned __int64 v46; // r12
  signed __int64 v47; // rbx
  signed __int64 v48; // rbx
  char *v49; // r14
  signed __int64 v50; // rbx
  signed __int64 v51; // rax
  _DWORD *v52; // rax
  char v53; // al
  unsigned __int64 v54; // rax
  _BOOL8 v55; // rsi
  __int64 v56; // [rsp+8h] [rbp-60h]
  __int64 v57; // [rsp+10h] [rbp-58h]
  signed __int64 *v58; // [rsp+18h] [rbp-50h]
  char v59; // [rsp+27h] [rbp-41h]
  __int64 v60; // [rsp+28h] [rbp-40h]

  v58 = sub_EBA840(*(_QWORD *)a1, *(char **)a2, a3, a4, a5, a6);
  v9 = *(_BYTE *)(a1 + 200);
  if ( (v9 & 1) != 0 )
  {
    v10 = *(char **)a2;
    v59 = *(_BYTE *)(a2 + 8);
    if ( v59 )
    {
      v46 = sub_EB5290(a1 + 728, (__int64)v10);
      if ( v46 == sub_EB5260(a1 + 728) )
      {
        v12 = 0;
        v59 = 0;
      }
      else
      {
        v12 = *(_QWORD *)(v46 + 8);
      }
    }
    else
    {
      v11 = sub_EB5290(a1 + 704, (__int64)v10);
      if ( v11 == sub_EB5260(a1 + 704) )
      {
        v12 = 0;
      }
      else
      {
        v59 = 1;
        v12 = *(_QWORD *)(v11 + 8);
      }
    }
    v9 = *(_BYTE *)(a1 + 200);
  }
  else
  {
    v59 = 0;
    v12 = 0;
  }
  v13 = v58[9];
  v14 = *(_QWORD *)(v13 + 8);
  v15 = *(_QWORD *)(v13 + 16);
  v16 = *(_QWORD *)a1;
  v57 = v14;
  v17 = *(_DWORD **)(*(_QWORD *)a1 + 17448LL);
  if ( (v9 & 4) == 0 )
  {
    v18 = v14;
    goto LABEL_11;
  }
  if ( *(_BYTE *)(*(_QWORD *)(v16 + 2320) + 212LL) <= 0x2Fu )
  {
    v56 = 1;
    v18 = 1;
    goto LABEL_12;
  }
  v45 = v17[65];
  if ( v17[62] != 38 || v17[64] != 3 || (v18 = 1, (unsigned int)(v45 - 24) > 1) )
  {
    v18 = 1;
    if ( v45 != 20 )
      v18 = v14;
  }
  if ( v17[62] != 38 || v17[64] != 3 || (v56 = 1, (unsigned int)(v45 - 24) > 1) )
  {
    v56 = 1;
    if ( v45 != 20 )
LABEL_11:
      v56 = v15;
  }
LABEL_12:
  v19 = sub_A321E0;
  v20 = *(__int64 (**)())(*(_QWORD *)v17 + 832LL);
  if ( v20 == sub_A321E0 || (v60 = v15, (v21 = v20()) == 0) )
  {
    v21 = 0;
  }
  else
  {
    v49 = *(char **)a2;
    sub_6E4DB0(
      (__int64 *)(*(_QWORD *)(*(_QWORD *)a2 + 104LL) + 96LL),
      *(_QWORD *)(*(_QWORD *)a2 + 104LL),
      (__int64)v19,
      v14,
      v15,
      v8);
    v15 = v60;
    if ( (*(_BYTE *)(*((_QWORD *)v49 + 16) + 1LL) & 2) != 0 || *(_BYTE *)(a1 + 267) )
    {
      v14 = v56;
      if ( (*(_BYTE *)(a1 + 200) & 0x20) == 0 )
      {
        v15 = v57;
        v14 = v18;
      }
      v57 = v15;
      v56 = v14;
    }
    else
    {
      *(_BYTE *)(a1 + 267) = 1;
      v57 = v60;
    }
  }
  v22 = *(char **)a2;
  sub_6E4DB0(
    (__int64 *)(*(_QWORD *)(*(_QWORD *)a2 + 104LL) + 96LL),
    *(_QWORD *)(*(_QWORD *)a2 + 104LL),
    (__int64)v19,
    v14,
    v15,
    v8);
  if ( (*(_BYTE *)(*((_QWORD *)v22 + 16) + 1LL) & 2) != 0
    && (!v59 || !v12)
    && (unsigned __int8)sub_EC0570(*(__int64 **)(a1 + 8), a2, 0, v23, v24, v25) )
  {
    v50 = *v58;
    v51 = sub_A742B0(*(_QWORD *)a1, *(_QWORD *)(a1 + 16));
    if ( v50 > v51 )
      v51 = v50;
    *(_QWORD *)(a1 + 16) = sub_A74320(*(_QWORD *)a1, v51);
    v52 = *(_DWORD **)(*(_QWORD *)a1 + 17448LL);
    if ( v52[62] == 38 && v52[64] == 3 && (unsigned int)(v52[65] - 24) <= 1 )
    {
      return 0;
    }
    else
    {
      v53 = *(_BYTE *)(a1 + 200);
      if ( (v53 & 0x10) == 0 && (v53 & 3) != 1 )
      {
        if ( v18 > *(_QWORD *)(a1 + 24) )
          *(_QWORD *)(a1 + 24) = v18;
        if ( *(_QWORD *)(a1 + 40) < v57 )
          *(_QWORD *)(a1 + 40) = v57;
        if ( v56 > *(_QWORD *)(a1 + 32) )
          *(_QWORD *)(a1 + 32) = v56;
      }
      return 0;
    }
  }
  else
  {
    v26 = *(_QWORD *)(a1 + 208);
    if ( v26 )
    {
      v27 = v56;
      if ( v18 > v26 )
        v18 = *(_QWORD *)(a1 + 208);
      if ( v56 > v26 )
        v27 = *(_QWORD *)(a1 + 208);
      v56 = v27;
      v23 = v57;
      if ( v57 <= v26 )
        v26 = v57;
      v57 = v26;
    }
    v28 = v21 == 0;
    v29 = v56;
    if ( v28 )
      v29 = v18;
    if ( v59 )
    {
      sub_EC0570(*(__int64 **)(a1 + 8), a2, v12, v23, v24, v25);
      if ( (*(_BYTE *)(a1 + 200) & 2) != 0 )
      {
        v54 = sub_A742B0(*(_QWORD *)a1, *(_QWORD *)(a1 + 216));
        v55 = v54 != 0;
        v30 = (v54 - v55) % v29;
        if ( (__int64)((v55 + (v54 - v55) / v29) * v29) > v12 )
        {
          *(_QWORD *)(a1 + 24) = 1;
          *(_BYTE *)(a1 + 200) &= ~2u;
        }
      }
    }
    else
    {
      v42 = sub_A742B0(*(_QWORD *)a1, *(_QWORD *)(a1 + 216));
      v32 = v29 * ((v42 - (v42 != 0)) / v29 + (v42 != 0));
      v43 = v32;
      do
      {
        v44 = v43;
        v12 = v43;
        v43 += v29;
      }
      while ( !(unsigned __int8)sub_EC0570(*(__int64 **)(a1 + 8), a2, v44, v31, v32, v33) );
    }
    v34 = *(char **)a2;
    sub_6E4DB0((__int64 *)(*((_QWORD *)v34 + 13) + 96LL), *((_QWORD *)v34 + 13), v30, v31, v32, v33);
    if ( (*(_BYTE *)(*((_QWORD *)v34 + 16) + 1LL) & 2) != 0 )
    {
      v47 = *v58;
      v38 = sub_A742B0(*(_QWORD *)a1, *(_QWORD *)(a1 + 16));
      v39 = *(_QWORD *)a1;
      v48 = v12 + v47;
      if ( v48 > v38 )
        v38 = v48;
    }
    else
    {
      v35 = sub_A74320(*(_QWORD *)a1, v12 + *(_QWORD *)v58[9]);
      v36 = *(_QWORD *)a1;
      *(_QWORD *)(a1 + 216) = v35;
      v37 = sub_A742B0(v36, v35);
      v38 = sub_A742B0(*(_QWORD *)a1, *(_QWORD *)(a1 + 16));
      v39 = *(_QWORD *)a1;
      if ( v38 < v37 )
        v38 = v37;
    }
    *(_QWORD *)(a1 + 16) = sub_A74320(v39, v38);
    if ( v18 > *(_QWORD *)(a1 + 48) )
      *(_QWORD *)(a1 + 48) = v18;
    v40 = *(_BYTE *)(a1 + 200);
    if ( (v40 & 0x10) == 0 && (v40 & 3) != 1 )
    {
      if ( v18 > *(_QWORD *)(a1 + 24) )
        *(_QWORD *)(a1 + 24) = v18;
      if ( v57 > *(_QWORD *)(a1 + 40) )
        *(_QWORD *)(a1 + 40) = v57;
      if ( *(_QWORD *)(a1 + 32) < v56 )
        *(_QWORD *)(a1 + 32) = v56;
    }
    return v12;
  }
}

