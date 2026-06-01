/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2DCFC
// Address: 0x0002DCFC

//----- (0002DCFC) --------------------------------------------------------
int __fastcall sub_2DCFC(int a1, int a2, unsigned int *a3)
{
  unsigned int v5; // r5
  const char *v6; // r2
  char *v7; // r0
  int v8; // r2
  int *v9; // r7
  unsigned int v10; // r5
  unsigned int v11; // r4
  __int64 v12; // kr00_8
  __int64 v13; // r0
  __int64 v14; // r0
  unsigned int v15; // r5
  __int64 v16; // kr08_8
  int v17; // r1
  int v18; // r2
  int v19; // r3
  unsigned int v20; // r1
  char *v21; // r0
  _DWORD *v22; // r4
  int v23; // r6
  int *v24; // r7
  int v25; // r4
  __int64 v26; // r0
  __int64 v28; // [sp+Ch] [bp-54h]
  const char *v29; // [sp+14h] [bp-4Ch]
  char *v30; // [sp+1Ch] [bp-44h]
  _DWORD *v31; // [sp+30h] [bp-30h]
  void **v32; // [sp+34h] [bp-2Ch]
  _QWORD *v34; // [sp+38h] [bp-28h]
  void (__fastcall *v35)(int, int, unsigned int, int, _DWORD, _DWORD, _DWORD, _DWORD, const char *, _DWORD, char *); // [sp+38h] [bp-28h]
  unsigned int v36; // [sp+3Ch] [bp-24h]
  char *v37; // [sp+40h] [bp-20h] BYREF
  int v38; // [sp+44h] [bp-1Ch]
  int v39; // [sp+48h] [bp-18h]
  char *v40; // [sp+4Ch] [bp-14h] BYREF
  int v41; // [sp+50h] [bp-10h]
  int v42; // [sp+54h] [bp-Ch]
  char v43[4]; // [sp+58h] [bp-8h] BYREF
  int v44; // [sp+5Ch] [bp-4h]

  v5 = a3[8];
  sub_1B09C((int)&v40, "?");
  if ( *(__int64 *)(a1 + 144) >= 1 && *(_QWORD *)(a1 + 160) )
    sub_32154(*(_DWORD *)(a1 + 132), (void **)&v40, (__int64 *)(a1 + 144), *a3);
  v38 = 0;
  v37 = nullptr;
  v39 = 0;
  v32 = (void **)a2;
  v36 = v5;
  if ( v41 )
    v6 = v40;
  else
    v6 = &byte_B3CBE;
  sub_1DA58((int)&v37, "Size of %s", v6);
  if ( v38 )
    v7 = v37;
  else
    v7 = &byte_B3CBE;
  v30 = v7;
  v8 = a1;
  v9 = *(int **)(*(_DWORD *)(a1 + 132) + 364);
  v10 = a3[6];
  v11 = a3[7];
  v34 = a3 + 6;
  v31 = (_DWORD *)(v8 + 132);
  v12 = __PAIR64__(v11, v10);
  if ( (v10 & v11) == 0xFFFFFFFF )
    v12 = qlseek((int)v9, 0, 1);
  LODWORD(v13) = qlsize(v9);
  v14 = v13 - v12;
  v15 = v36;
  v16 = 0;
  if ( (v12 | v14) <= -1 || (v16 = v14, v14 < v36) )
  {
    v28 = v16;
    v29 = ". Do you want to continue with the new value?";
    v15 = v16;
    if ( sub_375C0() != 1 )
      sub_371F8(0, v17, v18, v19);
  }
  v20 = *(_DWORD *)(a2 + 4);
  if ( v20 >= v15 )
  {
    v22 = v31;
    if ( v20 != v15 )
    {
      v43[0] = 0;
      sub_370F6((void **)a2, v15, v43);
      v22 = v31;
    }
  }
  else
  {
    if ( *(_DWORD *)(a2 + 8) >= v15 )
    {
      v21 = *(char **)a2;
    }
    else
    {
      v21 = (char *)qvector_reserve(a2, *(void **)a2, v15, 1u);
      *(_DWORD *)a2 = v21;
      v20 = *(_DWORD *)(a2 + 4);
    }
    v22 = v31;
    memset(&v21[v20], 0, v15 - v20);
    *(_DWORD *)(a2 + 4) = v15;
  }
  qlseek(*(_DWORD *)(*v22 + 364), *(_QWORD *)(*v22 + 368) + *v34, 0);
  v23 = *v31;
  v24 = (int *)(*v31 + 364);
  v25 = lreadbytes(*v24, *v32, v15, 0);
  if ( v25 < 0 )
  {
    v35 = *(void (__fastcall **)(int, int, unsigned int, int, _DWORD, _DWORD, _DWORD, _DWORD, const char *, _DWORD, char *))(v23 + 384);
    v26 = qlseek(*v24, 0, 1);
    v35(v23, 19, v15, v25, v26, HIDWORD(v26), v28, HIDWORD(v28), v29, 0, v30);
  }
  if ( v37 )
  {
    v38 = 0;
    qfree(v37);
    v39 = 0;
    v37 = nullptr;
  }
  if ( v40 )
  {
    v41 = 0;
    qfree(v40);
    v42 = 0;
    v40 = nullptr;
  }
  return _stack_chk_guard - v44;
}
// 2DDD2: variable 'v13' is possibly undefined
// 2DED6: variable 'v28' is possibly undefined
// 2DED6: variable 'v29' is possibly undefined
// 2DF10: variable 'v17' is possibly undefined
// 2DF10: variable 'v18' is possibly undefined
// 2DF10: variable 'v19' is possibly undefined
// B3CBE: using guessed type char byte_B3CBE;
