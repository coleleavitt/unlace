/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2E0B0
// Address: 0x0002E0B0

//----- (0002E0B0) --------------------------------------------------------
int __fastcall sub_2E0B0(int a1, int a2, int *a3)
{
  int v3; // r6
  int v5; // r4
  char *v6; // r0
  int v7; // r2
  char *v8; // r0
  int *v9; // r4
  int v10; // r5
  int v11; // r6
  __int64 v12; // kr00_8
  __int64 v13; // r0
  __int64 v14; // r0
  unsigned int v15; // r5
  __int64 v16; // kr08_8
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r6
  unsigned int v21; // r1
  char *v22; // r0
  int v23; // r6
  int v24; // r7
  __int64 v25; // r0
  const char *v27; // r2
  __int64 v28; // [sp+8h] [bp-4Ch]
  const char *v29; // [sp+10h] [bp-44h]
  char *v30; // [sp+14h] [bp-40h]
  unsigned int v32; // [sp+30h] [bp-24h]
  void (__fastcall *v34)(int, int, unsigned int, int, _DWORD, _DWORD, _DWORD, _DWORD, const char *, char *); // [sp+34h] [bp-20h]
  char *v35; // [sp+38h] [bp-1Ch] BYREF
  unsigned int v36; // [sp+3Ch] [bp-18h]
  int v37; // [sp+40h] [bp-14h]
  char *v38; // [sp+44h] [bp-10h] BYREF
  int v39; // [sp+48h] [bp-Ch]
  int v40; // [sp+4Ch] [bp-8h]
  int v41; // [sp+50h] [bp-4h]

  if ( !*(_BYTE *)(a1 + 36) )
  {
    if ( !under_debugger )
      interr(20100);
    __debugbreak();
  }
  v3 = a3[8];
  v39 = 0;
  v38 = nullptr;
  v40 = 0;
  v5 = *a3;
  v6 = (char *)sub_329BC(a1, *a3);
  sub_1B09C((int)&v35, v6);
  if ( v36 > 1 || (sub_1DA58((int)&v35, "%08X", v5), v36) )
    v27 = v35;
  else
    v27 = &byte_B3CBE;
  sub_1DA58((int)&v38, "Size of %s", v27);
  v7 = a1;
  if ( v35 )
  {
    v36 = 0;
    qfree(v35);
    v37 = 0;
    v35 = nullptr;
    v7 = a1;
  }
  v32 = v3;
  if ( v39 )
    v8 = v38;
  else
    v8 = &byte_B3CBE;
  v30 = v8;
  v9 = *(int **)(*(_DWORD *)(v7 + 32) + 364);
  v10 = a3[2];
  v11 = a3[3];
  v12 = __PAIR64__(v11, v10);
  if ( (v10 & v11) == 0xFFFFFFFF )
    v12 = qlseek((int)v9, 0, 1);
  LODWORD(v13) = qlsize(v9);
  v14 = v13 - v12;
  v15 = v32;
  v16 = 0;
  if ( (v12 | v14) <= -1 || (v16 = v14, v14 < v32) )
  {
    v28 = v16;
    v29 = ". Do you want to continue with the new value?";
    v15 = v16;
    if ( sub_375C0() != 1 )
      sub_371F8(0, v17, v18, v19);
  }
  v20 = a2;
  v21 = *(_DWORD *)(a2 + 4);
  if ( v21 >= v15 )
  {
    if ( v21 != v15 )
    {
      LOBYTE(v35) = 0;
      sub_370F6((void **)a2, v15, &v35);
    }
  }
  else
  {
    if ( *(_DWORD *)(a2 + 8) >= v15 )
    {
      v22 = *(char **)a2;
    }
    else
    {
      v22 = (char *)qvector_reserve(a2, *(void **)a2, v15, 1u);
      v20 = a2;
      *(_DWORD *)a2 = v22;
      v21 = *(_DWORD *)(a2 + 4);
    }
    memset(&v22[v21], 0, v15 - v21);
    *(_DWORD *)(v20 + 4) = v15;
  }
  qlseek(*(_DWORD *)(*(_DWORD *)(a1 + 32) + 364), *(_QWORD *)(*(_DWORD *)(a1 + 32) + 368) + *((_QWORD *)a3 + 1), 0);
  v23 = *(_DWORD *)(a1 + 32);
  v24 = lreadbytes(*(_DWORD *)(v23 + 364), *(void **)a2, v15, 0);
  if ( v24 < 0 )
  {
    v34 = *(void (__fastcall **)(int, int, unsigned int, int, _DWORD, _DWORD, _DWORD, _DWORD, const char *, char *))(v23 + 384);
    v25 = qlseek(*(_DWORD *)(v23 + 364), 0, 1);
    v34(v23, 19, v15, v24, v25, HIDWORD(v25), v28, HIDWORD(v28), v29, v30);
  }
  if ( v38 )
  {
    v39 = 0;
    qfree(v38);
    v40 = 0;
    v38 = nullptr;
  }
  return _stack_chk_guard - v41;
}
// 2E17C: variable 'v13' is possibly undefined
// 2E27C: variable 'v28' is possibly undefined
// 2E27C: variable 'v29' is possibly undefined
// 2E2BC: variable 'v17' is possibly undefined
// 2E2BC: variable 'v18' is possibly undefined
// 2E2BC: variable 'v19' is possibly undefined
// B3CBE: using guessed type char byte_B3CBE;
// E0550: using guessed type char under_debugger;
