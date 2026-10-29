__int64 __fastcall sub_6DDE00(__int64 a1, __int64 *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int v7; // ebp
  __int64 v9; // r9
  int v10; // ecx
  int v11; // eax
  int v12; // esi
  int v13; // edx
  int v14; // eax
  __int64 *v15; // rcx
  int v16; // esi
  __int64 v17; // rax
  unsigned int v18; // edx
  __int64 *v19; // rdi
  __int64 v20; // rdx
  __int64 *v21; // r8
  __int64 *v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned int v28; // eax
  bool v29; // sf
  unsigned int v30; // eax
  int v31; // edx
  void *v32; // rdi
  int v33; // edx
  char v34; // cl
  __int64 v35; // rax
  __int64 v36; // rdx
  char v37; // si
  __int64 v38; // rax
  void *v39; // rbx
  __int64 v40; // rax
  void *v41; // r15
  int v42; // edx
  char v43; // cl
  __int64 v44; // rax
  __int64 v45; // rdx
  char v46; // si
  __int64 v47; // rax
  void *v48; // rbx
  void *v49; // [rsp+8h] [rbp-70h]
  unsigned __int64 v50; // [rsp+18h] [rbp-60h] BYREF
  __int64 v51; // [rsp+20h] [rbp-58h] BYREF
  __int64 v52; // [rsp+28h] [rbp-50h]
  __int64 v53; // [rsp+30h] [rbp-48h] BYREF
  __int64 v54; // [rsp+38h] [rbp-40h]

  v7 = sub_6DD340(a1, a2, a3);
  if ( !(_BYTE)v7 )
    return v7;
  v9 = *a2;
  v10 = *(_DWORD *)(*a2 + 12);
  v11 = (*(_DWORD *)(a3 + 12) - v10) ^ (v10 << 8);
  v12 = (v10 - v11) << 10;
  v13 = v11 ^ ((v10 - v11) << 16);
  v14 = v11 - v10;
  v15 = *(__int64 **)(a1 + 216);
  v16 = (v13 + v14) ^ v12;
  v17 = *(unsigned int *)(a1 + 224);
  v18 = v17 - 1;
  v17 *= 32;
  v19 = (__int64 *)((char *)v15 + v17);
  v20 = 32LL * (v16 & v18);
  v21 = &v15[(unsigned __int64)v20 / 8];
  if ( v20 == v17 )
  {
LABEL_19:
    while ( v21 != v15 )
    {
      v40 = *v15;
      if ( (unsigned __int64)*v15 > 1 )
      {
        if ( *((_DWORD *)v15 + 6) == v16 && v9 == v40 && a3 == v15[1] )
        {
          v22 = v15;
          goto LABEL_12;
        }
      }
      else if ( !v40 )
      {
        break;
      }
      v15 += 4;
    }
LABEL_10:
    sub_1872CE0("");
    sub_1873130(114, 173);
  }
  v22 = &v15[(unsigned __int64)v20 / 8];
  while ( 1 )
  {
    v23 = *v22;
    if ( (unsigned __int64)*v22 > 1 )
      break;
    if ( !v23 )
      goto LABEL_10;
LABEL_7:
    v22 += 4;
    if ( v19 == v22 )
      goto LABEL_19;
  }
  if ( *((_DWORD *)v22 + 6) != v16 || v9 != v23 || a3 != v22[1] )
    goto LABEL_7;
LABEL_12:
  v24 = v22[2];
  v25 = sub_15D1F10(v9);
  if ( !(unsigned __int8)sub_16256D0(a1 + 168, v25, &v50) )
  {
    sub_1872CE0("");
    sub_1873130(114, 119);
  }
  v26 = *(_QWORD *)(v24 + 8);
  v27 = *(_QWORD *)(v24 + 24);
  if ( !v26 )
  {
    if ( v27 && v50 < *(unsigned int *)(v27 - 4) )
      goto LABEL_32;
    v31 = 1;
    v51 = 0;
    v52 = 0;
    v53 = 1;
    v32 = qword_1C7F2C0;
    v54 = 0;
    goto LABEL_17;
  }
  v28 = *(_DWORD *)(v26 - 4);
  if ( !v27 )
  {
    if ( v50 < v28 )
      goto LABEL_32;
LABEL_16:
    v29 = (int)(v28 + 1) < 0;
    v30 = v28 + 1;
    v51 = 0;
    v52 = 0;
    v31 = v30;
    v53 = 1;
    v32 = qword_1C7F2C0;
    v54 = 0;
    if ( v29 )
    {
      v49 = qword_1C7F2C0;
      sub_1830C40(qword_1C7F2C0, &v51, v30);
      v32 = v49;
      goto LABEL_18;
    }
LABEL_17:
    LODWORD(v51) = v31;
LABEL_18:
    sub_182CBA0(v32, &v53);
    v33 = v51;
    v34 = BYTE4(v51);
    LODWORD(v51) = *(_DWORD *)a4;
    v35 = *(_QWORD *)(a4 + 8);
    *(_DWORD *)a4 = v33;
    v36 = v52;
    v52 = v35;
    LOBYTE(v35) = *(_BYTE *)(a4 + 4);
    *(_QWORD *)(a4 + 8) = v36;
    LOBYTE(v36) = v34;
    v34 &= ~2u;
    LOBYTE(v36) = v35 & 0xFC | v36 & 2;
    v37 = *(_BYTE *)(a4 + 20);
    BYTE4(v51) = v35 & 1 | v34 & 0xFE | v35 & 2;
    LODWORD(v35) = *(_DWORD *)(a4 + 16);
    *(_BYTE *)(a4 + 4) = v34 & 1 | v36;
    LODWORD(v53) = v35;
    v38 = *(_QWORD *)(a4 + 24);
    *(_QWORD *)(a4 + 24) = v54;
    v54 = v38;
    LOBYTE(v38) = BYTE4(v53);
    *(_DWORD *)(a4 + 16) = 1;
    *(_BYTE *)(a4 + 20) = v37 & 0xFC | v38 & 2;
    v39 = qword_1C7F2C0;
    BYTE4(v53) = v37 & 1 | v37 & 2 | v38 & 0xFC;
    sub_182CBA0(qword_1C7F2C0, &v51);
    sub_182CBA0(v39, &v53);
    return v7;
  }
  if ( v50 >= *(_DWORD *)(v27 - 4) + v28 )
    goto LABEL_16;
LABEL_32:
  v51 = 0;
  v52 = 0;
  v53 = 1;
  v41 = qword_1C7F2C0;
  v54 = 0;
  if ( v50 > 0x7FFFFFFE )
    sub_182C550(qword_1C7F2C0, &v51);
  else
    LODWORD(v51) = v50;
  sub_182CBA0(v41, &v53);
  v42 = v51;
  v43 = BYTE4(v51);
  LODWORD(v51) = *(_DWORD *)a4;
  v44 = *(_QWORD *)(a4 + 8);
  *(_DWORD *)a4 = v42;
  v45 = v52;
  v52 = v44;
  LOBYTE(v44) = *(_BYTE *)(a4 + 4);
  *(_QWORD *)(a4 + 8) = v45;
  LOBYTE(v45) = v43;
  v43 &= ~2u;
  LOBYTE(v45) = v44 & 0xFC | v45 & 2;
  v46 = *(_BYTE *)(a4 + 20);
  BYTE4(v51) = v44 & 1 | v43 & 0xFE | v44 & 2;
  LODWORD(v44) = *(_DWORD *)(a4 + 16);
  *(_BYTE *)(a4 + 4) = v43 & 1 | v45;
  LODWORD(v53) = v44;
  v47 = *(_QWORD *)(a4 + 24);
  *(_QWORD *)(a4 + 24) = v54;
  v54 = v47;
  LOBYTE(v47) = BYTE4(v53);
  *(_DWORD *)(a4 + 16) = 1;
  *(_BYTE *)(a4 + 20) = v46 & 0xFC | v47 & 2;
  v48 = qword_1C7F2C0;
  BYTE4(v53) = v46 & 1 | v46 & 2 | v47 & 0xFC;
  sub_182CBA0(qword_1C7F2C0, &v51);
  sub_182CBA0(v48, &v53);
  return v7;
}

