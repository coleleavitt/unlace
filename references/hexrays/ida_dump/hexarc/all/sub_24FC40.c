unsigned __int64 __fastcall sub_24FC40(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // rbp
  __int64 v10; // rax
  bool v11; // zf
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // eax
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v21; // [rsp+8h] [rbp-30h]

  v2 = *(_QWORD *)(a2 + 40);
  v21 = __readfsqword(0x28u);
  a1[2] = -1;
  *a1 = v2;
  a1[3] = -4294967226LL;
  a1[4] = 0xFFFFFFFFLL;
  a1[5] = 0;
  a1[6] = a2 + 456;
  v3 = *(_QWORD *)(a2 + 1328);
  a1[1] = a2;
  *((_DWORD *)a1 + 14) = 0;
  a1[10] = v3;
  *((_DWORD *)a1 + 26) = 1;
  v4 = (_QWORD *)qalloc(16);
  if ( !v4 )
    sub_464BA();
  *v4 = 0;
  v4[1] = 0;
  a1[14] = (__int64)v4;
  v5 = (_QWORD *)qalloc(16);
  if ( !v5 )
    sub_464BA();
  *v5 = 0;
  v5[1] = 0;
  v6 = a1[1];
  a1[15] = (__int64)v5;
  a1[16] = 0;
  *((_DWORD *)a1 + 38) = 0;
  a1[20] = 0;
  a1[23] = 0;
  *((_BYTE *)a1 + 208) = 0;
  *(_OWORD *)(a1 + 17) = 0;
  *(_OWORD *)(a1 + 21) = 0;
  *((_OWORD *)a1 + 12) = 0;
  v7 = *(_QWORD *)(v6 + 1496);
  a1[27] = v7;
  v8 = *(_QWORD *)(v6 + 1504);
  ++*(_DWORD *)(v7 + 896);
  *(_QWORD *)(a1[27] + 1352) = a1;
  v9 = *a1;
  a1[9] = sub_2AF330(v8, *a1);
  a1[11] = sub_2AF560(v8, v9);
  a1[8] = sub_2AF260(v8, v9, a1);
  v10 = sub_2B0970(v8, v9);
  v11 = a1[8] == 0;
  a1[12] = v10;
  if ( !v11 )
  {
    if ( a1[9] )
      goto LABEL_5;
    goto LABEL_16;
  }
  v18 = (_QWORD *)qalloc(16);
  if ( !v18 )
    sub_464BA();
  *v18 = 0;
  v18[1] = 0;
  v11 = a1[9] == 0;
  a1[8] = (__int64)v18;
  if ( v11 )
  {
LABEL_16:
    v19 = (_QWORD *)qalloc(16);
    if ( !v19 )
      sub_464BA();
    *v19 = 0;
    v19[1] = 0;
    a1[9] = (__int64)v19;
  }
LABEL_5:
  if ( !a1[11] )
  {
    v17 = (_QWORD *)qalloc(16);
    if ( !v17 )
      sub_464BA();
    *v17 = 0;
    v17[1] = 0;
    a1[11] = (__int64)v17;
  }
  if ( !a1[12] )
  {
    v16 = (_QWORD *)qalloc(16);
    if ( !v16 )
      sub_464BA();
    *v16 = 0;
    v16[1] = 0;
    a1[12] = (__int64)v16;
  }
  v12 = sub_2AEE30(a1[27], v9, 0);
  v20 = 0;
  v13 = netnode_valobj(v12, &v20, 8);
  v14 = 0;
  if ( v13 > 0 )
    v14 = (v20 + 1) & 0xFFFFFFF4;
  *((_DWORD *)a1 + 27) = v14;
  return v21 - __readfsqword(0x28u);
}
