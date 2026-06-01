/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7B3F8
// Address: 0x0007B3F8

//----- (0007B3F8) --------------------------------------------------------
int __fastcall sub_7B3F8(int a1, int *a2, char **a3, int a4, int a5)
{
  __suseconds_t v9; // r0
  unsigned int v10; // r1
  int v11; // r12
  char *v12; // r0
  unsigned int v13; // r1
  int v14; // r0
  const char *v15; // r0
  int v16; // r4
  int v18; // r0
  int v19; // r1
  const char *v20; // r2
  int v21; // r3
  int *v22; // r4
  int v23; // r0
  int v24; // r1
  int v25; // r2
  int v26; // r3
  int v27; // r0
  int v28; // r1
  void *v29; // r4
  __suseconds_t v30; // r0
  unsigned int v31; // r1
  unsigned int v32; // r2
  int v33; // r3
  unsigned int v34; // r2
  unsigned __int64 v35; // r0
  unsigned int v36; // r7
  int v37; // r2
  __suseconds_t v38; // r0
  unsigned int v39; // r1
  unsigned int v40; // r2
  int v41; // r3
  unsigned int v42; // r2
  unsigned __int64 v43; // r0
  int v44; // r0
  const char *v45; // r4
  const char *v46; // r0
  int v47; // [sp+24h] [bp-70h] BYREF
  int v48; // [sp+28h] [bp-6Ch] BYREF
  unsigned __int64 v49; // [sp+30h] [bp-64h]
  unsigned __int64 v50; // [sp+38h] [bp-5Ch]
  int v51; // [sp+40h] [bp-54h]
  _DWORD v52[2]; // [sp+4Ch] [bp-48h] BYREF
  const char *v53; // [sp+54h] [bp-40h]
  int v54; // [sp+58h] [bp-3Ch]
  int v55; // [sp+5Ch] [bp-38h]
  int v56; // [sp+60h] [bp-34h]
  int v57; // [sp+64h] [bp-30h]
  int v58; // [sp+68h] [bp-2Ch]
  int v59; // [sp+6Ch] [bp-28h]
  int v60; // [sp+70h] [bp-24h]
  unsigned int v61[3]; // [sp+74h] [bp-20h] BYREF
  int *v62; // [sp+80h] [bp-14h]
  int v63; // [sp+84h] [bp-10h]
  int v64; // [sp+88h] [bp-Ch]

  v48 = a4;
  v9 = sub_78F48();
  v11 = v48;
  v49 = __PAIR64__(
          (__PAIR64__(
             (__PAIR64__((__PAIR64__(v10 >> 27, 32 * v10) - v10) >> 23, 15872 * v10) + v10) >> 26,
             1015872 * v10)
         - (__PAIR64__((__PAIR64__(v10 >> 27, 32 * v10) - v10) >> 23, 15872 * v10)
          + v10)) >> 32,
          999999 * v10)
      + v10
      + (unsigned int)v9;
  if ( v48 < 0 )
  {
    v50 = 0;
    if ( v48 != -1 )
      v11 = -v48;
  }
  else
  {
    v50 = __PAIR64__(
            (__PAIR64__(
               (__PAIR64__((__PAIR64__(v10 >> 27, 32 * v10) - v10) >> 23, 15872 * v10) + v10) >> 26,
               1015872 * v10)
           - (__PAIR64__((__PAIR64__(v10 >> 27, 32 * v10) - v10) >> 23, 15872 * v10)
            + v10)) >> 32,
            999999 * v10)
        + v10
        + (unsigned int)v9
        + 1000 * v48;
  }
  v51 = v11;
  if ( a3 )
  {
    v12 = *a3;
    if ( *a3 )
    {
      a3[1] = nullptr;
      sub_77F70(v12);
      *a3 = nullptr;
      a3[2] = nullptr;
    }
  }
  if ( a5 )
    v13 = 2;
  else
    v13 = 1;
  v64 = a5;
  v63 = a1;
  v61[0] = (unsigned int)&off_D1D4C;
  v61[1] = 0;
  v61[2] = 0;
  v62 = nullptr;
  v14 = sub_7F474(v61, v13);
  if ( v14 )
  {
    v15 = (const char *)sub_79440(v14);
    sub_79AC4(a3, "Could not create pipe: %s", v15);
    goto LABEL_11;
  }
  v18 = *a2;
  v19 = a2[1];
  v20 = (const char *)a2[2];
  v21 = a2[3];
  v22 = a2 + 4;
  v52[0] = v18;
  v52[1] = v19;
  v53 = v20;
  v54 = v21;
  v23 = *v22;
  v24 = v22[1];
  v25 = v22[2];
  v26 = v22[3];
  v22 += 4;
  v55 = v23;
  v56 = v24;
  v57 = v25;
  v58 = v26;
  v27 = *v22;
  v28 = v22[1];
  v55 = -1;
  v59 = v27;
  v60 = v28;
  v56 = *v62;
  v57 = v62[a5 != 0];
  v29 = sub_7A940((int)v52, a3);
  sub_7F518((int)v61);
  if ( !v29 )
    goto LABEL_11;
  if ( v48 >= 0 )
  {
    v30 = sub_78F48();
    v32 = ((__int64)(__PAIR64__(v31 >> 27, 32 * v31) - v31) >> 23) + __CFADD__(15872 * v31, v31);
    v33 = 1000000 * v31 + v30;
    v34 = __CFADD__(1000000 * v31, v30)
        + ((__PAIR64__((v32 << 6) | ((15873 * v31) >> 26), 1015872 * v31) - __PAIR64__(v32, 15873 * v31)) >> 32)
        + __CFADD__(999999 * v31, v31);
    LODWORD(v35) = v33 + 10;
    HIDWORD(v35) = __CFADD__(v33, 10) + v34;
    if ( v35 >= v50 )
    {
      sub_7F430((int)v61);
      goto LABEL_31;
    }
    v51 = (v50 + 999 - __PAIR64__(v34, v33)) / 0x3E8;
  }
  v36 = sub_7F5A4(v61, a3, (int)&v48, 0x400u);
  sub_7F430((int)v61);
  if ( v36 == -1 )
    goto LABEL_31;
  if ( v48 < 0 )
    goto LABEL_19;
  v38 = sub_78F48();
  v40 = ((__int64)(__PAIR64__(v39 >> 27, 32 * v39) - v39) >> 23) + __CFADD__(15872 * v39, v39);
  v41 = 1000000 * v39 + v38;
  v42 = __CFADD__(1000000 * v39, v38)
      + ((__PAIR64__((v40 << 6) | ((15873 * v39) >> 26), 1015872 * v39) - __PAIR64__(v40, 15873 * v39)) >> 32)
      + __CFADD__(999999 * v39, v39);
  LODWORD(v43) = v41 + 10;
  HIDWORD(v43) = __CFADD__(v41, 10) + v42;
  if ( v43 >= v50 )
  {
LABEL_31:
    sub_79AC4(a3, "Timed out capturing the process output");
    goto LABEL_32;
  }
  v51 = (v50 + 999 - __PAIR64__(v42, v41)) / 0x3E8;
LABEL_19:
  if ( a4 >= 0 )
    v37 = v51;
  else
    v37 = -1;
  if ( sub_7A600((__pid_t)v29, &v47, v37) == -1 )
  {
    sub_79AC4(a3, "Failed to retrieve exit code for %s", v53);
LABEL_32:
    v44 = sub_7A6AC((__pid_t)v29);
    if ( v44 )
    {
      v45 = v53;
      v46 = (const char *)sub_79440(v44);
      sub_79AC4(a3, "Could not terminate %s: %s", v45, v46);
    }
    goto LABEL_11;
  }
  v16 = 1;
  if ( !v47 )
    goto LABEL_12;
  sub_79AC4(a3, "%s exited with error code %d", v53, v47);
LABEL_11:
  v16 = 0;
LABEL_12:
  v61[0] = (unsigned int)&off_D1D38;
  sub_7F430((int)v61);
  return v16;
}
// 7B44A: variable 'v10' is possibly undefined
// 7B560: variable 'v31' is possibly undefined
// 7B646: variable 'v39' is possibly undefined
// D1D38: using guessed type _UNKNOWN *off_D1D38;
// D1D4C: using guessed type _UNKNOWN *off_D1D4C;
