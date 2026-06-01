/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_30DBC
// Address: 0x00030DBC

//----- (00030DBC) --------------------------------------------------------
int __fastcall sub_30DBC(int a1)
{
  int v2; // r7
  __int64 v4; // r0
  __int64 v5; // r2
  int v6; // r0
  int v7; // r1
  bool v8; // zf
  int v9; // r1
  int v10; // r10
  unsigned int v11; // r6
  int v12; // r5
  int v13; // r1
  int v14; // r7
  signed __int64 v15; // r8
  bool v16; // nf
  unsigned int v17; // r1
  __int64 v18; // r0
  unsigned int v19; // r3
  int v20; // r5
  int v21; // r10
  unsigned int v22; // r11
  __int64 v23; // r2
  int v24; // r0
  int v25; // r1
  bool v26; // zf
  _DWORD *v27; // r6
  _DWORD *v28; // r2
  __int64 v29; // r0
  unsigned __int64 v30; // r2
  __int64 v31; // r8
  char *v32; // r0
  unsigned int v33; // r9
  unsigned int v34; // r1
  int v35; // r6
  bool v36; // cf
  int v37; // r10
  int v38; // r5
  int v39; // r0
  int v40; // r12
  unsigned __int64 v41; // r2
  unsigned __int64 v42; // r8
  int v43; // r1
  int v44; // [sp+8h] [bp-3Ch]
  unsigned int v45; // [sp+10h] [bp-34h]
  _DWORD *v46; // [sp+14h] [bp-30h]
  char **v47; // [sp+18h] [bp-2Ch]
  __int64 v48; // [sp+30h] [bp-14h]

  if ( *(_QWORD *)(a1 + 420) )
  {
    LODWORD(v4) = sub_74D98(*(_DWORD *)(a1 + 364), 0, 1);
    LODWORD(v5) = *(_DWORD *)(a1 + 420);
    HIDWORD(v5) = *(_DWORD *)(a1 + 372);
    v48 = v4 - *(_QWORD *)(a1 + 368);
    v6 = sub_74D98(*(_DWORD *)(a1 + 364), v5 + __PAIR64__(*(_DWORD *)(a1 + 424), *(_DWORD *)(a1 + 368)), 0);
    v9 = v7 + 1;
    v8 = v9 == 0;
    if ( !v9 )
      v8 = v6 == -1;
    if ( !v8 )
    {
      v10 = *(_DWORD *)(a1 + 364);
      v11 = *(unsigned __int16 *)(a1 + 442);
      v45 = *(unsigned __int16 *)(a1 + 444);
      v12 = sub_74D98(v10, 0, 1);
      v14 = v13;
      v15 = sub_74D78(v10) - __PAIR64__(v13, v12);
      v16 = v14 < 0;
      if ( v14 >= 0 )
        v16 = v15 < 0;
      if ( v16 )
      {
        LODWORD(v18) = 0;
        goto LABEL_20;
      }
      v2 = 1;
      if ( v15 < v45 * v11 )
      {
        v18 = v15 / v11;
LABEL_20:
        sub_2A028((int)"%s is incorrect, maximum possible value is %u%s", "PHT entries", (_DWORD)v18, &byte_8DFE8);
      }
      v19 = *(_DWORD *)(a1 + 20);
      v47 = (char **)(a1 + 16);
      if ( v45 > v19 )
      {
        v32 = *(char **)(a1 + 16);
        if ( v45 > *(_DWORD *)(a1 + 24) )
        {
          v32 = (char *)sub_78018((int)v47, *(void **)(a1 + 16), v45, 0x38u);
          v19 = *(_DWORD *)(a1 + 20);
          *(_DWORD *)(a1 + 16) = v32;
        }
        memset(&v32[56 * v19], 0, 56 * (v45 - v19));
        *(_DWORD *)(a1 + 20) = v45;
      }
      else if ( v45 != v19 && v45 < v19 )
      {
        *(_DWORD *)(a1 + 20) = v45;
      }
      *(_BYTE *)(a1 + 36) = 1;
      if ( !v45 )
      {
LABEL_19:
        sub_74D98(*(_DWORD *)(a1 + 364), v48 + *(_QWORD *)(a1 + 368), 0);
        return v2;
      }
      v20 = 0;
      v21 = 0;
      v22 = 0;
      v46 = nullptr;
      v23 = *(_QWORD *)(a1 + 420);
      v44 = 1;
      do
      {
        v24 = sub_74D98(*(_DWORD *)(a1 + 364), v23 + *(_QWORD *)(a1 + 368), 0);
        v26 = ++v25 == 0;
        if ( !v25 )
          v26 = v24 == -1;
        if ( v26 )
          break;
        v2 = *(unsigned __int8 *)(a1 + 36);
        if ( !*(_BYTE *)(a1 + 36) )
          sub_14980();
        v27 = (_DWORD *)(*(_DWORD *)(a1 + 16) + v20);
        if ( sub_2A420(a1, v27, 4, 1) < 0
          || *(_BYTE *)(a1 + 481) && sub_2A420(a1, v27 + 1, 4, 1) < 0
          || sub_2A420(a1, v27 + 2, *(_DWORD *)(a1 + 340), 1) < 0
          || sub_2A420(a1, v27 + 4, *(_DWORD *)(a1 + 336), 1) < 0
          || sub_2A420(a1, v27 + 6, *(_DWORD *)(a1 + 336), 1) < 0
          || sub_2A420(a1, v27 + 8, *(_DWORD *)(a1 + 344), 1) < 0
          || sub_2A420(a1, v27 + 10, *(_DWORD *)(a1 + 344), 1) < 0
          || !*(_BYTE *)(a1 + 481) && sub_2A420(a1, v27 + 1, 4, 1) < 0
          || sub_2A420(a1, v27 + 12, *(_DWORD *)(a1 + 344), 1) < 0 )
        {
          v17 = v21 - 1;
          if ( !v21 )
            v17 = 0;
          sub_30D74(v47, v17);
          break;
        }
        if ( *v27 == 1 )
        {
          sub_2BFA4((_DWORD *)a1, (int)v27);
          if ( *((_QWORD *)v27 + 2) < (unsigned __int64)*(unsigned int *)(a1 + 28) )
            *(_DWORD *)(a1 + 28) = v27[4] & 0xFFFFF000;
        }
        else
        {
          v28 = v46;
          if ( *v27 == 2 )
            v28 = v27;
          v46 = v28;
        }
        if ( v45 == ++v21 )
        {
          if ( v46 )
          {
            v33 = v46[9];
            v34 = v46[11];
            v35 = *(_DWORD *)(a1 + 464);
            v36 = v34 >= v33;
            v37 = v46[4];
            if ( v34 == v33 )
              v36 = v46[10] >= v46[8];
            if ( v36 )
              v38 = v46[10];
            else
              v38 = v46[8];
            if ( v35 )
            {
              v39 = *(_DWORD *)(a1 + 460);
              v40 = 0;
              v41 = *((_QWORD *)v46 + 2);
              do
              {
                v42 = *(_QWORD *)(v39 + 16);
                if ( v41 >= v42 && v41 < v42 + *(_QWORD *)(v39 + 8) )
                {
                  v37 = v46[4];
                  v43 = v41 - v42 + *(_DWORD *)v39;
                  goto LABEL_68;
                }
                ++v40;
                v39 += 24;
              }
              while ( v40 != v35 );
              v37 = v46[4];
              v43 = -1;
            }
            else
            {
              v43 = -1;
            }
LABEL_68:
            *(_DWORD *)a1 = v43;
            *(_DWORD *)(a1 + 4) = v37;
            *(_DWORD *)(a1 + 8) = v38;
            *(_DWORD *)(a1 + 12) = -1;
          }
          goto LABEL_19;
        }
        v29 = *(_QWORD *)(a1 + 420);
        v20 += 56;
        v30 = __PAIR64__(v22, v44) * *(unsigned __int16 *)(a1 + 442);
        v31 = __CFADD__(__CFADD__((_DWORD)v29, (_DWORD)v30), HIDWORD(v29))
            | (unsigned __int8)__CFADD__(HIDWORD(v30), (v29 + v30) >> 32);
        v22 = (__PAIR64__(v22, v44++) + 1) >> 32;
        v23 = v29 + v30;
      }
      while ( !v31 );
    }
    v2 = 0;
    goto LABEL_19;
  }
  return 0;
}
// 30E38: variable 'v4' is possibly undefined
// 30E44: variable 'v7' is possibly undefined
// 30E6E: variable 'v13' is possibly undefined
// 30F46: variable 'v25' is possibly undefined
// 8DFE8: using guessed type char byte_8DFE8;
