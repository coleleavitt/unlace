__int64 __fastcall sub_C4E470(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        __int64 a7,
        __int64 a8)
{
  char *v12; // rdx
  __int64 v13; // rax
  int v14; // edi
  unsigned int v15; // esi
  __int64 v16; // r9
  char *v17; // rsi
  __int64 v18; // r9
  char *v19; // r8
  char *v20; // r14
  __int64 v21; // rax
  void *v22; // rbp
  void *v23; // rbp
  void *v24; // rdi
  unsigned int v25; // ebp
  __int64 v26; // rax
  void *v27; // r13
  void *v28; // r13
  void *v29; // rdi
  int v30; // eax
  int v31; // eax
  void *v32; // rdi
  int v33; // eax
  int v34; // eax
  void *v35; // rbp
  int v36; // eax
  int v37; // eax
  void *v38; // rbp
  int v39; // eax
  int v40; // eax
  void *v41; // r12
  void *v42; // rbx
  _QWORD v44[2]; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v45[2]; // [rsp+28h] [rbp-C0h] BYREF
  _QWORD v46[2]; // [rsp+38h] [rbp-B0h] BYREF
  _QWORD v47[5]; // [rsp+48h] [rbp-A0h] BYREF
  _QWORD v48[2]; // [rsp+70h] [rbp-78h] BYREF
  _QWORD v49[2]; // [rsp+80h] [rbp-68h] BYREF
  _QWORD v50[2]; // [rsp+90h] [rbp-58h] BYREF
  _QWORD v51[9]; // [rsp+A0h] [rbp-48h] BYREF

  v47[3] = a2;
  v44[0] = 0;
  v44[1] = 0;
  v45[0] = 1;
  v45[1] = 0;
  v46[0] = 0;
  v46[1] = 0;
  v47[0] = 1;
  v47[1] = 0;
  v47[4] = 0;
  v48[0] = 0;
  v48[1] = 0;
  v49[0] = 1;
  v49[1] = 0;
  v50[0] = 0;
  v50[1] = 0;
  v51[0] = 1;
  v51[1] = 0;
  v12 = *(char **)(a1 + 136);
  v13 = *(unsigned int *)(a1 + 144);
  v14 = *(_DWORD *)(a2 + 12);
  v15 = v13 - 1;
  v13 *= 80;
  v16 = 5LL * (v14 & v15);
  v17 = &v12[v13];
  v18 = 16 * v16;
  v19 = &v12[v18];
  if ( v18 == v13 )
  {
LABEL_9:
    while ( v19 != v12 )
    {
      v26 = *(_QWORD *)v12;
      if ( *(_QWORD *)v12 > 1u )
      {
        if ( *(_DWORD *)(v26 + 12) == v14 && a2 == v26 )
        {
          v20 = v12;
          goto LABEL_18;
        }
      }
      else if ( !v26 )
      {
        break;
      }
      v12 += 80;
    }
LABEL_8:
    v22 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v50);
    sub_182CBA0(v22, v51);
    v23 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v48);
    v24 = v23;
    v25 = 0;
    sub_182CBA0(v24, v49);
    goto LABEL_32;
  }
  v20 = &v12[v18];
  while ( 1 )
  {
    v21 = *(_QWORD *)v20;
    if ( *(_QWORD *)v20 > 1u )
      break;
    if ( !v21 )
      goto LABEL_8;
LABEL_5:
    v20 += 80;
    if ( v17 == v20 )
      goto LABEL_9;
  }
  if ( *(_DWORD *)(v21 + 12) != v14 || a2 != v21 )
    goto LABEL_5;
LABEL_18:
  v27 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v50);
  sub_182CBA0(v27, v51);
  v28 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v48);
  sub_182CBA0(v28, v49);
  v29 = qword_1C7F2C0;
  if ( (v20[20] & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, v44, v20 + 16);
    if ( (v20[36] & 1) != 0 )
      goto LABEL_34;
LABEL_20:
    v31 = *((_DWORD *)v20 + 8);
    BYTE4(v45[0]) &= ~1u;
    v32 = qword_1C7F2C0;
    LODWORD(v45[0]) = v31;
    if ( (v20[52] & 1) == 0 )
      goto LABEL_21;
LABEL_35:
    sub_182C690(v32, v46, v20 + 48);
    if ( (v20[68] & 1) != 0 )
      goto LABEL_36;
LABEL_22:
    v34 = *((_DWORD *)v20 + 16);
    BYTE4(v47[0]) &= ~1u;
    LODWORD(v47[0]) = v34;
  }
  else
  {
    v30 = *((_DWORD *)v20 + 4);
    BYTE4(v44[0]) &= ~1u;
    LODWORD(v44[0]) = v30;
    if ( (v20[36] & 1) == 0 )
      goto LABEL_20;
LABEL_34:
    sub_182C690(v29, v45, v20 + 32);
    v32 = qword_1C7F2C0;
    if ( (v20[52] & 1) != 0 )
      goto LABEL_35;
LABEL_21:
    v33 = *((_DWORD *)v20 + 12);
    BYTE4(v46[0]) &= ~1u;
    LODWORD(v46[0]) = v33;
    if ( (v20[68] & 1) == 0 )
      goto LABEL_22;
LABEL_36:
    sub_182C690(v32, v47, v20 + 64);
  }
  *a5 = *a4;
  v35 = qword_1C7F2C0;
  *a6 = a4[1];
  if ( (v44[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v35, a7, v44);
  }
  else
  {
    v36 = v44[0];
    *(_BYTE *)(a7 + 4) &= ~1u;
    *(_DWORD *)a7 = v36;
  }
  if ( (v45[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v35, a7 + 16, v45);
  }
  else
  {
    v37 = v45[0];
    *(_BYTE *)(a7 + 20) &= ~1u;
    *(_DWORD *)(a7 + 16) = v37;
  }
  v38 = qword_1C7F2C0;
  if ( (v46[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(qword_1C7F2C0, a8, v46);
  }
  else
  {
    v39 = v46[0];
    *(_BYTE *)(a8 + 4) &= ~1u;
    *(_DWORD *)a8 = v39;
  }
  if ( (v47[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v38, a8 + 16, v47);
  }
  else
  {
    v40 = v47[0];
    *(_BYTE *)(a8 + 20) &= ~1u;
    *(_DWORD *)(a8 + 16) = v40;
  }
  v25 = 1;
LABEL_32:
  v41 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v46);
  sub_182CBA0(v41, v47);
  v42 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v44);
  sub_182CBA0(v42, v45);
  return v25;
}

