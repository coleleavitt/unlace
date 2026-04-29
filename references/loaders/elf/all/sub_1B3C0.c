__int64 __fastcall sub_1B3C0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v5; // rax
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rdi
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rbp
  __int64 v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // r11
  __int64 v16; // r15
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r13
  int v20; // edx
  unsigned __int8 *v21; // rax
  int v22; // edx
  __int64 v23; // rcx
  unsigned int v24; // eax
  unsigned __int8 *v25; // rbx
  int v26; // eax
  int v27; // ecx
  int v28; // edx
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rbp
  bool v32; // r8
  char v33; // di
  unsigned __int8 *v34; // rsi
  __int16 v35; // dx
  __int64 v36; // [rsp+8h] [rbp-80h]
  __int64 v37; // [rsp+10h] [rbp-78h]
  unsigned int v38; // [rsp+18h] [rbp-70h]
  char v39; // [rsp+1Dh] [rbp-6Bh]
  bool v40; // [rsp+1Eh] [rbp-6Ah]
  char v41; // [rsp+1Fh] [rbp-69h]
  __int64 v42; // [rsp+28h] [rbp-60h] BYREF
  __int64 v43; // [rsp+30h] [rbp-58h] BYREF
  __int128 v44; // [rsp+38h] [rbp-50h]
  unsigned __int64 v45; // [rsp+48h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  netnode_check(&v42, "$ attributes", 0, 0);
  v2 = netnode_hashval_long(v42, "gnu", 72);
  if ( v2 )
  {
    v29 = netnode_altval(v2, 8, 65);
    v30 = *(_QWORD *)(a1 + 16);
    v31 = v29;
    if ( !*(_BYTE *)(v30 + 248) || (v5 = sub_46340(v30 + 80, 7, ".PPC.EMB.apuinfo")) == 0 )
    {
      if ( v31 != 4 )
        return 1;
      goto LABEL_18;
    }
    v40 = v31 == 4;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 16);
    if ( !*(_BYTE *)(v3 + 248) )
      return 1;
    v5 = sub_46340(v3 + 80, 7, ".PPC.EMB.apuinfo");
    v40 = 0;
    if ( !v5 )
      return 1;
  }
  v9 = *(_QWORD *)(a1 + 16);
  v43 = 0;
  v44 = 0;
  sub_48170(v9 + 80, (unsigned int)&v43, v5, v6, v7, v8);
  v10 = v44;
  if ( (unsigned __int64)v44 <= 0xB )
  {
    if ( v43 )
    {
      *(_QWORD *)&v44 = 0;
      qfree(v43);
      if ( !v40 )
        return 1;
    }
    else if ( !v40 )
    {
      return 1;
    }
    goto LABEL_18;
  }
  v41 = 0;
  v11 = 0;
  v12 = v43;
  v39 = *(_BYTE *)(*(_QWORD *)(a1 + 16) + 509LL);
  do
  {
    v25 = (unsigned __int8 *)(v12 + v11);
    v26 = *(unsigned __int8 *)(v12 + v11 + 1);
    v27 = *(unsigned __int8 *)(v12 + v11 + 2);
    if ( v39 == 2 )
    {
      v13 = 7;
      v14 = 5;
      v15 = 4;
      v16 = 2;
      v17 = 1;
      v18 = 0;
      v19 = 3;
      v20 = (v26 << 16) | (*v25 << 24);
      v21 = v25 + 3;
      v22 = (v27 << 8) | v20;
      v23 = 6;
    }
    else
    {
      v13 = 4;
      v14 = 6;
      v15 = 7;
      v19 = 0;
      v16 = 1;
      v17 = 2;
      v18 = 3;
      v28 = (v27 << 16) | (v25[3] << 24);
      v23 = 5;
      v22 = (v26 << 8) | v28;
      v21 = (unsigned __int8 *)(v12 + v11);
    }
    v37 = v17;
    v36 = v18;
    v24 = ((v22 | *v21) + 3) & 0xFFFFFFFC;
    v38 = (v25[v23] << 8) | v25[v13] | (v25[v15] << 24) | (v25[v14] << 16);
    v11 += v24 + v38 + 12;
    if ( v10 < v11 )
      break;
    if ( v24 == 8
      && !strcmp((const char *)v25 + 12, "APUinfo")
      && ((v25[v16 + 8] << 8) | v25[v19 + 8] | (v25[v37 + 8] << 16) | (v25[v36 + 8] << 24)) == 2
      && (v38 & 3) == 0
      && v38 >> 2 )
    {
      v32 = v40;
      v33 = v41;
      v34 = &v25[4 * (v38 >> 2)];
      do
      {
        v35 = *((_WORD *)v25 + 10);
        if ( v35 == 1 || v35 == 1281 )
          v32 = v35 == 1 || v35 == 1281;
        else
          v33 |= v35 == 1537;
        v25 += 4;
      }
      while ( v25 != v34 );
      v40 = v32;
      v41 = v33;
    }
  }
  while ( v10 >= v11 + 12 );
  if ( v12 )
  {
    *(_QWORD *)&v44 = 0;
    qfree(v12);
  }
  if ( v40 )
  {
LABEL_18:
    sub_101F0(9u, "spe", 0);
    return 1;
  }
  if ( v41 )
    sub_101F0(9u, "lsp", 0);
  return 1;
}
