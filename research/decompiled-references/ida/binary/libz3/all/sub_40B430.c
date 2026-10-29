__int64 __fastcall sub_40B430(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdi
  bool v20; // zf
  __int64 v21; // rax
  void (****v22)(void); // r14
  __int64 v23; // rax
  unsigned int v24; // r15d
  char v25; // cl
  __int64 v26; // rax
  __int64 v27; // r13
  __int64 v28; // rdx
  __int64 v29; // r15
  unsigned int *v30; // r12
  __int64 v31; // rax
  int v32; // r8d
  __int64 v33; // rdi
  int v34; // eax
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // r13
  void (***v38)(void); // rdi
  __int64 v39; // rdx
  __int64 v40; // [rsp+18h] [rbp-B8h]
  __int64 v41; // [rsp+28h] [rbp-A8h]
  __int64 v42; // [rsp+30h] [rbp-A0h]
  char v44; // [rsp+43h] [rbp-8Dh]
  int v46; // [rsp+44h] [rbp-8Ch]
  __int64 v48; // [rsp+50h] [rbp-80h] BYREF
  unsigned int *v49; // [rsp+58h] [rbp-78h] BYREF
  __int64 v50[2]; // [rsp+60h] [rbp-70h] BYREF
  __int64 v51; // [rsp+70h] [rbp-60h] BYREF
  unsigned int *v52; // [rsp+78h] [rbp-58h] BYREF
  __int64 v53; // [rsp+80h] [rbp-50h] BYREF
  __int64 v54; // [rsp+88h] [rbp-48h]
  void (***v55[8])(void); // [rsp+90h] [rbp-40h] BYREF

  if ( (*(_BYTE *)(a3 + 108) & 2) != 0 )
    goto LABEL_2;
  ++*(_DWORD *)(a1 + 340);
  v5 = a1;
  if ( (unsigned __int8)sub_40B220(a1, a3) )
  {
    ++*(_DWORD *)(a1 + 336);
LABEL_2:
    LODWORD(v5) = 0;
    return (unsigned int)v5;
  }
  v40 = *(_QWORD *)(a1 + 8);
  sub_407990((_QWORD *)a3, a3, v9, v10, v11, v12);
  v17 = *(_QWORD *)(a3 + 16);
  v42 = v17;
  if ( v17 )
    ++*(_DWORD *)(v17 + 8);
  v18 = *(_QWORD *)(a1 + 16);
  v19 = *(_QWORD *)(a1 + 8);
  v49 = nullptr;
  v50[1] = 0;
  v20 = *(_BYTE *)(v18 + 642) == 0;
  v48 = v19;
  v50[0] = v19;
  v51 = v19;
  v53 = 0;
  v54 = v19;
  if ( v20
    && (sub_407990((_QWORD *)a3, a3, v13, v14, v15, v16),
        v19 = *(_QWORD *)(v5 + 8),
        *(_WORD *)(*(_QWORD *)(a3 + 16) + 4LL) == 2) )
  {
    v55[0] = *(void (****)(void))(v5 + 8);
    v55[1] = nullptr;
    sub_3D5800(*(std::ios_base **)(v42 + 24), &v53, (__int64 *)v55);
    v37 = v53;
    if ( v53 )
      ++*(_DWORD *)(v53 + 8);
    sub_3FCDF0(v42, v40);
    sub_2B4F40((__int64 *)v55);
    v42 = v37;
    v21 = sub_15EC2C0(*(_QWORD *)(v5 + 8), v37);
  }
  else
  {
    v21 = sub_15EC2C0(v19, v42);
  }
  v55[0] = (void (***)(void))v21;
  if ( v21 )
    ++*(_DWORD *)(v21 + 8);
  v22 = v55;
  sub_407600(&v49, v55);
  sub_15EE300(&v48);
  v23 = *(_QWORD *)(v5 + 120);
  v24 = -1;
  *(_DWORD *)(v23 + 148) = a2;
  v25 = *(_BYTE *)(v23 + 136);
  v41 = v23;
  *(_BYTE *)(v23 + 145) = 1;
  *(_BYTE *)(v23 + 136) = 1;
  v26 = *(_QWORD *)(v5 + 16);
  v44 = v25;
  if ( *(_BYTE *)(v26 + 643) )
    v24 = *(unsigned __int16 *)(a3 + 106);
  v27 = *(_QWORD *)(v41 + 16);
  v28 = v41;
  if ( v27 )
  {
    (*(void (__fastcall **)(_QWORD, void (****)(void), __int64))(*(_QWORD *)v27 + 120LL))(
      *(_QWORD *)(v41 + 16),
      v55,
      v41);
    v55[0] = nullptr;
    sub_1862300(v55, "arith.ignore_int", v24 == 0);
    sub_1862300(v55, "array.weak", v24 <= 1);
    (*(void (__fastcall **)(__int64, void (****)(void)))(*(_QWORD *)v27 + 88LL))(v27, v55);
    sub_18572D0(v55);
    v26 = *(_QWORD *)(v5 + 16);
    v28 = *(_QWORD *)(v5 + 120);
  }
  v20 = *(_BYTE *)(v26 + 648) == 0;
  v55[0] = nullptr;
  if ( v20 )
    v22 = nullptr;
  v29 = *(_QWORD *)(v5 + 296);
  *(_QWORD *)(v28 + 120) = a5;
  *(_QWORD *)(v28 + 128) = v22;
  if ( v29 )
    ++*(_DWORD *)(v29 + 8);
  v52 = nullptr;
  sub_23A6F0(&v52);
  v30 = v52;
  v31 = *(v52 - 1);
  *(_QWORD *)&v52[2 * v31] = v29;
  v32 = v31 + 1;
  v20 = *(_BYTE *)(*(_QWORD *)(v5 + 16) + 668LL) == 0;
  *(v30 - 1) = v31 + 1;
  if ( v20 )
  {
    v33 = *(_QWORD *)(v5 + 120);
  }
  else
  {
    sub_4087A0(v5, (__int64)&v51);
    v30 = v52;
    v33 = *(_QWORD *)(v5 + 120);
    v32 = 0;
    if ( v52 )
      v32 = *(v52 - 1);
  }
  v34 = sub_42BF90(v33, (unsigned int)&v48, (unsigned int)v50, (int)v5 + 232, v32, (_DWORD)v30, 1);
  if ( v34 == -1 )
  {
    v38 = *(void (****)(void))(a3 + 88);
    *a4 = *(_DWORD *)(*(_QWORD *)(v5 + 120) + 140LL);
    sub_3FCDA0(v38);
    v39 = *(_QWORD *)(v5 + 120);
    *(_QWORD *)(a3 + 88) = 0;
    v34 = -1;
    if ( a2 < *(_DWORD *)(v39 + 140) )
      ++*(_DWORD *)(v5 + 344);
  }
  else if ( v34 == 1 )
  {
    if ( v22 )
    {
      if ( *v22 )
        ++*((_DWORD *)*v22 + 4);
      LODWORD(v5) = a3;
      sub_3FCDA0(*(void (****)(void))(a3 + 88));
      v34 = 1;
      *(_QWORD *)(a3 + 88) = *v22;
    }
  }
  else
  {
    LODWORD(v5) = a3;
    v46 = v34;
    sub_3FCDA0(*(void (****)(void))(a3 + 88));
    *(_QWORD *)(a3 + 88) = 0;
    v34 = v46;
  }
  LOBYTE(v5) = v34 == -1;
  sub_3FCDA0(v55[0]);
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 128LL))(v27);
  v35 = v54;
  v36 = v53;
  *(_BYTE *)(v41 + 136) = v44;
  *(_BYTE *)(v41 + 145) = 0;
  sub_3FCDF0(v36, v35);
  v52 = v30;
  sub_2334C0(&v51);
  sub_2334C0(v50);
  sub_2334C0(&v48);
  sub_3FCDF0(v42, v40);
  return (unsigned int)v5;
}

