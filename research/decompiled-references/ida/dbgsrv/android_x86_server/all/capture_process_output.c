/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: capture_process_output
// Address: 0x000B65E0

//----- (000B65E0) --------------------------------------------------------
int __cdecl capture_process_output(int a1, __int64 *a2, int a3, int a4, unsigned int a5)
{
  __suseconds_t v5; // eax
  unsigned int v6; // edx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  int v9; // eax
  int v10; // ecx
  char *v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  void *v14; // eax
  __int64 v15; // xmm0_8
  __suseconds_t v16; // eax
  unsigned int v17; // edx
  unsigned __int64 v18; // rax
  int v19; // edi
  __suseconds_t v20; // eax
  unsigned int v21; // edx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  int v24; // ecx
  int v25; // eax
  int v26; // esi
  void *v27; // eax
  int v29; // [esp+4h] [ebp-78h]
  void *v30; // [esp+4h] [ebp-78h]
  int v31; // [esp+Ch] [ebp-70h] BYREF
  __int64 v32; // [esp+10h] [ebp-6Ch] BYREF
  __int64 v33; // [esp+18h] [ebp-64h]
  __int64 v34; // [esp+20h] [ebp-5Ch]
  __int64 v35; // [esp+28h] [ebp-54h]
  __int64 v36; // [esp+30h] [ebp-4Ch]
  int v37; // [esp+38h] [ebp-44h] BYREF
  unsigned __int64 v38; // [esp+3Ch] [ebp-40h]
  unsigned __int64 v39; // [esp+44h] [ebp-38h]
  int v40; // [esp+4Ch] [ebp-30h]
  int v41[3]; // [esp+50h] [ebp-2Ch] BYREF
  _DWORD *v42; // [esp+5Ch] [ebp-20h]
  int v43; // [esp+60h] [ebp-1Ch]
  unsigned int v44; // [esp+64h] [ebp-18h]
  unsigned int v45; // [esp+68h] [ebp-14h]

  v45 = __readgsdword(0x14u);
  v37 = a4;
  v5 = qtime64();
  v7 = (unsigned int)v5 + (unsigned int)dword_F4240 * (unsigned __int64)v6;
  v38 = v7;
  if ( a4 < 0 )
    v8 = 0;
  else
    v8 = 1000 * a4 + v7;
  v39 = v8;
  v9 = -a4;
  if ( a4 > -2 )
    v9 = a4;
  v40 = v9;
  v10 = a1;
  if ( a3 )
  {
    v11 = *(char **)a3;
    if ( *(_DWORD *)a3 )
    {
      *(_DWORD *)(a3 + 4) = 0;
      qfree(v11);
      v10 = a1;
      *(_DWORD *)a3 = 0;
      *(_DWORD *)(a3 + 8) = 0;
    }
  }
  v12 = ((a5 | 0x200000000uLL) - 1) >> 32;
  v41[1] = 0;
  v41[2] = 0;
  v42 = nullptr;
  v41[0] = (int)&off_1393A8;
  v43 = v10;
  v44 = a5;
  v13 = sub_BAC90((int)v41, v12);
  if ( !v13 )
  {
    v34 = a2[2];
    v36 = a2[4];
    v35 = a2[3];
    v15 = *a2;
    v33 = a2[1];
    v32 = v15;
    LODWORD(v34) = -1;
    HIDWORD(v34) = *v42;
    LODWORD(v35) = v42[v12 - 1];
    v30 = launch_process((int)&v32, (char **)a3);
    sub_BB190((int)v41);
    if ( !v30 )
    {
LABEL_30:
      v29 = 0;
      goto LABEL_31;
    }
    if ( a4 >= 0 )
    {
      v16 = qtime64();
      v18 = (unsigned int)v16 + (unsigned int)dword_F4240 * (unsigned __int64)v17;
      v19 = -1;
      if ( v18 + 10 >= v39 )
        goto LABEL_16;
      v40 = (v39 + 999 - v18) / 0x3E8;
    }
    v19 = sub_BA540(v41, (char **)a3, &v37, 0x400u);
LABEL_16:
    sub_BAE60((int)v41);
    if ( v19 != -1 )
    {
      if ( v37 < 0 )
      {
        LODWORD(v23) = v40;
        goto LABEL_22;
      }
      v20 = qtime64();
      v22 = (unsigned int)v20 + (unsigned int)dword_F4240 * (unsigned __int64)v21;
      if ( v22 + 10 < v39 )
      {
        v23 = (v39 + 999 - v22) / 0x3E8;
        v40 = v23;
LABEL_22:
        v24 = -1;
        if ( a4 >= 0 )
          v24 = v23;
        if ( check_process_exit((__pid_t)v30, &v31, v24) != -1 )
        {
          if ( !v31 )
          {
            v29 = 1;
            goto LABEL_31;
          }
          sub_B69C0((char **)a3, "%s exited with error code %d", (_DWORD)v33, v31);
          goto LABEL_30;
        }
        sub_B69C0((char **)a3, "Failed to retrieve exit code for %s", (_DWORD)v33);
        goto LABEL_28;
      }
    }
    sub_B69C0((char **)a3, "Timed out capturing the process output");
LABEL_28:
    v25 = term_process((__pid_t)v30);
    if ( v25 )
    {
      v26 = v33;
      v27 = winerr(v25);
      sub_B69C0((char **)a3, "Could not terminate %s: %s", v26, v27);
    }
    goto LABEL_30;
  }
  v14 = winerr(v13);
  sub_B69C0((char **)a3, "Could not create pipe: %s", v14);
  v29 = 0;
LABEL_31:
  v41[0] = (int)&off_1393BC;
  sub_BAE60((int)v41);
  return v29;
}
// B6617: variable 'v6' is possibly undefined
// B679D: variable 'v17' is possibly undefined
// B6831: variable 'v21' is possibly undefined
// F4240: using guessed type int dword_F4240[37];
// 1393A8: using guessed type int (__cdecl *off_1393A8)(int);
// 1393BC: using guessed type int (__cdecl *off_1393BC)(int);
