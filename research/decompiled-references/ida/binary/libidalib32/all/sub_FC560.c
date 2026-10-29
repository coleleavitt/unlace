__int64 __fastcall sub_FC560(__int64 a1, int a2, int a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // rax
  __int64 v8; // rcx
  __int64 v9; // r12
  unsigned int v11; // r13d
  __int64 v12; // rdx
  int v13; // ecx
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // edx
  int v17; // ecx
  void (*v18)(); // rax
  __int64 *i; // rax
  __int64 *v20; // rbx
  void (*v21)(); // rax
  int v23; // eax
  __int64 v24; // rdx
  signed int v25; // ebp
  signed int v26; // eax
  int v27; // edx
  bool v28; // zf
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  char v31; // [rsp+1Fh] [rbp-99h] BYREF
  _BYTE v32[88]; // [rsp+20h] [rbp-98h] BYREF
  unsigned __int64 v33; // [rsp+78h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 288);
  v33 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(a1 + 256);
  if ( a2 <= 0 || v8 == v6 )
    return 0;
  v9 = *(_QWORD *)(a1 + 8);
  if ( a3 == 1 )
  {
    v23 = *(_DWORD *)(a1 + 320);
    v11 = a2;
    if ( v23 <= a2 )
      v11 = *(_DWORD *)(a1 + 320);
    *(_DWORD *)(a1 + 320) -= v11;
    if ( v23 >= a2 )
      goto LABEL_11;
    *(_BYTE *)(a1 + 329) = 1;
    sub_168770((unsigned int)v32, v9, 0, v8, a5, a6);
    v24 = a1 + 80;
  }
  else
  {
    v11 = a2;
    v12 = *(_QWORD *)(a1 + 272) - v8;
    v13 = *(_DWORD *)(a1 + 320);
    v14 = 0x8F5C28F5C28F5C29LL * (((v6 - *(_QWORD *)(a1 + 296)) >> 3) + (v12 >> 3))
        + 2 * ((*(_QWORD *)(a1 + 312) == 0) + ((__int64)(*(_QWORD *)(a1 + 312) - *(_QWORD *)(a1 + 280)) >> 3) - 1);
    v15 = *(_QWORD *)(a4 + 24);
    if ( (int)v15 < 0 )
      LODWORD(v15) = 0;
    if ( (int)v15 > (int)v14 - v13 )
      LODWORD(v15) = v14 - v13;
    v16 = v14 - (v13 + v15);
    if ( v16 <= a2 )
      v11 = v16;
    v17 = v11 + v13;
    *(_DWORD *)(a1 + 320) = v17;
    if ( v16 >= a2 )
      goto LABEL_11;
    *(_BYTE *)(a1 + 329) = 1;
    sub_168770((unsigned int)v32, v9, 0, v17, a5, a6);
    v24 = a1 + 160;
  }
  v25 = a2 - v11;
  v31 = 0;
  v26 = sub_FC130(a1, &v31, v24, a2 - v11, a3);
  *(_BYTE *)(a1 + 329) = 0;
  v11 += v26;
  if ( a3 == 2 )
  {
    v27 = v26 + *(_DWORD *)(a1 + 320);
    v28 = v31 == 0;
    *(_DWORD *)(a1 + 320) = v27;
    if ( !v28 && v25 > v26 )
    {
      v29 = 0x8F5C28F5C28F5C29LL
          * (((__int64)(*(_QWORD *)(a1 + 288) - *(_QWORD *)(a1 + 296)) >> 3)
           + ((__int64)(*(_QWORD *)(a1 + 272) - *(_QWORD *)(a1 + 256)) >> 3))
          + 2 * ((*(_QWORD *)(a1 + 312) == 0) + ((__int64)(*(_QWORD *)(a1 + 312) - *(_QWORD *)(a1 + 280)) >> 3) - 1);
      v30 = *(_QWORD *)(a4 + 16);
      if ( (int)v30 < 0 )
        LODWORD(v30) = 0;
      if ( (int)v30 > (int)v29 - v27 )
        LODWORD(v30) = v29 - v27;
      if ( v27 + (int)v30 < v29 )
      {
        ++v11;
        *(_DWORD *)(a1 + 320) = v27 + 1;
      }
    }
  }
  sub_16C9F0(v32);
  v9 = *(_QWORD *)(a1 + 8);
LABEL_11:
  v18 = *(void (**)())(*(_QWORD *)(v9 + 1112) + 16LL);
  if ( v18 != nullsub_1 )
    ((void (__fastcall *)(__int64))v18)(v9 + 1112);
  for ( i = *(__int64 **)(v9 + 1120); (__int64 *)(v9 + 1120) != i; i = v20 )
  {
    v20 = (__int64 *)*i;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)i[2] + 24LL))(i[2]);
  }
  v21 = *(void (**)())(*(_QWORD *)(v9 + 1112) + 24LL);
  if ( v21 != nullsub_2 )
    ((void (__fastcall *)(__int64))v21)(v9 + 1112);
  return v11;
}

