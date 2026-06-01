__int64 __fastcall sub_A25950(__int64 a1, unsigned int a2, char a3, double a4)
{
  __int64 v5; // rdi
  __int64 v7; // r12
  __int64 v9; // rax
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
  void *v21; // r14
  __int64 ***v22; // r8
  unsigned int v23; // ecx
  unsigned int *v24; // rdx
  unsigned int v25; // esi
  void *v26; // r12
  void *v27; // rbx
  int *v29; // rax
  __int64 v30; // rsi
  int *v31; // rax
  _BOOL4 v32; // [rsp+Ch] [rbp-C4h]
  void (__fastcall *v33)(int *, int *, _QWORD *, _BOOL4); // [rsp+10h] [rbp-C0h]
  unsigned int v34; // [rsp+10h] [rbp-C0h]
  unsigned int v35; // [rsp+18h] [rbp-B8h]
  int v36[2]; // [rsp+30h] [rbp-A0h] BYREF
  unsigned int **v37; // [rsp+38h] [rbp-98h]
  _QWORD v38[2]; // [rsp+40h] [rbp-90h] BYREF
  _QWORD v39[2]; // [rsp+50h] [rbp-80h] BYREF
  _QWORD v40[2]; // [rsp+60h] [rbp-70h] BYREF
  _QWORD v41[2]; // [rsp+70h] [rbp-60h] BYREF
  _QWORD v42[2]; // [rsp+80h] [rbp-50h] BYREF
  _QWORD v43[8]; // [rsp+90h] [rbp-40h] BYREF

  v5 = a2;
  v7 = 4LL * a2;
  v9 = *(_QWORD *)(a1 + 656);
  v40[0] = 0;
  v41[0] = 1;
  v42[0] = 0;
  v43[0] = 1;
  LODWORD(v9) = *(_DWORD *)(v9 + v7);
  v40[1] = 0;
  v41[1] = 0;
  v10 = 3 * (v9 & 0xFFFFFFF);
  v11 = *(_QWORD *)(a1 + 632);
  v42[1] = 0;
  v43[1] = 0;
  v12 = (__int64 *)(v11 + 8 * v10);
  v13 = *v12;
  if ( !*v12 || (v14 = v13 + 40LL * *(unsigned int *)(v13 - 4), v14 == v13) )
  {
LABEL_7:
    v35 = -1;
  }
  else
  {
    v15 = 0;
    while ( 1 )
    {
      v16 = *(_DWORD *)(v13 + 32);
      if ( a2 == v16 && v16 != -1 )
        break;
      v13 += 40;
      ++v15;
      if ( v14 == v13 )
        goto LABEL_7;
    }
    v35 = v15;
  }
  v17 = *(_BYTE *)(*(_QWORD *)(a1 + 400) + 24LL);
  if ( a3 )
  {
    v18 = *(int **)(*(_QWORD *)(a1 + 680) + 8 * v5);
    if ( !v17 )
      goto LABEL_10;
    v34 = a2;
    sub_98B520((__int64)v40, v18 + 4);
    v31 = sub_9AA900(a1, v34);
    sub_992DA0((__int64)v40, (__int64)v31);
    v30 = a1 + 64;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 656) + v7 + 3) & 0x40) == 0 )
      v30 = a1 + 128;
  }
  else
  {
    v18 = *(int **)(*(_QWORD *)(a1 + 688) + 8 * v5);
    if ( !v17 )
      goto LABEL_10;
    v29 = sub_9AA900(a1, a2);
    sub_98B520((__int64)v40, v29);
    sub_992DA0((__int64)v40, (__int64)(v18 + 4));
    v30 = a1 + 64;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 656) + v7 + 3) & 0x40) == 0 )
      v30 = a1 + 128;
  }
  sub_992DA0((__int64)v40, v30);
  if ( SLODWORD(v40[0]) < 0 || !LODWORD(v40[0]) && SLODWORD(v42[0]) < 0 )
  {
    sub_992B50((__int64)v40);
    sub_992B50((__int64)v42);
  }
LABEL_10:
  v19 = *(unsigned int *)(a1 + 1224);
  *(_QWORD *)v36 = a1;
  v37 = (unsigned int **)(a1 + 48 * v19 + 1080);
  sub_998560((__int64)v37);
  ++*(_DWORD *)(a1 + 1224);
  sub_A231F0(a1, v12, v35, a3 ^ 1, v40, (__int64)v36);
  v20 = 1;
  if ( !*(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) )
    v20 = *(_DWORD *)(a1 + 1536) != 0x7FFFFFFF;
  v33 = *(void (__fastcall **)(int *, int *, _QWORD *, _BOOL4))(*(_QWORD *)v18 + 24LL);
  v32 = v20;
  v39[0] = 1;
  v38[0] = 1;
  v38[1] = 0;
  v39[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v39);
  BYTE4(v39[0]) &= ~1u;
  LODWORD(v39[0]) = 1;
  v33(v18, v36, v38, v32);
  v21 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v38);
  sub_182CBA0(v21, v39);
  v22 = (__int64 ***)v37[1];
  if ( v22 )
    v23 = *((_DWORD *)v22 - 1);
  else
    v23 = 0;
  v24 = *v37;
  if ( *v37 )
    v25 = *(v24 - 1);
  else
    v25 = 0;
  sub_A19BC0(a1, v25, v24, v23, v22, (__int64)v36, a4, (__int64)"farkas");
  v26 = qword_1C7F2C0;
  --*(_DWORD *)(*(_QWORD *)v36 + 1224LL);
  sub_182CBA0(v26, v42);
  sub_182CBA0(v26, v43);
  v27 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v40);
  return sub_182CBA0(v27, v41);
}

