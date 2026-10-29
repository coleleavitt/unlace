/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2E7D8
// Address: 0x0002E7D8

//----- (0002E7D8) --------------------------------------------------------
int __fastcall sub_2E7D8(int a1, _DWORD *a2)
{
  int v2; // r4
  int v3; // r5
  unsigned int v4; // r1
  unsigned int v5; // r3
  int v6; // r3
  unsigned int v8; // r8
  int v9; // r8
  __int64 v10; // r0
  __int64 v11; // r2
  int v12; // r0
  int v13; // r1
  bool v14; // zf
  signed int v15; // r0
  unsigned __int64 v16; // r2
  unsigned int v17; // r9
  unsigned int v18; // r3
  __int64 v19; // r10
  unsigned int v20; // r12
  unsigned int v21; // r0
  int **v22; // r8
  unsigned int v23; // r9
  int v24; // r11
  int v25; // r9
  int **i; // r5
  char *v27; // r5
  char *v28; // r1
  __int64 v29; // r2
  int v30; // r1
  int v31; // r9
  char *v32; // r8
  char *v33; // r0
  int **v34; // r0
  __int64 v35; // kr08_8
  char *v36; // r0
  int v37; // r9
  int **v38; // r11
  int v39; // r6
  char *v40; // r8
  char *v41; // r4
  char *v42; // r12
  int v43; // r0
  int v44; // r1
  int v45; // r2
  int v46; // r3
  char *v47; // lr
  int v48; // r1
  int **v49; // lr
  int v50; // r9
  char *v51; // lr
  char *v52; // r1
  __int64 v53; // r2
  int v54; // r1
  char *v55; // r0
  __int64 v56; // kr10_8
  int v57; // r9
  char *v58; // r11
  int v59; // r6
  int v60; // r8
  char *v61; // r4
  char *v62; // r12
  int v63; // r0
  int v64; // r1
  int v65; // r2
  int v66; // r3
  _DWORD *v67; // lr
  int v68; // r1
  char *v70; // [sp+2Ch] [bp-58h] BYREF
  unsigned __int64 v71; // [sp+30h] [bp-54h] BYREF
  void *ptr; // [sp+3Ch] [bp-48h] BYREF
  unsigned int v73; // [sp+40h] [bp-44h]
  unsigned int v74; // [sp+44h] [bp-40h]
  int *v75; // [sp+48h] [bp-3Ch] BYREF
  char *v76; // [sp+4Ch] [bp-38h]
  __int64 v77; // [sp+50h] [bp-34h]
  __int64 v78; // [sp+58h] [bp-2Ch]
  char *v79; // [sp+64h] [bp-20h] BYREF
  char *v80; // [sp+68h] [bp-1Ch]
  __int64 v81; // [sp+6Ch] [bp-18h]
  __int64 v82; // [sp+74h] [bp-10h]

  v2 = a1;
  v3 = *(unsigned __int8 *)(a1 + 56);
  v4 = *(_DWORD *)(a1 + 48);
  v5 = *(_DWORD *)(a1 + 52);
  if ( *(_BYTE *)(a1 + 56) )
  {
    if ( v4 < v5 )
    {
LABEL_3:
      v6 = *(_DWORD *)(v2 + 28);
      *(_DWORD *)(v2 + 48) = v4 + 1;
      *a2 = v6 + 24 * v4;
      return v3;
    }
    if ( v5 )
      return 0;
    v8 = *(_DWORD *)(a1 + 16);
    ptr = nullptr;
    v73 = 0;
    v74 = 0;
    if ( v8 )
    {
      ptr = sub_78018((int)&ptr, nullptr, v8, 1u);
      memset((char *)ptr + v73, 0, v8 - v73);
      v73 = v8;
    }
    v9 = *(_DWORD *)(v2 + 4);
    v75 = (int *)v9;
    LODWORD(v10) = sub_74D98(*(_DWORD *)(v9 + 364), 0, 1);
    LODWORD(v11) = *(_DWORD *)(v2 + 8);
    v77 = v10 - *(_QWORD *)(v9 + 368);
    HIDWORD(v11) = v75[93];
    v12 = sub_74D98(v75[91], v11 + __PAIR64__(*(_DWORD *)(v2 + 12), v75[92]), 0);
    v14 = ++v13 == 0;
    if ( !v13 )
      v14 = v12 == -1;
    if ( !v14 )
    {
      v15 = sub_74B94(*(_DWORD *)(*(_DWORD *)(v2 + 4) + 364), ptr, *(_DWORD *)(v2 + 16));
      v16 = *(_QWORD *)(v2 + 16);
      v17 = v15;
      if ( v15 >= v16 )
      {
        v18 = v73;
      }
      else
      {
        sub_171B0((int)"READ ERROR: read only %zd bytes instead of %lld bytes\n", v15, v16);
        if ( (int)v17 <= 8 )
          goto LABEL_15;
        v18 = v73;
        if ( v17 > v73 )
        {
          v33 = (char *)ptr;
          if ( v17 > v74 )
          {
            v33 = (char *)sub_78018((int)&ptr, ptr, v17, 1u);
            v18 = v73;
            ptr = v33;
          }
          memset(&v33[v18], 0, v17 - v18);
          v73 = v17;
          goto LABEL_39;
        }
        if ( v17 < v73 )
        {
          v73 = v17;
LABEL_39:
          v18 = v17;
          goto LABEL_40;
        }
      }
      if ( v18 > 3 )
      {
LABEL_40:
        v70 = (char *)ptr;
        v31 = *(_DWORD *)ptr;
        v32 = (char *)ptr + v18;
        v70 = (char *)ptr + 4;
        if ( sub_7643C(&v71, 64, 1, &v70, (char *)ptr + v18) && (__int64)v71 >= 1 && v71 < *(_QWORD *)(v2 + 16) )
        {
          if ( v31 == 844320833 )
          {
            LODWORD(v81) = 0;
            v80 = v32;
            v79 = v70;
            BYTE4(v81) = 1;
            sub_2E1F0((int)&v79, (_DWORD *)(v2 + 28), v71);
            *(_DWORD *)(v2 + 52) = v71;
            sub_23760(&v75);
            if ( ptr )
            {
              v73 = 0;
              sub_77F70(ptr);
            }
            v4 = *(_DWORD *)(v2 + 48);
            goto LABEL_3;
          }
          sub_234E0((int)"The relocation packing method '%4.4s' is not supported yet.", (int)ptr, v71, SHIDWORD(v71));
        }
      }
    }
LABEL_15:
    sub_74D98(v75[91], v77 + *((_QWORD *)v75 + 46), 0);
    if ( ptr )
    {
      v73 = 0;
      sub_77F70(ptr);
    }
    return 0;
  }
  if ( v4 < v5 )
  {
LABEL_23:
    v3 = 1;
    *a2 = *(_DWORD *)(v2 + 28) + 24 * v4;
    ++*(_DWORD *)(v2 + 48);
    return v3;
  }
  v19 = *(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 40);
  if ( !v19 )
    return v3;
  v20 = *(_DWORD *)(a1 + 32);
  if ( (_DWORD)v19 != v20 )
  {
    v75 = nullptr;
    v76 = nullptr;
    v77 = 0;
    v78 = 0;
    if ( (unsigned int)v19 >= v20 )
    {
      if ( (unsigned int)v19 <= v20 )
        goto LABEL_21;
      v22 = *(int ***)(a1 + 28);
      v23 = *(_DWORD *)(a1 + 36);
      if ( v22 <= &v75 && &v75 < &v22[6 * v23] )
      {
        v79 = (char *)v75;
        v80 = v76;
        v81 = v77;
        v82 = v78;
        if ( (unsigned int)v19 <= v23 )
          goto LABEL_58;
        v55 = (char *)sub_78018(a1 + 28, (void *)v3, v19, 0x18u);
        v56 = *(_QWORD *)(v2 + 32);
        v22 = (int **)v55;
        *(_DWORD *)(v2 + 36) = v23;
        if ( (int)v56 - 1 >= 0 )
        {
          v57 = *(_DWORD *)(v2 + 28) + 24;
          v58 = v55;
          v59 = v2;
          v60 = v56 - 1;
          v61 = v55 + 24;
          do
          {
            v62 = v61 - 24;
            v63 = *(_DWORD *)(v57 - 24);
            v64 = *(_DWORD *)(v57 - 20);
            v65 = *(_DWORD *)(v57 - 16);
            v66 = *(_DWORD *)(v57 - 12);
            v67 = (_DWORD *)(v57 - 8);
            --v60;
            v57 += 24;
            v61 += 24;
            *(_DWORD *)v62 = v63;
            *((_DWORD *)v62 + 1) = v64;
            *((_DWORD *)v62 + 2) = v65;
            *((_DWORD *)v62 + 3) = v66;
            v62 += 16;
            v68 = v67[1];
            *(_DWORD *)v62 = *v67;
            *((_DWORD *)v62 + 1) = v68;
          }
          while ( v60 != -1 );
          v22 = (int **)v58;
          v2 = v59;
        }
        sub_77F70(*(void **)(v2 + 28));
        v20 = *(_DWORD *)(v2 + 32);
        *(_DWORD *)(v2 + 28) = v22;
        *(_DWORD *)(v2 + 36) = HIDWORD(v56);
        if ( (unsigned int)v19 > v20 )
        {
LABEL_58:
          v49 = v22;
          v50 = 6 * v20;
          while ( 1 )
          {
            v51 = (char *)&v49[v50];
            v52 = v80;
            v53 = v81;
            ++v20;
            v50 += 6;
            *(_DWORD *)v51 = v79;
            *((_DWORD *)v51 + 1) = v52;
            *((_QWORD *)v51 + 1) = v53;
            v51 += 16;
            v54 = HIDWORD(v82);
            *(_DWORD *)v51 = v82;
            *((_DWORD *)v51 + 1) = v54;
            if ( (unsigned int)v19 <= v20 )
              break;
            v49 = *(int ***)(v2 + 28);
          }
        }
      }
      else
      {
        if ( (unsigned int)v19 <= v23 )
          goto LABEL_29;
        v34 = (int **)sub_78018(a1 + 28, nullptr, v19, 0x18u);
        v35 = *(_QWORD *)(v2 + 32);
        v22 = v34;
        *(_DWORD *)(v2 + 36) = v23;
        v36 = *(char **)(v2 + 28);
        v37 = v35 - 1;
        if ( (int)v35 - 1 >= 0 )
        {
          v38 = v22;
          v39 = v2;
          v40 = (char *)(v22 + 6);
          v41 = v36 + 24;
          do
          {
            v42 = v40 - 24;
            v43 = *((_DWORD *)v41 - 6);
            v44 = *((_DWORD *)v41 - 5);
            v45 = *((_DWORD *)v41 - 4);
            v46 = *((_DWORD *)v41 - 3);
            v47 = v41 - 8;
            --v37;
            v41 += 24;
            v40 += 24;
            *(_DWORD *)v42 = v43;
            *((_DWORD *)v42 + 1) = v44;
            *((_DWORD *)v42 + 2) = v45;
            *((_DWORD *)v42 + 3) = v46;
            v42 += 16;
            v48 = *((_DWORD *)v47 + 1);
            *(_DWORD *)v42 = *(_DWORD *)v47;
            *((_DWORD *)v42 + 1) = v48;
          }
          while ( v37 != -1 );
          v2 = v39;
          v22 = v38;
          v36 = *(char **)(v39 + 28);
        }
        sub_77F70(v36);
        v20 = *(_DWORD *)(v2 + 32);
        *(_DWORD *)(v2 + 28) = v22;
        *(_DWORD *)(v2 + 36) = HIDWORD(v35);
        if ( (unsigned int)v19 > v20 )
        {
LABEL_29:
          v24 = v3;
          v25 = 6 * v20;
          for ( i = v22; ; i = *(int ***)(v2 + 28) )
          {
            v27 = (char *)&i[v25];
            v28 = v76;
            v29 = v77;
            ++v20;
            v25 += 6;
            *(_DWORD *)v27 = v75;
            *((_DWORD *)v27 + 1) = v28;
            *((_QWORD *)v27 + 1) = v29;
            v27 += 16;
            v30 = HIDWORD(v78);
            *(_DWORD *)v27 = v78;
            *((_DWORD *)v27 + 1) = v30;
            if ( (unsigned int)v19 <= v20 )
              break;
          }
          v3 = v24;
        }
      }
    }
    *(_DWORD *)(v2 + 32) = v19;
  }
LABEL_21:
  *(_DWORD *)(v2 + 48) = 0;
  v21 = sub_2DD98(v2, v19);
  *(_DWORD *)(v2 + 52) = v21;
  if ( v21 )
  {
    v4 = *(_DWORD *)(v2 + 48);
    *(_QWORD *)(v2 + 40) += v21;
    if ( v21 > v4 )
      goto LABEL_23;
  }
  return v3;
}
// 2E88C: variable 'v10' is possibly undefined
// 2E8A8: variable 'v13' is possibly undefined
