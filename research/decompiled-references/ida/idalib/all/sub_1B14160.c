unsigned __int64 __fastcall sub_1B14160(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        int a4,
        int a5,
        double a6,
        double a7)
{
  __int64 v11; // rsi
  char v12; // al
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD *v16; // rax
  __int64 v17; // r9
  unsigned int v19; // eax
  __int64 v20; // rax
  unsigned int v21; // eax
  __int64 v22; // rax
  __int64 v23; // [rsp+0h] [rbp-F0h]
  __int64 v24; // [rsp+0h] [rbp-F0h]
  int v25; // [rsp+14h] [rbp-DCh] BYREF
  __int64 v26; // [rsp+18h] [rbp-D8h] BYREF
  __int64 v27; // [rsp+20h] [rbp-D0h] BYREF
  _BYTE v28[200]; // [rsp+28h] [rbp-C8h] BYREF

  if ( !a2 )
    return 0;
  v11 = a3;
  v12 = sub_1B14030(*(__int64 **)a1, a3, *(_QWORD *)(a1 + 8), 1, a6, a7);
  if ( (*(_DWORD *)a2 & 0x3C000) == 0 )
  {
    if ( v12 )
    {
      v20 = sub_168B6C0(a1);
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 27552LL);
      if ( !sub_AAC110(v20, v11, *(_QWORD *)(a2 + 8), 1u) )
      {
        v21 = sub_C00A40(a2, v11, v13, v14, v15);
        sub_168B9F0((__int64)v28, (__int64 *)a1, v21, 0x1188u, 0);
        v25 = 0;
        v22 = sub_1587D10((__int64)v28, &v25);
        v26 = *(_QWORD *)(a2 + 8);
        v24 = sub_162B6D0(v22, &v26);
        v11 = (__int64)&v27;
        v27 = sub_EEC8C0(a2, (__int64)&v26, a6);
        sub_1587DB0(v24, &v27);
        sub_15F7200(v28);
      }
    }
  }
  if ( ((*(_BYTE *)(a2 + 1) >> 1) & 3) != 1 )
  {
    v19 = sub_C00A40(a2, v11, v13, v14, v15);
    sub_168B9F0((__int64)v28, (__int64 *)a1, v19, 0x1188u, 0);
    LODWORD(v26) = 1;
    v23 = sub_1587D10((__int64)v28, (int *)&v26);
    v27 = sub_EEC8C0(a2, (__int64)&v26, a6);
    sub_1587DB0(v23, &v27);
    sub_15F7200(v28);
  }
  v16 = (_QWORD *)sub_168B6C0(a1);
  return sub_EBF960(v16, a3, a4, a5, a2, v17);
}
