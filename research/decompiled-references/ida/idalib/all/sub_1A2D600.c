__int64 __fastcall sub_1A2D600(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  __int64 *v12; // rax
  __int64 v13; // rcx
  _BYTE *v14; // rax
  char v15; // r9
  __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // [rsp-10h] [rbp-58h]
  __int64 v23; // [rsp-8h] [rbp-50h]
  __int64 v24; // [rsp+8h] [rbp-40h]

  v12 = sub_A81910(*(_QWORD **)(a1 + 248), a3, a2);
  v13 = *v12;
  if ( !(*v12 & 7 | (*v12 >> 3) & 1) && *(_BYTE *)(*(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 38 && v13 )
    *((_DWORD *)v12 + 2) = a4;
  v14 = (_BYTE *)sub_B731A0(*(_QWORD *)(a1 + 248), a8, a2, a2, a5, a3, (__int64)v12, 4);
  v15 = v14[96];
  v14[98] |= 1u;
  v16 = (__int64)v14;
  v14[29] |= 8u;
  v14[96] = (32 * (a6 & 3)) | v15 & 0x9F;
  sub_B8C4D0((__int64)v14, *(_QWORD *)(a1 + 248));
  sub_B73850(v16, a7);
  if ( sub_B799A0(v16) )
  {
    v20 = sub_15F2610(a1, 0, v22, v23, v17, v18);
    v21 = *(unsigned int *)(v20 + 1488);
    if ( v21 + 1 > (unsigned __int64)*(unsigned int *)(v20 + 1492) )
    {
      v24 = v20;
      sub_2237220(v20 + 1480, v20 + 1496, v21 + 1, 8);
      v20 = v24;
      v21 = *(unsigned int *)(v24 + 1488);
    }
    *(_QWORD *)(*(_QWORD *)(v20 + 1480) + 8 * v21) = v16;
    ++*(_DWORD *)(v20 + 1488);
  }
  return v16;
}
