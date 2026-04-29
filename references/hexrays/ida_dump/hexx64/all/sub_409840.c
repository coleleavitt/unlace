__int64 __fastcall sub_409840(__int64 a1, char a2, int a3, int a4, double a5, __m128 a6)
{
  const void *v7; // rbp
  __int64 v11; // r9
  char *v12; // rax
  __int64 v13; // r12
  __int16 v14; // r15
  __int16 v15; // cx
  int v16; // r15d
  int v17; // r8d
  __int64 v18; // rsi
  int v19; // edi
  int v20; // r10d
  int v21; // r11d
  _DWORD *v22; // rax
  int v23; // r10d
  int v24; // r11d
  int v25; // eax
  __int64 v26; // rax
  int v27; // [rsp+8h] [rbp-3A0h]
  int v28; // [rsp+8h] [rbp-3A0h]
  int v29; // [rsp+10h] [rbp-398h]
  int v30; // [rsp+10h] [rbp-398h]
  int v31; // [rsp+18h] [rbp-390h]
  int v32; // [rsp+18h] [rbp-390h]
  int dtype_size; // [rsp+20h] [rbp-388h]
  int v34; // [rsp+2Ch] [rbp-37Ch]
  unsigned int v35; // [rsp+2Ch] [rbp-37Ch]
  int v36; // [rsp+38h] [rbp-370h]
  int v37; // [rsp+38h] [rbp-370h]
  int v38; // [rsp+3Ch] [rbp-36Ch]
  int v39; // [rsp+3Ch] [rbp-36Ch]
  _QWORD v40[2]; // [rsp+40h] [rbp-368h] BYREF
  _QWORD v41[2]; // [rsp+50h] [rbp-358h] BYREF
  _QWORD v42[2]; // [rsp+60h] [rbp-348h] BYREF
  _QWORD v43[2]; // [rsp+70h] [rbp-338h] BYREF
  unsigned __int8 v44[16]; // [rsp+80h] [rbp-328h] BYREF
  _BYTE v45[360]; // [rsp+90h] [rbp-318h] BYREF
  char v46[8]; // [rsp+1F8h] [rbp-1B0h] BYREF
  _BYTE v47[360]; // [rsp+200h] [rbp-1A8h] BYREF
  unsigned __int64 v48; // [rsp+368h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  if ( a2 != 2 )
    return 0;
  v7 = (const void *)(a1 + 24);
  if ( !(unsigned __int8)sub_1D6B40(a1, a1 + 24) )
    return 0;
  v12 = &v45[40];
  *(_QWORD *)&v45[24] = 0;
  *(_QWORD *)&v45[32] = 0;
  memset(v45, 255, 24);
  do
  {
    *(_WORD *)v12 = 0;
    v12 += 40;
    *((_WORD *)v12 - 19) = 0;
    *((_WORD *)v12 - 18) = 0;
    *((_DWORD *)v12 - 2) = 0;
    *((_WORD *)v12 - 17) = 0;
    *((_OWORD *)v12 - 2) = 0;
    *((_QWORD *)v12 - 2) = 0;
  }
  while ( v46 != v12 );
  v13 = *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50);
  v14 = *(_WORD *)(a1 + 48);
  if ( !(unsigned int)decode_insn(v45, v13, v46, 0, 0, v11, 0.0) )
    return 0;
  if ( v14 == 6 )
  {
    v15 = 5;
    v16 = 25;
  }
  else
  {
    v15 = 166;
    v16 = 35;
  }
  v17 = 0;
  v18 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 8LL);
  v19 = *(_DWORD *)(v18 + 104);
  if ( v19 <= *(unsigned __int16 *)&v45[24] && *(_DWORD *)(v18 + 108) > (int)*(unsigned __int16 *)&v45[24] )
    v17 = *(_DWORD *)(*(_QWORD *)(v18 + 112) + 16LL * (*(unsigned __int16 *)&v45[24] - v19) + 8);
  if ( v15 != *(_WORD *)&v45[24]
    || v45[45] != 2
    || (v45[28] & 7) != 0
    || (v17 & 0x10000) == 0
    || v45[32] == 33
    || (unsigned __int8)sub_409700(a1 + 64, (__int64)&v45[40])
    || (unsigned __int8)sub_409700(a1 + 64, (__int64)&v45[80])
    || (unsigned __int8)sub_409700(a1 + 104, (__int64)&v45[80]) && *(_BYTE *)(a1 + 105) != 5 )
  {
    return 0;
  }
  qmemcpy(v47, v7, sizeof(v47));
  qmemcpy((void *)(a1 + 24), v45, 0x168u);
  v22 = *(_DWORD **)(a1 + 832);
  v27 = v22[113];
  if ( a3 >= v27 )
  {
    v29 = v20;
    v32 = v21;
    sub_3F7E20(a1, 4u, 2u, a3, 0x3BEA45E214ADDC55LL, (int)v22[115], 0);
    v22 = *(_DWORD **)(a1 + 832);
    v21 = v32;
    a3 = v22[115];
    v20 = v29;
  }
  if ( v27 <= a4 )
  {
    v30 = v21;
    v28 = v20;
    sub_3F7E20(a1, 4u, 2u, a4, 0x3BEA45E214ADDC55LL, (int)v22[116], 0);
    v21 = v30;
    a4 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 464LL);
    v20 = v28;
  }
  v38 = v21;
  v36 = v20;
  v34 = sub_3FAE40(a1, 0, 0, 0.0, a6);
  v31 = sub_3FAE40(a1, 1, 0, 0.0, a6);
  v40[1] = 0;
  v40[0] = 0xFFFFFFFF00000000LL;
  dtype_size = get_dtype_size(2);
  sub_1252A0((__int64)v40, a3, v34, dtype_size);
  v41[0] = 0xFFFFFFFF00000000LL;
  v41[1] = 0;
  sub_1252A0((__int64)v41, a4, v31, dtype_size);
  v43[1] = 3;
  v42[0] = 0x100000001LL;
  v43[0] = 0x100000001LL;
  v42[1] = 0;
  sub_123A40((__int64)v44, (unsigned __int8 *)v40);
  v23 = v36;
  v24 = v38;
  if ( v36 == 12 )
  {
    sub_11CA10((char *)v40, (char *)v41);
    v23 = 12;
    v24 = v38;
  }
  v39 = v24;
  v37 = v23;
  sub_1D6450(a1, v16, (unsigned __int8 *)v40, (unsigned __int8 *)v41, (unsigned __int8 *)v42);
  sub_1D6450(a1, v39, (unsigned __int8 *)v40, (unsigned __int8 *)v41, (unsigned __int8 *)v43);
  sub_1D6450(a1, v37, (unsigned __int8 *)v40, (unsigned __int8 *)v41, v44);
  sub_11D5D0(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL), *(_QWORD *)(a1 + 832));
  sub_3FD520(a1, v34, 2u);
  if ( (unsigned __int8)sub_3FB270(a1, 0, v34, 1, 0.0, a6)
    && (qmemcpy((void *)(a1 + 24), v47, 0x168u), (unsigned __int8)sub_3FB270(a1, 0, a3, 1, 0.0, a6)) )
  {
    v26 = *(_QWORD *)(a1 + 864);
    if ( *(_QWORD *)(a1 + 872) < (unsigned __int64)(v26 + 1) )
    {
      *(_QWORD *)(a1 + 856) = qvector_reserve(a1 + 856, *(_QWORD *)(a1 + 856), v26 + 1, 8);
      v26 = *(_QWORD *)(a1 + 864);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 856) + 8 * v26) = v13;
    v25 = 1;
    ++*(_QWORD *)(a1 + 864);
  }
  else
  {
    v25 = -1;
  }
  v35 = v25;
  sub_11CDA0((__int64)v44);
  sub_11CDA0((__int64)v43);
  sub_11CDA0((__int64)v42);
  sub_11CDA0((__int64)v41);
  sub_11CDA0((__int64)v40);
  return v35;
}
