__int64 __fastcall sub_8AF8E0(
        _QWORD *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4,
        __int64 *a5,
        _BYTE *a6,
        char *a7)
{
  __int64 v7; // rcx
  int v8; // r13d
  int *v9; // rax
  unsigned int i; // r14d
  int v11; // edx
  __int64 v12; // rbp
  _DWORD *v13; // rax
  unsigned int v14; // r15d
  __int64 v15; // rcx
  char v16; // al
  char v17; // dl
  char v18; // r12
  __int64 v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // r12
  __int64 v22; // rax
  int v23; // edx
  bool v25; // al
  int v26; // eax
  bool v27; // al
  int v28; // eax
  bool v29; // al
  bool v30; // al
  int v31; // eax
  unsigned int v32; // [rsp+0h] [rbp-178h]
  __int64 v33; // [rsp+0h] [rbp-178h]
  __int64 v34; // [rsp+0h] [rbp-178h]
  __int64 v35; // [rsp+0h] [rbp-178h]
  __int64 v36; // [rsp+10h] [rbp-168h]
  __int64 *v37; // [rsp+30h] [rbp-148h]
  _QWORD *v42; // [rsp+58h] [rbp-120h]
  char v43; // [rsp+6Fh] [rbp-109h] BYREF
  _QWORD *v44; // [rsp+70h] [rbp-108h] BYREF
  _QWORD v45[2]; // [rsp+78h] [rbp-100h] BYREF
  _QWORD v46[3]; // [rsp+88h] [rbp-F0h] BYREF
  _QWORD *v47; // [rsp+A0h] [rbp-D8h]
  _QWORD v48[2]; // [rsp+A8h] [rbp-D0h] BYREF
  _QWORD v49[2]; // [rsp+B8h] [rbp-C0h] BYREF
  _QWORD v50[2]; // [rsp+C8h] [rbp-B0h] BYREF
  _QWORD v51[3]; // [rsp+D8h] [rbp-A0h] BYREF
  _QWORD *v52; // [rsp+F0h] [rbp-88h] BYREF
  _QWORD v53[2]; // [rsp+F8h] [rbp-80h] BYREF
  _QWORD v54[2]; // [rsp+108h] [rbp-70h] BYREF
  _QWORD v55[2]; // [rsp+118h] [rbp-60h] BYREF
  _QWORD v56[10]; // [rsp+128h] [rbp-50h] BYREF

  v36 = 232LL * a2;
  v7 = *(_QWORD *)(a1[185] + 16LL * (*(_DWORD *)(a1[199] + v36) & 0x1FFFFFFF));
  v37 = (__int64 *)(a1[185] + 16LL * (*(_DWORD *)(a1[199] + v36) & 0x1FFFFFFF));
  if ( v7 )
  {
    v8 = *(_DWORD *)(v7 - 4);
    v9 = (int *)(v7 + 32);
    for ( i = 0; v8 != i; ++i )
    {
      v11 = *v9;
      v9 += 10;
      if ( v11 != -1 )
        break;
    }
  }
  else
  {
    i = 0;
    v8 = 0;
  }
  v12 = (__int64)(a1 + 1);
  v48[0] = 0;
  v42 = a1 + 92;
  v47 = a1 + 92;
  v52 = a1 + 92;
  v48[1] = 0;
  *a3 = -1;
  v49[0] = 1;
  *a4 = -1;
  v49[1] = 0;
  v50[0] = 0;
  v50[1] = 0;
  v51[0] = 1;
  v51[1] = 0;
  v53[0] = 0;
  v53[1] = 0;
  v54[0] = 1;
  v54[1] = 0;
  v55[0] = 0;
  v55[1] = 0;
  v56[0] = 1;
  v56[1] = 0;
  v44 = a1 + 1;
  v45[0] = 0;
  v45[1] = 0;
  v46[0] = 1;
  v46[1] = 0;
  *a6 = 0;
  v43 = 0;
  if ( v8 != i )
  {
    while ( 1 )
    {
      v13 = (_DWORD *)(v7 + 40LL * i);
      v14 = v13[8];
      if ( a2 != v14 )
        break;
LABEL_25:
      ++i;
      if ( v7 )
      {
        v22 = v7 + 40LL * i;
        while ( i < *(_DWORD *)(v7 - 4) )
        {
          v23 = *(_DWORD *)(v22 + 32);
          v22 += 40;
          if ( v23 != -1 )
            break;
          ++i;
        }
      }
      if ( v8 == i )
      {
        v12 = (__int64)v44;
        goto LABEL_32;
      }
    }
    v15 = a1[199];
    v16 = *v13 > 0;
    v17 = *(_DWORD *)(v15 + v36 + 200) > 0;
    v18 = v17 == v16;
    if ( v17 == v16 )
    {
      v30 = sub_898D40((__int64)a1, v14);
    }
    else
    {
      v19 = 232LL * v14 + v15;
      if ( (*(_BYTE *)(v19 + 3) & 0x40) == 0 )
        goto LABEL_10;
      if ( (*(_BYTE *)(v19 + 12) & 1) != 0 || (*(_BYTE *)(v19 + 76) & 1) != 0 )
      {
        v35 = v19;
        v31 = sub_182EB00(v42, v19 + 8, v19 + 72);
        v19 = v35;
        v25 = v31 == 0;
      }
      else
      {
        v25 = *(_DWORD *)(v19 + 8) == *(_DWORD *)(v19 + 72);
      }
      if ( !v25 )
        goto LABEL_10;
      if ( (*(_BYTE *)(v19 + 28) & 1) != 0 || (*(_BYTE *)(v19 + 92) & 1) != 0 )
      {
        v33 = v19;
        v26 = sub_182EB00(v42, v19 + 24, v19 + 88);
        v19 = v33;
        v27 = v26 == 0;
      }
      else
      {
        v27 = *(_DWORD *)(v19 + 24) == *(_DWORD *)(v19 + 88);
      }
      if ( !v27 )
        goto LABEL_10;
      if ( (*(_BYTE *)(v19 + 44) & 1) != 0 || (*(_BYTE *)(v19 + 108) & 1) != 0 )
      {
        v34 = v19;
        v28 = sub_182EB00(v42, v19 + 40, v19 + 104);
        v19 = v34;
        v29 = v28 == 0;
      }
      else
      {
        v29 = *(_DWORD *)(v19 + 40) == *(_DWORD *)(v19 + 104);
      }
      if ( !v29 )
        goto LABEL_10;
      if ( (*(_BYTE *)(v19 + 60) & 1) != 0 || (*(_BYTE *)(v19 + 124) & 1) != 0 )
        v30 = (unsigned int)sub_182EB00(v42, v19 + 56, v19 + 120) == 0;
      else
        v30 = *(_DWORD *)(v19 + 56) == *(_DWORD *)(v19 + 120);
    }
    if ( v30 )
    {
LABEL_24:
      v7 = *v37;
      goto LABEL_25;
    }
LABEL_10:
    v20 = sub_8AF0A0(a1, v14, v18, (__int64 *)&v52, (__int64 *)&v44, &v43);
    if ( v20 == -1 )
    {
      *a3 = -1;
      *a4 = v14;
      *a6 = v43;
      *a7 = v18;
      sub_8ADE80(*a5, (__int64)(a5 + 1), (int *)v45);
      v12 = (__int64)v44;
      goto LABEL_32;
    }
    v32 = v20;
    if ( sub_8AEDF0((__int64)v52, (__int64)v48, (__int64)v53)
      || !(LODWORD(v50[0]) | LODWORD(v48[0]) | LODWORD(v55[0]) | LODWORD(v53[0])) && (*a3 == -1 || v32 < *a3) )
    {
      *a3 = v32;
      *a4 = v14;
      *a6 = v43;
      *a7 = v18;
      v21 = (__int64)v47;
      if ( (v53[0] & 0x100000000LL) != 0 )
      {
        sub_182EA00(v47, v48, v53);
      }
      else
      {
        BYTE4(v48[0]) &= ~1u;
        LODWORD(v48[0]) = v53[0];
      }
      if ( (v54[0] & 0x100000000LL) != 0 )
      {
        sub_182EA00(v21, v49, v54);
      }
      else
      {
        BYTE4(v49[0]) &= ~1u;
        LODWORD(v49[0]) = v54[0];
      }
      if ( (v55[0] & 0x100000000LL) != 0 )
      {
        sub_182EA00(v21, v50, v55);
      }
      else
      {
        BYTE4(v50[0]) &= ~1u;
        LODWORD(v50[0]) = v55[0];
      }
      if ( (v56[0] & 0x100000000LL) != 0 )
      {
        sub_182EA00(v21, v51, v56);
      }
      else
      {
        BYTE4(v51[0]) &= ~1u;
        LODWORD(v51[0]) = v56[0];
      }
      sub_8ADE80(*a5, (__int64)(a5 + 1), (int *)v45);
    }
    goto LABEL_24;
  }
LABEL_32:
  sub_182EF00(v12, v45);
  sub_182EF00(v12, v46);
  sub_8AD4E0((__int64)v52, (__int64)v53);
  return sub_8AD4E0((__int64)v47, (__int64)v48);
}

