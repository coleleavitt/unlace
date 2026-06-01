__int64 __fastcall sub_A22CF0(__int64 a1, unsigned int a2, char a3, double a4)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 *v12; // r15
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned int v15; // ecx
  int v16; // edx
  char v17; // al
  int *v18; // r14
  __int64 v19; // rax
  _BOOL4 v20; // ecx
  void *v21; // r13
  __int64 ***v22; // r8
  unsigned int v23; // ecx
  unsigned int *v24; // rdx
  unsigned int v25; // esi
  int *v27; // rax
  __int64 v28; // rsi
  bool v29; // zf
  void *v30; // r12
  void *v31; // r12
  void *v32; // r12
  int *v33; // rax
  __int64 v34; // rsi
  _BOOL4 v35; // [rsp+4h] [rbp-DCh]
  unsigned int v36; // [rsp+8h] [rbp-D8h]
  void (__fastcall *v37)(int *, int *, _QWORD *, _BOOL4); // [rsp+8h] [rbp-D8h]
  int v39[2]; // [rsp+20h] [rbp-C0h] BYREF
  unsigned int **v40; // [rsp+28h] [rbp-B8h]
  _QWORD v41[2]; // [rsp+30h] [rbp-B0h] BYREF
  _QWORD v42[2]; // [rsp+40h] [rbp-A0h] BYREF
  _QWORD v43[2]; // [rsp+50h] [rbp-90h] BYREF
  _QWORD v44[2]; // [rsp+60h] [rbp-80h] BYREF
  _QWORD v45[2]; // [rsp+70h] [rbp-70h] BYREF
  _QWORD v46[2]; // [rsp+80h] [rbp-60h] BYREF
  _QWORD v47[2]; // [rsp+90h] [rbp-50h] BYREF
  _QWORD v48[8]; // [rsp+A0h] [rbp-40h] BYREF

  v6 = *(_QWORD *)(a1 + 720);
  v7 = a2;
  v43[0] = 0;
  v9 = 4LL * a2;
  v44[0] = 1;
  v45[0] = 0;
  v46[0] = 1;
  v47[0] = 0;
  v48[0] = 1;
  LODWORD(v6) = *(_DWORD *)(v6 + v9);
  v43[1] = 0;
  v44[1] = 0;
  v10 = 3 * (v6 & 0xFFFFFFF);
  v11 = *(_QWORD *)(a1 + 696);
  v45[1] = 0;
  v46[1] = 0;
  v12 = (__int64 *)(v11 + 8 * v10);
  v47[1] = 0;
  v13 = *v12;
  v48[1] = 0;
  if ( !v13 || (v14 = v13 + 40LL * *(unsigned int *)(v13 - 4), v14 == v13) )
  {
LABEL_7:
    v36 = -1;
  }
  else
  {
    v15 = 0;
    while ( 1 )
    {
      v16 = *(_DWORD *)(v13 + 32);
      if ( v16 != -1 && a2 == v16 )
        break;
      v13 += 40;
      ++v15;
      if ( v14 == v13 )
        goto LABEL_7;
    }
    v36 = v15;
  }
  v17 = *(_BYTE *)(*(_QWORD *)(a1 + 464) + 24LL);
  if ( a3 )
  {
    v18 = *(int **)(*(_QWORD *)(a1 + 744) + 8 * v7);
    if ( !v17 )
      goto LABEL_10;
    sub_98B5F0((__int64)v43, v18 + 4);
    v33 = sub_9AD4F0(a1, a2);
    sub_9FF170((__int64)v43, (__int64)v33);
    v34 = a1 + 64;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 720) + v9 + 3) & 0x40) == 0 )
      v34 = a1 + 160;
    sub_9FF170((__int64)v43, v34);
    v29 = LODWORD(v43[0]) == 0;
    if ( SLODWORD(v43[0]) < 0 )
      goto LABEL_21;
  }
  else
  {
    v18 = *(int **)(*(_QWORD *)(a1 + 752) + 8 * v7);
    if ( !v17 )
      goto LABEL_10;
    v27 = sub_9AD4F0(a1, a2);
    sub_98B5F0((__int64)v43, v27);
    sub_9FF170((__int64)v43, (__int64)(v18 + 4));
    v28 = a1 + 64;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 720) + v9 + 3) & 0x40) == 0 )
      v28 = a1 + 160;
    sub_9FF170((__int64)v43, v28);
    v29 = LODWORD(v43[0]) == 0;
    if ( SLODWORD(v43[0]) < 0 )
      goto LABEL_21;
  }
  if ( v29 && (SLODWORD(v45[0]) < 0 || !LODWORD(v45[0]) && SLODWORD(v47[0]) < 0) )
  {
LABEL_21:
    v30 = qword_1C7F2C0;
    sub_182CEF0(qword_1C7F2C0, v43);
    sub_182CBA0(v30, v44);
    v31 = qword_1C7F2C0;
    BYTE4(v44[0]) &= ~1u;
    LODWORD(v44[0]) = 1;
    sub_182CEF0(qword_1C7F2C0, v45);
    sub_182CBA0(v31, v46);
    v32 = qword_1C7F2C0;
    BYTE4(v46[0]) &= ~1u;
    LODWORD(v46[0]) = 1;
    sub_182CEF0(qword_1C7F2C0, v47);
    sub_182CBA0(v32, v48);
    BYTE4(v48[0]) &= ~1u;
    LODWORD(v48[0]) = 1;
  }
LABEL_10:
  v19 = *(unsigned int *)(a1 + 1320);
  *(_QWORD *)v39 = a1;
  v40 = (unsigned int **)(a1 + 48 * v19 + 1176);
  sub_9A4DA0((__int64)v40);
  ++*(_DWORD *)(a1 + 1320);
  sub_A20430(a1, v12, v36, a3 ^ 1, v43, (__int64)v39);
  v20 = 1;
  if ( !*(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) )
    v20 = *(_DWORD *)(a1 + 1632) != 0x7FFFFFFF;
  v35 = v20;
  v37 = *(void (__fastcall **)(int *, int *, _QWORD *, _BOOL4))(*(_QWORD *)v18 + 24LL);
  v41[0] = 1;
  v41[1] = 0;
  v42[0] = 1;
  v42[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v42);
  BYTE4(v42[0]) &= ~1u;
  LODWORD(v42[0]) = 1;
  v37(v18, v39, v41, v35);
  v21 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v41);
  sub_182CBA0(v21, v42);
  v22 = (__int64 ***)v40[1];
  if ( v22 )
    v23 = *((_DWORD *)v22 - 1);
  else
    v23 = 0;
  v24 = *v40;
  if ( *v40 )
    v25 = *(v24 - 1);
  else
    v25 = 0;
  sub_A1C800(a1, v25, v24, v23, v22, (__int64)v39, a4, (__int64)"farkas");
  --*(_DWORD *)(*(_QWORD *)v39 + 1320LL);
  return sub_2A6060((__int64)v43);
}

