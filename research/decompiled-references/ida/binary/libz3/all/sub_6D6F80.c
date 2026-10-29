__int64 __fastcall sub_6D6F80(__int64 a1, __int64 *a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v6; // r13
  unsigned int v7; // r12d
  int v9; // ecx
  int v10; // eax
  int v11; // esi
  int v12; // edx
  int v13; // eax
  __int64 *v14; // rcx
  int v15; // esi
  __int64 v16; // rax
  unsigned int v17; // edx
  __int64 *v18; // rdi
  __int64 v19; // rdx
  __int64 *v20; // r8
  __int64 *i; // rax
  __int64 v22; // rdx
  _QWORD *v23; // r15
  __int64 v24; // rax
  unsigned int v25; // ebp
  __int64 v26; // rax
  unsigned int v27; // r14d
  _DWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int v31; // r14d
  void *v32; // rdi
  int v33; // ebp
  int v34; // edx
  char v35; // cl
  __int64 v36; // rax
  __int64 v37; // rdx
  char v38; // si
  __int64 v39; // rax
  unsigned __int64 v40; // rax
  void *v41; // [rsp+8h] [rbp-60h]
  __int64 v42; // [rsp+10h] [rbp-58h] BYREF
  __int64 v43; // [rsp+18h] [rbp-50h]
  __int64 v44; // [rsp+20h] [rbp-48h] BYREF
  __int64 v45; // [rsp+28h] [rbp-40h]

  v6 = *a2;
  v7 = sub_6D5CC0(a1, a2, a3);
  if ( !(_BYTE)v7 )
    return v7;
  v9 = *(_DWORD *)(v6 + 12);
  v10 = (*(_DWORD *)(a3 + 12) - v9) ^ (v9 << 8);
  v11 = (v9 - v10) << 10;
  v12 = v10 ^ ((v9 - v10) << 16);
  v13 = v10 - v9;
  v14 = *(__int64 **)(a1 + 808);
  v15 = (v12 + v13) ^ v11;
  v16 = *(unsigned int *)(a1 + 816);
  v17 = v16 - 1;
  v16 *= 32;
  v18 = (__int64 *)((char *)v14 + v16);
  v19 = 32LL * (v15 & v17);
  v20 = &v14[(unsigned __int64)v19 / 8];
  if ( v19 != v16 )
  {
    for ( i = &v14[(unsigned __int64)v19 / 8]; v18 != i; i += 4 )
    {
      v22 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *((_DWORD *)i + 6) == v15 && v6 == v22 && a3 == i[1] )
          goto LABEL_12;
      }
      else if ( !v22 )
      {
        goto LABEL_10;
      }
    }
  }
  if ( v14 == v20 )
  {
LABEL_10:
    sub_1872CE0("");
    sub_1873130(114, 2182);
  }
  while ( 1 )
  {
    v40 = *v14;
    if ( (unsigned __int64)*v14 > 1 )
      break;
    if ( !v40 )
      goto LABEL_10;
LABEL_30:
    v14 += 4;
    if ( v20 == v14 )
      goto LABEL_10;
  }
  if ( *((_DWORD *)v14 + 6) != v15 || v6 != v40 || a3 != v14[1] )
    goto LABEL_30;
  i = v14;
LABEL_12:
  v23 = (_QWORD *)i[2];
  v24 = v23[9];
  if ( v24 )
    v25 = *(_DWORD *)(v24 - 4);
  else
    v25 = 0;
  v26 = v23[11];
  if ( v26 )
    v27 = *(_DWORD *)(v26 - 4);
  else
    v27 = 0;
  v28 = *(_DWORD **)(sub_15D1F10(v6) + 24);
  if ( v28 && *v28 == 5 && !v28[1] )
  {
    v25 *= 2;
    v27 *= 2;
  }
  v29 = v23[13];
  if ( v29 )
    v25 += *(_DWORD *)(v29 - 4);
  v30 = v23[15];
  if ( v30 )
  {
    v31 = *(_DWORD *)(v30 - 4) + v27;
    if ( v31 <= v25 )
      v25 = v31;
  }
  else if ( v27 <= v25 )
  {
    v25 = v27;
  }
  v42 = 0;
  v43 = 0;
  v44 = 1;
  v32 = qword_1C7F2C0;
  v45 = 0;
  v33 = v25 + 1;
  if ( v33 < 0 )
  {
    v41 = qword_1C7F2C0;
    sub_1830C40(qword_1C7F2C0, &v42, (unsigned int)v33);
    v32 = v41;
  }
  else
  {
    LODWORD(v42) = v33;
  }
  sub_182CBA0(v32, &v44);
  v34 = v42;
  v35 = BYTE4(v42);
  LODWORD(v42) = *(_DWORD *)a4;
  v36 = *(_QWORD *)(a4 + 8);
  *(_DWORD *)a4 = v34;
  v37 = v43;
  v43 = v36;
  LOBYTE(v36) = *(_BYTE *)(a4 + 4);
  *(_QWORD *)(a4 + 8) = v37;
  LOBYTE(v37) = v35;
  v35 &= ~2u;
  LOBYTE(v37) = v36 & 0xFC | v37 & 2;
  v38 = *(_BYTE *)(a4 + 20);
  BYTE4(v42) = v36 & 1 | v35 & 0xFE | v36 & 2;
  LODWORD(v36) = *(_DWORD *)(a4 + 16);
  *(_BYTE *)(a4 + 4) = v35 & 1 | v37;
  LODWORD(v44) = v36;
  v39 = *(_QWORD *)(a4 + 24);
  *(_QWORD *)(a4 + 24) = v45;
  v45 = v39;
  LOBYTE(v39) = BYTE4(v44);
  *(_DWORD *)(a4 + 16) = 1;
  *(_BYTE *)(a4 + 20) = v38 & 0xFC | v39 & 2;
  BYTE4(v44) = v38 & 1 | v38 & 2 | v39 & 0xFC;
  sub_25A130((char *)&v42);
  return v7;
}

