__m128i *__fastcall sub_1867FF0(__int64 a1, __int64 *a2, __int64 a3, __m128 a4, __m128i a5)
{
  bool v6; // r14
  __int64 *v7; // r12
  char v8; // al
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // eax
  char v13; // dl
  __int64 v14; // r8
  int v15; // edx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __m128i *v20; // r12
  __int64 v22; // rcx
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // [rsp+0h] [rbp-F8h]
  __int64 *v32; // [rsp+0h] [rbp-F8h]
  __int64 v33; // [rsp+8h] [rbp-F0h]
  __int64 v34; // [rsp+8h] [rbp-F0h]
  __int64 v35; // [rsp+8h] [rbp-F0h]
  __int64 v36; // [rsp+10h] [rbp-E8h]
  __int64 v37; // [rsp+10h] [rbp-E8h]
  __int64 v38; // [rsp+18h] [rbp-E0h]
  __int64 v39; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v40[2]; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD *v41; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v42; // [rsp+50h] [rbp-A8h] BYREF
  char v43; // [rsp+A8h] [rbp-50h]
  unsigned int v44; // [rsp+B0h] [rbp-48h]
  char v45; // [rsp+B4h] [rbp-44h]

  v6 = 1;
  v7 = (__int64 *)sub_1E85170(a1, a3);
  if ( (*(_BYTE *)(a3 + 720) & 1) == 0 )
    v6 = ((**(_DWORD **)a3 >> 12) & 0x7F) == 69;
  v8 = sub_1E535C0(a1, *(unsigned int *)(a3 + 80), v7, 14);
  if ( v8 )
  {
    v6 = v8;
    v7 = sub_A81910(*(_QWORD **)(a1 + 248), *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18720LL), *(_DWORD *)(a3 + 80));
  }
  if ( *(_DWORD *)(a3 + 56) )
  {
    v10 = 0;
    v9 = 0;
  }
  else
  {
    v9 = *(_QWORD *)(a3 + 64);
    v10 = v9;
  }
  v11 = sub_1A5B7C0(a1, a2, v10, *(unsigned int *)(a3 + 80), 0, 1);
  if ( !v11 )
    goto LABEL_12;
  v31 = v11;
  if ( sub_17A3270(a1, v11, *(_QWORD *)(a1 + 544), a2, 0) )
  {
    v33 = v31;
    v32 = (__int64 *)(a1 + 8);
    sub_168B9F0((__int64)v40, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 80), 0x1326u, 0);
    v22 = 0;
    v23 = v33;
    if ( !*(_DWORD *)(a3 + 56) )
      v22 = *(_QWORD *)(a3 + 64);
    if ( v43 )
    {
      sub_AE9DF0(&v42, v22, 5u);
      v23 = v33;
    }
    else if ( v45 )
    {
      v36 = v22;
      v24 = sub_168B9E0(v40);
      v26 = v33;
      v27 = v36;
      v28 = v24;
      v29 = (__int64)v41;
      if ( v41 )
      {
        v38 = v28;
        v29 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, __int64, __int64, __int64, __int64 *))(*v41 + 32LL))(
                v41,
                *v41,
                v28,
                v36,
                v25,
                v33,
                v32);
        v28 = v38;
        v27 = v36;
        v26 = v33;
      }
      v35 = v26;
      v37 = v27;
      v39 = v29;
      v30 = sub_1587BC0(v28, &v39, v28, v27, v25, v26);
      sub_AE9DF0((unsigned __int8 **)(*v30 + 32LL * v44 + 8), v37, 5u);
      v23 = v35;
    }
    v34 = v23;
    sub_15F7200(v40);
    sub_168B9F0((__int64)v40, v32, *(_DWORD *)(v34 + 24), 0x71u, 0);
    sub_15F7200(v40);
    v12 = *(_DWORD *)(a3 + 80);
LABEL_16:
    v15 = *(_DWORD *)(a3 + 88);
    v6 = 1;
    if ( *(_DWORD *)(a3 + 56) )
    {
      v20 = (__m128i *)sub_1867800((_QWORD *)a1, v7, v15, v12, 0);
LABEL_23:
      sub_B88650((__int64)v20, 1);
      if ( v9 )
        goto LABEL_20;
LABEL_24:
      sub_B94AD0(*(__m128i **)(a1 + 544), (__int64)v20, v16, v17, v18, v19);
      goto LABEL_21;
    }
    goto LABEL_17;
  }
  v12 = *(_DWORD *)(a3 + 80);
  v13 = *(_BYTE *)(v31 + 28) & 0x7F;
  if ( ((v13 + 61) & 0x7Fu) <= 1 || v13 == 47 )
  {
    sub_1CC2540(a1, v12, v31, 0);
LABEL_12:
    v12 = *(_DWORD *)(a3 + 80);
  }
  v14 = *(_QWORD *)(a3 + 16);
  if ( v14 )
  {
    if ( !v6 )
    {
      sub_168B9F0((__int64)v40, (__int64 *)(a1 + 8), v12, 0x1313u, 0);
      v39 = *(_QWORD *)(a3 + 8);
      sub_1587DB0((__int64)v40, &v39);
      sub_15F7200(v40);
      v12 = *(_DWORD *)(a3 + 80);
    }
    goto LABEL_16;
  }
  v15 = *(_DWORD *)(a3 + 88);
  if ( !*(_DWORD *)(a3 + 56) )
LABEL_17:
    v14 = *(_QWORD *)(a3 + 64);
  v20 = (__m128i *)sub_1867800((_QWORD *)a1, v7, v15, v12, v14);
  if ( v6 )
    goto LABEL_23;
  if ( !v9 )
    goto LABEL_24;
LABEL_20:
  sub_17B7670(a1, (__int64)v20, (__int64)a2, 1, v18, v19);
LABEL_21:
  sub_1836CB0((__int64 *)a1, (__int64)a2, v20, (__int64 *)a3, a4, a5);
  return v20;
}
