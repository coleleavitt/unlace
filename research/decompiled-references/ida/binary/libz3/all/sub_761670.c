double __fastcall sub_761670(int a1, __int64 *a2)
{
  __int64 v3; // r13
  _QWORD *v4; // rbx
  _OWORD *v5; // rax
  void *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdi
  bool v10; // zf
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdi
  void *v14; // r15
  unsigned int v15; // eax
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rdi
  char v20; // al
  __int64 v21; // r15
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rax
  int v26; // edx
  __int64 *v27; // rax
  void *v28; // rdi
  char *v29; // rcx
  bool v30; // si
  char *v31; // rax
  __int64 v32; // rdx
  __int64 v34; // [rsp+8h] [rbp-110h]
  void *v35; // [rsp+18h] [rbp-100h]
  __int64 v36; // [rsp+18h] [rbp-100h]
  __int64 v37; // [rsp+28h] [rbp-F0h] BYREF
  __int64 (__fastcall **v38)(); // [rsp+30h] [rbp-E8h]
  int v39; // [rsp+38h] [rbp-E0h]
  void *v40; // [rsp+40h] [rbp-D8h]
  _BYTE v41[8]; // [rsp+48h] [rbp-D0h] BYREF
  void *ptr; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+58h] [rbp-C0h]
  __int64 v44; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v45; // [rsp+68h] [rbp-B0h]

  v3 = *a2;
  v38 = &off_1C542D0;
  v37 = 0;
  v39 = 0;
  sub_1858590(v41, &v37);
  v4 = (_QWORD *)sub_186B270(0x2A0u);
  sub_1584DD0(v4, v3, *(_DWORD *)(v3 + 712) != 0);
  v4[18] = v4 + 67;
  *v4 = &off_1C54290;
  *((_DWORD *)v4 + 38) = 0;
  v4[20] = 0;
  sub_1584DD0(v4 + 21, v3, 0);
  v4[39] = 0;
  *((_DWORD *)v4 + 80) = 0;
  v4[21] = &off_1C61DB8;
  sub_1584DD0(v4 + 41, v3, 0);
  v4[61] = v3;
  *((_DWORD *)v4 + 118) = 0;
  v4[63] = v3;
  v4[41] = &off_1C61DE0;
  *v4 = &off_1C542B0;
  v4[60] = 0;
  v4[62] = 0;
  v4[64] = 0;
  v4[65] = v3;
  v4[66] = 0;
  v4[67] = v3;
  sub_16744A0(v4 + 68, v3);
  v5 = (_OWORD *)sub_186B270(0x80u);
  v4[71] = v5;
  v4[72] = 8;
  *((_DWORD *)v4 + 146) = 0;
  v6 = qword_1C7F2C0;
  v4[74] = 0;
  v4[75] = v3;
  v4[76] = 0;
  v4[77] = 0;
  v4[78] = v3;
  v4[79] = 0;
  v4[80] = v3;
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  v5[4] = 0;
  v5[5] = 0;
  v5[6] = 0;
  v5[7] = 0;
  ptr = &dword_0 + 1;
  v43 = 0;
  v44 = 1;
  v45 = 0;
  sub_182CBA0(v6, &v44);
  BYTE4(v44) &= ~1u;
  LODWORD(v44) = 1;
  v7 = sub_1674520(v4 + 68, &ptr, 1);
  if ( v7 )
    ++*(_DWORD *)(v7 + 8);
  v8 = v4[77];
  if ( v8 )
  {
    v9 = v4[78];
    v10 = (*(_DWORD *)(v8 + 8))-- == 1;
    if ( v10 )
    {
      v36 = v7;
      sub_15D7BC0(v9, v8);
      v7 = v36;
    }
  }
  v4[77] = v7;
  v35 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &ptr);
  sub_182CBA0(v35, &v44);
  ptr = nullptr;
  v43 = 0;
  v44 = 1;
  v45 = 0;
  sub_182CBA0(qword_1C7F2C0, &v44);
  BYTE4(v44) &= ~1u;
  LODWORD(v44) = 1;
  v11 = sub_1674520(v4 + 68, &ptr, 1);
  if ( v11 )
    ++*(_DWORD *)(v11 + 8);
  v12 = v4[79];
  if ( v12 )
  {
    v13 = v4[80];
    v10 = (*(_DWORD *)(v12 + 8))-- == 1;
    if ( v10 )
    {
      v34 = v11;
      sub_15D7BC0(v13, v12);
      v11 = v34;
    }
  }
  v14 = qword_1C7F2C0;
  v4[79] = v11;
  sub_182CBA0(v14, &ptr);
  sub_182CBA0(v14, &v44);
  v15 = sub_1859960(&v37, "max_memory", 0xFFFFFFFFLL);
  v16 = (unsigned __int64)v15 << 20;
  v10 = v15 == -1;
  v17 = -1;
  if ( !v10 )
    v17 = v16;
  v4[81] = v17;
  *((_DWORD *)v4 + 164) = sub_1859960(&v37, "max_steps", 0xFFFFFFFFLL);
  *((_BYTE *)v4 + 660) = sub_1859610(&v37, "produce_models", 0);
  v40 = v4;
  sub_18572D0(&v37);
  v18 = a2[9];
  ptr = &v44;
  v19 = v40;
  v43 = 0x1000000000LL;
  if ( !v18 )
    goto LABEL_40;
  v20 = *(_BYTE *)(v18 + 3) >> 6;
  if ( !v20 )
  {
    do
    {
      v18 = *(_QWORD *)(v18 + 16);
      v20 = *(_BYTE *)(v18 + 3) >> 6;
    }
    while ( !v20 );
    if ( v20 != 1 )
      goto LABEL_16;
LABEL_39:
    v21 = (unsigned int)(*(_DWORD *)(v18 + 4) + 1);
    goto LABEL_18;
  }
  if ( v20 == 1 )
    goto LABEL_39;
