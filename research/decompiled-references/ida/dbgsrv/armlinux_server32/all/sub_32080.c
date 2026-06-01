/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_32080
// Address: 0x00032080

//----- (00032080) --------------------------------------------------------
int __fastcall sub_32080(__int64 a1, unsigned int *a2)
{
  char **v2; // r6
  unsigned int v4; // r2
  int v5; // r7
  int v6; // r2
  unsigned int v7; // r1
  unsigned int v8; // r0
  __int64 v9; // kr08_8
  unsigned int v10; // r3
  _BOOL4 v11; // r12
  _BOOL4 v12; // r2
  bool v13; // zf
  int v14; // r4
  int v15; // r0
  __int64 v16; // r0
  unsigned int v17; // r4
  int v18; // r0
  int v19; // r1
  bool v20; // zf
  char *v21; // r7
  int v22; // r9
  char *v23; // r12
  int *v24; // r8
  char *v25; // r5
  int v26; // r1
  int v27; // r2
  int v28; // r3
  int v29; // r1
  int v30; // r2
  int v31; // r3
  char *v32; // r5
  char *v33; // r0
  unsigned int v34; // [sp+8h] [bp-C0h]
  unsigned int v35; // [sp+1Ch] [bp-ACh] BYREF
  __int64 v36; // [sp+20h] [bp-A8h] BYREF
  int v37; // [sp+28h] [bp-A0h]
  __int64 v38; // [sp+30h] [bp-98h]
  int v39; // [sp+38h] [bp-90h]
  int v40; // [sp+3Ch] [bp-8Ch]
  int v41; // [sp+40h] [bp-88h]
  int v42; // [sp+44h] [bp-84h]
  _UNKNOWN **v43; // [sp+48h] [bp-80h] BYREF
  int v44; // [sp+4Ch] [bp-7Ch]
  __int64 v45; // [sp+50h] [bp-78h]
  __int64 v46; // [sp+58h] [bp-70h]
  unsigned int v47; // [sp+60h] [bp-68h]
  void *ptr; // [sp+64h] [bp-64h] BYREF
  unsigned int v49; // [sp+68h] [bp-60h]
  unsigned int v50; // [sp+6Ch] [bp-5Ch]
  __int64 v51; // [sp+70h] [bp-58h]
  unsigned int v52; // [sp+78h] [bp-50h]
  unsigned int v53; // [sp+7Ch] [bp-4Ch]
  char v54[4]; // [sp+84h] [bp-44h] BYREF
  int v55; // [sp+88h] [bp-40h]
  __int64 v56; // [sp+9Ch] [bp-2Ch]
  int v57; // [sp+A4h] [bp-24h]
  int v58; // [sp+A8h] [bp-20h]
  int v59; // [sp+BCh] [bp-Ch]
  int v60; // [sp+C0h] [bp-8h]

  v2 = (char **)HIDWORD(a1);
  HIDWORD(a1) = a2[2];
  if ( !HIDWORD(a1) )
    return 0;
  v4 = *a2;
  v57 = HIDWORD(a1);
  HIDWORD(a1) = &v36;
  v56 = v4;
  v5 = a1;
  v6 = *(_DWORD *)(a1 + 312);
  v55 = 6;
  v59 = v6;
  v58 = 0;
  v60 = 0;
  sub_32024(a1, (int)&v35, (int)v54, (int)"Dynamic info size");
  if ( !v36 )
    return 0;
  v7 = 0;
  v46 = v36;
  v8 = 0;
  ptr = nullptr;
  v49 = 0;
  v50 = 0;
  v52 = 0;
  v53 = 0;
  v43 = &off_D0604;
  v45 = v56;
  v44 = v5;
  v47 = v35;
  v51 = 0;
  while ( 1 )
  {
    if ( v7 < v8 )
      goto LABEL_33;
    v9 = v51;
    v34 = v46 - v51;
    if ( v46 == v51 )
      goto LABEL_7;
    v10 = v49;
    if ( v34 > v49 )
    {
      v33 = (char *)ptr;
      if ( v34 > v50 )
      {
        v33 = (char *)sub_78018((int)&ptr, ptr, v34, 0x10u);
        v10 = v49;
        ptr = v33;
      }
      memset(&v33[16 * v10], 0, 16 * (v34 - v10));
      v49 = v34;
      v9 = v51;
    }
    else if ( v34 != v49 && v34 < v49 )
    {
      v49 = v46 - v51;
    }
    v11 = v9 == 0;
    v52 = 0;
    if ( !v47 )
      v11 = 1;
    if ( !v11 )
    {
      v12 = 0;
      if ( HIDWORD(v9) )
        v12 = (HIDWORD(v9) * (unsigned __int64)v47 + (((unsigned int)v9 * (unsigned __int64)v47) >> 32)) >> 32 != 0;
      if ( v12 )
        goto LABEL_37;
    }
    v13 = v34 == 0;
    if ( v34 )
      v13 = v47 == 0;
    if ( !v13 && !is_mul_ok(v34, v47) )
    {
LABEL_37:
      v53 = 0;
      goto LABEL_7;
    }
    v14 = v44;
    v15 = *(_DWORD *)(v44 + 364);
    v37 = v44;
    LODWORD(v16) = sub_74D98(v15, 0, 1);
    v38 = v16 - *(_QWORD *)(v14 + 368);
    v17 = 0;
    v18 = sub_74D98(*(_DWORD *)(v37 + 364), v51 * v47 + v45 + *(_QWORD *)(v37 + 368), 0);
    v20 = ++v19 == 0;
    if ( !v19 )
      v20 = v18 == -1;
    if ( v20 || !v34 )
      break;
    while ( sub_2EC8C((int)&v43, (_DWORD *)ptr + 4 * v17) )
    {
      if ( v34 <= ++v17 )
      {
        sub_74D98(*(_DWORD *)(v37 + 364), v38 + *(_QWORD *)(v37 + 368), 0);
        v53 = v17;
        goto LABEL_32;
      }
    }
    sub_74D98(*(_DWORD *)(v37 + 364), v38 + *(_QWORD *)(v37 + 368), 0);
    v53 = v17;
    if ( !v17 )
      goto LABEL_7;
LABEL_32:
    v7 = v52;
    v51 += v17;
    if ( v17 <= v52 )
      goto LABEL_7;
LABEL_33:
    v21 = (char *)ptr;
    v22 = 16 * v7;
    v23 = v2[1];
    v52 = v7 + 1;
    v24 = (int *)((char *)ptr + 16 * v7);
    v25 = *v2;
    v26 = v24[1];
    v27 = v24[2];
    v28 = v24[3];
    v39 = *v24;
    v40 = v26;
    v41 = v27;
    v42 = v28;
    if ( v23 + 1 > v2[2] )
    {
      v25 = (char *)sub_78018((int)v2, v25, (unsigned int)(v23 + 1), 0x10u);
      v23 = v2[1];
      *v2 = v25;
    }
    v29 = v40;
    v30 = v41;
    v31 = v42;
    v32 = &v25[16 * (_DWORD)v23];
    *(_DWORD *)v32 = v39;
    *((_DWORD *)v32 + 1) = v29;
    *((_DWORD *)v32 + 2) = v30;
    *((_DWORD *)v32 + 3) = v31;
    ++v2[1];
    if ( !(v24[1] | *(_DWORD *)&v21[v22]) )
      goto LABEL_7;
    v7 = v52;
    v8 = v53;
  }
  sub_74D98(*(_DWORD *)(v37 + 364), v38 + *(_QWORD *)(v37 + 368), 0);
  v53 = 0;
LABEL_7:
  v43 = &off_D0604;
  if ( ptr )
  {
    v49 = 0;
    sub_77F70(ptr);
  }
  return 1;
}
// 321E6: variable 'v16' is possibly undefined
// 32210: variable 'v19' is possibly undefined
// D0604: using guessed type _UNKNOWN *off_D0604;
