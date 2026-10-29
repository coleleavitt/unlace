_QWORD *__fastcall sub_A755C0(__int64 a1, unsigned int *a2, _QWORD *a3)
{
  int v4; // edx
  unsigned int v5; // r15d
  __int64 v6; // r12
  _QWORD *v7; // rax
  __int64 v8; // rdi
  char v9; // dl
  int v10; // r14d
  __int64 v11; // r13
  unsigned __int64 v12; // rbp
  int *v13; // rbp
  unsigned __int64 v14; // r14
  int v15; // eax
  void *v16; // rbp
  void *v17; // rbp
  __int64 v18; // rax
  _DWORD *v19; // r12
  _DWORD *v20; // r13
  unsigned int v21; // edx
  _DWORD *v22; // r9
  __int64 v23; // rdx
  _DWORD *v24; // rbp
  unsigned int v25; // r15d
  unsigned int v26; // r15d
  unsigned int v27; // r12d
  _DWORD *v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rax
  _DWORD *v31; // rax
  char v32; // al
  unsigned int v34; // ebp
  _DWORD *v35; // rax
  __int64 v36; // rdi
  _DWORD *v37; // rax
  __int64 v38; // rax
  bool v39; // dl
  __int64 v40; // rax
  char v41; // dl
  char v42; // si
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r13
  __int64 v46; // r12
  _DWORD *v47; // rbp
  _DWORD *v48; // r14
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  unsigned int v53; // eax
  _DWORD *v54; // [rsp+8h] [rbp-A0h]
  _DWORD *v56; // [rsp+18h] [rbp-90h]
  _DWORD *v57; // [rsp+18h] [rbp-90h]
  bool v58; // [rsp+18h] [rbp-90h]
  bool v59; // [rsp+18h] [rbp-90h]
  _DWORD *v61; // [rsp+28h] [rbp-80h]
  _QWORD v62[2]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v63[2]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v64[2]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v65[9]; // [rsp+60h] [rbp-48h] BYREF

  v4 = *(_DWORD *)(a1 + 24);
  v5 = 2 * v4;
  if ( 3 * v4 < (unsigned int)(4 * (*(_DWORD *)(a1 + 28) + *(_DWORD *)(a1 + 32))) )
  {
    v43 = sub_186B270(8LL * v5);
    v44 = 8LL * v5;
    v45 = v43;
    v46 = v43 + v44;
    if ( v5 )
    {
      if ( ((8 * (_BYTE)v5) & 8) == 0 || (*(_DWORD *)(v43 + 4) = 0x80000000, v43 += 8, v43 != v46) )
      {
        do
        {
          *(_DWORD *)(v43 + 4) = 0x80000000;
          v43 += 16;
          *(_DWORD *)(v43 - 4) = 0x80000000;
        }
        while ( v43 != v46 );
      }
    }
    v47 = *(_DWORD **)(a1 + 16);
    v48 = &v47[2 * *(unsigned int *)(a1 + 24)];
    if ( v47 != v48 )
    {
      do
      {
        while ( v47[1] + 0x80000000 <= 1 )
        {
          v47 += 2;
          if ( v48 == v47 )
            goto LABEL_61;
        }
        v49 = 8LL * (*v47 & (v5 - 1));
        v50 = v45 + v49;
        if ( v44 == v49 )
        {
LABEL_65:
          if ( v45 == v50 )
          {
LABEL_73:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v51 = v45;
          while ( *(_DWORD *)(v51 + 4) != 0x80000000 )
          {
            v51 += 8;
            if ( v50 == v51 )
              goto LABEL_73;
          }
        }
        else
        {
          v51 = v45 + v49;
          while ( *(_DWORD *)(v51 + 4) != 0x80000000 )
          {
            v51 += 8;
            if ( v46 == v51 )
              goto LABEL_65;
          }
        }
        v52 = *(_QWORD *)v47;
        v47 += 2;
        *(_QWORD *)v51 = v52;
      }
      while ( v48 != v47 );
LABEL_61:
      v48 = *(_DWORD **)(a1 + 16);
    }
    if ( v48 )
      sub_186B220(v48);
    *(_QWORD *)(a1 + 16) = v45;
    *(_DWORD *)(a1 + 24) = v5;
    *(_DWORD *)(a1 + 32) = 0;
  }
  v6 = *a2;
  v7 = *(_QWORD **)a1;
  v8 = *(_QWORD *)(*(_QWORD *)a1 + 328LL);
  if ( v8 && (v9 = sub_1021D60(v8, a2), v7 = *(_QWORD **)a1, v9) )
  {
    v10 = (unsigned __int8)sub_A72E00(**(_QWORD **)(*(_QWORD *)(*v7 + 32LL) + 8 * v6));
  }
  else
  {
    v11 = v7[63];
    v12 = 0x3FFFFFFFC0LL;
    if ( (_DWORD)v6 != -1 )
      v12 = (unsigned __int64)(unsigned int)sub_FF9FB0(v7[63], (unsigned int)v6) << 6;
    v62[0] = 0;
    v62[1] = 0;
    v13 = (int *)(*(_QWORD *)(sub_FF9B20(v11) + 48) + v12);
    v63[0] = 1;
    v63[1] = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v62, v13);
    v64[0] = 0;
    v64[1] = 0;
    v65[0] = 1;
    v65[1] = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v64, v13 + 8);
    LODWORD(v13) = sub_182DB30(v62);
    v14 = 3 * (unsigned int)sub_182DB30(v63) + (unsigned int)v13 + 2654435769LL;
    LODWORD(v13) = sub_182DB30(v64);
    v15 = (_DWORD)v13 + 3 * sub_182DB30(v65);
    v16 = qword_1C7F2C0;
    v10 = (v15 + (v14 >> 2) + ((_DWORD)v14 << 6) - 1640531527) ^ v14;
    sub_182CBA0(qword_1C7F2C0, v64);
    sub_182CBA0(v16, v65);
    v17 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v62);
    sub_182CBA0(v17, v63);
  }
  v18 = *(unsigned int *)(a1 + 24);
  v19 = *(_DWORD **)(a1 + 16);
  v20 = nullptr;
  v21 = v18 - 1;
  v18 *= 8;
  v22 = (_DWORD *)((char *)v19 + v18);
  v23 = 8LL * (v10 & v21);
  v24 = &v19[(unsigned __int64)v23 / 4];
  v54 = &v19[(unsigned __int64)v23 / 4];
  if ( v23 != v18 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v25 = v24[1];
        if ( v25 + 0x80000000 > 1 )
          break;
        if ( v25 == 0x80000000 )
        {
          if ( !v20 )
          {
            v20 = v24;
            goto LABEL_72;
          }
LABEL_71:
          --*(_DWORD *)(a1 + 32);
          goto LABEL_72;
        }
        v20 = v24;
        v24 += 2;
        if ( v22 == v24 )
        {
LABEL_15:
          v19 = *(_DWORD **)(a1 + 16);
          if ( v54 != v19 )
            goto LABEL_20;
LABEL_16:
          sub_1872CE0("");
          sub_1873130(114, 461);
        }
      }
      if ( *v24 != v10 )
        goto LABEL_11;
      v56 = v22;
      v27 = *a2;
      v28 = *(_DWORD **)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(**(_QWORD **)(a1 + 8) + 32LL) + 8LL * v25)) + 24);
      v29 = **(_QWORD **)(*(_QWORD *)(**(_QWORD **)(a1 + 8) + 32LL) + 8LL * v27);
      if ( v28 && *v28 == 5 )
      {
        v61 = v56;
        v58 = v28[1] == 1;
        v38 = sub_15D1F10(v29);
        v39 = v58;
        v22 = v61;
        v31 = *(_DWORD **)(v38 + 24);
        if ( !v31 || *v31 != 5 )
        {
          if ( !v58 )
            goto LABEL_27;
          goto LABEL_11;
        }
      }
      else
      {
        v30 = sub_15D1F10(v29);
        v22 = v56;
        v31 = *(_DWORD **)(v30 + 24);
        if ( !v31 || *v31 != 5 )
        {
LABEL_27:
          v57 = v22;
          v32 = sub_A88370(*(_QWORD *)(a1 + 8), v25, v27);
          v22 = v57;
          if ( v32 )
          {
            *a3 = v24;
            return a3;
          }
          goto LABEL_11;
        }
        v39 = 0;
      }
      if ( (v31[1] == 1) == v39 )
        goto LABEL_27;
