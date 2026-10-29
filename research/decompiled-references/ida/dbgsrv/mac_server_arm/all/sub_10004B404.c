/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004B404
// Address: 0x000000010004B404

//----- (000000010004B404) ----------------------------------------------------
__int64 __fastcall sub_10004B404(__int64 a1)
{
  unsigned int *v2; // x0
  __int64 v3; // x2
  __int64 v4; // x3
  __int64 v5; // x4
  __int64 v6; // x5
  __int64 v7; // x6
  __int64 v8; // x7
  void *v9; // x20
  unsigned __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  int v17; // w21
  __int64 v18; // x8
  unsigned int v19; // w22
  const char *v20; // x22
  unsigned __int8 *v21; // x10
  const char *v23; // x23
  int v24; // w24
  int v25; // w0
  int v26; // w8
  unsigned __int64 v27; // x9
  unsigned __int64 v28; // x10
  int v29; // w14
  int v30; // w12
  int v31; // w13
  int v32; // w15
  unsigned __int8 *v33; // x16
  unsigned __int64 v34; // x17
  char v35; // w4
  unsigned int v36; // t1
  void *v37; // x20
  unsigned __int64 v38; // x23
  __int64 v39; // x21
  void *v40; // x0
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  __int64 v44; // x5
  __int64 v45; // x6
  __int64 v46; // x7
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  __int64 v50; // x5
  __int64 v51; // x6
  __int64 v52; // x7
  int v53; // w8
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  __int64 v57; // x5
  __int64 v58; // x6
  __int64 v59; // x7
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  __int64 v63; // x5
  __int64 v64; // x6
  __int64 v65; // x7
  __int64 v66; // x19
  void *v67; // x0
  int v68; // w20
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  __int64 v72; // x5
  __int64 v73; // x6
  __int64 v74; // x7
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  __int64 v78; // x5
  __int64 v79; // x6
  __int64 v80; // x7
  char v82; // [xsp+0h] [xbp-80h]
  void *v83; // [xsp+18h] [xbp-68h] BYREF
  unsigned __int64 v84; // [xsp+20h] [xbp-60h]
  __int64 v85; // [xsp+28h] [xbp-58h]
  void *v86; // [xsp+30h] [xbp-50h] BYREF
  unsigned __int64 v87; // [xsp+38h] [xbp-48h]
  __int64 v88; // [xsp+40h] [xbp-40h]

  sub_10005F000(3, (__int64 *)&v86);
  sub_10002CF84((_QWORD **)&v86, 0x1Fu);
  sub_10002CF84((_QWORD **)&v86, 0x11u);
  sub_10002CF84((_QWORD **)&v86, 8u);
  v2 = (unsigned int *)sub_10005A688(a1 + 192, 3, (__int64 *)&v86, 0);
  v9 = v2;
  if ( !v2 )
  {
    sub_10004B8FC(a1, "[%d] Could not establish the connection\n", v3, v4, v5, v6, v7, v8, *(_DWORD *)(a1 + 168));
    goto LABEL_32;
  }
  v10 = (unsigned __int64)v2 + *v2 + 5;
  v83 = (char *)v2 + 5;
  v84 = v10;
  v17 = unpack_dd((unsigned __int64 *)&v83, v10);
  if ( v17 )
  {
    v18 = *(_QWORD *)(a1 + 448);
    if ( *(_QWORD *)(v18 + 120) < 2u )
    {
LABEL_4:
      v19 = 1;
      goto LABEL_22;
    }
    v20 = (const char *)v83;
    v21 = (unsigned __int8 *)v83;
    while ( (unsigned __int64)v21 < v84 )
    {
      if ( !*v21++ )
      {
        v83 = v21;
        if ( !v20 )
          break;
        v23 = *(const char **)(v18 + 112);
        v24 = strlen(v20);
        v25 = strlen(v23);
        v26 = v25 ^ v24;
        if ( v25 && v24 >= 1 )
        {
          v27 = v24 & 0x7FFFFFFF;
          if ( v27 < 4 )
          {
            v28 = 0;
            goto LABEL_18;
          }
          v29 = 0;
          v30 = 0;
          v31 = 0;
          v32 = 0;
          v28 = v27 - (v24 & 3);
          v33 = (unsigned __int8 *)(v20 + 3);
          v34 = v28;
          do
          {
            v15 = *(v33 - 2);
            v16 = *(v33 - 1);
            v35 = *(v33 - 3) ^ v23[v29 % v25];
            v36 = *v33;
            v33 += 4;
            v14 = v36;
            v13 = (unsigned int)v35;
            v11 = (unsigned int)(char)(v16 ^ v23[(v29 + 2) % v25]);
            v12 = (unsigned int)(char)(v36 ^ v23[(v29 + 3) % v25]);
            v26 |= v13;
            v30 |= (char)(v15 ^ v23[(v29 + 1) % v25]);
            v31 |= v11;
            v32 |= v12;
            v29 += 4;
            v34 -= 4LL;
          }
          while ( v34 );
          v26 |= v32 | v31 | v30;
          if ( (v24 & 3) != 0 )
          {
            do
            {
LABEL_18:
              v26 |= (char)(v20[v28] ^ v23[(int)v28 % v25]);
              ++v28;
            }
            while ( v27 != v28 );
          }
        }
        if ( !v26 )
          goto LABEL_4;
        break;
      }
    }
    sub_10004B8FC(a1, "[%d] Bad password\n", v11, v12, v13, v14, v15, v16, *(_DWORD *)(a1 + 168));
  }
  else
  {
    sub_10004B8FC(a1, "[%d] Incompatible IDA version\n", v11, v12, v13, v14, v15, v16, *(_DWORD *)(a1 + 168));
  }
  v19 = 0;
LABEL_22:
  *(_BYTE *)(a1 + 261) = v19;
  qfree(v9);
  if ( v17 )
  {
    sub_10005F000(0, (__int64 *)&v83);
    v37 = v83;
    v38 = v84;
    v39 = v85;
    v83 = nullptr;
    v84 = 0;
    v85 = 0;
    if ( v86 )
    {
      v87 = 0;
      qfree(v86);
      v86 = v37;
      v87 = v38;
      v88 = v39;
      if ( v83 )
      {
        v84 = 0;
        qfree(v83);
      }
    }
    else
    {
      v86 = v37;
      v87 = v38;
      v88 = v39;
    }
    sub_10002CF84((_QWORD **)&v86, v19);
    sub_10005E89C(a1 + 192, (__int64 *)&v86);
    *(_DWORD *)(a1 + 256) = -1;
    *(_BYTE *)(a1 + 261) = 1;
    if ( v19 )
    {
      v84 = 0;
      v85 = 0;
      v83 = nullptr;
      v40 = (void *)(*(__int64 (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)(a1 + 192) + 16LL))(
                      a1 + 192,
                      3,
                      &v83);
      if ( v40 )
        qfree(v40);
      if ( v83 )
      {
        v84 = 0;
        qfree(v83);
      }
    }
  }
LABEL_32:
  *(_BYTE *)(a1 + 200) = 0;
  if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1) )
    goto LABEL_43;
  sub_10004B8FC(a1, "[%d] Broken connection (mode=%d)\n", v41, v42, v43, v44, v45, v46, *(_DWORD *)(a1 + 168));
  v53 = *(_DWORD *)(*(_QWORD *)(a1 + 448) + 140LL);
  if ( v53 == 2 )
  {
    v68 = *(_DWORD *)(*(_QWORD *)(a1 + 440) + 528LL);
    sub_10004B8FC(a1, "[%d] Debugged process PID: %d\n", v47, v48, v49, v50, v51, v52, *(_DWORD *)(a1 + 168));
    if ( v68 >= 1 )
    {
      sub_10004B8FC(a1, "[%d] Killing debugged process %d\n", v69, v70, v71, v72, v73, v74, *(_DWORD *)(a1 + 168));
      if ( (unsigned int)sub_10004B9B0(a1) )
        sub_10004B8FC(
          a1,
          "[%d] Failed to kill process after %d seconds. Giving up\n",
          v75,
          v76,
          v77,
          v78,
          v79,
          v80,
          *(_DWORD *)(a1 + 168));
    }
LABEL_43:
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 440) + 112LL))(*(_QWORD *)(a1 + 440));
    sub_10005CDDC(a1);
    v66 = 1;
    v67 = v86;
    if ( !v86 )
      return v66;
