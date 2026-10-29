/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100006F4C
// Address: 0x0000000100006F4C

//----- (0000000100006F4C) ----------------------------------------------------
__int64 __fastcall sub_100006F4C(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x5
  __int64 v20; // x6
  __int64 v21; // x7
  char v22; // w0
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x5
  __int64 v27; // x6
  __int64 v28; // x7
  int v29; // w8
  int v31; // w21
  __int64 v34; // x9
  __int64 v35; // x8
  __int64 v36; // x10
  unsigned __int64 v37; // x9
  __int64 v38; // x0
  char v39; // [xsp+0h] [xbp-430h]
  char v40; // [xsp+0h] [xbp-430h]
  char v41; // [xsp+0h] [xbp-430h]
  char v42[1024]; // [xsp+8h] [xbp-428h] BYREF

  if ( !a1[20] )
  {
    v31 = *((_DWORD *)a1 + 47) & 0xFFFFFFF;
    if ( v31 == 11 || v31 == 0 )
    {
      sub_1000560A0((__int64)a1, "do_sigstop: process is already suspended\n", a3, a4, a5, a6, a7, a8, v39);
      if ( !v31 || v31 == 11 )
        return 1;
    }
  }
  sub_1000560A0((__int64)a1, "do_sigstop: resuming...\n", a3, a4, a5, a6, a7, a8, v39);
  (*(void (__fastcall **)(_QWORD *, _QWORD *))(*a1 + 168LL))(a1, a1 + 21);
  while ( sub_100003FF8((__int64)(a1 + 15), a2) )
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 736LL))(a1, a2);
  sub_1000560A0((__int64)a1, "do_sigstop: sending SIGSTOP\n", v10, v11, v12, v13, v14, v15, v40);
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 152LL))(a1, 0);
  sub_100002D50((__int64)a1, 1000);
  if ( !sub_100003FF8((__int64)(a1 + 15), a2) )
  {
LABEL_7:
    sub_1000560A0((__int64)a1, "do_sigstop: failed to stop process\n", v16, v17, v18, v19, v20, v21, v41);
    return 0;
  }
  while ( 1 )
  {
    v22 = sub_100056628(a2, v42, 0x400u);
    sub_1000560A0((__int64)a1, "do_sigstop: got event: %s\n", v23, v24, v25, v26, v27, v28, v22);
    v29 = *(_DWORD *)(a2 + 20) & 0xFFFFFFF;
    if ( (unsigned int)(v29 - 3) >= 2 )
      break;
    if ( !sub_100003FF8((__int64)(a1 + 15), a2) )
      goto LABEL_7;
  }
  if ( !v29 )
    return 1;
  v34 = a1[17];
  v35 = a1[16];
  v36 = 56 * ((unsigned __int64)(v34 - v35) >> 3) - 1;
  if ( v34 == v35 )
    v36 = 0;
  v37 = a1[20] + a1[19];
  if ( v36 == v37 )
  {
    sub_100009D70((__int64)(a1 + 15));
    v35 = a1[16];
    v37 = a1[20] + a1[19];
  }
  v38 = *(_QWORD *)(v35 + 8 * (v37 / 0x38)) + 72 * (v37 % 0x38);
  *(_QWORD *)v38 = 0xFFFFFFFFLL;
  *(_QWORD *)(v38 + 8) = -1;
  *(_BYTE *)(v38 + 16) = 0;
  *(_DWORD *)(v38 + 20) = 0;
  copy_debug_event(v38, a2);
  ++a1[20];
  return 0;
}
// 100006F8C: variable 'a3' is possibly undefined
// 100006F8C: variable 'a4' is possibly undefined
// 100006F8C: variable 'a5' is possibly undefined
// 100006F8C: variable 'a6' is possibly undefined
// 100006F8C: variable 'a7' is possibly undefined
// 100006F8C: variable 'a8' is possibly undefined
// 100006F8C: variable 'v39' is possibly undefined
// 100006FE4: variable 'v10' is possibly undefined
// 100006FE4: variable 'v11' is possibly undefined
// 100006FE4: variable 'v12' is possibly undefined
// 100006FE4: variable 'v13' is possibly undefined
// 100006FE4: variable 'v14' is possibly undefined
// 100006FE4: variable 'v15' is possibly undefined
// 100006FE4: variable 'v40' is possibly undefined
// 10000703C: variable 'v23' is possibly undefined
// 10000703C: variable 'v24' is possibly undefined
// 10000703C: variable 'v25' is possibly undefined
// 10000703C: variable 'v26' is possibly undefined
// 10000703C: variable 'v27' is possibly undefined
// 10000703C: variable 'v28' is possibly undefined
// 100007070: variable 'v16' is possibly undefined
// 100007070: variable 'v17' is possibly undefined
// 100007070: variable 'v18' is possibly undefined
// 100007070: variable 'v19' is possibly undefined
// 100007070: variable 'v20' is possibly undefined
// 100007070: variable 'v21' is possibly undefined
// 100007070: variable 'v41' is possibly undefined
