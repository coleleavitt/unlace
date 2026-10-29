void __fastcall sub_1505FE0(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        char a7)
{
  bool v7; // r12
  unsigned int v8; // r14d
  __int128 v9; // rax
  void *v12[2]; // [rsp+10h] [rbp-138h] BYREF
  __int64 v13; // [rsp+20h] [rbp-128h] BYREF
  _OWORD v14[2]; // [rsp+30h] [rbp-118h] BYREF
  __int64 v15; // [rsp+50h] [rbp-F8h]
  char *v16; // [rsp+60h] [rbp-E8h]
  __int64 v17; // [rsp+68h] [rbp-E0h]
  __int16 v18; // [rsp+80h] [rbp-C8h]
  __int128 v19; // [rsp+90h] [rbp-B8h] BYREF
  char *v20; // [rsp+A0h] [rbp-A8h]
  __int64 v21; // [rsp+A8h] [rbp-A0h]
  __int64 v22; // [rsp+B0h] [rbp-98h]
  unsigned __int8 *v23[17]; // [rsp+C0h] [rbp-88h] BYREF

  v7 = a3 != 27;
  if ( a3 == a4 )
  {
    sub_1504200(a1);
    if ( *(_WORD *)(a1 + 32) != 449 )
      sub_1504CE0(a1, a3);
  }
  else
  {
    v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 232LL) + 64LL);
    sub_1564820(v23, a1, a6, 1611);
    sub_1503AF0(v23, v7);
    sub_AEA040((__int64)v23);
    sub_1564820(v23, a1, a5, 109);
    v18 = 259;
    v16 = "'";
    *(_QWORD *)&v9 = sub_20EAB70(a2, v8);
    v14[1] = v9;
    LOWORD(v15) = 1283;
    *(_QWORD *)&v14[0] = "'#pragma omp ";
    v20 = "'";
    *(_QWORD *)&v19 = v14;
    v21 = v17;
    LOWORD(v22) = 770;
    sub_2253560(v12, &v19);
    sub_AEC220(v23, (_BYTE *)v12[0], (signed __int64)v12[1]);
    if ( v12[0] != &v13 )
      operator delete(v12[0]);
    sub_AEA040((__int64)v23);
    if ( a7 )
    {
      LOWORD(v23[0]) = 449;
      sub_15680D0(a1, v23, 1, 2);
    }
  }
}
