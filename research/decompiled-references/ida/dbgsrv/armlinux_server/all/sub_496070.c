/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_496070
// Address: 0x0000000000496070

//----- (0000000000496070) ----------------------------------------------------
__int64 __fastcall sub_496070(__int64 a1, _QWORD *a2, rlim_t *a3, int a4, __int64 a5)
{
  unsigned __int64 v10; // x0
  int v11; // w1
  __int64 v12; // x0
  void *v13; // x0
  unsigned __int64 v14; // x1
  int v15; // w0
  const char *v16; // x0
  unsigned int v17; // w22
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x5
  __int64 v22; // x3
  __int64 v23; // x6
  __int64 v24; // x7
  void *v25; // x22
  unsigned __int64 v26; // x0
  __int64 v27; // x2
  int v28; // w23
  int v29; // w2
  unsigned __int64 v30; // x0
  __int64 v31; // x2
  int v32; // w0
  const char *v33; // x22
  const char *v34; // x0
  int v35; // [xsp+54h] [xbp-ACh] BYREF
  int v36; // [xsp+58h] [xbp-A8h] BYREF
  __int64 v37; // [xsp+60h] [xbp-A0h]
  unsigned __int64 v38; // [xsp+68h] [xbp-98h]
  int v39; // [xsp+70h] [xbp-90h]
  _QWORD v40[2]; // [xsp+78h] [xbp-88h] BYREF
  const char *v41; // [xsp+88h] [xbp-78h]
  __int64 v42; // [xsp+90h] [xbp-70h]
  __int64 v43; // [xsp+98h] [xbp-68h]
  __int64 v44; // [xsp+A0h] [xbp-60h]
  __int64 v45; // [xsp+A8h] [xbp-58h]
  __int64 v46; // [xsp+B0h] [xbp-50h]
  __int64 v47; // [xsp+B8h] [xbp-48h]
  __int64 v48; // [xsp+C0h] [xbp-40h]
  unsigned __int64 v49[3]; // [xsp+C8h] [xbp-38h] BYREF
  int *v50; // [xsp+E0h] [xbp-20h]
  __int64 v51; // [xsp+E8h] [xbp-18h]
  __int64 v52; // [xsp+F0h] [xbp-10h]

  v36 = a4;
  v10 = sub_4926B8();
  v11 = v36;
  v12 = (unsigned int)v10 + 1000000 * HIDWORD(v10);
  v37 = v12;
  if ( v36 < 0 )
  {
    v38 = 0;
    if ( v36 != -1 )
      v11 = -v36;
  }
  else
  {
    v38 = v12 + 1000 * v36;
  }
  v39 = v11;
  if ( a3 )
  {
    v13 = (void *)*a3;
    if ( *a3 )
    {
      a3[1] = 0;
      j__free(v13);
      *a3 = 0;
      a3[2] = 0;
    }
  }
  v14 = 2;
  v49[0] = (unsigned __int64)off_51CA78;
  v49[1] = 0;
  if ( !a5 )
    v14 = 1;
  v49[2] = 0;
  v50 = nullptr;
  v51 = a1;
  v52 = a5;
  v15 = sub_49C650(v49, v14);
  if ( v15 )
  {
    v16 = (const char *)sub_492F00(v15);
    sub_493A08(a3, "Could not create pipe: %s", v16);
    goto LABEL_10;
  }
  v19 = a2[5];
  v43 = a2[4];
  v44 = v19;
  v20 = a2[7];
  v45 = a2[6];
  v46 = v20;
  v21 = a2[1];
  v40[0] = *a2;
  v40[1] = v21;
  v22 = a2[3];
  v41 = (const char *)a2[2];
  v42 = v22;
  v23 = a2[8];
  v24 = a2[9];
  v43 = -1;
  v47 = v23;
  v48 = v24;
  v44 = *v50;
  v45 = v50[a5 != 0];
  v25 = sub_4951E0((__int64)v40, a3);
  sub_49C768((__int64)v49);
  if ( !v25 )
    goto LABEL_10;
  if ( (v36 & 0x80000000) == 0 )
  {
    v26 = sub_4926B8();
    v27 = (unsigned int)v26 + 1000000 * HIDWORD(v26);
    if ( v27 + 10 >= v38 )
    {
      sub_49C5C8((__int64)v49);
      goto LABEL_28;
    }
    v39 = (v38 + 999 - v27) / 0x3E8;
  }
  v28 = sub_49C880(v49, a3, (__int64)&v36, 0x400u);
  sub_49C5C8((__int64)v49);
  if ( v28 == -1 )
    goto LABEL_28;
  if ( v36 < 0 )
    goto LABEL_18;
  v30 = sub_4926B8();
  v31 = (unsigned int)v30 + 1000000 * HIDWORD(v30);
  if ( v31 + 10 >= v38 )
  {
LABEL_28:
    sub_493A08(a3, "Timed out capturing the process output");
    goto LABEL_29;
  }
  v39 = (v38 + 999 - v31) / 0x3E8;
LABEL_18:
  v29 = v39;
  if ( a4 < 0 )
    v29 = -1;
  if ( (unsigned int)sub_494C98((__pid_t)v25, &v35, v29) == -1 )
  {
    sub_493A08(a3, "Failed to retrieve exit code for %s", v41);
LABEL_29:
    v32 = sub_494DA0((__pid_t)v25);
    if ( v32 )
    {
      v33 = v41;
      v34 = (const char *)sub_492F00(v32);
      sub_493A08(a3, "Could not terminate %s: %s", v33, v34);
    }
    goto LABEL_10;
  }
  v17 = 1;
  if ( !v35 )
    goto LABEL_11;
  sub_493A08(a3, "%s exited with error code %d", v41, v35);
LABEL_10:
  v17 = 0;
LABEL_11:
  v49[0] = (unsigned __int64)off_51CA50;
  sub_49C5C8((__int64)v49);
  return v17;
}
// 51CA50: using guessed type __int64 (__fastcall *off_51CA50[3])();
// 51CA78: using guessed type __int64 (__fastcall *off_51CA78[3])();
