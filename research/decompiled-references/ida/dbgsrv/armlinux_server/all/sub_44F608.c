/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44F608
// Address: 0x000000000044F608

//----- (000000000044F608) ----------------------------------------------------
__int64 __fastcall sub_44F608(_QWORD *a1, char *a2, int a3, int a4, __int64 *a5, __int64 *a6, __int64 a7)
{
  __int64 v7; // x19
  unsigned __int64 v14; // x1
  __int64 v15; // x7
  void *v16; // x0
  void **v17; // x19
  __int64 v18; // x23
  char *v19; // x4
  __int64 *v20; // x0
  __int64 v21; // x0
  unsigned int v22; // w19
  void *v23; // x0
  __int64 v24; // x21
  _BYTE *v25; // x4
  double v26; // d0
  const char *v27; // x2
  __int64 v28; // x20
  unsigned __int64 v29; // x20
  __int64 v30; // x28
  _BYTE *v31; // x0
  const char *v32; // x21
  size_t v33; // x1
  __int64 v34; // x0
  _BYTE *v35; // x0
  __int64 v37; // x0
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x0
  __int64 v42; // x21
  __int64 v43; // x0
  __int64 v44; // x28
  unsigned __int64 v45; // x21
  _BYTE *v46; // x0
  const char *v47; // x2
  __int64 v49; // [xsp+68h] [xbp-A8h]
  size_t v50; // [xsp+68h] [xbp-A8h]
  __int64 v51; // [xsp+68h] [xbp-A8h]
  size_t v52; // [xsp+70h] [xbp-A0h]
  __int64 v53; // [xsp+78h] [xbp-98h]
  __int64 v54; // [xsp+88h] [xbp-88h] BYREF
  const char *v55; // [xsp+90h] [xbp-80h]
  __int64 v56; // [xsp+98h] [xbp-78h]
  __int64 v57; // [xsp+A0h] [xbp-70h]
  __int64 v58; // [xsp+A8h] [xbp-68h] BYREF
  __int64 v59; // [xsp+B0h] [xbp-60h]
  __int64 v60; // [xsp+B8h] [xbp-58h]
  __int64 v61; // [xsp+C0h] [xbp-50h]
  __int64 v62; // [xsp+C8h] [xbp-48h] BYREF
  const char *v63; // [xsp+D0h] [xbp-40h]
  unsigned __int64 v64; // [xsp+D8h] [xbp-38h]
  __int64 v65; // [xsp+E0h] [xbp-30h]
  __int64 v66; // [xsp+E8h] [xbp-28h] BYREF
  const char *v67; // [xsp+F0h] [xbp-20h]
  __int64 v68; // [xsp+F8h] [xbp-18h]
  __int64 v69; // [xsp+100h] [xbp-10h]

  v7 = (__int64)(a1 + 9);
  v15 = a1[10];
  v14 = a1[11];
  v16 = (void *)a1[9];
  if ( v15 + 1 > v14 )
  {
    v16 = sub_491288(v7, v16, v15 + 1, 4u);
    a1[9] = v16;
    v15 = *(_QWORD *)(v7 + 8);
  }
  *((_DWORD *)v16 + v15) = 0;
  ++*(_QWORD *)(v7 + 8);
  if ( a4 > 0 )
  {
    v17 = (void **)(a1 + 3);
    v18 = (__int64)&a5[4 * (unsigned int)(a4 - 1) + 4];
    do
    {
      LOBYTE(v66) = 2;
      v67 = nullptr;
      v68 = 0;
      v69 = 0;
      sub_4488B8(&v66, a5);
      v21 = a1[4];
      if ( (unsigned __int64)(v21 + 1) <= a1[5] )
      {
        v19 = (char *)*v17;
      }
      else
      {
        v19 = (char *)sub_491288((__int64)(a1 + 3), *v17, v21 + 1, 0x20u);
        v21 = a1[4];
        *v17 = v19;
      }
      v20 = (__int64 *)&v19[32 * v21];
      *(_BYTE *)v20 = 2;
      v20[1] = 0;
      v20[2] = 0;
      v20[3] = 0;
      sub_4488B8(v20, &v66);
      a5 += 4;
      ++a1[4];
      sub_448310(&v66);
    }
    while ( (__int64 *)v18 != a5 );
  }
  v22 = sub_447D60(a1, a6, a2, a3);
  if ( !(_BYTE)v22 )
  {
    if ( a7 )
    {
      v23 = *(void **)a7;
      v24 = a1[3] + 32LL * a1[4] - 32;
      if ( *(_QWORD *)(a7 + 16) <= 0xDu )
      {
        v23 = sub_491288(a7, *(void **)a7, 0xEu, 1u);
        *(_QWORD *)a7 = v23;
      }
      *(_QWORD *)(a7 + 8) = 14;
      qmemcpy(v23, "Runtime error", 13);
      LOBYTE(v58) = 2;
      v25 = *(_BYTE **)a7;
      LOBYTE(v54) = 2;
      v25[13] = 0;
      v55 = nullptr;
      v56 = 0;
      v59 = 0;
      v60 = 0;
      v57 = 0;
      v61 = 0;
      sub_44DA00(&v58, v24, "line", 0);
      sub_44DA00(&v54, v24, "file", 0);
      if ( (unsigned __int8)v58 == 2 && v59 > 0 && (unsigned __int8)v54 == 7 )
      {
        if ( v56 )
        {
          v47 = v55;
          if ( !*v55 )
            v47 = "<unknown>";
        }
        else
        {
          v47 = "<unknown>";
        }
        sub_42D148(a7, " on %s:%d", v47, v59);
      }
      else
      {
        v63 = nullptr;
        v64 = 0;
        LOBYTE(v62) = 2;
        v65 = 0;
        sub_44DA00(&v62, v24, "func", 0);
        if ( (unsigned __int8)v62 == 7 && v64 > 1 )
        {
          LOBYTE(v66) = 2;
          v67 = nullptr;
          v68 = 0;
          v69 = 0;
          sub_44DA00(&v66, v24, "pc", 0);
          v27 = v63;
          if ( !v64 )
            v27 = (const char *)&qword_4B2D48;
          sub_42D148(a7, " at %s+0x%a", v27, v26);
          sub_448310(&v66);
        }
        sub_448310(&v62);
      }
      v28 = *(_QWORD *)(a7 + 8);
      if ( v28 )
      {
        v30 = v28 + 1;
        v49 = v28 - 1;
        v29 = v28 + 2;
      }
      else
      {
        v29 = 3;
        v30 = 2;
        v49 = 0;
      }
      v31 = *(_BYTE **)a7;
      if ( *(_QWORD *)(a7 + 16) < v29 )
      {
        v31 = sub_491288(a7, *(void **)a7, v29, 1u);
        *(_QWORD *)a7 = v31;
      }
      *(_QWORD *)(a7 + 8) = v29;
      v31[v30] = 0;
      *(_WORD *)(*(_QWORD *)a7 + v49) = *(_WORD *)": ";
      LOBYTE(v66) = 2;
      v67 = nullptr;
      v68 = 0;
      v69 = 0;
      sub_44DA00(&v66, v24, "description", 0);
      if ( (unsigned __int8)v66 == 7 )
      {
        v32 = (const char *)&qword_4B2D48;
        if ( v68 )
          v32 = v67;
        if ( v32 )
        {
          v33 = strlen(v32);
          v34 = *(_QWORD *)(a7 + 8);
          v52 = v33;
          if ( v34 )
          {
            v53 = v34 - 1;
            v50 = v33 + v34 - 1;
          }
          else
          {
            v50 = v33;
            v53 = 0;
          }
          v35 = *(_BYTE **)a7;
          if ( v50 + 1 > *(_QWORD *)(a7 + 16) )
          {
            v35 = sub_491288(a7, *(void **)a7, v50 + 1, 1u);
            *(_QWORD *)a7 = v35;
          }
          *(_QWORD *)(a7 + 8) = v50 + 1;
          v35[v50] = 0;
          memmove((void *)(*(_QWORD *)a7 + v53), v32, v52);
        }
        sub_448310(&v66);
        sub_448310(&v58);
        sub_448310(&v54);
      }
      else
      {
        v42 = *(_QWORD *)(a7 + 8);
        if ( v42 )
        {
          v43 = v42 - 1;
          v44 = v42 + 18;
          v45 = v42 + 19;
          v51 = v43;
        }
        else
        {
          v45 = 20;
          v44 = 19;
          v51 = 0;
        }
        v46 = *(_BYTE **)a7;
        if ( *(_QWORD *)(a7 + 16) < v45 )
        {
          v46 = sub_491288(a7, *(void **)a7, v45, 1u);
          *(_QWORD *)a7 = v46;
        }
        *(_QWORD *)(a7 + 8) = v45;
        v46[v44] = 0;
        qmemcpy((void *)(*(_QWORD *)a7 + v51), "Unhandled exception", 19);
        sub_448310(&v66);
        sub_448310(&v58);
        sub_448310(&v54);
      }
    }
    if ( a6 && !(unsigned int)sub_449520(a6, (__int64 *)(a1[3] + 32LL * a1[4] - 32)) )
    {
      v38 = a1[3];
      v37 = a1[4];
      LOBYTE(v66) = 2;
      v67 = nullptr;
      v68 = 0;
      v69 = 0;
      sub_4488B8(&v66, (__int64 *)(v38 + 32 * v37 - 32));
      v39 = a1[4];
      if ( v39 )
      {
        v40 = v39 - 1;
        v41 = a1[3];
        a1[4] = v40;
        sub_448310((__int64 *)(v41 + 32 * v40));
      }
      sub_448310(&v66);
    }
  }
  if ( *(_BYTE *)(a1[1] + 124LL) )
  {
    callui(24, 10, nullptr);
    *(_BYTE *)(a1[1] + 124LL) = 0;
  }
  return v22;
}
// 44F8BC: variable 'v26' is possibly undefined
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 4C5B88: using guessed type __int64 qword_4C5B88[239];
// 522018: using guessed type __int64 (__fastcall *callui)(int, int, char *s1);
