/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: capture_process_output
// Address: 0x000820CC

//----- (000820CC) --------------------------------------------------------
int __fastcall capture_process_output(int a1, int *a2, char **a3, int a4, int a5)
{
  __int64 v7; // r4
  unsigned int v8; // r1
  __int64 v9; // r0
  __int64 v10; // r0
  unsigned __int64 v11; // r0
  unsigned int v12; // r4
  int v13; // r0
  char *v14; // r0
  unsigned int v15; // r5
  int v16; // r0
  int v18; // r2
  int v19; // r3
  int v20; // r4
  int *v21; // r7
  int v22; // r2
  int v23; // r3
  int v24; // r4
  int v25; // r3
  int v26; // r4
  int v27; // r6
  int v28; // r6
  __suseconds_t v29; // r0
  unsigned int v30; // r1
  __int64 v31; // r0
  int v32; // r7
  __suseconds_t v33; // r0
  unsigned int v34; // r1
  __int64 v35; // r0
  int v36; // r2
  int v37; // r0
  int v38; // [sp+Ch] [bp-84h]
  int v39; // [sp+14h] [bp-7Ch]
  void *pida; // [sp+1Ch] [bp-74h]
  int v42; // [sp+20h] [bp-70h]
  int v44; // [sp+28h] [bp-68h] BYREF
  _DWORD v45[4]; // [sp+2Ch] [bp-64h] BYREF
  int v46; // [sp+3Ch] [bp-54h]
  int v47; // [sp+40h] [bp-50h]
  int v48; // [sp+44h] [bp-4Ch]
  int v49; // [sp+48h] [bp-48h]
  int v50; // [sp+4Ch] [bp-44h]
  int v51; // [sp+50h] [bp-40h]
  int v52[4]; // [sp+54h] [bp-3Ch] BYREF
  unsigned __int64 v53; // [sp+64h] [bp-2Ch]
  int v54; // [sp+6Ch] [bp-24h]
  unsigned int v55[3]; // [sp+74h] [bp-1Ch] BYREF
  int *v56; // [sp+80h] [bp-10h]
  int v57; // [sp+84h] [bp-Ch]
  int v58; // [sp+88h] [bp-8h]

  v52[0] = a4;
  v7 = (unsigned int)qtime64();
  v9 = 1000000LL * v8;
  v52[2] = v9 + v7;
  v10 = v9 + v7;
  v52[3] = HIDWORD(v10);
  v38 = ~HIDWORD(v7);
  if ( a4 < 0 )
    v11 = 0;
  else
    v11 = v10 + 1000 * a4;
  v53 = v11;
  v12 = 1;
  v39 = a4;
  v13 = a4;
  if ( a4 <= -2 )
    v13 = -a4;
  v54 = v13;
  if ( a3 )
  {
    v14 = *a3;
    if ( *a3 )
    {
      a3[1] = nullptr;
      qfree(v14);
      a3[2] = nullptr;
      *a3 = nullptr;
    }
  }
  v55[2] = 0;
  v55[1] = 0;
  v42 = 0;
  v56 = nullptr;
  v57 = a1;
  v55[0] = (unsigned int)&off_DB298;
  v58 = a5;
  if ( a5 )
    v12 = 2;
  v15 = v12 - 1;
  v16 = sub_84D4C((int)v55, v12);
  if ( v16 )
  {
    winerr(v16);
    v42 = 0;
    sub_82388(a3, "Could not create pipe: %s");
    goto LABEL_13;
  }
  v18 = *a2;
  v19 = a2[1];
  v20 = a2[2];
  v21 = a2 + 3;
  v45[0] = v18;
  v45[1] = v19;
  v45[2] = v20;
  v22 = *v21;
  v23 = v21[1];
  v24 = v21[2];
  v21 += 3;
  v45[3] = v22;
  v46 = v23;
  v47 = v24;
  v25 = v21[1];
  v26 = v21[2];
  v27 = v21[3];
  v48 = *v21;
  v49 = v25;
  v50 = v26;
  v51 = v27;
  v46 = -1;
  v47 = *v56;
  v48 = v56[v15];
  pida = launch_process((int)v45, a3);
  v28 = v39;
  sub_85078((int)v55);
  if ( !pida )
    goto LABEL_13;
  if ( v39 >= 0 )
  {
    v29 = qtime64();
    v31 = 1000000LL * v30 + (v29 & (unsigned int)v38);
    v28 = v39;
    v32 = -1;
    if ( v31 + 10 >= v53 )
      goto LABEL_19;
    v54 = (__PAIR64__(-(HIDWORD(v31) + ((unsigned int)v31 > 0x3E7)), 999 - (int)v31) + v53) / 0x3E8;
  }
  v32 = sub_8491C(v55, a3, v52, 0x400u);
LABEL_19:
  sub_84E74((int)v55);
  if ( v32 == -1 )
    goto LABEL_24;
  if ( v52[0] >= 0 )
  {
    v33 = qtime64();
    v35 = 1000000LL * v34 + (v33 & (unsigned int)v38);
    if ( v35 + 10 < v53 )
    {
      v36 = (__PAIR64__(-(HIDWORD(v35) + ((unsigned int)v35 > 0x3E7)), 999 - (int)v35) + v53) / 0x3E8;
      v54 = v36;
      if ( v39 >= 0 )
        goto LABEL_27;
      goto LABEL_26;
    }
LABEL_24:
    sub_82388(a3, "Timed out capturing the process output");
    goto LABEL_31;
  }
  v36 = v54;
  if ( v28 < 0 )
LABEL_26:
    v36 = -1;
LABEL_27:
  if ( check_process_exit((int)pida, &v44, v36) != -1 )
  {
    v42 = 1;
    if ( v44 )
    {
      v42 = 0;
      sub_82388(a3, "%s exited with error code %d");
    }
    goto LABEL_13;
  }
  sub_82388(a3, "Failed to retrieve exit code for %s");
LABEL_31:
  v37 = term_process((__pid_t)pida);
  if ( v37 )
  {
    winerr(v37);
    v42 = 0;
    sub_82388(a3, "Could not terminate %s: %s");
  }
LABEL_13:
  v55[0] = (unsigned int)&off_DB2AC;
  sub_84E74((int)v55);
  return v42;
}
// 820F0: variable 'v8' is possibly undefined
// 82200: variable 'v30' is possibly undefined
// 82274: variable 'v34' is possibly undefined
// DB298: using guessed type _UNKNOWN *off_DB298;
// DB2AC: using guessed type _UNKNOWN *off_DB2AC;
