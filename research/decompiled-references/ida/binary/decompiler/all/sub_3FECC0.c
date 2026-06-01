__int64 __fastcall sub_3FECC0(__int64 a1, char a2, int a3, int a4)
{
  const void *v5; // rbp
  char *v9; // rax
  __int64 v10; // r12
  __int16 v11; // r15
  __int16 v12; // cx
  int v13; // r15d
  int v14; // r8d
  __int64 v15; // rsi
  int v16; // edi
  int v17; // r10d
  int v18; // r11d
  _DWORD *v19; // rax
  int v20; // r9d
  int v21; // r10d
  int v22; // r11d
  int v23; // r9d
  int v24; // r9d
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
  _BYTE v44[16]; // [rsp+80h] [rbp-328h] BYREF
  _BYTE v45[360]; // [rsp+90h] [rbp-318h] BYREF
  char v46; // [rsp+1F8h] [rbp-1B0h] BYREF
  _BYTE v47[360]; // [rsp+200h] [rbp-1A8h] BYREF
  unsigned __int64 v48; // [rsp+368h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  if ( a2 != 2 )
    return 0;
  v5 = (const void *)(a1 + 24);
  if ( !(unsigned __int8)sub_1D3FC0(a1, a1 + 24) )
    return 0;
  v9 = &v45[40];
  *(_QWORD *)&v45[24] = 0;
  *(_QWORD *)&v45[32] = 0;
  memset(v45, 255, 24);
  do
  {
    *(_WORD *)v9 = 0;
    v9 += 40;
    *((_WORD *)v9 - 19) = 0;
    *((_WORD *)v9 - 18) = 0;
    *((_DWORD *)v9 - 2) = 0;
    *((_WORD *)v9 - 17) = 0;
    *((_OWORD *)v9 - 2) = 0;
    *((_QWORD *)v9 - 2) = 0;
  }
  while ( &v46 != v9 );
  v10 = *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50);
  v11 = *(_WORD *)(a1 + 48);
  if ( !(unsigned int)decode_insn() )
    return 0;
  if ( v11 == 6 )
  {
    v12 = 5;
    v13 = 25;
  }
  else
  {
    v12 = 166;
    v13 = 35;
  }
  v14 = 0;
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 8LL);
  v16 = *(_DWORD *)(v15 + 104);
  if ( v16 <= *(unsigned __int16 *)&v45[24] && *(_DWORD *)(v15 + 108) > (int)*(unsigned __int16 *)&v45[24] )
    v14 = *(_DWORD *)(*(_QWORD *)(v15 + 112) + 16LL * (*(unsigned __int16 *)&v45[24] - v16) + 8);
  if ( v12 != *(_WORD *)&v45[24]
    || v45[45] != 2
    || (v45[28] & 7) != 0
    || (v14 & 0x10000) == 0
    || v45[32] == 33
    || (unsigned __int8)sub_3FEB80(a1 + 64, (__int64)&v45[40])
    || (unsigned __int8)sub_3FEB80(a1 + 64, (__int64)&v45[80])
    || (unsigned __int8)sub_3FEB80(a1 + 104, (__int64)&v45[80]) && *(_BYTE *)(a1 + 105) != 5 )
  {
    return 0;
  }
  qmemcpy(v47, v5, sizeof(v47));
  qmemcpy((void *)(a1 + 24), v45, 0x168u);
  v19 = *(_DWORD **)(a1 + 832);
  v27 = v19[113];
  if ( a3 >= v27 )
  {
    v29 = v17;
    v32 = v18;
    sub_3ED260(a1, 4u, 2, a3, 0x3BEA45E214ADDC55LL, (int)v19[115], 0);
    v19 = *(_DWORD **)(a1 + 832);
    v18 = v32;
    a3 = v19[115];
    v17 = v29;
  }
  if ( v27 <= a4 )
  {
    v30 = v18;
    v28 = v17;
    sub_3ED260(a1, 4u, 2, a4, 0x3BEA45E214ADDC55LL, (int)v19[116], 0);
    v18 = v30;
    a4 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 464LL);
    v17 = v28;
  }
  v38 = v18;
  v36 = v17;
  v34 = sub_3F02E0(a1, 0, 0);
  v31 = sub_3F02E0(a1, 1, 0);
  v40[1] = 0;
  v40[0] = 0xFFFFFFFF00000000LL;
  dtype_size = get_dtype_size();
  sub_122DA0((__int64)v40, a3, v34, dtype_size);
  v41[0] = 0xFFFFFFFF00000000LL;
  v41[1] = 0;
  sub_122DA0((__int64)v41, a4, v31, dtype_size);
  v43[1] = 3;
  v42[0] = 0x100000001LL;
  v43[0] = 0x100000001LL;
  v42[1] = 0;
  sub_121540((__int64)v44, (unsigned __int8 *)v40);
  v21 = v36;
  v22 = v38;
  if ( v36 == 12 )
  {
    sub_11A5D0((char *)v40, (char *)v41);
    v21 = 12;
    v22 = v38;
  }
  v39 = v22;
  v37 = v21;
  sub_1D38D0(a1, v13, (unsigned int)v40, (unsigned int)v41, (unsigned int)v42, v20);
  sub_1D38D0(a1, v39, (unsigned int)v40, (unsigned int)v41, (unsigned int)v43, v23);
  sub_1D38D0(a1, v37, (unsigned int)v40, (unsigned int)v41, (unsigned int)v44, v24);
  sub_11B190(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL), *(_QWORD *)(a1 + 832));
  sub_3F29C0(a1, v34, 2u);
  if ( (unsigned __int8)sub_3F0710(a1, 0, v34, 1)
    && (qmemcpy((void *)(a1 + 24), v47, 0x168u), (unsigned __int8)sub_3F0710(a1, 0, a3, 1)) )
  {
    v26 = *(_QWORD *)(a1 + 864);
    if ( *(_QWORD *)(a1 + 872) < (unsigned __int64)(v26 + 1) )
    {
      *(_QWORD *)(a1 + 856) = qvector_reserve();
      v26 = *(_QWORD *)(a1 + 864);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 856) + 8 * v26) = v10;
    v25 = 1;
    ++*(_QWORD *)(a1 + 864);
  }
  else
  {
    v25 = -1;
  }
  v35 = v25;
  sub_11A960((__int64)v44);
  sub_11A960((__int64)v43);
  sub_11A960((__int64)v42);
  sub_11A960((__int64)v41);
  sub_11A960((__int64)v40);
  return v35;
}
