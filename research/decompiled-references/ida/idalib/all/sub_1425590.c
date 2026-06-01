void __fastcall sub_1425590(__int64 a1, int *a2, unsigned int *a3, int a4, __m128i a5, double a6)
{
  int v9; // eax
  _BYTE *v10; // rax
  __int64 v11; // rbp
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // edx
  __int64 v16; // rsi
  unsigned int v17; // r13d
  unsigned __int8 v18; // di
  __int64 v19; // rdx
  __int64 v20; // r9
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rbp
  __int64 v25; // rax
  bool v26; // al
  unsigned __int8 v28; // [rsp+16h] [rbp-92h]
  char v29; // [rsp+17h] [rbp-91h]
  __int64 v30; // [rsp+18h] [rbp-90h]
  unsigned __int8 *v31[17]; // [rsp+20h] [rbp-88h] BYREF

  v9 = *(_DWORD *)(a1 + 2316) + 1;
  if ( a4 == 4 )
  {
    *(_DWORD *)(a1 + 2316) = v9;
    v11 = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 2316) = v9;
    v10 = *(_BYTE **)(a1 + 56);
    v11 = (a4 != 5) + 1LL;
    if ( (v10[1] & 8) != 0 )
      v12 = (v10[2] & 1) == 0 ? 1214 : 1337;
    else
      v12 = (*v10 & 8) == 0 ? 1207 : 1318;
    sub_FC70B0((__int64)v31, *(_QWORD *)(a1 + 48), *a2, v12);
    sub_AE9DF0(v31, v11, 2u);
    sub_AEA040((__int64)v31);
  }
  v13 = sub_141A820(a1, (unsigned int *)v31);
  v14 = *(_QWORD *)(a1 + 1120);
  v15 = *(_DWORD *)(v14 + 72);
  if ( !v15 )
  {
    sub_FC70B0((__int64)v31, *(_QWORD *)(a1 + 48), *a2, 1284);
    sub_AE9DF0(v31, v11, 2u);
    sub_AEA040((__int64)v31);
    return;
  }
  v16 = *(_QWORD *)(v14 + 64) + 8LL * v15 - 8;
  v17 = *(_DWORD *)v16;
  v29 = *(_BYTE *)(v16 + 5);
  v18 = *(_BYTE *)(v16 + 6);
  *(_DWORD *)(v14 + 72) = v15 - 1;
  v19 = *(_QWORD *)(a1 + 1120);
  v28 = v18;
  if ( !*(_DWORD *)(v19 + 72) )
  {
    a5 = 0;
    *(_WORD *)(v19 + 32) = 1;
    *(_OWORD *)(v19 + 40) = 0;
  }
  v20 = (unsigned int)*a2;
  if ( v18 )
  {
    v30 = v13;
    sub_FC70B0((__int64)v31, *(_QWORD *)(a1 + 48), v20, 1283);
    sub_AE9DF0(v31, v11, 2u);
    sub_AEA040((__int64)v31);
    v20 = (unsigned int)*a2;
    v13 = v30;
  }
  v21 = *(_QWORD *)(a1 + 1192);
  if ( v21 )
  {
    switch ( a4 )
    {
      case 5:
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v21 + 336LL))(
          v21,
          (unsigned int)v20,
          v13,
          v17);
        v20 = (unsigned int)*a2;
        break;
      case 6:
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v21 + 360LL))(
          v21,
          (unsigned int)v20,
          v13,
          v17);
        v20 = (unsigned int)*a2;
        break;
      case 4:
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)v21 + 312LL))(
          v21,
          (unsigned int)v20,
          v13,
          0,
          v17);
        v20 = (unsigned int)*a2;
        break;
    }
  }
  v22 = *(_QWORD *)(a1 + 40);
  if ( *(_BYTE *)(v22 + 313) )
  {
    v26 = sub_1021600(*(_QWORD *)(a1 + 88), v20);
    v20 = (unsigned int)*a2;
    if ( v26 )
      goto LABEL_18;
    v22 = *(_QWORD *)(a1 + 40);
  }
  if ( !*(_BYTE *)(v22 + 234) || v29 )
  {
    sub_1424590(a1, *a3, v17, 1u, v28, v20, a5, a6);
    return;
  }
LABEL_18:
  v23 = *(_QWORD *)(a1 + 1120);
  v24 = (unsigned int)v20;
  v25 = *(unsigned int *)(v23 + 72);
  if ( v25 + 1 > (unsigned __int64)*(unsigned int *)(v23 + 76) )
  {
    sub_2237220(v23 + 64, v23 + 80, v25 + 1, 8);
    v25 = *(unsigned int *)(v23 + 72);
  }
  *(_QWORD *)(*(_QWORD *)(v23 + 64) + 8 * v25) = v24;
  ++*(_DWORD *)(v23 + 72);
}
