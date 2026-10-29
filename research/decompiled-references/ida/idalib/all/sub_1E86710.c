__int64 __fastcall sub_1E86710(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 *a3,
        int a4,
        __int64 *a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v7; // r13
  int v8; // eax
  __int64 v10; // r12
  unsigned int v13; // eax
  __int64 v14; // r9
  __int64 v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rsi
  unsigned __int64 v18; // r13
  char v19; // al
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  char v23; // r10
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r14
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r13
  __int64 v34; // rdx
  int v35; // ecx
  int v36; // ecx
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  char v42; // dl
  __int64 v43; // rax
  __int64 v45; // [rsp+8h] [rbp-2090h]
  __int64 v46; // [rsp+10h] [rbp-2088h]
  __int64 v47; // [rsp+10h] [rbp-2088h]
  char v48; // [rsp+10h] [rbp-2088h]
  int v49; // [rsp+18h] [rbp-2080h]
  int v50; // [rsp+1Ch] [rbp-207Ch]
  unsigned __int64 v51; // [rsp+20h] [rbp-2078h] BYREF
  unsigned __int64 v52; // [rsp+28h] [rbp-2070h] BYREF
  __m128i v53; // [rsp+30h] [rbp-2068h] BYREF
  __int64 v54; // [rsp+40h] [rbp-2058h] BYREF
  unsigned int v55; // [rsp+48h] [rbp-2050h]
  char v56; // [rsp+4Ch] [rbp-204Ch]
  char v57; // [rsp+4Dh] [rbp-204Bh]
  char v58; // [rsp+4Eh] [rbp-204Ah]
  __int64 v59; // [rsp+68h] [rbp-2030h]
  __int64 v60; // [rsp+80h] [rbp-2018h] BYREF
  __int64 *v61; // [rsp+88h] [rbp-2010h]
  __int64 v62; // [rsp+90h] [rbp-2008h]
  int v63; // [rsp+98h] [rbp-2000h]
  __int64 v64; // [rsp+A0h] [rbp-1FF8h]
  __int64 v65[1021]; // [rsp+B0h] [rbp-1FE8h] BYREF

  v7 = *a3;
  v51 = *a2;
  v8 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                          + 16LL);
  if ( (unsigned __int8)(v8 - 2) <= 4u )
    return 1;
  if ( (unsigned int)(v8 - 25) <= 1 )
    return 1;
  v10 = (__int64)(a3 + 1);
  v60 = v7;
  v61 = a3 + 1;
  v13 = sub_F6CCB0(&v60, a6);
  if ( (unsigned __int8)sub_1E63330(a1, v13, v7, (__int64 *)((char *)&dword_0 + 1), 0, v14) )
    return 1;
  v15 = *a3;
  v65[1] = v10;
  v65[0] = v15;
  v16 = sub_F6CCB0(v65, a6);
  if ( sub_1845490(a1, v16, v7) )
    return 1;
  v46 = *(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFF0LL);
  if ( sub_19A1E30(v46)
    || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v46 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 <= 1 )
  {
    v51 = sub_A72DD0(*(_QWORD *)(a1 + 248), v51);
  }
  v17 = *(_QWORD *)(a1 + 248);
  v62 = v7;
  LODWORD(v60) = 9;
  v61 = nullptr;
  v63 = 0;
  v64 = 0;
  v18 = sub_F67970(&v51, v17);
  v19 = sub_18C0240(v51, v17);
  v22 = *a5;
  a5[10] += 24;
  v23 = v19;
  v24 = (v22 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a5[1] >= v24 + 24 && v22 )
  {
    *a5 = v24 + 24;
    v25 = (v22 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    v48 = v23;
    v43 = sub_986170((__int64)a5, 24, 24, 3, v20, v21);
    v23 = v48;
    v25 = v43;
  }
  sub_1AF2350(v25, a4, v18, v23, 0, 0);
  v53.m128i_i16[0] = 2;
  v52 = v25;
  v53.m128i_i32[1] = a4;
  v53.m128i_i64[1] = 0;
  sub_18C74E0(a1, 0, 0, 4);
  sub_1E861A0((__int64)&v54, a1, 1);
  v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 2264LL) + 80LL);
  v31 = sub_704780((__int64 *)(v26 + 72), v26, v27, v28, v29, v30);
  v32 = *(_QWORD *)(a1 + 512);
  v33 = *(_QWORD *)(a1 + 544);
  if ( v31 )
    v31 += 5;
  v34 = *(_QWORD *)(a1 + 9944);
  *(_QWORD *)(a1 + 512) = 0;
  v47 = v32;
  v35 = *(_DWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 544) = v31;
  v49 = v35;
  v36 = *(_DWORD *)(a1 + 2632);
  *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 40);
  v37 = *(_DWORD *)(a1 + 3688);
  v59 = v34;
  v50 = v36;
  *(_QWORD *)(a1 + 9944) = 0;
  *(_DWORD *)(a1 + 2632) = v37;
  sub_1A19220((__int64)v65, a1, (__int64)&v60, &v53, (__int64)&v52, 1, a6, a7, 0, 1u);
  if ( !LODWORD(v65[0])
    || (v38 = sub_1A1D600((unsigned int)v65, a1, (unsigned int)&v60, (unsigned int)&v53, (unsigned int)&v52, 1, 0),
        v38 == 1)
    || v55 < *(_DWORD *)(v54 + 11200) )
  {
    v38 = 1;
  }
  v45 = v38;
  sub_1A0BB10((__int64)v65);
  if ( v33 )
  {
    v39 = v59;
    *(_QWORD *)(a1 + 544) = v33;
    *(_QWORD *)(a1 + 512) = v47;
    *(_QWORD *)(a1 + 9944) = v39;
    *(_DWORD *)(a1 + 80) = v49;
    *(_DWORD *)(a1 + 2632) = v50;
  }
  v40 = v54;
  *(_DWORD *)(v54 + 11200) = v55;
  *(_BYTE *)(v40 + 12592) = v56;
  *(_BYTE *)(v40 + 11248) = v57;
  v41 = *(_QWORD *)(v40 + 264);
  v42 = v58;
  if ( *(_DWORD *)(v41 + 204) == 5 )
    *(_BYTE *)(v41 + 194) = 1;
  *(_DWORD *)(v41 + 204) = v42 == 0 ? 3 : 0;
  sub_190D5E0(a1, a6);
  return v45;
}
