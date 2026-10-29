unsigned __int64 __fastcall sub_184C6E0(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3,
        _DWORD *a4,
        __int64 a5,
        unsigned int a6,
        __m128 a7)
{
  unsigned int *v7; // r14
  __int64 v10; // rax
  unsigned int v11; // edx
  __int64 v12; // rax
  int v13; // r13d
  __int64 v14; // r9
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 *v18; // rsi
  unsigned __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // r12
  unsigned int v22; // ebp
  __int64 v24; // rsi
  _BOOL8 v25; // rcx
  __int64 v26; // r14
  __int64 v27; // rax
  _DWORD *v28; // r9
  char v29; // r12
  char v30; // al
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r12
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  __int64 v38; // rax
  unsigned int v39; // [rsp+10h] [rbp-2088h]
  unsigned __int64 v40; // [rsp+10h] [rbp-2088h]
  __int64 v41; // [rsp+10h] [rbp-2088h]
  int v42; // [rsp+1Ch] [rbp-207Ch]
  _DWORD **v44; // [rsp+20h] [rbp-2078h]
  __int64 v45; // [rsp+30h] [rbp-2068h]
  _DWORD *v46; // [rsp+40h] [rbp-2058h] BYREF
  __int64 v47[2]; // [rsp+48h] [rbp-2050h] BYREF
  __int64 v48; // [rsp+58h] [rbp-2040h] BYREF
  __int64 v49; // [rsp+60h] [rbp-2038h] BYREF
  unsigned __int64 v50; // [rsp+68h] [rbp-2030h] BYREF
  __int64 v51; // [rsp+70h] [rbp-2028h] BYREF
  __int64 v52; // [rsp+78h] [rbp-2020h]
  unsigned __int64 v53; // [rsp+80h] [rbp-2018h] BYREF
  unsigned int *v54; // [rsp+88h] [rbp-2010h]
  __int64 v55[1021]; // [rsp+B0h] [rbp-1FE8h] BYREF

  v7 = (unsigned int *)(a3 + 1);
  v10 = *a3;
  v47[0] = a2;
  v46 = a4;
  v42 = a6;
  v55[0] = v10;
  v55[1] = (__int64)(a3 + 1);
  v11 = sub_F6CCB0(v55, a7);
  v39 = v11;
  v12 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v12 + 17) & 4) == 0
    && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 48 )
  {
    sub_168B9F0((__int64)v55, a1 + 1, v11, 0xCF5u, 0);
    v20 = sub_1605D30((__int64)v55, v47);
    v54 = v7;
    v19 = 1;
    v21 = v20;
    v53 = *a3;
    v22 = sub_F6CE20((__int64 *)&v53);
    v51 = __PAIR64__(v22, sub_F6CCB0((__int64 *)&v53, a7));
    sub_1587DB0(v21, &v51);
    sub_15F7200(v55);
    return v19;
  }
  LOBYTE(v13) = sub_B8E180(a1[68]);
  if ( (_BYTE)v13 && (*(_BYTE *)(*(_QWORD *)(v47[0] & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
    v13 = HIWORD(*v46) & 1;
  v45 = sub_EEC8C0((unsigned __int64)v46, a2, *(double *)a7.m128_u64);
  if ( a6 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v47[0] & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 1) == 0 )
    {
      sub_168B9F0((__int64)v55, a1 + 1, a6, 0x12ACu, 0);
      v53 = __PAIR64__(HIDWORD(v45), v39);
      sub_1587DB0((__int64)v55, (__int64 *)&v53);
      sub_15F7200(v55);
      v42 = 0;
    }
  }
  else if ( (unsigned __int8)sub_1E535C0(a1, v39, a3, 11) || (unsigned __int8)sub_1E534E0(a1, v46, 11) )
  {
    return 1;
  }
  v48 = 0;
  v49 = 0;
  if ( (_BYTE)v13 )
    goto LABEL_19;
  if ( *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(a5 + 48) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)&byte_8[v47[0] & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
    return sub_1849520(a1, a3, (unsigned __int64)v46, a5, a7);
  sub_1845DB0((__int64)a1, a5, v47[0], (__int64)&v48, &v49, v14);
  v15 = v48;
  if ( !v48 )
  {
    v15 = v49;
    v16 = v49;
    if ( v49 )
    {
LABEL_23:
      v24 = a1[31];
      v25 = v16 != 0;
      if ( (*(_WORD *)v46 & 0x1FF) == 0x13 )
      {
        v26 = (unsigned int)v46[1];
        v44 = (_DWORD **)(v46 + 6);
        sub_1A0B560(&v53, v24, v15, v25, 0);
        LOWORD(v51) = 0;
        HIDWORD(v51) = v39;
        v52 = v45;
      }
      else
      {
        v26 = 1;
        sub_1A0B560(&v53, v24, v15, v25, 0);
        LOWORD(v51) = 1;
        HIDWORD(v51) = v39;
        LODWORD(v52) = v39;
        HIDWORD(v52) = v39;
        v44 = &v46;
      }
      sub_1A19220((unsigned int)v55, (_DWORD)a1, (unsigned int)&v53, (unsigned int)&v51, (_DWORD)v44, v26, 0, 1);
      v27 = sub_1A1D600((unsigned int)v55, (_DWORD)a1, (unsigned int)&v53, (unsigned int)&v51, (_DWORD)v44, v26, 0);
      if ( v27 == 1 || (v41 = sub_19B4A30(a1, v27 & 0xFFFFFFFFFFFFFFFELL, (unsigned int)v45, 0, 0, 0), v41 == 1) )
      {
        v19 = 1;
        v28 = (_DWORD *)sub_18C4330(a1, (unsigned int)v45, HIDWORD(v45), v44, v26, v47[0]);
        if ( v28 == (int *)((char *)&dword_0 + 1) )
        {
LABEL_28:
          sub_1A0BB10(v55);
          return v19;
        }
      }
      else
      {
        v30 = sub_B8E180(a1[68]);
        v28 = (_DWORD *)v41;
        if ( v30 )
          v28 = v46;
      }
      v40 = (unsigned __int64)v28;
      v29 = *(_BYTE *)(v15 + 12);
      v19 = sub_18406C0((__int64 *)(a1[31] + 2352LL), 32, 3u);
      sub_B98A00(v19, a1[31], (__int64)a3, v29 & 1, v45, v40 & 0xFFFFFFFFFFFFFFFELL, SHIDWORD(v45), v42);
      goto LABEL_28;
    }
    if ( !(unsigned __int8)sub_B96D40(a5) )
    {
      sub_168B9F0((__int64)v55, a1 + 1, v39, 0x10E6u, 0);
      v35 = sub_1605D30((__int64)v55, v47);
      v36 = *(_QWORD *)(a5 + 48);
      if ( v36 )
        v37 = v36 & 0xFFFFFFFFFFFFFFF0LL;
      else
        v37 = sub_A7AA70(a1[31], a5, v31, v32, v33, v34);
      v50 = v37;
      v38 = sub_162B6D0(v35, (__int64 *)&v50);
      v54 = v7;
      v17 = v38;
      v53 = *a3;
      v18 = &v51;
      v51 = sub_183A8D0((__int64 *)&v53, a7);
      goto LABEL_14;
    }
LABEL_19:
    sub_18C3E40(a1);
    v19 = sub_18406C0((__int64 *)(a1[31] + 2352LL), 32, 3u);
    sub_B98A00(v19, a1[31], (__int64)a3, 0, v45, (__int64)v46, SHIDWORD(v45), v42);
    return v19;
  }
  v16 = v49;
  if ( !v49 )
    goto LABEL_23;
  sub_168B9F0((__int64)v55, a1 + 1, v39, 0xCF4u, 0);
  v17 = sub_1605D30((__int64)v55, v47);
  v18 = (__int64 *)&v53;
  v53 = sub_F6C500(*a3, v7, *(double *)a7.m128_u64);
LABEL_14:
  v19 = 1;
  sub_1587DB0(v17, v18);
  sub_15F7200(v55);
  return v19;
}
