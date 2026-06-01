__int64 __fastcall sub_16C4190(__int64 a1, __int16 *a2)
{
  __int64 v2; // r15
  __int64 v5; // rax
  int v6; // ebp
  __int64 v7; // rbp
  int v8; // r12d
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // r12d
  __int64 v12; // r13
  int v13; // r12d
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // r12d
  __int64 v17; // r12
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rax
  unsigned __int64 v21; // rsi
  __int64 v22; // r8
  __int64 v23; // r9
  __int16 v24; // dx
  _DWORD *v25; // rdi
  char v26; // cl
  __int64 v27; // rsi
  char v28; // dl
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 result; // rax
  int v34; // [rsp+8h] [rbp-E0h]
  char v35; // [rsp+Fh] [rbp-D9h]
  __int64 v36; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v37; // [rsp+18h] [rbp-D0h]
  char v38; // [rsp+20h] [rbp-C8h]
  __int64 v39; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v40[2]; // [rsp+38h] [rbp-B0h] BYREF
  _QWORD v41[20]; // [rsp+48h] [rbp-A0h] BYREF

  v2 = a1 + 16;
  v5 = *(unsigned int *)(a1 + 24);
  v6 = *(_DWORD *)(a1 + 1096) & 0x7FFFFFFF;
  if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 28) )
  {
    sub_2237220(a1 + 16, a1 + 32, v5 + 1, 4);
    v5 = *(unsigned int *)(a1 + 24);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4 * v5) = v6;
  v7 = *(unsigned int *)(a1 + 24);
  v8 = *(_DWORD *)(a1 + 1096);
  v9 = *(unsigned int *)(a1 + 28);
  v10 = (unsigned int)(v7 + 1);
  *(_DWORD *)(a1 + 24) = v10;
  v11 = v8 & 0x7FFFFFFF;
  if ( v10 + 1 > v9 )
  {
    sub_2237220(v2, a1 + 32, v10 + 1, 4);
    v10 = *(unsigned int *)(a1 + 24);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4 * v10) = v11;
  v12 = *(unsigned int *)(a1 + 24);
  v13 = *(_DWORD *)(a1 + 1096);
  v14 = *(unsigned int *)(a1 + 28);
  v15 = (unsigned int)(v12 + 1);
  *(_DWORD *)(a1 + 24) = v15;
  v16 = v13 & 0x7FFFFFFF;
  if ( v15 + 1 > v14 )
  {
    sub_2237220(v2, a1 + 32, v15 + 1, 4);
    v15 = *(unsigned int *)(a1 + 24);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4 * v15) = v16;
  v17 = *(unsigned int *)(a1 + 24);
  v40[0] = v41;
  v18 = *(_QWORD *)(a1 + 1104);
  v36 = a1;
  *(_DWORD *)(a1 + 24) = v17 + 1;
  v19 = *(_DWORD *)(a1 + 1096);
  v41[12] = v18;
  v34 = v19;
  v20 = *(_QWORD *)(a1 + 1120);
  *(_QWORD *)(a1 + 1104) = v40;
  v37 = v20;
  *(_QWORD *)(a1 + 1120) = &v36;
  *(_DWORD *)(a1 + 1096) = v7;
  LOWORD(v18) = *a2;
  v38 = 1;
  v39 = a1;
  v40[1] = 0x400000000LL;
  if ( (v18 & 0x1FF) == 0x80 )
    v21 = *((_QWORD *)a2 + 3);
  else
    v21 = *((_QWORD *)a2 + 4);
  sub_16C1900(a1, v21);
  sub_16BB4C0(&v39);
  v24 = *a2;
  LOBYTE(v39) = 0;
  if ( (v24 & 0x1FF) == 0x80 )
    v25 = *((_DWORD **)a2 + 3);
  else
    v25 = *((_DWORD **)a2 + 4);
  if ( !v38 || (*v25 & 0x20000) != 0 )
    goto LABEL_18;
  v26 = 1;
  v27 = *(_QWORD *)(v36 + 8);
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(v27 + 4616) + 640LL * *(unsigned int *)(v27 + 4624) - 640) - 4) > 1 )
    v26 = *(_BYTE *)(v27 + 2440);
  v38 = sub_C3D850((__int64)v25, &v39, *(_QWORD *)(v27 + 248), v26, v22, v23);
  if ( v38 )
  {
    if ( !(_BYTE)v39 )
    {
LABEL_22:
      *(_DWORD *)(a1 + 1096) = v17;
      if ( (*a2 & 0x1FF) == 0x80 )
        v30 = *((_QWORD *)a2 + 5);
      else
        v30 = *((_QWORD *)a2 + 6);
      sub_16C1900(a1, v30);
      goto LABEL_25;
    }
    v28 = 0;
  }
  else
  {
LABEL_18:
    v28 = 1;
  }
  *(_DWORD *)(a1 + 1096) = v12;
  if ( (*a2 & 0x1FF) == 0x80 )
    v29 = *((_QWORD *)a2 + 4);
  else
    v29 = *((_QWORD *)a2 + 5);
  v35 = v28;
  sub_16C1900(a1, v29);
  if ( v35 )
    goto LABEL_22;
LABEL_25:
  v31 = v36;
  *(_DWORD *)(a1 + 1096) = v34;
  v32 = *(_QWORD *)(a1 + 16);
  *(_BYTE *)(v32 + 4 * v7 + 3) |= 0x80u;
  *(_BYTE *)(v32 + 4 * v12 + 3) |= 0x80u;
  *(_BYTE *)(v32 + 4 * v17 + 3) |= 0x80u;
  result = v37;
  *(_QWORD *)(v31 + 1120) = v37;
  if ( result )
    *(_BYTE *)(result + 16) &= v38;
  return result;
}