LABEL_11:
      v24 += 2;
      if ( v22 == v24 )
        goto LABEL_15;
    }
  }
  while ( 1 )
  {
    if ( v54 == v19 )
      goto LABEL_16;
LABEL_20:
    v26 = v19[1];
    if ( v26 + 0x80000000 <= 1 )
      break;
    if ( *v19 != v10 )
      goto LABEL_18;
    v34 = *a2;
    v35 = *(_DWORD **)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(**(_QWORD **)(a1 + 8) + 32LL) + 8LL * v26)) + 24);
    v36 = **(_QWORD **)(*(_QWORD *)(**(_QWORD **)(a1 + 8) + 32LL) + 8LL * v34);
    if ( v35 && *v35 == 5 )
    {
      v59 = v35[1] == 1;
      v40 = sub_15D1F10(v36);
      v41 = 0;
      v42 = v59;
      v37 = *(_DWORD **)(v40 + 24);
      if ( !v37 || *v37 != 5 )
      {
LABEL_44:
        if ( v42 != v41 )
          goto LABEL_18;
        goto LABEL_33;
      }
LABEL_47:
      v41 = v37[1] == 1;
      goto LABEL_44;
    }
    v37 = *(_DWORD **)(sub_15D1F10(v36) + 24);
    if ( v37 && *v37 == 5 )
    {
      v42 = 0;
      goto LABEL_47;
    }
LABEL_33:
    if ( (unsigned __int8)sub_A88370(*(_QWORD *)(a1 + 8), v26, v34) )
    {
      *a3 = v19;
      return a3;
    }
LABEL_18:
    v19 += 2;
  }
  if ( v26 != 0x80000000 )
  {
    v20 = v19;
    goto LABEL_18;
  }
  if ( v20 )
    goto LABEL_71;
  v20 = v19;
LABEL_72:
  v53 = *a2;
  *v20 = v10;
  v20[1] = v53;
  ++*(_DWORD *)(a1 + 28);
  *a3 = v20;
  return a3;
}