LABEL_16:
  if ( v20 == 2 )
    v21 = (unsigned int)(*(_DWORD *)(v18 + 4) - 1);
  else
    v21 = *(unsigned int *)(v18 + 4);
LABEL_18:
  LODWORD(v37) = *(_DWORD *)(*((_QWORD *)v40 + 18) + 8LL);
  if ( !(_DWORD)v21 )
    goto LABEL_40;
  v22 = 0;
  while ( 2 )
  {
    v24 = *a2;
    if ( (*((_BYTE *)a2 + 123) & 0x20) != 0 )
    {
      v23 = *(_QWORD *)(v24 + 864);
      goto LABEL_21;
    }
    v25 = a2[9];
    v26 = 17;
    while ( 1 )
    {
      if ( *(char *)(v25 + 3) < 0 )
      {
        if ( *(_BYTE *)(v25 + 3) >> 6 != 2 )
        {
          v27 = (__int64 *)(*(_QWORD *)(v25 + 16) + 8 * v22);
          goto LABEL_27;
        }
        goto LABEL_29;
      }
      if ( *(_DWORD *)(v25 + 4) == (_DWORD)v22 )
        break;
LABEL_29:
      v25 = *(_QWORD *)(v25 + 16);
      if ( !--v26 )
      {
        sub_233F80((__int64 *)(v24 + 616), (_DWORD *)a2 + 18);
        v27 = (__int64 *)(*(_QWORD *)(a2[9] + 16) + 8 * v22);
        goto LABEL_27;
      }
    }
    v27 = (__int64 *)(v25 + 8);
LABEL_27:
    v23 = *v27;
LABEL_21:
    sub_7605E0((int *)&v37, (__int64)&ptr, v23);
    if ( ++v22 != v21 )
      continue;
    break;
  }
  v28 = ptr;
  v29 = (char *)ptr + 8 * (unsigned int)v43;
  v30 = ptr == &v44 || ptr == nullptr;
  if ( ptr != v29 )
  {
    v31 = (char *)ptr;
    do
    {
      v32 = *(_QWORD *)v31;
      v31 += 8;
      *(_BYTE *)(v32 + 6) &= ~1u;
    }
    while ( v29 != v31 );
  }
  LODWORD(v43) = 0;
  if ( !v30 )
    sub_186B220(v28);
  v19 = v40;
LABEL_40:
  v38 = &off_1C542D0;
  sub_760EA0(v19);
  sub_18572D0(v41);
  return 1.0;
}

