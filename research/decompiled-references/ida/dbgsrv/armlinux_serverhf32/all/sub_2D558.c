/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2D558
// Address: 0x0002D558

//----- (0002D558) --------------------------------------------------------
int __fastcall sub_2D558(int a1, _DWORD *a2)
{
  unsigned int v4; // r0
  __int64 v6; // r0
  __int64 v7; // kr08_8
  unsigned int v8; // r9
  void **v9; // r12
  unsigned int v10; // r10
  int v11; // r11
  void **v12; // r6
  unsigned int v13; // r10
  unsigned int v14; // r10
  int v15; // r7
  void *v16; // r1
  void *v17; // r2
  void *v18; // r3
  void *v19; // r1
  unsigned int v20; // r3
  _BOOL4 v21; // r9
  __int64 v22; // r0
  bool v23; // zf
  int v24; // r7
  __int64 v25; // r0
  unsigned int v26; // r3
  __int64 v27; // r6
  unsigned int v28; // kr00_4
  unsigned int v29; // r2
  int v30; // r0
  int v31; // r1
  bool v32; // zf
  int v33; // r7
  unsigned int v34; // r6
  __int64 v35; // r2
  int v36; // r11
  int v37; // r10
  int v38; // r7
  void *v39; // r0
  void *v40; // r0
  __int64 v41; // r2
  __int64 v42; // r6
  void *v43; // r7
  void *v44; // r0
  void *v45; // r0
  int v46; // r6
  void *v47; // r0
  void **v48; // r0
  void **v49; // r0
  __int64 v50; // [sp+8h] [bp-ACh]
  size_t n; // [sp+1Ch] [bp-98h]
  void *na; // [sp+1Ch] [bp-98h]
  void *v53; // [sp+24h] [bp-90h] BYREF
  unsigned int v54; // [sp+28h] [bp-8Ch]
  int v55; // [sp+2Ch] [bp-88h]
  void *ptr; // [sp+30h] [bp-84h]
  unsigned int v57; // [sp+34h] [bp-80h]
  int v58; // [sp+38h] [bp-7Ch]
  void *v59; // [sp+3Ch] [bp-78h]
  void *v60; // [sp+40h] [bp-74h]
  void *v61; // [sp+44h] [bp-70h]
  void *v62; // [sp+48h] [bp-6Ch]
  void *v63; // [sp+4Ch] [bp-68h]
  void *v64; // [sp+50h] [bp-64h]
  __int64 v65; // [sp+54h] [bp-60h]
  void *v66; // [sp+5Ch] [bp-58h]
  void *v67; // [sp+60h] [bp-54h]
  char v68; // [sp+64h] [bp-50h]
  char v69; // [sp+65h] [bp-4Fh]
  char v70; // [sp+66h] [bp-4Eh]
  void *v71; // [sp+68h] [bp-4Ch] BYREF
  int v72; // [sp+6Ch] [bp-48h]
  __int64 v73; // [sp+70h] [bp-44h]
  int v74; // [sp+78h] [bp-3Ch]
  int v75; // [sp+7Ch] [bp-38h]
  void *v76; // [sp+80h] [bp-34h]
  void *v77; // [sp+84h] [bp-30h]
  void *v78; // [sp+88h] [bp-2Ch]
  void *v79; // [sp+8Ch] [bp-28h]
  void *v80; // [sp+90h] [bp-24h]
  void *v81; // [sp+94h] [bp-20h]
  int v82; // [sp+98h] [bp-1Ch]
  int v83; // [sp+9Ch] [bp-18h]
  int v84; // [sp+A0h] [bp-14h]
  int v85; // [sp+A4h] [bp-10h]
  char v86; // [sp+A8h] [bp-Ch]
  char v87; // [sp+A9h] [bp-Bh]
  char v88; // [sp+AAh] [bp-Ah]

  v4 = *(_DWORD *)(a1 + 48);
  if ( v4 < *(_DWORD *)(a1 + 52) )
  {
LABEL_2:
    *a2 = *(_DWORD *)(a1 + 28) + 68 * v4;
    ++*(_DWORD *)(a1 + 48);
    return 1;
  }
  v6 = *(_QWORD *)(a1 + 40);
  v7 = v6;
  v50 = *(_QWORD *)(a1 + 16) - v6;
  if ( !v50 )
    return 0;
  v8 = *(_DWORD *)(a1 + 32);
  if ( (_DWORD)v50 != v8 )
  {
    v53 = nullptr;
    v54 = 0;
    v55 = 0;
    ptr = nullptr;
    v57 = 0;
    v58 = 0;
    v59 = nullptr;
    v60 = nullptr;
    v61 = nullptr;
    v62 = nullptr;
    v63 = nullptr;
    v64 = nullptr;
    v65 = 0;
    v66 = nullptr;
    v67 = nullptr;
    v68 = 0;
    v69 = 0;
    v70 = 0;
    if ( (unsigned int)v50 >= v8 )
    {
      if ( (unsigned int)v50 <= v8 )
      {
LABEL_28:
        v7 = v6;
        goto LABEL_29;
      }
      v9 = *(void ***)(a1 + 28);
      v10 = *(_DWORD *)(a1 + 36);
      if ( v9 <= &v53 && &v53 < &v9[17 * v10] )
      {
        v71 = nullptr;
        v72 = 0;
        v73 = 0;
        v74 = 0;
        v75 = 0;
        v76 = v59;
        v77 = v60;
        v78 = v61;
        v79 = v62;
        v82 = 0;
        v83 = 0;
        v84 = 0;
        v85 = 0;
        v86 = 0;
        v87 = 0;
        v88 = 0;
        v80 = v63;
        v81 = v64;
        if ( (unsigned int)v50 <= v10
          || (v49 = (void **)sub_77EB0(a1 + 28, v9, v50, 0x44u),
              v8 = *(_DWORD *)(a1 + 32),
              v9 = v49,
              *(_DWORD *)(a1 + 28) = v49,
              (unsigned int)v50 > v8) )
        {
          v46 = 17 * v8;
          while ( 1 )
          {
            sub_23428((int)&v9[v46], (int)&v71);
            ++v8;
            v46 += 17;
            if ( (unsigned int)v50 <= v8 )
              break;
            v9 = *(void ***)(a1 + 28);
          }
        }
        v47 = (void *)HIDWORD(v73);
        *(_DWORD *)(a1 + 32) = v50;
        if ( v47 )
        {
          v74 = 0;
          sub_77E08(v47);
        }
        if ( v71 )
        {
          v72 = 0;
          sub_77E08(v71);
        }
        goto LABEL_23;
      }
      if ( (unsigned int)v50 <= v10
        || (v48 = (void **)sub_77EB0(a1 + 28, v9, v50, 0x44u),
            v8 = *(_DWORD *)(a1 + 32),
            v9 = v48,
            *(_DWORD *)(a1 + 28) = v48,
            (unsigned int)v50 > v8) )
      {
        v11 = 17 * v8;
        while ( 1 )
        {
          v12 = &v9[v11];
          v9[v11] = nullptr;
          v12[1] = nullptr;
          v12[2] = nullptr;
          v12[3] = nullptr;
          v12[4] = nullptr;
          v12[5] = nullptr;
          v12[6] = nullptr;
          *((_BYTE *)v12 + 28) = 0;
          *((_BYTE *)v12 + 29) = 0;
          *((_WORD *)v12 + 15) = 0;
          v12[8] = nullptr;
          v12[9] = nullptr;
          v12[10] = nullptr;
          v12[11] = nullptr;
          if ( &v9[v11] != &v53 )
          {
            v13 = v54;
            if ( v54 )
            {
              n = v54 - 1;
              if ( v54 != 1 )
              {
                v43 = v53;
                v44 = sub_77EB0((int)&v9[v11], nullptr, v54, 1u);
                *v12 = v44;
                v12[1] = (void *)v13;
                memmove(v44, v43, n);
                *((_BYTE *)*v12 + n) = 0;
              }
            }
            v14 = v57;
            if ( v57 && (v15 = v57 - 1, v57 != 1) )
            {
              v45 = v12[3];
              na = ptr;
              if ( v57 > (unsigned int)v12[5] )
              {
                v45 = sub_77EB0((int)(v12 + 3), v45, v57, 1u);
                v12[3] = v45;
              }
              v12[4] = (void *)v14;
              memmove(v45, na, v14 - 1);
              *((_BYTE *)v12[3] + v15) = 0;
            }
            else
            {
              v12[4] = nullptr;
            }
          }
          v16 = v60;
          v17 = v61;
          v18 = v62;
          ++v8;
          v11 += 17;
          v12[6] = v59;
          v12[7] = v16;
          v12[8] = v17;
          v12[9] = v18;
          v19 = v64;
          v12[10] = v63;
          v12[11] = v19;
          *((_QWORD *)v12 + 6) = v65;
          v12[14] = v66;
          v12[15] = v67;
          *((_BYTE *)v12 + 64) = v68;
          *((_BYTE *)v12 + 65) = v69;
          *((_BYTE *)v12 + 66) = v70;
          if ( (unsigned int)v50 <= v8 )
            break;
          v9 = *(void ***)(a1 + 28);
        }
      }
    }
    else
    {
      v36 = v50;
      v37 = 68 * v50;
      do
      {
        v38 = *(_DWORD *)(a1 + 28) + v37;
        v39 = *(void **)(v38 + 12);
        if ( v39 )
        {
          *(_DWORD *)(v38 + 16) = 0;
          sub_77E08(v39);
        }
        v40 = *(void **)v38;
        if ( *(_DWORD *)v38 )
        {
          *(_DWORD *)(v38 + 4) = 0;
          sub_77E08(v40);
        }
        ++v36;
        v37 += 68;
      }
      while ( v8 != v36 );
    }
    *(_DWORD *)(a1 + 32) = v50;
LABEL_23:
    if ( ptr )
    {
      v57 = 0;
      sub_77E08(ptr);
    }
    if ( v53 )
    {
      v54 = 0;
      sub_77E08(v53);
    }
    v6 = *(_QWORD *)(a1 + 40);
    goto LABEL_28;
  }
LABEL_29:
  *(_DWORD *)(a1 + 48) = 0;
  if ( !v6 )
  {
    (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 4) + 472) + 8))(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 472));
    v7 = *(_QWORD *)(a1 + 40);
  }
  v20 = *(_DWORD *)(a1 + 24);
  v21 = v7 == 0;
  if ( !v20 )
    v21 = 1;
  if ( !v21 )
  {
    v22 = 0;
    if ( HIDWORD(v7) )
    {
      HIDWORD(v42) = 0;
      LODWORD(v42) = ((unsigned int)v7 * (unsigned __int64)v20) >> 32;
      v22 = (HIDWORD(v7) * (unsigned __int64)v20 + v42) >> 32 != 0;
    }
    if ( v22 )
      goto LABEL_51;
  }
  v23 = (_DWORD)v50 == 0;
  if ( (_DWORD)v50 )
    v23 = v20 == 0;
  if ( v23 || is_mul_ok(v50, v20) )
  {
    v24 = *(_DWORD *)(a1 + 4);
    v71 = (void *)v24;
    LODWORD(v25) = sub_74C30(*(_DWORD *)(v24 + 364), 0, 1);
    v26 = *(_DWORD *)(a1 + 24);
    v28 = *(_DWORD *)(a1 + 40);
    LODWORD(v27) = v28 * v26;
    v29 = *(_DWORD *)(a1 + 44);
    v73 = v25 - *(_QWORD *)(v24 + 368);
    HIDWORD(v27) = (__PAIR64__(v29, v28) * v26) >> 32;
    v30 = sub_74C30(*((_DWORD *)v71 + 91), v27 + *(_QWORD *)(a1 + 8) + *((_QWORD *)v71 + 46), 0);
    v32 = ++v31 == 0;
    if ( !v31 )
      v32 = v30 == -1;
    if ( !v32 && (_DWORD)v50 )
    {
      v33 = 0;
      v34 = 0;
      while ( sub_2D370(a1, *(_DWORD *)(a1 + 28) + v33) )
      {
        ++v34;
        v33 += 68;
        if ( (unsigned int)v50 <= v34 )
        {
          LODWORD(v41) = v73;
          HIDWORD(v41) = *((_DWORD *)v71 + 93);
          sub_74C30(*((_DWORD *)v71 + 91), v41 + __PAIR64__(HIDWORD(v73), *((_DWORD *)v71 + 92)), 0);
          *(_DWORD *)(a1 + 52) = v34;
          goto LABEL_49;
        }
      }
      LODWORD(v35) = v73;
      HIDWORD(v35) = *((_DWORD *)v71 + 93);
      sub_74C30(*((_DWORD *)v71 + 91), v35 + __PAIR64__(HIDWORD(v73), *((_DWORD *)v71 + 92)), 0);
      *(_DWORD *)(a1 + 52) = v34;
      if ( !v34 )
        return 0;
LABEL_49:
      v4 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 40) += v34;
      if ( v4 < v34 )
        goto LABEL_2;
      return 0;
    }
    sub_74C30(*((_DWORD *)v71 + 91), *((_QWORD *)v71 + 46) + v73, 0);
    *(_DWORD *)(a1 + 52) = 0;
    return 0;
  }
  else
  {
LABEL_51:
    *(_DWORD *)(a1 + 52) = 0;
    return 0;
  }
}
// 2D7AC: variable 'v25' is possibly undefined
// 2D7D6: variable 'v31' is possibly undefined
