__int64 __fastcall sub_A289A0(__int64 a1, unsigned int a2, char a3, double a4)
{
  __int64 v5; // rdi
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 *v10; // r15
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned int v13; // ecx
  int v14; // edx
  char v15; // al
  int *v16; // r14
  __int64 v17; // rax
  _BOOL4 v18; // ecx
  void *v19; // r14
  __int64 ***v20; // r8
  unsigned int v21; // ecx
  unsigned int *v22; // rdx
  unsigned int v23; // esi
  void *v24; // rbx
  int *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  _BOOL4 v29; // [rsp+4h] [rbp-9Ch]
  unsigned int v30; // [rsp+4h] [rbp-9Ch]
  unsigned int v31; // [rsp+8h] [rbp-98h]
  void (__fastcall *v32)(int *, int *, _QWORD *, _BOOL4); // [rsp+8h] [rbp-98h]
  int v33[2]; // [rsp+20h] [rbp-80h] BYREF
  unsigned int **v34; // [rsp+28h] [rbp-78h]
  _QWORD v35[2]; // [rsp+30h] [rbp-70h] BYREF
  _QWORD v36[2]; // [rsp+40h] [rbp-60h] BYREF
  _QWORD v37[2]; // [rsp+50h] [rbp-50h] BYREF
  _QWORD v38[8]; // [rsp+60h] [rbp-40h] BYREF

  v5 = a2;
  v8 = 4LL * a2;
  v9 = *(_QWORD *)(a1 + 592);
  v35[0] = 0;
  v36[0] = 1;
  LODWORD(v9) = *(_DWORD *)(v9 + v8);
  v35[1] = 0;
  v36[1] = 0;
  v10 = (__int64 *)(*(_QWORD *)(a1 + 568) + 24 * (v9 & 0xFFFFFFF));
  v11 = *v10;
  if ( !*v10 || (v12 = v11 + 40LL * *(unsigned int *)(v11 - 4), v12 == v11) )
  {
LABEL_7:
    v31 = -1;
  }
  else
  {
    v13 = 0;
    while ( 1 )
    {
      v14 = *(_DWORD *)(v11 + 32);
      if ( v14 != -1 && a2 == v14 )
        break;
      v11 += 40;
      ++v13;
      if ( v12 == v11 )
        goto LABEL_7;
    }
    v31 = v13;
  }
  v15 = *(_BYTE *)(*(_QWORD *)(a1 + 336) + 24LL);
  if ( a3 )
  {
    v16 = *(int **)(*(_QWORD *)(a1 + 616) + 8 * v5);
    if ( !v15 )
      goto LABEL_10;
    v30 = a2;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v35, v16 + 4);
    v28 = sub_999800(a1, v30);
    sub_89ABF0((__int64)qword_1C7F2C0, (__int64)v35, v28, (__int64)v35);
    v27 = a1 + 64;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 592) + v8 + 3) & 0x40) == 0 )
      v27 = a1 + 96;
  }
  else
  {
    v16 = *(int **)(*(_QWORD *)(a1 + 624) + 8 * v5);
    if ( !v15 )
      goto LABEL_10;
    v26 = (int *)sub_999800(a1, a2);
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v35, v26);
    sub_89ABF0((__int64)qword_1C7F2C0, (__int64)v35, (__int64)(v16 + 4), (__int64)v35);
    v27 = a1 + 64;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 592) + v8 + 3) & 0x40) == 0 )
      v27 = a1 + 96;
  }
  sub_89ABF0((__int64)qword_1C7F2C0, (__int64)v35, v27, (__int64)v35);
  if ( SLODWORD(v35[0]) < 0 )
    sub_992B50((__int64)v35);
LABEL_10:
  v17 = *(unsigned int *)(a1 + 1128);
  *(_QWORD *)v33 = a1;
  v34 = (unsigned int **)(a1 + 48 * v17 + 984);
  sub_99F980((__int64)v34);
  ++*(_DWORD *)(a1 + 1128);
  sub_A269E0(a1, v10, v31, a3 ^ 1, v35, (__int64)v33);
  v18 = 1;
  if ( !*(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) )
    v18 = *(_DWORD *)(a1 + 1440) != 0x7FFFFFFF;
  v32 = *(void (__fastcall **)(int *, int *, _QWORD *, _BOOL4))(*(_QWORD *)v16 + 24LL);
  v29 = v18;
  v37[0] = 1;
  v37[1] = 0;
  v38[0] = 1;
  v38[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v38);
  BYTE4(v38[0]) &= ~1u;
  LODWORD(v38[0]) = 1;
  v32(v16, v33, v37, v29);
  v19 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v37);
  sub_182CBA0(v19, v38);
  v20 = (__int64 ***)v34[1];
  if ( v20 )
    v21 = *((_DWORD *)v20 - 1);
  else
    v21 = 0;
  v22 = *v34;
  if ( *v34 )
    v23 = *(v22 - 1);
  else
    v23 = 0;
  sub_A1B200(a1, v23, v22, v21, v20, (__int64)v33, a4, (__int64)"farkas");
  --*(_DWORD *)(*(_QWORD *)v33 + 1128LL);
  v24 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v35);
  return sub_182CBA0(v24, v36);
}

