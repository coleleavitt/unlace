__int64 __fastcall sub_1840AF0(
        unsigned __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned __int64 *a6,
        double a7,
        double a8)
{
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r12
  __int64 result; // rax
  _QWORD *v21; // r13
  unsigned __int64 v22; // rax
  _QWORD *v23; // r13
  char v24; // bp
  unsigned __int64 v25; // r14
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  unsigned __int64 v32; // rsi
  int v33; // eax
  unsigned __int64 v34; // rax
  __int64 v36; // [rsp+20h] [rbp-2078h]
  __int64 v37; // [rsp+20h] [rbp-2078h]
  __int64 v38; // [rsp+20h] [rbp-2078h]
  __int64 v39; // [rsp+20h] [rbp-2078h]
  unsigned __int64 v40; // [rsp+20h] [rbp-2078h]
  __int64 v41; // [rsp+28h] [rbp-2070h]
  __int64 v42; // [rsp+28h] [rbp-2070h]
  unsigned __int64 v43; // [rsp+38h] [rbp-2060h] BYREF
  _WORD v44[2]; // [rsp+40h] [rbp-2058h] BYREF
  int v45; // [rsp+44h] [rbp-2054h]
  __int64 v46; // [rsp+48h] [rbp-2050h]
  _BYTE v47[48]; // [rsp+50h] [rbp-2048h] BYREF
  void *ptr; // [rsp+80h] [rbp-2018h] BYREF
  __int64 v49; // [rsp+88h] [rbp-2010h]
  _QWORD v50[4]; // [rsp+90h] [rbp-2008h] BYREF
  _QWORD v51[1021]; // [rsp+B0h] [rbp-1FE8h] BYREF

  v11 = *(_QWORD *)(a1 + 248);
  sub_1A0B560(v47, v11, a4, a5, 0);
  if ( a3 > 2 )
  {
    v15 = 0;
    if ( a3 == 3 )
      goto LABEL_3;
  }
  else
  {
    if ( !a3 )
    {
LABEL_3:
      v14 = *(_DWORD *)(a2 + 24);
      LOWORD(ptr) = 3;
      HIDWORD(ptr) = v14;
      LODWORD(v49) = v14;
      HIDWORD(v49) = v14;
      sub_1A19220((unsigned int)v51, a1, (unsigned int)v47, (unsigned int)&ptr, 0, 0, 0, 1);
      v36 = sub_1A1D600((unsigned int)v51, a1, (unsigned int)v47, (unsigned int)&ptr, 0, 0, 0);
      sub_1A0BB10(v51);
      v15 = v36;
      goto LABEL_4;
    }
    v37 = **(_QWORD **)(a2 + 120);
    v51[0] = *(_QWORD *)(v37 + 48);
    v41 = sub_C1BEF0((__int64)v51, v11, v12, v13);
    v43 = sub_C09130(*(_QWORD **)(a1 + 248), 0, 0, 0, v37, 0, *(_DWORD *)(a2 + 24), v41, 1, 0, 0, 0);
    sub_1911920(a1, v43, 0);
    v27 = 0;
    v38 = *(_QWORD *)(a1 + 248);
    v28 = *(_QWORD *)&byte_8[v41 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v28 & 8) != 0 )
      v27 = *(__int64 *)((char *)&qword_18 + (v28 & 0xFFFFFFFFFFFFFFF0LL));
    v42 = v27 | ((unsigned __int8)v41 | (unsigned __int8)v28) & 7;
    v51[0] = sub_1839D10(*(__int64 **)(a4 + 16), v43, v42, v27, v26);
    v29 = sub_6D5440(v51);
    v30 = sub_A70F20(v38, v29, v42);
    v31 = v30;
    if ( a3 == 2 )
    {
      v40 = v30;
      v34 = sub_1837920(a1, v43, a7);
      v31 = v40;
      v50[0] = a4;
      v32 = v34;
      v43 = v34;
    }
    else
    {
      v50[0] = a4;
      v32 = v43;
      a3 = 1;
    }
    ptr = v50;
    v49 = 0x400000001LL;
    v44[0] = 0;
    v43 = sub_160A600(a1, v32, v31, 8u, a3, (__int64)&ptr, a7, a8, 0) & 0xFFFFFFFFFFFFFFFELL;
    v33 = *(_DWORD *)(a2 + 24);
    v46 = 0;
    v45 = v33;
    sub_1A19220((unsigned int)v51, a1, (unsigned int)v47, (unsigned int)v44, (unsigned int)&v43, 1, 0, 1);
    v39 = sub_1A1D600((unsigned int)v51, a1, (unsigned int)v47, (unsigned int)v44, (unsigned int)&v43, 1, 0);
    sub_1A0BB10(v51);
    v15 = v39;
    if ( ptr != v50 )
    {
      free(ptr);
      v15 = v39;
    }
  }
LABEL_4:
  v19 = sub_19A3E60(a1, v15, v12);
  result = 1;
  if ( v19 != 1 )
  {
    v21 = *(_QWORD **)(a1 + 248);
    v22 = sub_1839D10(*(__int64 **)(a4 + 16), v15, v16, v17, v18);
    v23 = sub_A81910(v21, v22, 0);
    v24 = *(_BYTE *)(a4 + 12) & 1;
    v25 = sub_18406C0((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 32, 3u);
    sub_B98A00(v25, *(_QWORD *)(a1 + 248), (__int64)v23, v24, 0, v19 & 0xFFFFFFFFFFFFFFFELL, 0, 0);
    *a6 = v25;
    return 0;
  }
  return result;
}
