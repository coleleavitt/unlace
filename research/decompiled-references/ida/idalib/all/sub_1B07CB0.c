unsigned __int64 __fastcall sub_1B07CB0(
        __int64 *a1,
        const void *a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6,
        double a7)
{
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // [rsp+0h] [rbp-48h]
  char v21; // [rsp+Ch] [rbp-3Ch]

  if ( (unsigned __int8)sub_1B078F0(*a1, 59, a4, a1[1], a7) )
    return 1;
  sub_15F2480(*a1);
  v12 = a1[1];
  v13 = *(unsigned int *)(v12 + 344);
  if ( !(_DWORD)v13
    || (v14 = *(_QWORD *)(v12 + 336) + 6776 * v13 - 6776, *(_QWORD *)(v14 + 6768) != *(_QWORD *)(v12 + 328))
    || (v15 = *(unsigned int *)(v14 + 8), v16 = *(unsigned int *)(v12 + 27504), (unsigned int)v15 <= (unsigned int)v16)
    || (v17 = v15 - v16) == 0
    || (v18 = *(_QWORD *)v14 + 1688 * (v17 - 1)) == 0 )
  {
    BUG();
  }
  v21 = *(_BYTE *)(v18 + 1106);
  v20 = *(_QWORD *)(v18 + 1128);
  v19 = sub_168B6C0((__int64)a1);
  return sub_EF77D0(v19, a5, a6, a2, a3, a4, v20, v21);
}
