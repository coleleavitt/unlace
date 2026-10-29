/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: capture_process_output
// Address: 0x00000000000C3370

//----- (00000000000C3370) ----------------------------------------------------
__int64 __fastcall capture_process_output(__int64 a1, __int128 *a2, __int64 a3, int a4, __int64 a5)
{
  unsigned __int64 v10; // x0
  __int64 v11; // x8
  int v12; // w8
  void *v13; // x0
  unsigned __int64 v14; // x24
  int v15; // w0
  const char *v16; // x0
  unsigned int v17; // w19
  __int128 v19; // q0
  __int128 v20; // q2
  __int128 v21; // q3
  __int128 v22; // q1
  __int64 v23; // x21
  unsigned __int64 v24; // x0
  __int64 v25; // x9
  int v26; // w22
  unsigned __int64 v27; // x0
  __int64 v28; // x9
  int v29; // w0
  const char *v30; // x20
  const char *v31; // x0
  int v32; // [xsp+1Ch] [xbp-114h] BYREF
  __int128 v33; // [xsp+20h] [xbp-110h] BYREF
  __int128 v34; // [xsp+30h] [xbp-100h]
  __int128 v35; // [xsp+40h] [xbp-F0h]
  __int128 v36; // [xsp+50h] [xbp-E0h]
  __int128 v37; // [xsp+60h] [xbp-D0h]
  int v38; // [xsp+78h] [xbp-B8h] BYREF
  __int64 v39; // [xsp+80h] [xbp-B0h]
  unsigned __int64 v40; // [xsp+88h] [xbp-A8h]
  int v41; // [xsp+90h] [xbp-A0h]
  unsigned __int64 v42[3]; // [xsp+98h] [xbp-98h] BYREF
  int *v43; // [xsp+B0h] [xbp-80h]
  __int64 v44; // [xsp+B8h] [xbp-78h]
  __int64 v45; // [xsp+C0h] [xbp-70h]
  __int64 v46; // [xsp+C8h] [xbp-68h]

  v46 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v38 = a4;
  v10 = qtime64();
  v39 = 1000000 * HIDWORD(v10) + (unsigned int)v10;
  if ( a4 < 0 )
    v11 = 0;
  else
    v11 = 1000000 * HIDWORD(v10) + (unsigned int)v10 + 1000 * a4;
  v40 = v11;
  if ( a4 > -2 )
    v12 = a4;
  else
    v12 = -a4;
  v41 = v12;
  if ( a3 )
  {
    v13 = *(void **)a3;
    if ( *(_QWORD *)a3 )
    {
      *(_QWORD *)(a3 + 8) = 0;
      qfree(v13);
      *(_QWORD *)a3 = 0;
      *(_QWORD *)(a3 + 16) = 0;
    }
  }
  if ( a5 )
    v14 = 2;
  else
    v14 = 1;
  v42[1] = 0;
  v42[2] = 0;
  v43 = nullptr;
  v44 = a1;
  v42[0] = (unsigned __int64)off_160470;
  v45 = a5;
  v15 = sub_C77CC((__int64)v42, v14);
  if ( v15 )
  {
    v16 = (const char *)winerr(v15);
    sub_C36AC((pthread_mutex_t *)a3, "Could not create pipe: %s", v16);
    goto LABEL_15;
  }
  v19 = a2[1];
  v20 = a2[3];
  v21 = a2[4];
  v35 = a2[2];
  v36 = v20;
  v22 = *a2;
  v37 = v21;
  *(_QWORD *)&v35 = -1;
  v33 = v22;
  v34 = v19;
  *((_QWORD *)&v35 + 1) = *v43;
  *(_QWORD *)&v36 = v43[(int)v14 - 1];
  v23 = launch_process((__int64)&v33, a3);
  sub_C7CC0((__int64)v42);
  if ( !v23 )
    goto LABEL_15;
  if ( (a4 & 0x80000000) == 0 )
  {
    v24 = qtime64();
    v25 = 1000000 * HIDWORD(v24) + (unsigned int)v24;
    if ( v25 + 10 >= v40 )
    {
      v26 = -1;
      goto LABEL_23;
    }
    v41 = (999 - v25 + v40) / 0x3E8;
  }
  v26 = sub_C71A4(v42, (pthread_mutex_t *)a3, (__int64)&v38, 0x400u);
LABEL_23:
  sub_C7990((__int64)v42);
  if ( v26 == -1 )
    goto LABEL_27;
  if ( v38 < 0 )
    goto LABEL_28;
  v27 = qtime64();
  v28 = 1000000 * HIDWORD(v27) + (unsigned int)v27;
  if ( v28 + 10 >= v40 )
  {
LABEL_27:
    sub_C36AC((pthread_mutex_t *)a3, "Timed out capturing the process output");
    goto LABEL_32;
  }
  v41 = (999 - v28 + v40) / 0x3E8;
LABEL_28:
  if ( (unsigned int)check_process_exit(v23, &v32) == -1 )
  {
    sub_C36AC((pthread_mutex_t *)a3, "Failed to retrieve exit code for %s", (const char *)v34);
LABEL_32:
    v29 = term_process(v23);
    if ( v29 )
    {
      v30 = (const char *)v34;
      v31 = (const char *)winerr(v29);
      sub_C36AC((pthread_mutex_t *)a3, "Could not terminate %s: %s", v30, v31);
    }
    goto LABEL_15;
  }
  if ( !v32 )
  {
    v17 = 1;
    goto LABEL_16;
  }
  sub_C36AC((pthread_mutex_t *)a3, "%s exited with error code %d", (const char *)v34, v32);
LABEL_15:
  v17 = 0;
LABEL_16:
  v42[0] = (unsigned __int64)off_160498;
  sub_C7990((__int64)v42);
  return v17;
}
// 160470: using guessed type __int64 (__fastcall *off_160470[3])();
// 160498: using guessed type __int64 (__fastcall *off_160498[3])();
