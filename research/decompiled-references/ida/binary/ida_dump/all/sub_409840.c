__int64 __fastcall sub_409840(__int64 a1, char a2, int a3, int a4, double a5, __m128 a6)
{
  const void *v7; // rbp
  char *v11; // rax
  __int64 v12; // r12
  __int16 v13; // r15
  __int16 v14; // cx
  int v15; // r15d
  int v16; // r8d
  __int64 v17; // rsi
  int v18; // edi
  int v19; // r10d
  int v20; // r11d
  _DWORD *v21; // rax
  int v22; // r10d
  int v23; // r11d
  int v24; // eax
  __int64 v25; // rax
  int v26; // [rsp+8h] [rbp-3A0h]
  int v27; // [rsp+8h] [rbp-3A0h]
  int v28; // [rsp+10h] [rbp-398h]
  int v29; // [rsp+10h] [rbp-398h]
  int v30; // [rsp+18h] [rbp-390h]
  int v31; // [rsp+18h] [rbp-390h]
  int dtype_size; // [rsp+20h] [rbp-388h]
  int v33; // [rsp+2Ch] [rbp-37Ch]
  unsigned int v34; // [rsp+2Ch] [rbp-37Ch]
  int v35; // [rsp+38h] [rbp-370h]
  int v36; // [rsp+38h] [rbp-370h]
  int v37; // [rsp+3Ch] [rbp-36Ch]
  int v38; // [rsp+3Ch] [rbp-36Ch]
  _QWORD v39[2]; // [rsp+40h] [rbp-368h] BYREF
  _QWORD v40[2]; // [rsp+50h] [rbp-358h] BYREF
  _QWORD v41[2]; // [rsp+60h] [rbp-348h] BYREF
  _QWORD v42[2]; // [rsp+70h] [rbp-338h] BYREF
  unsigned __int8 v43[16]; // [rsp+80h] [rbp-328h] BYREF
  _BYTE v44[360]; // [rsp+90h] [rbp-318h] BYREF
  char v45; // [rsp+1F8h] [rbp-1B0h] BYREF
  _BYTE v46[360]; // [rsp+200h] [rbp-1A8h] BYREF
  unsigned __int64 v47; // [rsp+368h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  if ( a2 != 2 )
    return 0;
  v7 = (const void *)(a1 + 24);
  if ( !(unsigned __int8)sub_1D6B40(a1) )
    return 0;
  v11 = &v44[40];
  *(_QWORD *)&v44[24] = 0;
  *(_QWORD *)&v44[32] = 0;
  memset(v44, 255, 24);
  do
  {
    *(_WORD *)v11 = 0;
    v11 += 40;
    *((_WORD *)v11 - 19) = 0;
    *((_WORD *)v11 - 18) = 0;
    *((_DWORD *)v11 - 2) = 0;
    *((_WORD *)v11 - 17) = 0;
    *((_OWORD *)v11 - 2) = 0;
    *((_QWORD *)v11 - 2) = 0;
  }
  while ( &v45 != v11 );
  v12 = *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50);
  v13 = *(_WORD *)(a1 + 48);
  if ( !(unsigned int)decode_insn() )
    return 0;
  if ( v13 == 6 )
  {
    v14 = 5;
    v15 = 25;
  }
  else
  {
    v14 = 166;
    v15 = 35;
  }
  v16 = 0;
  v17 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 8LL);
  v18 = *(_DWORD *)(v17 + 104);
  if ( v18 <= *(unsigned __int16 *)&v44[24] && *(_DWORD *)(v17 + 108) > (int)*(unsigned __int16 *)&v44[24] )
    v16 = *(_DWORD *)(*(_QWORD *)(v17 + 112) + 16LL * (*(unsigned __int16 *)&v44[24] - v18) + 8);
  if ( v14 != *(_WORD *)&v44[24]
    || v44[45] != 2
    || (v44[28] & 7) != 0
    || (v16 & 0x10000) == 0
    || v44[32] == 33
    || (unsigned __int8)sub_409700(a1 + 64, (__int64)&v44[40])
    || (unsigned __int8)sub_409700(a1 + 64, (__int64)&v44[80])
    || (unsigned __int8)sub_409700(a1 + 104, (__int64)&v44[80]) && *(_BYTE *)(a1 + 105) != 5 )
  {
    return 0;
  }
  qmemcpy(v46, v7, sizeof(v46));
  qmemcpy((void *)(a1 + 24), v44, 0x168u);
  v21 = *(_DWORD **)(a1 + 832);
  v26 = v21[113];
  if ( a3 >= v26 )
  {
    v28 = v19;
    v31 = v20;
    sub_3F7E20(a1, 4u, 2, a3, 0x3BEA45E214ADDC55LL, (int)v21[115], 0);
    v21 = *(_DWORD **)(a1 + 832);
    v20 = v31;
    a3 = v21[115];
    v19 = v28;
  }
  if ( v26 <= a4 )
  {
    v29 = v20;
    v27 = v19;
    sub_3F7E20(a1, 4u, 2, a4, 0x3BEA45E214ADDC55LL, (int)v21[116], 0);
    v20 = v29;
    a4 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 464LL);
    v19 = v27;
  }
  v37 = v20;
  v35 = v19;
  v33 = sub_3FAE40(a1, 0, 0, 0.0, a6);
  v30 = sub_3FAE40(a1, 1, 0, 0.0, a6);
  v39[1] = 0;
  v39[0] = 0xFFFFFFFF00000000LL;
  dtype_size = get_dtype_size();
  sub_1252A0((__int64)v39, a3, v33, dtype_size);
  v40[0] = 0xFFFFFFFF00000000LL;
  v40[1] = 0;
  sub_1252A0((__int64)v40, a4, v30, dtype_size);
  v42[1] = 3;
  v41[0] = 0x100000001LL;
  v42[0] = 0x100000001LL;
  v41[1] = 0;
  sub_123A40((__int64)v43, (unsigned __int8 *)v39);
  v22 = v35;
  v23 = v37;
  if ( v35 == 12 )
  {
    sub_11CA10((char *)v39, (char *)v40);
    v22 = 12;
    v23 = v37;
  }
  v38 = v23;
  v36 = v22;
  sub_1D6450(a1, v15, (unsigned __int8 *)v39, (unsigned __int8 *)v40, (unsigned __int8 *)v41);
  sub_1D6450(a1, v38, (unsigned __int8 *)v39, (unsigned __int8 *)v40, (unsigned __int8 *)v42);
  sub_1D6450(a1, v36, (unsigned __int8 *)v39, (unsigned __int8 *)v40, v43);
  sub_11D5D0(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL), *(_QWORD *)(a1 + 832));
  sub_3FD520(a1, v33, 2u);
  if ( (unsigned __int8)sub_3FB270(a1, 0, v33, 1, 0.0, a6)
    && (qmemcpy((void *)(a1 + 24), v46, 0x168u), (unsigned __int8)sub_3FB270(a1, 0, a3, 1, 0.0, a6)) )
  {
    v25 = *(_QWORD *)(a1 + 864);
    if ( *(_QWORD *)(a1 + 872) < (unsigned __int64)(v25 + 1) )
    {
      *(_QWORD *)(a1 + 856) = qvector_reserve();
      v25 = *(_QWORD *)(a1 + 864);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 856) + 8 * v25) = v12;
    v24 = 1;
    ++*(_QWORD *)(a1 + 864);
  }
  else
  {
    v24 = -1;
  }
  v34 = v24;
  sub_11CDA0((__int64)v43);
  sub_11CDA0((__int64)v42);
  sub_11CDA0((__int64)v41);
  sub_11CDA0((__int64)v40);
  sub_11CDA0((__int64)v39);
  return v34;
}
