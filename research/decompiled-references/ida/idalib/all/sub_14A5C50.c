void __fastcall sub_14A5C50(__int64 a1, __int64 a2, __m128i a3, double a4)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 *v14; // rdi
  char v15; // r14
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdx
  __int16 v20; // dx
  void *v21; // rdi
  __int64 *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // [rsp+8h] [rbp-1B0h]
  __int64 v27; // [rsp+8h] [rbp-1B0h]
  unsigned int v28; // [rsp+1Ch] [rbp-19Ch]
  unsigned __int64 v29; // [rsp+28h] [rbp-190h]
  void *ptr; // [rsp+30h] [rbp-188h] BYREF
  __int64 v31; // [rsp+38h] [rbp-180h]
  _BYTE v32[32]; // [rsp+40h] [rbp-178h] BYREF
  _DWORD v33[6]; // [rsp+60h] [rbp-158h] BYREF
  void *v34; // [rsp+78h] [rbp-140h]
  __int64 v35; // [rsp+88h] [rbp-130h] BYREF
  unsigned __int8 *v36[10]; // [rsp+A0h] [rbp-118h] BYREF
  __int64 v37; // [rsp+F0h] [rbp-C8h] BYREF
  bool v38; // [rsp+F8h] [rbp-C0h]
  __int64 v39; // [rsp+100h] [rbp-B8h]
  bool v40; // [rsp+108h] [rbp-B0h]
  __int64 v41; // [rsp+110h] [rbp-A8h]
  bool v42; // [rsp+118h] [rbp-A0h]
  __int64 v43; // [rsp+120h] [rbp-98h]
  bool v44; // [rsp+128h] [rbp-90h]
  __int64 v45; // [rsp+130h] [rbp-88h]
  bool v46; // [rsp+138h] [rbp-80h]
  __int64 v47; // [rsp+140h] [rbp-78h]
  bool v48; // [rsp+148h] [rbp-70h]
  __int64 v49; // [rsp+150h] [rbp-68h]
  bool v50; // [rsp+158h] [rbp-60h]
  __int64 v51; // [rsp+160h] [rbp-58h]
  bool v52; // [rsp+168h] [rbp-50h]
  __int64 v53; // [rsp+170h] [rbp-48h]
  bool v54; // [rsp+178h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 328);
  v37 = v5;
  if ( v5 )
  {
    v38 = (*(_BYTE *)(v5 + 3) & 0x20) != 0;
    *(_BYTE *)(v5 + 3) |= 0xA0u;
  }
  else
  {
    v38 = 0;
  }
  v6 = *(_QWORD *)(a1 + 280);
  v39 = v6;
  if ( v6 )
  {
    v40 = (*(_BYTE *)(v6 + 3) & 0x20) != 0;
    *(_BYTE *)(v6 + 3) |= 0xA0u;
  }
  else
  {
    v40 = 0;
  }
  v7 = *(_QWORD *)(a1 + 304);
  v41 = v7;
  if ( v7 )
  {
    v42 = (*(_BYTE *)(v7 + 3) & 0x20) != 0;
    *(_BYTE *)(v7 + 3) |= 0xA0u;
  }
  else
  {
    v42 = 0;
  }
  v8 = *(_QWORD *)(a1 + 312);
  v43 = v8;
  if ( v8 )
  {
    v44 = (*(_BYTE *)(v8 + 3) & 0x20) != 0;
    *(_BYTE *)(v8 + 3) |= 0xA0u;
  }
  else
  {
    v44 = 0;
  }
  v9 = *(_QWORD *)(a1 + 264);
  v45 = v9;
  if ( v9 )
  {
    v46 = (*(_BYTE *)(v9 + 3) & 0x20) != 0;
    *(_BYTE *)(v9 + 3) |= 0xA0u;
  }
  else
  {
    v46 = 0;
  }
  v10 = *(_QWORD *)(a1 + 288);
  v47 = v10;
  if ( v10 )
  {
    v48 = (*(_BYTE *)(v10 + 3) & 0x20) != 0;
    *(_BYTE *)(v10 + 3) |= 0xA0u;
  }
  else
  {
    v48 = 0;
  }
  v11 = *(_QWORD *)(a1 + 320);
  v49 = v11;
  if ( v11 )
  {
    v50 = (*(_BYTE *)(v11 + 3) & 0x20) != 0;
    *(_BYTE *)(v11 + 3) |= 0xA0u;
  }
  else
  {
    v50 = 0;
  }
  v12 = *(_QWORD *)(a1 + 272);
  v51 = v12;
  if ( v12 )
  {
    v52 = (*(_BYTE *)(v12 + 3) & 0x20) != 0;
    *(_BYTE *)(v12 + 3) |= 0xA0u;
  }
  else
  {
    v52 = 0;
  }
  v13 = *(_QWORD *)(a1 + 296);
  v53 = v13;
  if ( v13 )
  {
    v54 = (*(_BYTE *)(v13 + 3) & 0x20) != 0;
    *(_BYTE *)(v13 + 3) |= 0xA0u;
  }
  else
  {
    v54 = 0;
  }
  v14 = *(__int64 **)(a1 + 8);
  v15 = 0;
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(v14, (int *)(a1 + 16));
  v28 = *(_DWORD *)(a1 + 40);
  ptr = v32;
  v31 = 0x400000000LL;
  while ( *(_WORD *)(a1 + 32) != 3 )
  {
    v16 = sub_14A33B0(a1, a2);
    if ( v16 == 1 )
    {
      v20 = *(_WORD *)(a1 + 32);
      v15 = 1;
      if ( v20 != 66 )
        goto LABEL_25;
LABEL_35:
      v22 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v22, (int *)(a1 + 16));
    }
    else
    {
      v17 = (unsigned int)v31;
      v18 = v16 & 0xFFFFFFFFFFFFFFFELL;
      v19 = (unsigned int)v31 + 1LL;
      if ( v19 > HIDWORD(v31) )
      {
        v29 = v16 & 0xFFFFFFFFFFFFFFFELL;
        v27 = v16;
        sub_2237220(&ptr, v32, v19, 8);
        v17 = (unsigned int)v31;
        v18 = v29;
        v16 = v27;
      }
      *((_QWORD *)ptr + v17) = v18;
      v20 = *(_WORD *)(a1 + 32);
      LODWORD(v31) = v31 + 1;
      if ( v20 == 66 )
        goto LABEL_35;
LABEL_25:
      if ( v20 == 24 )
        goto LABEL_31;
      if ( v16 == 1 )
        goto LABEL_30;
      if ( v20 != 5 && v20 != 72 )
      {
        sub_1564820(v36, a1, *(unsigned int *)(a1 + 16), 17);
        sub_AE9DF0(v36, 24, 4u);
        sub_AE9DF0(v36, 66, 4u);
        sub_AEA040((__int64)v36);
LABEL_30:
        LOWORD(v36[0]) = 24;
        sub_15680D0(a1, v36, 1, 3);
LABEL_31:
        sub_187CDA0(*(_QWORD *)(a1 + 96), a2, v28, ptr, (unsigned int)v31, v15 & 1);
        v21 = ptr;
        if ( ptr == v32 )
          goto LABEL_33;
LABEL_32:
        free(v21);
        goto LABEL_33;
      }
      v26 = sub_13DC060(
              *(_DWORD *)(a1 + 40),
              0,
              *(__int64 **)(*(_QWORD *)(a1 + 8) + 88LL),
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
              a3,
              a4);
      sub_1564820(v36, a1, v26, 1579);
      sub_9EC740((__int64)v33, v26, ", ", 2, 0);
      if ( v33[0] && v33[1] )
        sub_14A2370((__int64 *)v36, (unsigned __int64)v33);
      if ( v34 != &v35 )
        operator delete(v34);
      sub_AEA040((__int64)v36);
    }
  }
  v23 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v23 + 760) )
  {
    *(_BYTE *)(v23 + 968) = 1;
    *(_BYTE *)(*(_QWORD *)(v23 + 48) + 6LL) = 1;
  }
  v24 = *(_QWORD *)(a1 + 96);
  v25 = (unsigned int)v31;
  *(_WORD *)(a1 + 32) = 1;
  sub_17235E0(*(_QWORD *)(v24 + 656), a2, ptr, v25);
  v21 = ptr;
  if ( ptr != v32 )
    goto LABEL_32;
LABEL_33:
  sub_14A1030((__int64)&v37);
}