LABEL_44:
    v87 = 0;
    qfree(v67);
    return v66;
  }
  if ( v53 != 1 )
    goto LABEL_43;
  sub_10005CDDC(a1);
  sub_10004B8FC(
    a1,
    "[%d] Debugged session entered into sleeping mode\n",
    v54,
    v55,
    v56,
    v57,
    v58,
    v59,
    *(_DWORD *)(a1 + 168));
  if ( byte_10009D7E0 == 1
    && ((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 440) + 504LL))(*(_QWORD *)(a1 + 440)) & 1) == 0 )
  {
    sub_10004B050(
      (_BYTE *)(a1 + 192),
      "Error preparing debugger server to handle a broken connection\n",
      v60,
      v61,
      v62,
      v63,
      v64,
      v65,
      v82);
  }
  v66 = 0;
  v67 = v86;
  if ( v86 )
    goto LABEL_44;
  return v66;
}
// 10004B4C8: variable 'v3' is possibly undefined
// 10004B4C8: variable 'v4' is possibly undefined
// 10004B4C8: variable 'v5' is possibly undefined
// 10004B4C8: variable 'v6' is possibly undefined
// 10004B4C8: variable 'v7' is possibly undefined
// 10004B4C8: variable 'v8' is possibly undefined
// 10004B4E4: variable 'v11' is possibly undefined
// 10004B4E4: variable 'v12' is possibly undefined
// 10004B4E4: variable 'v13' is possibly undefined
// 10004B4E4: variable 'v14' is possibly undefined
// 10004B4E4: variable 'v15' is possibly undefined
// 10004B4E4: variable 'v16' is possibly undefined
// 10004B73C: variable 'v41' is possibly undefined
// 10004B73C: variable 'v42' is possibly undefined
// 10004B73C: variable 'v43' is possibly undefined
// 10004B73C: variable 'v44' is possibly undefined
// 10004B73C: variable 'v45' is possibly undefined
// 10004B73C: variable 'v46' is possibly undefined
// 10004B774: variable 'v54' is possibly undefined
// 10004B774: variable 'v55' is possibly undefined
// 10004B774: variable 'v56' is possibly undefined
// 10004B774: variable 'v57' is possibly undefined
// 10004B774: variable 'v58' is possibly undefined
// 10004B774: variable 'v59' is possibly undefined
// 10004B7AC: variable 'v60' is possibly undefined
// 10004B7AC: variable 'v61' is possibly undefined
// 10004B7AC: variable 'v62' is possibly undefined
// 10004B7AC: variable 'v63' is possibly undefined
// 10004B7AC: variable 'v64' is possibly undefined
// 10004B7AC: variable 'v65' is possibly undefined
// 10004B7AC: variable 'v82' is possibly undefined
// 10004B7DC: variable 'v47' is possibly undefined
// 10004B7DC: variable 'v48' is possibly undefined
// 10004B7DC: variable 'v49' is possibly undefined
// 10004B7DC: variable 'v50' is possibly undefined
// 10004B7DC: variable 'v51' is possibly undefined
// 10004B7DC: variable 'v52' is possibly undefined
// 10004B804: variable 'v69' is possibly undefined
// 10004B804: variable 'v70' is possibly undefined
// 10004B804: variable 'v71' is possibly undefined
// 10004B804: variable 'v72' is possibly undefined
// 10004B804: variable 'v73' is possibly undefined
// 10004B804: variable 'v74' is possibly undefined
// 10004B828: variable 'v75' is possibly undefined
// 10004B828: variable 'v76' is possibly undefined
// 10004B828: variable 'v77' is possibly undefined
// 10004B828: variable 'v78' is possibly undefined
// 10004B828: variable 'v79' is possibly undefined
// 10004B828: variable 'v80' is possibly undefined
// 10009D7E0: using guessed type char byte_10009D7E0;
