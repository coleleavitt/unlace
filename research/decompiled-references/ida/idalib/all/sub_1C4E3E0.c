void __fastcall sub_1C4E3E0(__int64 *a1, char *a2, unsigned __int8 (__fastcall *a3)(void **, __int64 *))
{
  char *v4; // rbx
  char *v5; // rbp
  __int64 v6; // r13
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r14
  __int64 v12; // rax
  signed __int64 v13; // rdx
  __int64 v14; // rax
  __int64 *v15; // r14
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 *v18; // r13
  __int64 v19; // r15
  __int64 *v20; // r14
  __int64 v21; // rax
  __int64 v22; // rax
  signed __int64 v23; // r10
  __int64 *v24; // r15
  __int64 v25; // r10
  signed __int64 v26; // rdx
  __int64 v27; // rax
  __int64 *v28; // r14
  __int64 *v29; // r15
  signed __int64 v30; // rax
  __int64 *v31; // r15
  signed __int64 v32; // rdx
  __int64 v33; // r15
  __int64 v34; // rax
  __int64 *v35; // r13
  __int64 v36; // r14
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r14
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // r15
  __int64 v43; // rax
  __int64 *v44; // r14
  __int64 *v45; // r15
  signed __int64 v46; // rax
  __int64 *v47; // r15
  __int64 v48; // rax
  __int64 *v49; // r13
  __int64 v50; // r15
  __int64 *v51; // r14
  __int64 v52; // rax
  signed __int64 v53; // r10
  __int64 *v54; // r15
  __int64 v55; // r10
  signed __int64 v56; // rdx
  __int64 v57; // rax
  __int64 *v58; // r14
  __int64 *v59; // r15
  signed __int64 v60; // rax
  __int64 *v61; // r15
  __int64 *v62; // [rsp+8h] [rbp-B0h]
  __int64 *v63; // [rsp+10h] [rbp-A8h]
  __int64 *v64; // [rsp+10h] [rbp-A8h]
  __int64 *v65; // [rsp+18h] [rbp-A0h]
  __int64 v66; // [rsp+18h] [rbp-A0h]
  __int64 v67; // [rsp+20h] [rbp-98h]
  __int64 v68; // [rsp+28h] [rbp-90h]
  __int64 v69; // [rsp+28h] [rbp-90h]
  __int64 *v70; // [rsp+30h] [rbp-88h]
  __int64 v71; // [rsp+30h] [rbp-88h]
  __int64 v72; // [rsp+30h] [rbp-88h]
  __int64 *v73; // [rsp+30h] [rbp-88h]
  __int64 v74; // [rsp+30h] [rbp-88h]
  __int64 v75; // [rsp+30h] [rbp-88h]
  __int64 v76; // [rsp+38h] [rbp-80h]
  __int64 v77; // [rsp+38h] [rbp-80h]
  __int64 v78; // [rsp+38h] [rbp-80h]
  __int64 v79; // [rsp+38h] [rbp-80h]
  __int64 v80; // [rsp+40h] [rbp-78h]
  __int64 v81; // [rsp+40h] [rbp-78h]
  __int64 *v82; // [rsp+40h] [rbp-78h]
  __int64 v83; // [rsp+40h] [rbp-78h]
  __int64 v84; // [rsp+40h] [rbp-78h]
  __int64 v85; // [rsp+40h] [rbp-78h]
  __int64 v86; // [rsp+40h] [rbp-78h]
  __int64 v87; // [rsp+40h] [rbp-78h]
  unsigned __int64 v88; // [rsp+40h] [rbp-78h]
  __int64 v89; // [rsp+40h] [rbp-78h]
  __int64 *v90; // [rsp+48h] [rbp-70h]
  __int64 *v91; // [rsp+48h] [rbp-70h]
  unsigned __int64 v92; // [rsp+48h] [rbp-70h]
  __int64 v93; // [rsp+48h] [rbp-70h]
  __int64 v94; // [rsp+48h] [rbp-70h]
  __int64 *v95; // [rsp+48h] [rbp-70h]
  __int64 *v96; // [rsp+48h] [rbp-70h]
  __int64 v97; // [rsp+48h] [rbp-70h]
  __int64 v98; // [rsp+48h] [rbp-70h]
  __int64 v99; // [rsp+48h] [rbp-70h]
  __int64 *v100; // [rsp+48h] [rbp-70h]
  __int64 v101; // [rsp+48h] [rbp-70h]
  __int64 v102; // [rsp+48h] [rbp-70h]
  __int64 v103; // [rsp+48h] [rbp-70h]
  __int64 v104; // [rsp+48h] [rbp-70h]
  unsigned __int64 v105; // [rsp+48h] [rbp-70h]
  __int64 v106; // [rsp+50h] [rbp-68h]
  __int64 v107; // [rsp+50h] [rbp-68h]
  __int64 v108; // [rsp+50h] [rbp-68h]
  __int64 v109; // [rsp+50h] [rbp-68h]
  __int64 v110; // [rsp+50h] [rbp-68h]
  unsigned __int64 v111; // [rsp+50h] [rbp-68h]
  __int64 v112; // [rsp+50h] [rbp-68h]
  __int64 v113; // [rsp+50h] [rbp-68h]
  __int64 v114; // [rsp+58h] [rbp-60h]
  __int64 v115; // [rsp+58h] [rbp-60h]
  __int64 v116; // [rsp+58h] [rbp-60h]
  __int64 v117; // [rsp+58h] [rbp-60h]
  __int64 v118; // [rsp+60h] [rbp-58h] BYREF
  __int64 v119; // [rsp+68h] [rbp-50h]
  char *v120; // [rsp+70h] [rbp-48h]

  sub_1C38E20(&v118, (__int64)a1, (__int64)a2);
  if ( v120 )
  {
    sub_1C4C4C0(a1, a2, v120, v119, a3);
  }
  else if ( a2 - (char *)a1 <= 336 )
  {
    sub_1C39250((__int64)a1, (__int64)a2, a3);
  }
  else
  {
    v6 = 24 * ((__int64)(0xAAAAAAAAAAAAAAABLL * ((a2 - (char *)a1) >> 3)) >> 1);
    v62 = &a1[(unsigned __int64)v6 / 8];
    v67 = 0xAAAAAAAAAAAAAAABLL * (v6 >> 3);
    if ( (unsigned __int64)v6 <= 0x150 )
    {
      sub_1C39250((__int64)a1, (__int64)v62, a3);
    }
    else
    {
      v7 = 3 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (v6 >> 3)) >> 1);
      v63 = &a1[v7];
      v68 = 0xAAAAAAAAAAAAAAABLL * ((v7 * 8) >> 3);
      if ( (unsigned __int64)v7 <= 42 )
      {
        sub_1C39250((__int64)a1, (__int64)&a1[v7], a3);
      }
      else
      {
        v8 = 3 * ((__int64)(0xAAAAAAAAAAAAAAABLL * ((v7 * 8) >> 3)) >> 1);
        v65 = &a1[v8];
        v76 = 0xAAAAAAAAAAAAAAABLL * ((v8 * 8) >> 3);
        if ( (unsigned __int64)v8 <= 42 )
        {
          sub_1C39250((__int64)a1, (__int64)&a1[v8], a3);
          v12 = 24 * ((__int64)(0xAAAAAAAAAAAAAAABLL * ((v7 * 8) >> 3)) >> 1);
        }
        else
        {
          v9 = 24 * ((__int64)(0xAAAAAAAAAAAAAAABLL * ((v8 * 8) >> 3)) >> 1);
          v70 = &a1[(unsigned __int64)v9 / 8];
          v80 = 0xAAAAAAAAAAAAAAABLL * (v9 >> 3);
          if ( (unsigned __int64)v9 <= 0x150 )
          {
            sub_1C39250((__int64)a1, (__int64)&a1[(unsigned __int64)v9 / 8], a3);
          }
          else
          {
            v90 = &a1[3 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (v9 >> 3)) >> 1)];
            sub_1C4E330(a1, (__int64)v90, a3);
            sub_1C4E330(v90, (__int64)&a1[(unsigned __int64)v9 / 8], a3);
            sub_1C4E040(
              a1,
              v90,
              (__int64)&a1[(unsigned __int64)v9 / 8],
              0xAAAAAAAAAAAAAAABLL * ((24 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (v9 >> 3)) >> 1)) >> 3),
              0xAAAAAAAAAAAAAAABLL * ((v9 - 24 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (v9 >> 3)) >> 1)) >> 3),
              (unsigned __int8 (__fastcall *)(__int64 *, __int64 *))a3);
          }
          v10 = 24 * ((__int64)(0xAAAAAAAAAAAAAAABLL * ((v7 * 8) >> 3)) >> 1) - v9;
          v11 = 0xAAAAAAAAAAAAAAABLL * (v10 >> 3);
          if ( v10 <= 336 )
          {
            sub_1C39250((__int64)v70, (__int64)v65, a3);
          }
          else
          {
            v91 = &v70[3 * (v11 >> 1)];
            sub_1C4E330(v70, (__int64)v91, a3);
            sub_1C4E330(v91, (__int64)v65, a3);
            sub_1C4E040(
              v70,
              v91,
              (__int64)v65,
              0xAAAAAAAAAAAAAAABLL * ((24 * (v11 >> 1)) >> 3),
              0xAAAAAAAAAAAAAAABLL * (v65 - v91),
              (unsigned __int8 (__fastcall *)(__int64 *, __int64 *))a3);
          }
          sub_1C4E040(a1, v70, (__int64)v65, v80, v11, (unsigned __int8 (__fastcall *)(__int64 *, __int64 *))a3);
          v12 = 24 * ((__int64)(0xAAAAAAAAAAAAAAABLL * ((v7 * 8) >> 3)) >> 1);
        }
        v71 = 0xAAAAAAAAAAAAAAABLL * ((v7 * 8 - v12) >> 3);
        if ( v7 * 8 - v12 <= 336 )
        {
          sub_1C39250((__int64)v65, (__int64)&a1[v7], a3);
        }
        else
        {
          v13 = 0xAAAAAAAAAAAAAAABLL * ((v7 * 8 - v12) >> 3);
          v14 = 3 * (v13 >> 1);
          v15 = &v65[v14];
          v81 = 0xAAAAAAAAAAAAAAABLL * ((v14 * 8) >> 3);
          if ( (unsigned __int64)v14 <= 42 )
          {
            sub_1C39250((__int64)v65, (__int64)&v65[v14], a3);
          }
          else
          {
            v114 = 24 * (v13 >> 1);
            v106 = 3 * ((__int64)(0xAAAAAAAAAAAAAAABLL * ((v14 * 8) >> 3)) >> 1);
            sub_1C4E330(v65, (__int64)&v65[v106], a3);
            sub_1C4E330(&v65[v106], (__int64)v15, a3);
            sub_1C4E040(
              v65,
              &v65[v106],
              (__int64)v15,
              0xAAAAAAAAAAAAAAABLL * ((v106 * 8) >> 3),
              0xAAAAAAAAAAAAAAABLL * ((v114 - v106 * 8) >> 3),
              (unsigned __int8 (__fastcall *)(__int64 *, __int64 *))a3);
          }
          if ( (char *)&a1[v7] - (char *)v15 <= 336 )
          {
            sub_1C39250((__int64)v15, (__int64)&a1[v7], a3);
          }
          else
          {
            v107 = 3 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (&a1[v7] - v15)) >> 1);
            sub_1C4E330(v15, (__int64)&v15[v107], a3);
            sub_1C4E330(&v15[v107], (__int64)&a1[v7], a3);
            sub_1C4E040(
              v15,
              &v15[v107],
              (__int64)&a1[v7],
              0xAAAAAAAAAAAAAAABLL * ((v107 * 8) >> 3),
              0xAAAAAAAAAAAAAAABLL * (&a1[v7] - &v15[v107]),
              (unsigned __int8 (__fastcall *)(__int64 *, __int64 *))a3);
          }
          sub_1C4E040(
            v65,
            v15,
            (__int64)&a1[v7],
            v81,
            0xAAAAAAAAAAAAAAABLL * (&a1[v7] - v15),
            (unsigned __int8 (__fastcall *)(__int64 *, __int64 *))a3);
        }
        sub_1C4E040(a1, v65, (__int64)&a1[v7], v76, v71, (unsigned __int8 (__fastcall *)(__int64 *, __int64 *))a3);
      }
      v16 = v6 - v7 * 8;
      v66 = 0xAAAAAAAAAAAAAAABLL * (v16 >> 3);
      if ( v16 <= 336 )
      {
        sub_1C39250((__int64)v63, (__int64)v62, a3);
      }
      else
      {
        v17 = 24 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (v16 >> 3)) >> 1);
        v18 = &v63[(unsigned __int64)v17 / 8];
        v72 = 0xAAAAAAAAAAAAAAABLL * (v17 >> 3);
        if ( (unsigned __int64)v17 <= 0x150 )
        {
          sub_1C39250((__int64)v63, (__int64)&v63[(unsigned __int64)v17 / 8], a3);
        }
        else
        {
          v19 = 24 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (v17 >> 3)) >> 1);
          v20 = &v63[(unsigned __int64)v19 / 8];
          v77 = 0xAAAAAAAAAAAAAAABLL * (v19 >> 3);
          if ( (unsigned __int64)v19 <= 0x150 )
          {
            v89 = v17;
            sub_1C39250((__int64)v63, (__int64)&v63[(unsigned __int64)v19 / 8], a3);
            v21 = v89;
          }
          else
          {
            v108 = v17;
            v82 = &v63[3 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (v19 >> 3)) >> 1)];
            sub_1C4E330(v63, (__int64)v82, a3);
            sub_1C4E330(v82, (__int64)v20, a3);
            sub_1C4E040(
              v63,
              v82,
              (__int64)v20,
              0xAAAAAAAAAAAAAAABLL * ((24 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (v19 >> 3)) >> 1)) >> 3),
              0xAAAAAAAAAAAAAAABLL * ((v19 - 24 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (v19 >> 3)) >> 1)) >> 3),
              (unsigned __int8 (__fastcall *)(__int64 *, __int64 *))a3);
            v21 = v108;
          }
          v22 = v21 - v19;
          v23 = 0xAAAAAAAAAAAAAAABLL * (v22 >> 3);
          if ( v22 <= 336 )
          {
            v88 = 0xAAAAAAAAAAAAAAABLL * (v22 >> 3);
            sub_1C39250((__int64)v20, (__int64)v18, a3);
            v25 = v88;
          }
          else
          {
            v92 = 0xAAAAAAAAAAAAAAABLL * (v22 >> 3);
            v24 = &v20[3 * (v23 >> 1)];
            v83 = 24 * (v23 >> 1);
            sub_1C4E330(v20, (__int64)v24, a3);
            sub_1C4E330(v24, (__int64)v18, a3);
            sub_1C4E040(
              v20,
              v24,
              (__int64)v18,
              0xAAAAAAAAAAAAAAABLL * (v83 >> 3),
              0xAAAAAAAAAAAAAAABLL * (v18 - v24),
              (unsigned __int8 (__fastcall *)(__int64 *, __int64 *))a3);
            v25 = v92;
          }
          sub_1C4E040(v63, v20, (__int64)v18, v77, v25, (unsigned __int8 (__fastcall *)(__int64 *, __int64 *))a3);
        }
        if ( (char *)v62 - (char *)v18 <= 336 )
        {
          sub_1C39250((__int64)v18, (__int64)v62, a3);
        }
        else
        {
          v26 = 0xAAAAAAAAAAAAAAABLL * (v62 - v18);
          v27 = 3 * (v26 >> 1);
          v28 = &v18[v27];
          v84 = 0xAAAAAAAAAAAAAAABLL * ((v27 * 8) >> 3);
          if ( (unsigned __int64)v27 <= 42 )
          {
            sub_1C39250((__int64)v18, (__int64)&v18[v27], a3);
          }
          else
          {
            v109 = 24 * (v26 >> 1);
            v29 = &v18[3 * ((__int64)(0xAAAAAAAAAAAAAAABLL * ((v27 * 8) >> 3)) >> 1)];
            v93 = 24 * ((__int64)(0xAAAAAAAAAAAAAAABLL * ((v27 * 8) >> 3)) >> 1);
            sub_1C4E330(v18, (__int64)v29, a3);
            sub_1C4E330(v29, (__int64)v28, a3);
            sub_1C4E040(
              v18,
              v29,
              (__int64)v28,
              0xAAAAAAAAAAAAAAABLL * (v93 >> 3),
              0xAAAAAAAAAAAAAAABLL * ((v109 - v93) >> 3),
              (unsigned __int8 (__fastcall *)(__int64 *, __int64 *))a3);
          }
          v30 = 0xAAAAAAAAAAAAAAABLL * (v62 - v28);
          if ( (char *)v62 - (char *)v28 <= 336 )
          {
            sub_1C39250((__int64)v28, (__int64)v62, a3);
          }
          else
          {
            v31 = &v28[3 * (v30 >> 1)];
            v94 = 24 * (v30 >> 1);
            sub_1C4E330(v28, (__int64)v31, a3);
            sub_1C4E330(v31, (__int64)v62, a3);
            sub_1C4E040(
              v28,
              v31,
              (__int64)v62,
              0xAAAAAAAAAAAAAAABLL * (v94 >> 3),
              0xAAAAAAAAAAAAAAABLL * (v62 - v31),
              (unsigned __int8 (__fastcall *)(__int64 *, __int64 *))a3);
          }
          sub_1C4E040(
            v18,
            v28,
            (__int64)v62,
            v84,
            0xAAAAAAAAAAAAAAABLL * (v62 - v28),
            (unsigned __int8 (__fastcall *)(__int64 *, __int64 *))a3);
        }
        sub_1C4E040(
          v63,
          v18,
          (__int64)v62,
          v72,
          0xAAAAAAAAAAAAAAABLL * (v62 - v18),
          (unsigned __int8 (__fastcall *)(__int64 *, __int64 *))a3);
      }
      sub_1C4E040(a1, v63, (__int64)v62, v68, v66, (unsigned __int8 (__fastcall *)(__int64 *, __int64 *))a3);
    }
    v32 = 0xAAAAAAAAAAAAAAABLL * ((a2 - (char *)v62) >> 3);
    if ( a2 - (char *)v62 <= 336 )
    {
      sub_1C39250((__int64)v62, (__int64)a2, a3);
    }
    else
    {
      v33 = 3 * (v32 >> 1);
      v64 = &v62[v33];
      v69 = 0xAAAAAAAAAAAAAAABLL * ((v33 * 8) >> 3);
      if ( (unsigned __int64)v33 <= 42 )
      {
        sub_1C39250((__int64)v62, (__int64)v64, a3);
      }
      else
      {
        v34 = 3 * ((__int64)(0xAAAAAAAAAAAAAAABLL * ((24 * (v32 >> 1)) >> 3)) >> 1);
        v35 = &v62[v34];
        v78 = 0xAAAAAAAAAAAAAAABLL * ((v34 * 8) >> 3);
        if ( (unsigned __int64)v34 <= 42 )
        {
          v75 = 24 * ((__int64)(0xAAAAAAAAAAAAAAABLL * ((24 * (v32 >> 1)) >> 3)) >> 1);
          sub_1C39250((__int64)v62, (__int64)&v62[v34], a3);
          v41 = v75;
        }
        else
        {
          v36 = 24 * ((__int64)(0xAAAAAAAAAAAAAAABLL * ((v34 * 8) >> 3)) >> 1);
          v73 = &v62[(unsigned __int64)v36 / 8];
          v85 = 0xAAAAAAAAAAAAAAABLL * (v36 >> 3);
          if ( (unsigned __int64)v36 <= 0x150 )
          {
            v103 = 24 * ((__int64)(0xAAAAAAAAAAAAAAABLL * ((24 * (v32 >> 1)) >> 3)) >> 1);
            sub_1C39250((__int64)v62, (__int64)&v62[(unsigned __int64)v36 / 8], a3);
            v37 = v103;
          }
          else
          {
            v115 = 24 * ((__int64)(0xAAAAAAAAAAAAAAABLL * ((24 * (v32 >> 1)) >> 3)) >> 1);
            v95 = &v62[3 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (v36 >> 3)) >> 1)];
            sub_1C4E330(v62, (__int64)v95, a3);
            sub_1C4E330(v95, (__int64)v73, a3);
            sub_1C4E040(
              v62,
              v95,
              (__int64)v73,
              0xAAAAAAAAAAAAAAABLL * ((24 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (v36 >> 3)) >> 1)) >> 3),
              0xAAAAAAAAAAAAAAABLL * ((v36 - 24 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (v36 >> 3)) >> 1)) >> 3),
              (unsigned __int8 (__fastcall *)(__int64 *, __int64 *))a3);
            v37 = v115;
          }
          v38 = v37 - v36;
          v39 = 0xAAAAAAAAAAAAAAABLL * ((v37 - v36) >> 3);
          if ( v38 <= 336 )
          {
            v104 = v37;
            sub_1C39250((__int64)v73, (__int64)v35, a3);
            v40 = v104;
          }
          else
          {
            v116 = v37;
            v96 = &v73[3 * (v39 >> 1)];
            sub_1C4E330(v73, (__int64)v96, a3);
            sub_1C4E330(v96, (__int64)v35, a3);
            sub_1C4E040(
              v73,
              v96,
              (__int64)v35,
              0xAAAAAAAAAAAAAAABLL * ((24 * (v39 >> 1)) >> 3),
              0xAAAAAAAAAAAAAAABLL * (v35 - v96),
              (unsigned __int8 (__fastcall *)(__int64 *, __int64 *))a3);
            v40 = v116;
          }
          v97 = v40;
          sub_1C4E040(v62, v73, (__int64)v35, v85, v39, (unsigned __int8 (__fastcall *)(__int64 *, __int64 *))a3);
          v41 = v97;
        }
        v42 = v33 * 8 - v41;
        v74 = 0xAAAAAAAAAAAAAAABLL * (v42 >> 3);
        if ( v42 <= 336 )
        {
          sub_1C39250((__int64)v35, (__int64)v64, a3);
        }
        else
        {
          v43 = 3 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (v42 >> 3)) >> 1);
          v44 = &v35[v43];
          v86 = 0xAAAAAAAAAAAAAAABLL * ((v43 * 8) >> 3);
          if ( (unsigned __int64)v43 <= 42 )
          {
            sub_1C39250((__int64)v35, (__int64)&v35[v43], a3);
          }
          else
          {
            v110 = 24 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (v42 >> 3)) >> 1);
            v45 = &v35[3 * ((__int64)(0xAAAAAAAAAAAAAAABLL * ((v43 * 8) >> 3)) >> 1)];
            v98 = 24 * ((__int64)(0xAAAAAAAAAAAAAAABLL * ((v43 * 8) >> 3)) >> 1);
            sub_1C4E330(v35, (__int64)v45, a3);
            sub_1C4E330(v45, (__int64)v44, a3);
            sub_1C4E040(
              v35,
              v45,
              (__int64)v44,
              0xAAAAAAAAAAAAAAABLL * (v98 >> 3),
              0xAAAAAAAAAAAAAAABLL * ((v110 - v98) >> 3),
              (unsigned __int8 (__fastcall *)(__int64 *, __int64 *))a3);
          }
          v46 = 0xAAAAAAAAAAAAAAABLL * (v64 - v44);
          if ( (char *)v64 - (char *)v44 <= 336 )
          {
            sub_1C39250((__int64)v44, (__int64)v64, a3);
          }
          else
          {
            v47 = &v44[3 * (v46 >> 1)];
            v99 = 24 * (v46 >> 1);
            sub_1C4E330(v44, (__int64)v47, a3);
            sub_1C4E330(v47, (__int64)v64, a3);
            sub_1C4E040(
              v44,
              v47,
              (__int64)v64,
              0xAAAAAAAAAAAAAAABLL * (v99 >> 3),
              0xAAAAAAAAAAAAAAABLL * (v64 - v47),
              (unsigned __int8 (__fastcall *)(__int64 *, __int64 *))a3);
          }
          sub_1C4E040(
            v35,
            v44,
            (__int64)v64,
            v86,
            0xAAAAAAAAAAAAAAABLL * (v64 - v44),
            (unsigned __int8 (__fastcall *)(__int64 *, __int64 *))a3);
        }
        sub_1C4E040(v62, v35, (__int64)v64, v78, v74, (unsigned __int8 (__fastcall *)(__int64 *, __int64 *))a3);
      }
      if ( a2 - (char *)v64 <= 336 )
      {
        sub_1C39250((__int64)v64, (__int64)a2, a3);
      }
      else
      {
        v48 = 3 * ((__int64)(0xAAAAAAAAAAAAAAABLL * ((a2 - (char *)v64) >> 3)) >> 1);
        v49 = &v64[v48];
        v79 = 0xAAAAAAAAAAAAAAABLL * ((v48 * 8) >> 3);
        if ( (unsigned __int64)v48 <= 42 )
        {
          sub_1C39250((__int64)v64, (__int64)&v64[v48], a3);
        }
        else
        {
          v50 = 24 * ((__int64)(0xAAAAAAAAAAAAAAABLL * ((v48 * 8) >> 3)) >> 1);
          v51 = &v64[(unsigned __int64)v50 / 8];
          v87 = 0xAAAAAAAAAAAAAAABLL * (v50 >> 3);
          if ( (unsigned __int64)v50 <= 0x150 )
          {
            sub_1C39250((__int64)v64, (__int64)&v64[(unsigned __int64)v50 / 8], a3);
          }
          else
          {
            v100 = &v64[3 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (v50 >> 3)) >> 1)];
            sub_1C4E330(v64, (__int64)v100, a3);
            sub_1C4E330(v100, (__int64)v51, a3);
            sub_1C4E040(
              v64,
              v100,
              (__int64)v51,
              0xAAAAAAAAAAAAAAABLL * ((24 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (v50 >> 3)) >> 1)) >> 3),
              0xAAAAAAAAAAAAAAABLL * ((v50 - 24 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (v50 >> 3)) >> 1)) >> 3),
              (unsigned __int8 (__fastcall *)(__int64 *, __int64 *))a3);
          }
          v52 = 24 * ((__int64)(0xAAAAAAAAAAAAAAABLL * ((a2 - (char *)v64) >> 3)) >> 1) - v50;
          v53 = 0xAAAAAAAAAAAAAAABLL * (v52 >> 3);
          if ( v52 <= 336 )
          {
            v105 = 0xAAAAAAAAAAAAAAABLL * (v52 >> 3);
            sub_1C39250((__int64)v51, (__int64)v49, a3);
            v55 = v105;
          }
          else
          {
            v111 = 0xAAAAAAAAAAAAAAABLL * (v52 >> 3);
            v54 = &v51[3 * (v53 >> 1)];
            v101 = 24 * (v53 >> 1);
            sub_1C4E330(v51, (__int64)v54, a3);
            sub_1C4E330(v54, (__int64)v49, a3);
            sub_1C4E040(
              v51,
              v54,
              (__int64)v49,
              0xAAAAAAAAAAAAAAABLL * (v101 >> 3),
              0xAAAAAAAAAAAAAAABLL * (v49 - v54),
              (unsigned __int8 (__fastcall *)(__int64 *, __int64 *))a3);
            v55 = v111;
          }
          sub_1C4E040(v64, v51, (__int64)v49, v87, v55, (unsigned __int8 (__fastcall *)(__int64 *, __int64 *))a3);
        }
        if ( a2 - (char *)v49 <= 336 )
        {
          sub_1C39250((__int64)v49, (__int64)a2, a3);
        }
        else
        {
          v56 = 0xAAAAAAAAAAAAAAABLL * ((a2 - (char *)v49) >> 3);
          v57 = 3 * (v56 >> 1);
          v58 = &v49[v57];
          v102 = 0xAAAAAAAAAAAAAAABLL * ((v57 * 8) >> 3);
          if ( (unsigned __int64)v57 <= 42 )
          {
            sub_1C39250((__int64)v49, (__int64)&v49[v57], a3);
          }
          else
          {
            v117 = 24 * (v56 >> 1);
            v59 = &v49[3 * ((__int64)(0xAAAAAAAAAAAAAAABLL * ((v57 * 8) >> 3)) >> 1)];
            v112 = 24 * ((__int64)(0xAAAAAAAAAAAAAAABLL * ((v57 * 8) >> 3)) >> 1);
            sub_1C4E330(v49, (__int64)v59, a3);
            sub_1C4E330(v59, (__int64)v58, a3);
            sub_1C4E040(
              v49,
              v59,
              (__int64)v58,
              0xAAAAAAAAAAAAAAABLL * (v112 >> 3),
              0xAAAAAAAAAAAAAAABLL * ((v117 - v112) >> 3),
              (unsigned __int8 (__fastcall *)(__int64 *, __int64 *))a3);
          }
          v60 = 0xAAAAAAAAAAAAAAABLL * ((a2 - (char *)v58) >> 3);
          if ( a2 - (char *)v58 <= 336 )
          {
            sub_1C39250((__int64)v58, (__int64)a2, a3);
          }
          else
          {
            v61 = &v58[3 * (v60 >> 1)];
            v113 = 24 * (v60 >> 1);
            sub_1C4E330(v58, (__int64)v61, a3);
            sub_1C4E330(v61, (__int64)a2, a3);
            sub_1C4E040(
              v58,
              v61,
              (__int64)a2,
              0xAAAAAAAAAAAAAAABLL * (v113 >> 3),
              0xAAAAAAAAAAAAAAABLL * ((a2 - (char *)v61) >> 3),
              (unsigned __int8 (__fastcall *)(__int64 *, __int64 *))a3);
          }
          sub_1C4E040(
            v49,
            v58,
            (__int64)a2,
            v102,
            0xAAAAAAAAAAAAAAABLL * ((a2 - (char *)v58) >> 3),
            (unsigned __int8 (__fastcall *)(__int64 *, __int64 *))a3);
        }
        sub_1C4E040(
          v64,
          v49,
          (__int64)a2,
          v79,
          0xAAAAAAAAAAAAAAABLL * ((a2 - (char *)v49) >> 3),
          (unsigned __int8 (__fastcall *)(__int64 *, __int64 *))a3);
      }
      sub_1C4E040(
        v62,
        v64,
        (__int64)a2,
        v69,
        0xAAAAAAAAAAAAAAABLL * ((a2 - (char *)v64) >> 3),
        (unsigned __int8 (__fastcall *)(__int64 *, __int64 *))a3);
    }
    sub_1C4E040(
      a1,
      v62,
      (__int64)a2,
      v67,
      0xAAAAAAAAAAAAAAABLL * ((a2 - (char *)v62) >> 3),
      (unsigned __int8 (__fastcall *)(__int64 *, __int64 *))a3);
  }
  v4 = v120;
  v5 = &v120[24 * v119];
  if ( v120 != v5 )
  {
    do
    {
      if ( *((_DWORD *)v4 + 2) > 0x40u && *(_QWORD *)v4 )
        operator delete[](*(void **)v4);
      v4 += 24;
    }
    while ( v5 != v4 );
    v5 = v120;
  }
  operator delete(v5, (const std::nothrow_t *)&std::nothrow);
}
