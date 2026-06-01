/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45D348
// Address: 0x000000000045D348

//----- (000000000045D348) ----------------------------------------------------
const char *__fastcall sub_45D348(__int64 a1, const char *a2, unsigned __int64 a3)
{
  unsigned __int64 v6; // x22
  double v7; // d0
  __int64 v8; // x23
  unsigned int v9; // w0
  const char *v10; // x1
  const char *v11; // x3
  int v12; // w0
  double v13; // d1
  double v14; // d2
  const char *v15; // x24
  unsigned int v16; // w2
  const char *v18; // x1
  const char *v19; // x1
  char *v21; // x0
  int v22; // w1
  unsigned __int8 *v24; // x1
  int v25; // w3
  unsigned __int8 *v26; // x2
  int v27; // t1

  v6 = (unsigned __int64)&a2[a3];
  v8 = 0xFFFFFFFFLL;
  if ( (unsigned int)sub_461A10() == 8 )
    v8 = -1;
  v9 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
  if ( v9 == 7 )
  {
    v11 = "EXCEPTION";
  }
  else if ( v9 > 7 )
  {
    if ( v9 == 11 )
    {
      v11 = "PROCESS_ATTACHED";
    }
    else if ( v9 > 0xB )
    {
      if ( v9 == 13 )
      {
        v11 = "PROCESS_SUSPENDED";
      }
      else if ( v9 >= 0xD )
      {
        v11 = "TRACE_FULL";
        if ( v9 != 14 )
          v11 = "???";
      }
      else
      {
        v11 = "PROCESS_DETACHED";
      }
    }
    else
    {
      v18 = "INFORMATION";
      if ( v9 <= 9 )
        v18 = "LIB_LOADED";
      v11 = "LIB_UNLOADED";
      if ( v9 != 9 )
        v11 = v18;
    }
  }
  else if ( v9 == 3 )
  {
    v11 = "THREAD_STARTED";
  }
  else
  {
    if ( v9 > 3 )
      goto LABEL_31;
    v10 = "PROCESS_EXITED";
    if ( v9 <= 1 )
      v10 = "NO_EVENT";
    v11 = "PROCESS_STARTED";
    if ( v9 != 1 )
      v11 = v10;
  }
  while ( 1 )
  {
    v12 = sub_49B748(a2, a3, "%s ea=%a", v11, v7);
    v15 = &a2[v12];
    v16 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
    if ( v16 == 5 )
    {
      v15 += (int)sub_49B748(&a2[v12], a3 - v12, " hea=%a kea=%a", v7, v13);
      goto LABEL_17;
    }
    if ( v16 <= 5 )
      break;
    if ( v16 > 0xA )
    {
      if ( v16 != 11 )
        goto LABEL_17;
    }
    else
    {
      if ( v16 >= 9 )
        goto LABEL_49;
      if ( v16 == 7 )
      {
        v15 += (int)sub_49B748(
                      v15,
                      a3 - v12,
                      " code=%x can_cont=%d ea=%a info=%s",
                      *(_DWORD *)(a1 + 24),
                      *(unsigned __int8 *)(a1 + 28),
                      v7,
                      (const char *)(v8 & *(_QWORD *)(a1 + 32)));
        goto LABEL_17;
      }
      if ( v16 != 8 )
        goto LABEL_17;
    }
    if ( v16 == 11 || v16 == 8 )
      goto LABEL_55;
    v9 = (unsigned __int8)under_debugger;
    if ( !under_debugger )
      sub_492270(3295);
LABEL_30:
    __break(0x3E8u);
LABEL_31:
    v19 = "STEP";
    if ( v9 <= 5 )
      v19 = "THREAD_EXITED";
    v11 = "BREAKPOINT";
    if ( v9 != 5 )
      v11 = v19;
  }
  if ( v16 == 2 )
    goto LABEL_28;
  if ( v16 <= 2 )
  {
    if ( v16 != 1 )
      goto LABEL_17;
LABEL_55:
    v15 += (int)sub_49B748(
                  v15,
                  a3 - v12,
                  " base=%a size=%a rebase=%a name=%s",
                  v7,
                  v13,
                  v14,
                  (const char *)(v8 & *(_QWORD *)(a1 + 48)));
    goto LABEL_17;
  }
  if ( v16 != 3 )
  {
LABEL_28:
    if ( ((v16 - 2) & 0xFFFFFFFD) == 0 )
    {
      v15 += (int)sub_49B748(&a2[v12], a3 - v12, " exit_code=%d", *(_DWORD *)(a1 + 24));
      goto LABEL_17;
    }
    v9 = (unsigned __int8)under_debugger;
    if ( !under_debugger )
      sub_492270(3296);
    goto LABEL_30;
  }
LABEL_49:
  if ( v6 <= (unsigned __int64)v15 )
  {
    v9 = (unsigned __int8)under_debugger;
    if ( !under_debugger )
      sub_492270(518);
    goto LABEL_30;
  }
  a2[v12] = 32;
  v21 = (char *)(v15 + 1);
  if ( v6 <= (unsigned __int64)(v15 + 1) )
  {
    v21 = (char *)(v6 - 1);
    *(_BYTE *)(v6 - 1) = 0;
  }
  v22 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
  if ( (unsigned int)(v22 - 9) > 1 && v22 != 3 )
  {
    v9 = (unsigned __int8)under_debugger;
    if ( !under_debugger )
      sub_492270(3297);
    goto LABEL_30;
  }
  v15 = (const char *)(v6 - 1);
  if ( *(_QWORD *)(a1 + 32) )
  {
    v24 = *(unsigned __int8 **)(a1 + 24);
    if ( v21 == v15 )
    {
LABEL_68:
      *(_BYTE *)(v6 - 1) = 0;
    }
    else
    {
      v25 = *v24;
      v26 = v24 + 1;
      *v21 = v25;
      if ( !v25 )
        goto LABEL_74;
      while ( ++v21 != v15 )
      {
        v27 = *v26++;
        *v21 = v27;
        if ( !v27 )
          goto LABEL_74;
      }
      *(_BYTE *)(v6 - 1) = 0;
    }
  }
  else
  {
    if ( v21 == v15 )
      goto LABEL_68;
    *v21 = 0;
LABEL_74:
    v15 = v21;
  }
LABEL_17:
  sub_49B748(
    v15,
    v6 - (_QWORD)v15,
    " pid=%d tid=%d handled=%d",
    *(_DWORD *)a1,
    *(_DWORD *)(a1 + 4),
    *(unsigned __int8 *)(a1 + 16));
  return a2;
}
// 45D4C0: conditional instruction was optimized away because w2.4==4
// 45D3D4: variable 'v7' is possibly undefined
// 45D5A8: variable 'v13' is possibly undefined
// 45D5E8: variable 'v14' is possibly undefined
// 52451C: using guessed type char under_debugger;
