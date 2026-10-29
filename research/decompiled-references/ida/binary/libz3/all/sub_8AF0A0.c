__int64 __fastcall sub_8AF0A0(_QWORD *a1, unsigned int a2, char a3, __int64 *a4, __int64 *a5, _BYTE *a6)
{
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 *v10; // rcx
  int v11; // edx
  __int64 v12; // rcx
  __int64 i; // rax
  unsigned int v14; // r15d
  __int64 v15; // r12
  unsigned int *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // r13
  int v19; // edx
  int v20; // edx
  int v21; // edx
  int v22; // edx
  __int64 v23; // r12
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdx
  int *v28; // rax
  int v29; // edx
  __int64 v31; // rdi
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int *v36; // [rsp+0h] [rbp-F8h]
  char v37; // [rsp+8h] [rbp-F0h]
  __int64 v39; // [rsp+10h] [rbp-E8h]
  unsigned int v40; // [rsp+18h] [rbp-E0h]
  __int64 v41; // [rsp+18h] [rbp-E0h]
  unsigned int v42; // [rsp+28h] [rbp-D0h]
  int v43; // [rsp+2Ch] [rbp-CCh]
  __int64 *v44; // [rsp+30h] [rbp-C8h]
  __int64 v45; // [rsp+38h] [rbp-C0h]
  __int64 v48; // [rsp+70h] [rbp-88h]
  _QWORD v49[2]; // [rsp+78h] [rbp-80h] BYREF
  _QWORD v50[2]; // [rsp+88h] [rbp-70h] BYREF
  _QWORD v51[2]; // [rsp+98h] [rbp-60h] BYREF
  _QWORD v52[10]; // [rsp+A8h] [rbp-50h] BYREF

  v8 = *a4;
  v45 = (__int64)(a4 + 1);
  sub_182F200(*a4, a4 + 1);
  sub_182EF00(v8, a4 + 3);
  *((_BYTE *)a4 + 28) &= ~1u;
  *((_DWORD *)a4 + 6) = 1;
  sub_182F200(v8, a4 + 5);
  sub_182EF00(v8, a4 + 7);
  *((_BYTE *)a4 + 60) &= ~1u;
  v39 = (__int64)(a1 + 92);
  v48 = (__int64)(a1 + 92);
  v9 = a1[187];
  v50[0] = 1;
  v10 = (__int64 *)(v9 + 24LL * a2);
  *((_DWORD *)a4 + 14) = 1;
  v51[0] = 0;
  v52[0] = 1;
  v11 = *((_DWORD *)v10 + 4);
  v49[0] = 0;
  v49[1] = 0;
  v50[1] = 0;
  v51[1] = 0;
  v52[1] = 0;
  v44 = v10;
  *((_DWORD *)v10 + 4) = v11 + 1;
  v12 = *v10;
  if ( !v12 )
    goto LABEL_78;
  for ( i = 0; *(_DWORD *)(v12 - 4) != i && *(_DWORD *)(v12 + 8 * i) == -1; ++i )
    ;
  v14 = i;
  *((_DWORD *)v44 + 4) = v11 + 2;
  v43 = *(_DWORD *)(v12 - 4);
  if ( v43 == (_DWORD)i )
  {
LABEL_78:
    v40 = -1;
    v15 = (__int64)(a1 + 92);
    goto LABEL_45;
  }
  v15 = (__int64)(a1 + 92);
  v40 = -1;
  do
  {
    v16 = (unsigned int *)(v12 + 8LL * v14);
    v17 = *v16;
    v42 = *(_DWORD *)(a1[200] + 4 * v17);
    v18 = a1[199] + 232LL * v42;
    v36 = (int *)(*(_QWORD *)(a1[185] + 16 * v17) + 40LL * v16[1]);
    v37 = *v36 > 0 == *(_DWORD *)(v18 + 200) > 0;
    if ( v37 == a3 )
    {
      if ( (*(_BYTE *)(v18 + 3) & 0x40) == 0 )
        goto LABEL_38;
      if ( (*(_BYTE *)(v18 + 12) & 1) == 0 )
      {
LABEL_11:
        v19 = *(_DWORD *)(v18 + 8);
        BYTE4(v49[0]) &= ~1u;
        LODWORD(v49[0]) = v19;
        if ( (*(_BYTE *)(v18 + 28) & 1) == 0 )
          goto LABEL_12;
        goto LABEL_58;
      }
    }
    else
    {
      if ( *(char *)(v18 + 3) >= 0 )
        goto LABEL_38;
      if ( (*(_BYTE *)(v18 + 12) & 1) == 0 )
        goto LABEL_11;
    }
    sub_182EA00(v15, v49, v18 + 8);
    if ( (*(_BYTE *)(v18 + 28) & 1) == 0 )
    {
LABEL_12:
      v20 = *(_DWORD *)(v18 + 24);
      BYTE4(v50[0]) &= ~1u;
      LODWORD(v50[0]) = v20;
      if ( (*(_BYTE *)(v18 + 44) & 1) == 0 )
        goto LABEL_13;
      goto LABEL_59;
    }
LABEL_58:
    sub_182EA00(v15, v50, v18 + 24);
    if ( (*(_BYTE *)(v18 + 44) & 1) == 0 )
    {
LABEL_13:
      v21 = *(_DWORD *)(v18 + 40);
      BYTE4(v51[0]) &= ~1u;
      LODWORD(v51[0]) = v21;
      if ( (*(_BYTE *)(v18 + 60) & 1) != 0 )
        goto LABEL_60;
      goto LABEL_14;
    }
LABEL_59:
    sub_182EA00(v15, v51, v18 + 40);
    if ( (*(_BYTE *)(v18 + 60) & 1) != 0 )
    {
LABEL_60:
      sub_182EA00(v15, v52, v18 + 56);
      goto LABEL_15;
    }
LABEL_14:
    v22 = *(_DWORD *)(v18 + 56);
    BYTE4(v52[0]) &= ~1u;
    LODWORD(v52[0]) = v22;
LABEL_15:
    v23 = v18 + 72;
    if ( v37 != a3 )
      v23 = v18 + 136;
    if ( (v50[0] & 0x100000000LL) != 0
      || LODWORD(v50[0]) != 1
      || (*(_BYTE *)(v23 + 20) & 1) != 0
      || *(_DWORD *)(v23 + 16) != 1 )
    {
      sub_1854300(v48, v49, v23, v49);
      v24 = v48;
    }
    else
    {
      sub_183A580(v48, v49, v23, v49);
      sub_182EF00(v48, v50);
      BYTE4(v50[0]) &= ~1u;
      v24 = v48;
      LODWORD(v50[0]) = 1;
    }
    v25 = v23 + 32;
    if ( (v52[0] & 0x100000000LL) != 0
      || LODWORD(v52[0]) != 1
      || (*(_BYTE *)(v23 + 52) & 1) != 0
      || *(_DWORD *)(v23 + 48) != 1 )
    {
      sub_1854300(v24, v51, v25, v51);
    }
    else
    {
      sub_183A580(v24, v51, v25, v51);
      sub_182EF00(v24, v52);
      BYTE4(v52[0]) &= ~1u;
      LODWORD(v52[0]) = 1;
    }
    v26 = v18 + 200;
    if ( (v50[0] & 0x100000000LL) != 0
      || LODWORD(v50[0]) != 1
      || (*(_BYTE *)(v18 + 220) & 1) != 0
      || *(_DWORD *)(v18 + 216) != 1 )
    {
      sub_184C880(v39, v49, v26, v49);
      v27 = v18 + 200;
    }
    else
    {
      sub_1839230(v39, v49, v26, v49);
      sub_182EF00(v39, v50);
      BYTE4(v50[0]) &= ~1u;
      v27 = v18 + 200;
      LODWORD(v50[0]) = 1;
    }
    if ( (v52[0] & 0x100000000LL) != 0
      || LODWORD(v52[0]) != 1
      || (*(_BYTE *)(v18 + 220) & 1) != 0
      || *(_DWORD *)(v18 + 216) != 1 )
    {
      sub_184C880(v39, v51, v27, v51);
    }
    else
    {
      sub_1839230(v39, v51, v27, v51);
      sub_182EF00(v39, v52);
      BYTE4(v52[0]) &= ~1u;
      LODWORD(v52[0]) = 1;
    }
    sub_8AE7F0(v39, (int *)v49, (__int64)v36, (__int64)v49);
    sub_8AE7F0(v39, (int *)v51, (__int64)v36, (__int64)v51);
    if ( SLODWORD(v49[0]) < 0 || !LODWORD(v49[0]) && SLODWORD(v51[0]) < 0 )
    {
      sub_1839100(v48, v49);
      sub_1839100(v48, v51);
    }
    if ( v40 == -1
      || sub_8AEDF0(v48, (__int64)v49, v45)
      || !*((_DWORD *)a4 + 2) && !(*((_DWORD *)a4 + 10) | LODWORD(v51[0]) | LODWORD(v49[0])) && v42 < v40 )
    {
      v31 = *a4;
      if ( (v49[0] & 0x100000000LL) != 0 )
      {
        v41 = *a4;
        sub_182EA00(v31, v45, v49);
        v31 = v41;
      }
      else
      {
        v32 = v49[0];
        *((_BYTE *)a4 + 12) &= ~1u;
        *((_DWORD *)a4 + 2) = v32;
      }
      if ( (v50[0] & 0x100000000LL) != 0 )
      {
        sub_182EA00(v31, a4 + 3, v50);
      }
      else
      {
        v33 = v50[0];
        *((_BYTE *)a4 + 28) &= ~1u;
        *((_DWORD *)a4 + 6) = v33;
      }
      if ( (v51[0] & 0x100000000LL) != 0 )
      {
        sub_182EA00(v31, a4 + 5, v51);
      }
      else
      {
        v34 = v51[0];
        *((_BYTE *)a4 + 44) &= ~1u;
        *((_DWORD *)a4 + 10) = v34;
      }
      if ( (v52[0] & 0x100000000LL) != 0 )
      {
        sub_182EA00(v31, a4 + 7, v52);
      }
      else
      {
        v35 = v52[0];
        *((_BYTE *)a4 + 60) &= ~1u;
        *((_DWORD *)a4 + 14) = v35;
      }
      sub_8ADE80(*a5, (__int64)(a5 + 1), v36);
      v15 = v48;
      *a6 = a3 ^ v37;
      v12 = *v44;
      v40 = v42;
    }
    else
    {
      v15 = v48;
      v12 = *v44;
    }
LABEL_38:
    ++v14;
    if ( v12 )
    {
      v28 = (int *)(v12 + 8LL * v14);
      while ( v14 < *(_DWORD *)(v12 - 4) )
      {
        v29 = *v28;
        v28 += 2;
        if ( v29 != -1 )
          break;
        ++v14;
      }
    }
  }
  while ( v14 != v43 );
  v11 = *((_DWORD *)v44 + 4) - 2;
LABEL_45:
  *((_DWORD *)v44 + 4) = v11;
  sub_8AD4E0(v15, (__int64)v49);
  return v40;
}

